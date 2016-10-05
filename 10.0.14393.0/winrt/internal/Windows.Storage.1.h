// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.FileProperties.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.FileProperties.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Storage.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage {

struct __declspec(uuid("a05791e6-cc9f-4687-acab-a364fd785463")) __declspec(novtable) ApplicationDataSetVersionHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Storage::ISetVersionRequest * setVersionRequest) = 0;
};

struct __declspec(uuid("c3da6fb7-b744-4b45-b0b8-223a0938d0dc")) __declspec(novtable) IApplicationData : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Version(uint32_t * value) = 0;
    virtual HRESULT __stdcall abi_SetVersionAsync(uint32_t desiredVersion, Windows::Storage::ApplicationDataSetVersionHandler * handler, Windows::Foundation::IAsyncAction ** setVersionOperation) = 0;
    virtual HRESULT __stdcall abi_ClearAllAsync(Windows::Foundation::IAsyncAction ** clearOperation) = 0;
    virtual HRESULT __stdcall abi_ClearAsync(winrt::Windows::Storage::ApplicationDataLocality locality, Windows::Foundation::IAsyncAction ** clearOperation) = 0;
    virtual HRESULT __stdcall get_LocalSettings(Windows::Storage::IApplicationDataContainer ** value) = 0;
    virtual HRESULT __stdcall get_RoamingSettings(Windows::Storage::IApplicationDataContainer ** value) = 0;
    virtual HRESULT __stdcall get_LocalFolder(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_RoamingFolder(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_TemporaryFolder(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall add_DataChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DataChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_SignalDataChanged() = 0;
    virtual HRESULT __stdcall get_RoamingStorageQuota(uint64_t * value) = 0;
};

struct __declspec(uuid("9e65cd69-0ba3-4e32-be29-b02de6607638")) __declspec(novtable) IApplicationData2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LocalCacheFolder(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("dc222cf4-2772-4c1d-aa2c-c9f743ade8d1")) __declspec(novtable) IApplicationData3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetPublisherCacheFolder(hstring folderName, Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall abi_ClearPublisherCacheFolderAsync(hstring folderName, Windows::Foundation::IAsyncAction ** clearOperation) = 0;
    virtual HRESULT __stdcall get_SharedLocalFolder(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("c5aefd1e-f467-40ba-8566-ab640a441e1d")) __declspec(novtable) IApplicationDataContainer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Locality(winrt::Windows::Storage::ApplicationDataLocality * value) = 0;
    virtual HRESULT __stdcall get_Values(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall get_Containers(Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::ApplicationDataContainer> ** value) = 0;
    virtual HRESULT __stdcall abi_CreateContainer(hstring name, winrt::Windows::Storage::ApplicationDataCreateDisposition disposition, Windows::Storage::IApplicationDataContainer ** container) = 0;
    virtual HRESULT __stdcall abi_DeleteContainer(hstring name) = 0;
};

struct __declspec(uuid("5612147b-e843-45e3-94d8-06169e3c8e17")) __declspec(novtable) IApplicationDataStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Current(Windows::Storage::IApplicationData ** value) = 0;
};

struct __declspec(uuid("cd606211-cf49-40a4-a47c-c7f0dbba8107")) __declspec(novtable) IApplicationDataStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForUserAsync(Windows::System::IUser * user, Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> ** getForUserOperation) = 0;
};

struct __declspec(uuid("8ffc224a-e782-495d-b614-654c4f0b2370")) __declspec(novtable) ICachedFileManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_DeferUpdates(Windows::Storage::IStorageFile * file) = 0;
    virtual HRESULT __stdcall abi_CompleteUpdatesAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Provider::FileUpdateStatus> ** operation) = 0;
};

struct __declspec(uuid("27862ed0-404e-47df-a1e2-e37308be7b37")) __declspec(novtable) IDownloadsFolderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFileAsync(hstring desiredName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFolderAsync(hstring desiredName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFileWithCollisionOptionAsync(hstring desiredName, winrt::Windows::Storage::CreationCollisionOption option, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFolderWithCollisionOptionAsync(hstring desiredName, winrt::Windows::Storage::CreationCollisionOption option, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
};

struct __declspec(uuid("e93045bd-8ef8-4f8e-8d15-ac0e265f390d")) __declspec(novtable) IDownloadsFolderStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFileForUserAsync(Windows::System::IUser * user, hstring desiredName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFolderForUserAsync(Windows::System::IUser * user, hstring desiredName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFileForUserWithCollisionOptionAsync(Windows::System::IUser * user, hstring desiredName, winrt::Windows::Storage::CreationCollisionOption option, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFolderForUserWithCollisionOptionAsync(Windows::System::IUser * user, hstring desiredName, winrt::Windows::Storage::CreationCollisionOption option, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
};

struct __declspec(uuid("887411eb-7f54-4732-a5f0-5e43e3b8c2f5")) __declspec(novtable) IFileIOStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReadTextAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<hstring> ** textOperation) = 0;
    virtual HRESULT __stdcall abi_ReadTextWithEncodingAsync(Windows::Storage::IStorageFile * file, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncOperation<hstring> ** textOperation) = 0;
    virtual HRESULT __stdcall abi_WriteTextAsync(Windows::Storage::IStorageFile * file, hstring contents, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_WriteTextWithEncodingAsync(Windows::Storage::IStorageFile * file, hstring contents, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_AppendTextAsync(Windows::Storage::IStorageFile * file, hstring contents, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_AppendTextWithEncodingAsync(Windows::Storage::IStorageFile * file, hstring contents, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_ReadLinesAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ** linesOperation) = 0;
    virtual HRESULT __stdcall abi_ReadLinesWithEncodingAsync(Windows::Storage::IStorageFile * file, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ** linesOperation) = 0;
    virtual HRESULT __stdcall abi_WriteLinesAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::Collections::IIterable<hstring> * lines, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteLinesWithEncodingAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::Collections::IIterable<hstring> * lines, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_AppendLinesAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::Collections::IIterable<hstring> * lines, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_AppendLinesWithEncodingAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::Collections::IIterable<hstring> * lines, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_ReadBufferAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteBufferAsync(Windows::Storage::IStorageFile * file, Windows::Storage::Streams::IBuffer * buffer, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteBytesAsync(Windows::Storage::IStorageFile * file, uint32_t __bufferSize, uint8_t * buffer, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("5d115e66-27e8-492f-b8e5-2f90896cd4cd")) __declspec(novtable) IKnownFoldersCameraRollStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CameraRoll(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("dad5ecd6-306f-4d6a-b496-46ba8eb106ce")) __declspec(novtable) IKnownFoldersPlaylistsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Playlists(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("055c93ea-253d-467c-b6ca-a97da1e9a18d")) __declspec(novtable) IKnownFoldersSavedPicturesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SavedPictures(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("5a2a7520-4802-452d-9ad9-4351ada7ec35")) __declspec(novtable) IKnownFoldersStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MusicLibrary(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_PicturesLibrary(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_VideosLibrary(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_DocumentsLibrary(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_HomeGroup(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_RemovableDevices(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_MediaServerDevices(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("194bd0cd-cf6e-4d07-9d53-e9163a2536e9")) __declspec(novtable) IKnownFoldersStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Objects3D(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_AppCaptures(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall get_RecordedCalls(Windows::Storage::IStorageFolder ** value) = 0;
};

struct __declspec(uuid("c5194341-9742-4ed5-823d-fc1401148764")) __declspec(novtable) IKnownFoldersStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFolderForUserAsync(Windows::System::IUser * user, winrt::Windows::Storage::KnownFolderId folderId, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
};

struct __declspec(uuid("0f2f3758-8ec7-4381-922b-8f6c07d288f3")) __declspec(novtable) IPathIOStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReadTextAsync(hstring absolutePath, Windows::Foundation::IAsyncOperation<hstring> ** textOperation) = 0;
    virtual HRESULT __stdcall abi_ReadTextWithEncodingAsync(hstring absolutePath, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncOperation<hstring> ** textOperation) = 0;
    virtual HRESULT __stdcall abi_WriteTextAsync(hstring absolutePath, hstring contents, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_WriteTextWithEncodingAsync(hstring absolutePath, hstring contents, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_AppendTextAsync(hstring absolutePath, hstring contents, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_AppendTextWithEncodingAsync(hstring absolutePath, hstring contents, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** textOperation) = 0;
    virtual HRESULT __stdcall abi_ReadLinesAsync(hstring absolutePath, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ** linesOperation) = 0;
    virtual HRESULT __stdcall abi_ReadLinesWithEncodingAsync(hstring absolutePath, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ** linesOperation) = 0;
    virtual HRESULT __stdcall abi_WriteLinesAsync(hstring absolutePath, Windows::Foundation::Collections::IIterable<hstring> * lines, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteLinesWithEncodingAsync(hstring absolutePath, Windows::Foundation::Collections::IIterable<hstring> * lines, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_AppendLinesAsync(hstring absolutePath, Windows::Foundation::Collections::IIterable<hstring> * lines, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_AppendLinesWithEncodingAsync(hstring absolutePath, Windows::Foundation::Collections::IIterable<hstring> * lines, winrt::Windows::Storage::Streams::UnicodeEncoding encoding, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_ReadBufferAsync(hstring absolutePath, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteBufferAsync(hstring absolutePath, Windows::Storage::Streams::IBuffer * buffer, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteBytesAsync(hstring absolutePath, uint32_t __bufferSize, uint8_t * buffer, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("033508a2-781a-437a-b078-3f32badcfe47")) __declspec(novtable) ISetVersionDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("b9c76b9b-1056-4e69-8330-162619956f9b")) __declspec(novtable) ISetVersionRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CurrentVersion(uint32_t * currentVersion) = 0;
    virtual HRESULT __stdcall get_DesiredVersion(uint32_t * desiredVersion) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Storage::ISetVersionDeferral ** deferral) = 0;
};

struct __declspec(uuid("fa3f6186-4214-428c-a64c-14c9ac7315ea")) __declspec(novtable) IStorageFile : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FileType(hstring * value) = 0;
    virtual HRESULT __stdcall get_ContentType(hstring * value) = 0;
    virtual HRESULT __stdcall abi_OpenAsync(winrt::Windows::Storage::FileAccessMode accessMode, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ** operation) = 0;
    virtual HRESULT __stdcall abi_OpenTransactedWriteAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> ** operation) = 0;
    virtual HRESULT __stdcall abi_CopyOverloadDefaultNameAndOptions(Windows::Storage::IStorageFolder * destinationFolder, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CopyOverloadDefaultOptions(Windows::Storage::IStorageFolder * destinationFolder, hstring desiredNewName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CopyOverload(Windows::Storage::IStorageFolder * destinationFolder, hstring desiredNewName, winrt::Windows::Storage::NameCollisionOption option, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CopyAndReplaceAsync(Windows::Storage::IStorageFile * fileToReplace, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_MoveOverloadDefaultNameAndOptions(Windows::Storage::IStorageFolder * destinationFolder, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_MoveOverloadDefaultOptions(Windows::Storage::IStorageFolder * destinationFolder, hstring desiredNewName, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_MoveOverload(Windows::Storage::IStorageFolder * destinationFolder, hstring desiredNewName, winrt::Windows::Storage::NameCollisionOption option, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_MoveAndReplaceAsync(Windows::Storage::IStorageFile * fileToReplace, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("954e4bcf-0a77-42fb-b777-c2ed58a52e44")) __declspec(novtable) IStorageFile2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OpenWithOptionsAsync(winrt::Windows::Storage::FileAccessMode accessMode, winrt::Windows::Storage::StorageOpenOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ** operation) = 0;
    virtual HRESULT __stdcall abi_OpenTransactedWriteWithOptionsAsync(winrt::Windows::Storage::StorageOpenOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> ** operation) = 0;
};

struct __declspec(uuid("afcbbe9b-582b-4133-9648-e44ca46ee491")) __declspec(novtable) IStorageFilePropertiesWithAvailability : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsAvailable(bool * value) = 0;
};

struct __declspec(uuid("5984c710-daf2-43c8-8bb4-a4d3eacfd03f")) __declspec(novtable) IStorageFileStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFileFromPathAsync(hstring path, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFileFromApplicationUriAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateStreamedFileAsync(hstring displayNameWithExtension, Windows::Storage::StreamedFileDataRequestedHandler * dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference * thumbnail, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_ReplaceWithStreamedFileAsync(Windows::Storage::IStorageFile * fileToReplace, Windows::Storage::StreamedFileDataRequestedHandler * dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference * thumbnail, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateStreamedFileFromUriAsync(hstring displayNameWithExtension, Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::Streams::IRandomAccessStreamReference * thumbnail, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_ReplaceWithStreamedFileFromUriAsync(Windows::Storage::IStorageFile * fileToReplace, Windows::Foundation::IUriRuntimeClass * uri, Windows::Storage::Streams::IRandomAccessStreamReference * thumbnail, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
};

struct __declspec(uuid("72d1cb78-b3ef-4f75-a80b-6fd9dae2944b")) __declspec(novtable) IStorageFolder : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFileAsyncOverloadDefaultOptions(hstring desiredName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFileAsync(hstring desiredName, winrt::Windows::Storage::CreationCollisionOption options, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFolderAsyncOverloadDefaultOptions(hstring desiredName, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFolderAsync(hstring desiredName, winrt::Windows::Storage::CreationCollisionOption options, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFileAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFolderAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFilesAsyncOverloadDefaultOptionsStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFoldersAsyncOverloadDefaultOptionsStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetItemsAsyncOverloadDefaultStartAndCount(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> ** operation) = 0;
};

struct __declspec(uuid("e827e8b9-08d9-4a8e-a0ac-fe5ed3cbbbd3")) __declspec(novtable) IStorageFolder2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryGetItemAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> ** operation) = 0;
};

struct __declspec(uuid("08f327ff-85d5-48b9-aee9-28511e339f9f")) __declspec(novtable) IStorageFolderStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetFolderFromPathAsync(hstring path, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
};

struct __declspec(uuid("4207a996-ca2f-42f7-bde8-8b10457a7f30")) __declspec(novtable) IStorageItem : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RenameAsyncOverloadDefaultOptions(hstring desiredName, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_RenameAsync(hstring desiredName, winrt::Windows::Storage::NameCollisionOption option, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_DeleteAsyncOverloadDefaultOptions(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_DeleteAsync(winrt::Windows::Storage::StorageDeleteOption option, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_GetBasicPropertiesAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::BasicProperties> ** operation) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_Path(hstring * value) = 0;
    virtual HRESULT __stdcall get_Attributes(winrt::Windows::Storage::FileAttributes * value) = 0;
    virtual HRESULT __stdcall get_DateCreated(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_IsOfType(winrt::Windows::Storage::StorageItemTypes type, bool * value) = 0;
};

struct __declspec(uuid("53f926d2-083c-4283-b45b-81c007237e44")) __declspec(novtable) IStorageItem2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetParentAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_IsEqual(Windows::Storage::IStorageItem * item, bool * value) = 0;
};

struct __declspec(uuid("86664478-8029-46fe-a789-1c2f3e2ffb5c")) __declspec(novtable) IStorageItemProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetThumbnailAsyncOverloadDefaultSizeDefaultOptions(winrt::Windows::Storage::FileProperties::ThumbnailMode mode, Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetThumbnailAsyncOverloadDefaultOptions(winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetThumbnailAsync(winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, winrt::Windows::Storage::FileProperties::ThumbnailOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> ** operation) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayType(hstring * value) = 0;
    virtual HRESULT __stdcall get_FolderRelativeId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Storage::FileProperties::IStorageItemContentProperties ** value) = 0;
};

struct __declspec(uuid("8e86a951-04b9-4bd2-929d-fef3f71621d0")) __declspec(novtable) IStorageItemProperties2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions(winrt::Windows::Storage::FileProperties::ThumbnailMode mode, Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetScaledImageAsThumbnailAsyncOverloadDefaultOptions(winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetScaledImageAsThumbnailAsync(winrt::Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, winrt::Windows::Storage::FileProperties::ThumbnailOptions options, Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> ** operation) = 0;
};

struct __declspec(uuid("861bf39b-6368-4dee-b40e-74684a5ce714")) __declspec(novtable) IStorageItemPropertiesWithProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Provider(Windows::Storage::IStorageProvider ** value) = 0;
};

struct __declspec(uuid("1edd7103-0e5e-4d6c-b5e8-9318983d6a03")) __declspec(novtable) IStorageLibrary : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RequestAddFolderAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestRemoveFolderAsync(Windows::Storage::IStorageFolder * folder, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall get_Folders(Windows::Foundation::Collections::IObservableVector<Windows::Storage::StorageFolder> ** value) = 0;
    virtual HRESULT __stdcall get_SaveFolder(Windows::Storage::IStorageFolder ** value) = 0;
    virtual HRESULT __stdcall add_DefinitionChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::IInspectable> * handler, event_token * eventCookie) = 0;
    virtual HRESULT __stdcall remove_DefinitionChanged(event_token eventCookie) = 0;
};

struct __declspec(uuid("5b0ce348-fcb3-4031-afb0-a68d7bd44534")) __declspec(novtable) IStorageLibrary2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChangeTracker(Windows::Storage::IStorageLibraryChangeTracker ** value) = 0;
};

struct __declspec(uuid("00980b23-2be2-4909-aa48-159f5203a51e")) __declspec(novtable) IStorageLibraryChange : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChangeType(winrt::Windows::Storage::StorageLibraryChangeType * value) = 0;
    virtual HRESULT __stdcall get_Path(hstring * value) = 0;
    virtual HRESULT __stdcall get_PreviousPath(hstring * value) = 0;
    virtual HRESULT __stdcall abi_IsOfType(winrt::Windows::Storage::StorageItemTypes type, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetStorageItemAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> ** operation) = 0;
};

struct __declspec(uuid("f205bc83-fca2-41f9-8954-ee2e991eb96f")) __declspec(novtable) IStorageLibraryChangeReader : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReadBatchAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageLibraryChange>> ** operation) = 0;
    virtual HRESULT __stdcall abi_AcceptChangesAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("9e157316-6073-44f6-9681-7492d1286c90")) __declspec(novtable) IStorageLibraryChangeTracker : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetChangeReader(Windows::Storage::IStorageLibraryChangeReader ** value) = 0;
    virtual HRESULT __stdcall abi_Enable() = 0;
    virtual HRESULT __stdcall abi_Reset() = 0;
};

struct __declspec(uuid("4208a6db-684a-49c6-9e59-90121ee050d6")) __declspec(novtable) IStorageLibraryStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetLibraryAsync(winrt::Windows::Storage::KnownLibraryId libraryId, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> ** operation) = 0;
};

struct __declspec(uuid("ffb08ddc-fa75-4695-b9d1-7f81f97832e3")) __declspec(novtable) IStorageLibraryStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetLibraryForUserAsync(Windows::System::IUser * user, winrt::Windows::Storage::KnownLibraryId libraryId, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> ** operation) = 0;
};

struct __declspec(uuid("e705eed4-d478-47d6-ba46-1a8ebe114a20")) __declspec(novtable) IStorageProvider : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
};

struct __declspec(uuid("f67cf363-a53d-4d94-ae2c-67232d93acdd")) __declspec(novtable) IStorageStreamTransaction : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Stream(Windows::Storage::Streams::IRandomAccessStream ** value) = 0;
    virtual HRESULT __stdcall abi_CommitAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("1673fcce-dabd-4d50-beee-180b8a8191b6")) __declspec(novtable) IStreamedFileDataRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FailAndClose(winrt::Windows::Storage::StreamedFileFailureMode failureMode) = 0;
};

struct __declspec(uuid("3f8f38b7-308c-47e1-924d-8645348e5db7")) __declspec(novtable) ISystemAudioProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EncodingBitrate(hstring * value) = 0;
};

struct __declspec(uuid("c0f46eb4-c174-481a-bc25-921986f6a6f3")) __declspec(novtable) ISystemGPSProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LatitudeDecimal(hstring * value) = 0;
    virtual HRESULT __stdcall get_LongitudeDecimal(hstring * value) = 0;
};

struct __declspec(uuid("011b2e30-8b39-4308-bea1-e8aa61e47826")) __declspec(novtable) ISystemImageProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalSize(hstring * value) = 0;
    virtual HRESULT __stdcall get_VerticalSize(hstring * value) = 0;
};

struct __declspec(uuid("a42b3316-8415-40dc-8c44-98361d235430")) __declspec(novtable) ISystemMediaProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Duration(hstring * value) = 0;
    virtual HRESULT __stdcall get_Producer(hstring * value) = 0;
    virtual HRESULT __stdcall get_Publisher(hstring * value) = 0;
    virtual HRESULT __stdcall get_SubTitle(hstring * value) = 0;
    virtual HRESULT __stdcall get_Writer(hstring * value) = 0;
    virtual HRESULT __stdcall get_Year(hstring * value) = 0;
};

struct __declspec(uuid("b47988d5-67af-4bc3-8d39-5b89022026a1")) __declspec(novtable) ISystemMusicProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AlbumArtist(hstring * value) = 0;
    virtual HRESULT __stdcall get_AlbumTitle(hstring * value) = 0;
    virtual HRESULT __stdcall get_Artist(hstring * value) = 0;
    virtual HRESULT __stdcall get_Composer(hstring * value) = 0;
    virtual HRESULT __stdcall get_Conductor(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayArtist(hstring * value) = 0;
    virtual HRESULT __stdcall get_Genre(hstring * value) = 0;
    virtual HRESULT __stdcall get_TrackNumber(hstring * value) = 0;
};

struct __declspec(uuid("4734fc3d-ab21-4424-b735-f4353a56c8fc")) __declspec(novtable) ISystemPhotoProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CameraManufacturer(hstring * value) = 0;
    virtual HRESULT __stdcall get_CameraModel(hstring * value) = 0;
    virtual HRESULT __stdcall get_DateTaken(hstring * value) = 0;
    virtual HRESULT __stdcall get_Orientation(hstring * value) = 0;
    virtual HRESULT __stdcall get_PeopleNames(hstring * value) = 0;
};

struct __declspec(uuid("917a71c1-85f3-4dd1-b001-a50bfd21c8d2")) __declspec(novtable) ISystemProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Author(hstring * value) = 0;
    virtual HRESULT __stdcall get_Comment(hstring * value) = 0;
    virtual HRESULT __stdcall get_ItemNameDisplay(hstring * value) = 0;
    virtual HRESULT __stdcall get_Keywords(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rating(hstring * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall get_Audio(Windows::Storage::ISystemAudioProperties ** value) = 0;
    virtual HRESULT __stdcall get_GPS(Windows::Storage::ISystemGPSProperties ** value) = 0;
    virtual HRESULT __stdcall get_Media(Windows::Storage::ISystemMediaProperties ** value) = 0;
    virtual HRESULT __stdcall get_Music(Windows::Storage::ISystemMusicProperties ** value) = 0;
    virtual HRESULT __stdcall get_Photo(Windows::Storage::ISystemPhotoProperties ** value) = 0;
    virtual HRESULT __stdcall get_Video(Windows::Storage::ISystemVideoProperties ** value) = 0;
    virtual HRESULT __stdcall get_Image(Windows::Storage::ISystemImageProperties ** value) = 0;
};

struct __declspec(uuid("2040f715-67f8-4322-9b80-4fa9fefb83e8")) __declspec(novtable) ISystemVideoProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Director(hstring * value) = 0;
    virtual HRESULT __stdcall get_FrameHeight(hstring * value) = 0;
    virtual HRESULT __stdcall get_FrameWidth(hstring * value) = 0;
    virtual HRESULT __stdcall get_Orientation(hstring * value) = 0;
    virtual HRESULT __stdcall get_TotalBitrate(hstring * value) = 0;
};

struct __declspec(uuid("fef6a824-2fe1-4d07-a35b-b77c50b5f4cc")) __declspec(novtable) StreamedFileDataRequestedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::Storage::Streams::IOutputStream * stream) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Storage::ApplicationData> { using default_interface = Windows::Storage::IApplicationData; };
template <> struct traits<Windows::Storage::ApplicationDataCompositeValue> { using default_interface = Windows::Foundation::Collections::IPropertySet; };
template <> struct traits<Windows::Storage::ApplicationDataContainer> { using default_interface = Windows::Storage::IApplicationDataContainer; };
template <> struct traits<Windows::Storage::ApplicationDataContainerSettings> { using default_interface = Windows::Foundation::Collections::IPropertySet; };
template <> struct traits<Windows::Storage::SetVersionDeferral> { using default_interface = Windows::Storage::ISetVersionDeferral; };
template <> struct traits<Windows::Storage::SetVersionRequest> { using default_interface = Windows::Storage::ISetVersionRequest; };
template <> struct traits<Windows::Storage::StorageFile> { using default_interface = Windows::Storage::IStorageFile; };
template <> struct traits<Windows::Storage::StorageFolder> { using default_interface = Windows::Storage::IStorageFolder; };
template <> struct traits<Windows::Storage::StorageLibrary> { using default_interface = Windows::Storage::IStorageLibrary; };
template <> struct traits<Windows::Storage::StorageLibraryChange> { using default_interface = Windows::Storage::IStorageLibraryChange; };
template <> struct traits<Windows::Storage::StorageLibraryChangeReader> { using default_interface = Windows::Storage::IStorageLibraryChangeReader; };
template <> struct traits<Windows::Storage::StorageLibraryChangeTracker> { using default_interface = Windows::Storage::IStorageLibraryChangeTracker; };
template <> struct traits<Windows::Storage::StorageProvider> { using default_interface = Windows::Storage::IStorageProvider; };
template <> struct traits<Windows::Storage::StorageStreamTransaction> { using default_interface = Windows::Storage::IStorageStreamTransaction; };
template <> struct traits<Windows::Storage::StreamedFileDataRequest> { using default_interface = Windows::Storage::Streams::IOutputStream; };
template <> struct traits<Windows::Storage::SystemAudioProperties> { using default_interface = Windows::Storage::ISystemAudioProperties; };
template <> struct traits<Windows::Storage::SystemGPSProperties> { using default_interface = Windows::Storage::ISystemGPSProperties; };
template <> struct traits<Windows::Storage::SystemImageProperties> { using default_interface = Windows::Storage::ISystemImageProperties; };
template <> struct traits<Windows::Storage::SystemMediaProperties> { using default_interface = Windows::Storage::ISystemMediaProperties; };
template <> struct traits<Windows::Storage::SystemMusicProperties> { using default_interface = Windows::Storage::ISystemMusicProperties; };
template <> struct traits<Windows::Storage::SystemPhotoProperties> { using default_interface = Windows::Storage::ISystemPhotoProperties; };
template <> struct traits<Windows::Storage::SystemVideoProperties> { using default_interface = Windows::Storage::ISystemVideoProperties; };

}

namespace Windows::Storage {

template <typename T> struct impl_IApplicationData;
template <typename T> struct impl_IApplicationData2;
template <typename T> struct impl_IApplicationData3;
template <typename T> struct impl_IApplicationDataContainer;
template <typename T> struct impl_IApplicationDataStatics;
template <typename T> struct impl_IApplicationDataStatics2;
template <typename T> struct impl_ICachedFileManagerStatics;
template <typename T> struct impl_IDownloadsFolderStatics;
template <typename T> struct impl_IDownloadsFolderStatics2;
template <typename T> struct impl_IFileIOStatics;
template <typename T> struct impl_IKnownFoldersCameraRollStatics;
template <typename T> struct impl_IKnownFoldersPlaylistsStatics;
template <typename T> struct impl_IKnownFoldersSavedPicturesStatics;
template <typename T> struct impl_IKnownFoldersStatics;
template <typename T> struct impl_IKnownFoldersStatics2;
template <typename T> struct impl_IKnownFoldersStatics3;
template <typename T> struct impl_IPathIOStatics;
template <typename T> struct impl_ISetVersionDeferral;
template <typename T> struct impl_ISetVersionRequest;
template <typename T> struct impl_IStorageFile;
template <typename T> struct impl_IStorageFile2;
template <typename T> struct impl_IStorageFilePropertiesWithAvailability;
template <typename T> struct impl_IStorageFileStatics;
template <typename T> struct impl_IStorageFolder;
template <typename T> struct impl_IStorageFolder2;
template <typename T> struct impl_IStorageFolderStatics;
template <typename T> struct impl_IStorageItem;
template <typename T> struct impl_IStorageItem2;
template <typename T> struct impl_IStorageItemProperties;
template <typename T> struct impl_IStorageItemProperties2;
template <typename T> struct impl_IStorageItemPropertiesWithProvider;
template <typename T> struct impl_IStorageLibrary;
template <typename T> struct impl_IStorageLibrary2;
template <typename T> struct impl_IStorageLibraryChange;
template <typename T> struct impl_IStorageLibraryChangeReader;
template <typename T> struct impl_IStorageLibraryChangeTracker;
template <typename T> struct impl_IStorageLibraryStatics;
template <typename T> struct impl_IStorageLibraryStatics2;
template <typename T> struct impl_IStorageProvider;
template <typename T> struct impl_IStorageStreamTransaction;
template <typename T> struct impl_IStreamedFileDataRequest;
template <typename T> struct impl_ISystemAudioProperties;
template <typename T> struct impl_ISystemGPSProperties;
template <typename T> struct impl_ISystemImageProperties;
template <typename T> struct impl_ISystemMediaProperties;
template <typename T> struct impl_ISystemMusicProperties;
template <typename T> struct impl_ISystemPhotoProperties;
template <typename T> struct impl_ISystemProperties;
template <typename T> struct impl_ISystemVideoProperties;
template <typename T> struct impl_ApplicationDataSetVersionHandler;
template <typename T> struct impl_StreamedFileDataRequestedHandler;

}

namespace impl {

template <> struct traits<Windows::Storage::ApplicationDataSetVersionHandler>
{
    using abi = ABI::Windows::Storage::ApplicationDataSetVersionHandler;
};

template <> struct traits<Windows::Storage::IApplicationData>
{
    using abi = ABI::Windows::Storage::IApplicationData;
    template <typename D> using consume = Windows::Storage::impl_IApplicationData<D>;
};

template <> struct traits<Windows::Storage::IApplicationData2>
{
    using abi = ABI::Windows::Storage::IApplicationData2;
    template <typename D> using consume = Windows::Storage::impl_IApplicationData2<D>;
};

template <> struct traits<Windows::Storage::IApplicationData3>
{
    using abi = ABI::Windows::Storage::IApplicationData3;
    template <typename D> using consume = Windows::Storage::impl_IApplicationData3<D>;
};

template <> struct traits<Windows::Storage::IApplicationDataContainer>
{
    using abi = ABI::Windows::Storage::IApplicationDataContainer;
    template <typename D> using consume = Windows::Storage::impl_IApplicationDataContainer<D>;
};

template <> struct traits<Windows::Storage::IApplicationDataStatics>
{
    using abi = ABI::Windows::Storage::IApplicationDataStatics;
    template <typename D> using consume = Windows::Storage::impl_IApplicationDataStatics<D>;
};

template <> struct traits<Windows::Storage::IApplicationDataStatics2>
{
    using abi = ABI::Windows::Storage::IApplicationDataStatics2;
    template <typename D> using consume = Windows::Storage::impl_IApplicationDataStatics2<D>;
};

template <> struct traits<Windows::Storage::ICachedFileManagerStatics>
{
    using abi = ABI::Windows::Storage::ICachedFileManagerStatics;
    template <typename D> using consume = Windows::Storage::impl_ICachedFileManagerStatics<D>;
};

template <> struct traits<Windows::Storage::IDownloadsFolderStatics>
{
    using abi = ABI::Windows::Storage::IDownloadsFolderStatics;
    template <typename D> using consume = Windows::Storage::impl_IDownloadsFolderStatics<D>;
};

template <> struct traits<Windows::Storage::IDownloadsFolderStatics2>
{
    using abi = ABI::Windows::Storage::IDownloadsFolderStatics2;
    template <typename D> using consume = Windows::Storage::impl_IDownloadsFolderStatics2<D>;
};

template <> struct traits<Windows::Storage::IFileIOStatics>
{
    using abi = ABI::Windows::Storage::IFileIOStatics;
    template <typename D> using consume = Windows::Storage::impl_IFileIOStatics<D>;
};

template <> struct traits<Windows::Storage::IKnownFoldersCameraRollStatics>
{
    using abi = ABI::Windows::Storage::IKnownFoldersCameraRollStatics;
    template <typename D> using consume = Windows::Storage::impl_IKnownFoldersCameraRollStatics<D>;
};

template <> struct traits<Windows::Storage::IKnownFoldersPlaylistsStatics>
{
    using abi = ABI::Windows::Storage::IKnownFoldersPlaylistsStatics;
    template <typename D> using consume = Windows::Storage::impl_IKnownFoldersPlaylistsStatics<D>;
};

template <> struct traits<Windows::Storage::IKnownFoldersSavedPicturesStatics>
{
    using abi = ABI::Windows::Storage::IKnownFoldersSavedPicturesStatics;
    template <typename D> using consume = Windows::Storage::impl_IKnownFoldersSavedPicturesStatics<D>;
};

template <> struct traits<Windows::Storage::IKnownFoldersStatics>
{
    using abi = ABI::Windows::Storage::IKnownFoldersStatics;
    template <typename D> using consume = Windows::Storage::impl_IKnownFoldersStatics<D>;
};

template <> struct traits<Windows::Storage::IKnownFoldersStatics2>
{
    using abi = ABI::Windows::Storage::IKnownFoldersStatics2;
    template <typename D> using consume = Windows::Storage::impl_IKnownFoldersStatics2<D>;
};

template <> struct traits<Windows::Storage::IKnownFoldersStatics3>
{
    using abi = ABI::Windows::Storage::IKnownFoldersStatics3;
    template <typename D> using consume = Windows::Storage::impl_IKnownFoldersStatics3<D>;
};

template <> struct traits<Windows::Storage::IPathIOStatics>
{
    using abi = ABI::Windows::Storage::IPathIOStatics;
    template <typename D> using consume = Windows::Storage::impl_IPathIOStatics<D>;
};

template <> struct traits<Windows::Storage::ISetVersionDeferral>
{
    using abi = ABI::Windows::Storage::ISetVersionDeferral;
    template <typename D> using consume = Windows::Storage::impl_ISetVersionDeferral<D>;
};

template <> struct traits<Windows::Storage::ISetVersionRequest>
{
    using abi = ABI::Windows::Storage::ISetVersionRequest;
    template <typename D> using consume = Windows::Storage::impl_ISetVersionRequest<D>;
};

template <> struct traits<Windows::Storage::IStorageFile>
{
    using abi = ABI::Windows::Storage::IStorageFile;
    template <typename D> using consume = Windows::Storage::impl_IStorageFile<D>;
};

template <> struct traits<Windows::Storage::IStorageFile2>
{
    using abi = ABI::Windows::Storage::IStorageFile2;
    template <typename D> using consume = Windows::Storage::impl_IStorageFile2<D>;
};

template <> struct traits<Windows::Storage::IStorageFilePropertiesWithAvailability>
{
    using abi = ABI::Windows::Storage::IStorageFilePropertiesWithAvailability;
    template <typename D> using consume = Windows::Storage::impl_IStorageFilePropertiesWithAvailability<D>;
};

template <> struct traits<Windows::Storage::IStorageFileStatics>
{
    using abi = ABI::Windows::Storage::IStorageFileStatics;
    template <typename D> using consume = Windows::Storage::impl_IStorageFileStatics<D>;
};

template <> struct traits<Windows::Storage::IStorageFolder>
{
    using abi = ABI::Windows::Storage::IStorageFolder;
    template <typename D> using consume = Windows::Storage::impl_IStorageFolder<D>;
};

template <> struct traits<Windows::Storage::IStorageFolder2>
{
    using abi = ABI::Windows::Storage::IStorageFolder2;
    template <typename D> using consume = Windows::Storage::impl_IStorageFolder2<D>;
};

template <> struct traits<Windows::Storage::IStorageFolderStatics>
{
    using abi = ABI::Windows::Storage::IStorageFolderStatics;
    template <typename D> using consume = Windows::Storage::impl_IStorageFolderStatics<D>;
};

template <> struct traits<Windows::Storage::IStorageItem>
{
    using abi = ABI::Windows::Storage::IStorageItem;
    template <typename D> using consume = Windows::Storage::impl_IStorageItem<D>;
};

template <> struct traits<Windows::Storage::IStorageItem2>
{
    using abi = ABI::Windows::Storage::IStorageItem2;
    template <typename D> using consume = Windows::Storage::impl_IStorageItem2<D>;
};

template <> struct traits<Windows::Storage::IStorageItemProperties>
{
    using abi = ABI::Windows::Storage::IStorageItemProperties;
    template <typename D> using consume = Windows::Storage::impl_IStorageItemProperties<D>;
};

template <> struct traits<Windows::Storage::IStorageItemProperties2>
{
    using abi = ABI::Windows::Storage::IStorageItemProperties2;
    template <typename D> using consume = Windows::Storage::impl_IStorageItemProperties2<D>;
};

template <> struct traits<Windows::Storage::IStorageItemPropertiesWithProvider>
{
    using abi = ABI::Windows::Storage::IStorageItemPropertiesWithProvider;
    template <typename D> using consume = Windows::Storage::impl_IStorageItemPropertiesWithProvider<D>;
};

template <> struct traits<Windows::Storage::IStorageLibrary>
{
    using abi = ABI::Windows::Storage::IStorageLibrary;
    template <typename D> using consume = Windows::Storage::impl_IStorageLibrary<D>;
};

template <> struct traits<Windows::Storage::IStorageLibrary2>
{
    using abi = ABI::Windows::Storage::IStorageLibrary2;
    template <typename D> using consume = Windows::Storage::impl_IStorageLibrary2<D>;
};

template <> struct traits<Windows::Storage::IStorageLibraryChange>
{
    using abi = ABI::Windows::Storage::IStorageLibraryChange;
    template <typename D> using consume = Windows::Storage::impl_IStorageLibraryChange<D>;
};

template <> struct traits<Windows::Storage::IStorageLibraryChangeReader>
{
    using abi = ABI::Windows::Storage::IStorageLibraryChangeReader;
    template <typename D> using consume = Windows::Storage::impl_IStorageLibraryChangeReader<D>;
};

template <> struct traits<Windows::Storage::IStorageLibraryChangeTracker>
{
    using abi = ABI::Windows::Storage::IStorageLibraryChangeTracker;
    template <typename D> using consume = Windows::Storage::impl_IStorageLibraryChangeTracker<D>;
};

template <> struct traits<Windows::Storage::IStorageLibraryStatics>
{
    using abi = ABI::Windows::Storage::IStorageLibraryStatics;
    template <typename D> using consume = Windows::Storage::impl_IStorageLibraryStatics<D>;
};

template <> struct traits<Windows::Storage::IStorageLibraryStatics2>
{
    using abi = ABI::Windows::Storage::IStorageLibraryStatics2;
    template <typename D> using consume = Windows::Storage::impl_IStorageLibraryStatics2<D>;
};

template <> struct traits<Windows::Storage::IStorageProvider>
{
    using abi = ABI::Windows::Storage::IStorageProvider;
    template <typename D> using consume = Windows::Storage::impl_IStorageProvider<D>;
};

template <> struct traits<Windows::Storage::IStorageStreamTransaction>
{
    using abi = ABI::Windows::Storage::IStorageStreamTransaction;
    template <typename D> using consume = Windows::Storage::impl_IStorageStreamTransaction<D>;
};

template <> struct traits<Windows::Storage::IStreamedFileDataRequest>
{
    using abi = ABI::Windows::Storage::IStreamedFileDataRequest;
    template <typename D> using consume = Windows::Storage::impl_IStreamedFileDataRequest<D>;
};

template <> struct traits<Windows::Storage::ISystemAudioProperties>
{
    using abi = ABI::Windows::Storage::ISystemAudioProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemAudioProperties<D>;
};

template <> struct traits<Windows::Storage::ISystemGPSProperties>
{
    using abi = ABI::Windows::Storage::ISystemGPSProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemGPSProperties<D>;
};

template <> struct traits<Windows::Storage::ISystemImageProperties>
{
    using abi = ABI::Windows::Storage::ISystemImageProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemImageProperties<D>;
};

template <> struct traits<Windows::Storage::ISystemMediaProperties>
{
    using abi = ABI::Windows::Storage::ISystemMediaProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemMediaProperties<D>;
};

template <> struct traits<Windows::Storage::ISystemMusicProperties>
{
    using abi = ABI::Windows::Storage::ISystemMusicProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemMusicProperties<D>;
};

template <> struct traits<Windows::Storage::ISystemPhotoProperties>
{
    using abi = ABI::Windows::Storage::ISystemPhotoProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemPhotoProperties<D>;
};

template <> struct traits<Windows::Storage::ISystemProperties>
{
    using abi = ABI::Windows::Storage::ISystemProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemProperties<D>;
};

template <> struct traits<Windows::Storage::ISystemVideoProperties>
{
    using abi = ABI::Windows::Storage::ISystemVideoProperties;
    template <typename D> using consume = Windows::Storage::impl_ISystemVideoProperties<D>;
};

template <> struct traits<Windows::Storage::StreamedFileDataRequestedHandler>
{
    using abi = ABI::Windows::Storage::StreamedFileDataRequestedHandler;
};

template <> struct traits<Windows::Storage::ApplicationData>
{
    using abi = ABI::Windows::Storage::ApplicationData;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.ApplicationData"; }
};

template <> struct traits<Windows::Storage::ApplicationDataCompositeValue>
{
    using abi = ABI::Windows::Storage::ApplicationDataCompositeValue;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.ApplicationDataCompositeValue"; }
};

template <> struct traits<Windows::Storage::ApplicationDataContainer>
{
    using abi = ABI::Windows::Storage::ApplicationDataContainer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.ApplicationDataContainer"; }
};

template <> struct traits<Windows::Storage::ApplicationDataContainerSettings>
{
    using abi = ABI::Windows::Storage::ApplicationDataContainerSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.ApplicationDataContainerSettings"; }
};

template <> struct traits<Windows::Storage::CachedFileManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.CachedFileManager"; }
};

template <> struct traits<Windows::Storage::DownloadsFolder>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.DownloadsFolder"; }
};

template <> struct traits<Windows::Storage::FileIO>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.FileIO"; }
};

template <> struct traits<Windows::Storage::KnownFolders>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.KnownFolders"; }
};

template <> struct traits<Windows::Storage::PathIO>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.PathIO"; }
};

template <> struct traits<Windows::Storage::SetVersionDeferral>
{
    using abi = ABI::Windows::Storage::SetVersionDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SetVersionDeferral"; }
};

template <> struct traits<Windows::Storage::SetVersionRequest>
{
    using abi = ABI::Windows::Storage::SetVersionRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SetVersionRequest"; }
};

template <> struct traits<Windows::Storage::StorageFile>
{
    using abi = ABI::Windows::Storage::StorageFile;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageFile"; }
};

template <> struct traits<Windows::Storage::StorageFolder>
{
    using abi = ABI::Windows::Storage::StorageFolder;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageFolder"; }
};

template <> struct traits<Windows::Storage::StorageLibrary>
{
    using abi = ABI::Windows::Storage::StorageLibrary;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageLibrary"; }
};

template <> struct traits<Windows::Storage::StorageLibraryChange>
{
    using abi = ABI::Windows::Storage::StorageLibraryChange;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageLibraryChange"; }
};

template <> struct traits<Windows::Storage::StorageLibraryChangeReader>
{
    using abi = ABI::Windows::Storage::StorageLibraryChangeReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageLibraryChangeReader"; }
};

template <> struct traits<Windows::Storage::StorageLibraryChangeTracker>
{
    using abi = ABI::Windows::Storage::StorageLibraryChangeTracker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageLibraryChangeTracker"; }
};

template <> struct traits<Windows::Storage::StorageProvider>
{
    using abi = ABI::Windows::Storage::StorageProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageProvider"; }
};

template <> struct traits<Windows::Storage::StorageStreamTransaction>
{
    using abi = ABI::Windows::Storage::StorageStreamTransaction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StorageStreamTransaction"; }
};

template <> struct traits<Windows::Storage::StreamedFileDataRequest>
{
    using abi = ABI::Windows::Storage::StreamedFileDataRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.StreamedFileDataRequest"; }
};

template <> struct traits<Windows::Storage::SystemAudioProperties>
{
    using abi = ABI::Windows::Storage::SystemAudioProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemAudioProperties"; }
};

template <> struct traits<Windows::Storage::SystemGPSProperties>
{
    using abi = ABI::Windows::Storage::SystemGPSProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemGPSProperties"; }
};

template <> struct traits<Windows::Storage::SystemImageProperties>
{
    using abi = ABI::Windows::Storage::SystemImageProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemImageProperties"; }
};

template <> struct traits<Windows::Storage::SystemMediaProperties>
{
    using abi = ABI::Windows::Storage::SystemMediaProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemMediaProperties"; }
};

template <> struct traits<Windows::Storage::SystemMusicProperties>
{
    using abi = ABI::Windows::Storage::SystemMusicProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemMusicProperties"; }
};

template <> struct traits<Windows::Storage::SystemPhotoProperties>
{
    using abi = ABI::Windows::Storage::SystemPhotoProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemPhotoProperties"; }
};

template <> struct traits<Windows::Storage::SystemProperties>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemProperties"; }
};

template <> struct traits<Windows::Storage::SystemVideoProperties>
{
    using abi = ABI::Windows::Storage::SystemVideoProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.SystemVideoProperties"; }
};

}

}
