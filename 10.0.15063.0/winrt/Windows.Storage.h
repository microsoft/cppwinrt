// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.FileProperties.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Storage.2.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Windows_Storage_IApplicationData<D>::Version() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->get_Version(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IApplicationData<D>::SetVersionAsync(uint32_t desiredVersion, Windows::Storage::ApplicationDataSetVersionHandler const& handler) const
{
    Windows::Foundation::IAsyncAction setVersionOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->SetVersionAsync(desiredVersion, get_abi(handler), put_abi(setVersionOperation)));
    return setVersionOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IApplicationData<D>::ClearAsync() const
{
    Windows::Foundation::IAsyncAction clearOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->ClearAllAsync(put_abi(clearOperation)));
    return clearOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IApplicationData<D>::ClearAsync(Windows::Storage::ApplicationDataLocality const& locality) const
{
    Windows::Foundation::IAsyncAction clearOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->ClearAsync(get_abi(locality), put_abi(clearOperation)));
    return clearOperation;
}

template <typename D> Windows::Storage::ApplicationDataContainer consume_Windows_Storage_IApplicationData<D>::LocalSettings() const
{
    Windows::Storage::ApplicationDataContainer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->get_LocalSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::ApplicationDataContainer consume_Windows_Storage_IApplicationData<D>::RoamingSettings() const
{
    Windows::Storage::ApplicationDataContainer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->get_RoamingSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IApplicationData<D>::LocalFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->get_LocalFolder(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IApplicationData<D>::RoamingFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->get_RoamingFolder(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IApplicationData<D>::TemporaryFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->get_TemporaryFolder(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Storage_IApplicationData<D>::DataChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->add_DataChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Storage::IApplicationData> consume_Windows_Storage_IApplicationData<D>::DataChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::IApplicationData>(this, &abi_t<Windows::Storage::IApplicationData>::remove_DataChanged, DataChanged(handler));
}

template <typename D> void consume_Windows_Storage_IApplicationData<D>::DataChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->remove_DataChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Storage_IApplicationData<D>::SignalDataChanged() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->SignalDataChanged());
}

template <typename D> uint64_t consume_Windows_Storage_IApplicationData<D>::RoamingStorageQuota() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData)->get_RoamingStorageQuota(&value));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IApplicationData2<D>::LocalCacheFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData2)->get_LocalCacheFolder(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IApplicationData3<D>::GetPublisherCacheFolder(param::hstring const& folderName) const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData3)->GetPublisherCacheFolder(get_abi(folderName), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IApplicationData3<D>::ClearPublisherCacheFolderAsync(param::hstring const& folderName) const
{
    Windows::Foundation::IAsyncAction clearOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData3)->ClearPublisherCacheFolderAsync(get_abi(folderName), put_abi(clearOperation)));
    return clearOperation;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IApplicationData3<D>::SharedLocalFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationData3)->get_SharedLocalFolder(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IApplicationDataContainer<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataContainer)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::ApplicationDataLocality consume_Windows_Storage_IApplicationDataContainer<D>::Locality() const
{
    Windows::Storage::ApplicationDataLocality value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataContainer)->get_Locality(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Storage_IApplicationDataContainer<D>::Values() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataContainer)->get_Values(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::ApplicationDataContainer> consume_Windows_Storage_IApplicationDataContainer<D>::Containers() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::ApplicationDataContainer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataContainer)->get_Containers(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::ApplicationDataContainer consume_Windows_Storage_IApplicationDataContainer<D>::CreateContainer(param::hstring const& name, Windows::Storage::ApplicationDataCreateDisposition const& disposition) const
{
    Windows::Storage::ApplicationDataContainer container{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataContainer)->CreateContainer(get_abi(name), get_abi(disposition), put_abi(container)));
    return container;
}

template <typename D> void consume_Windows_Storage_IApplicationDataContainer<D>::DeleteContainer(param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataContainer)->DeleteContainer(get_abi(name)));
}

template <typename D> Windows::Storage::ApplicationData consume_Windows_Storage_IApplicationDataStatics<D>::Current() const
{
    Windows::Storage::ApplicationData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> consume_Windows_Storage_IApplicationDataStatics2<D>::GetForUserAsync(Windows::System::User const& user) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> getForUserOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IApplicationDataStatics2)->GetForUserAsync(get_abi(user), put_abi(getForUserOperation)));
    return getForUserOperation;
}

template <typename D> void consume_Windows_Storage_ICachedFileManagerStatics<D>::DeferUpdates(Windows::Storage::IStorageFile const& file) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::ICachedFileManagerStatics)->DeferUpdates(get_abi(file)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Provider::FileUpdateStatus> consume_Windows_Storage_ICachedFileManagerStatics<D>::CompleteUpdatesAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Provider::FileUpdateStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ICachedFileManagerStatics)->CompleteUpdatesAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IDownloadsFolderStatics<D>::CreateFileAsync(param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics)->CreateFileAsync(get_abi(desiredName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IDownloadsFolderStatics<D>::CreateFolderAsync(param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics)->CreateFolderAsync(get_abi(desiredName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IDownloadsFolderStatics<D>::CreateFileAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics)->CreateFileWithCollisionOptionAsync(get_abi(desiredName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IDownloadsFolderStatics<D>::CreateFolderAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics)->CreateFolderWithCollisionOptionAsync(get_abi(desiredName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IDownloadsFolderStatics2<D>::CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics2)->CreateFileForUserAsync(get_abi(user), get_abi(desiredName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IDownloadsFolderStatics2<D>::CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics2)->CreateFolderForUserAsync(get_abi(user), get_abi(desiredName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IDownloadsFolderStatics2<D>::CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics2)->CreateFileForUserWithCollisionOptionAsync(get_abi(user), get_abi(desiredName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IDownloadsFolderStatics2<D>::CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IDownloadsFolderStatics2)->CreateFolderForUserWithCollisionOptionAsync(get_abi(user), get_abi(desiredName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Storage_IFileIOStatics<D>::ReadTextAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->ReadTextAsync(get_abi(file), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Storage_IFileIOStatics<D>::ReadTextAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->ReadTextWithEncodingAsync(get_abi(file), get_abi(encoding), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->WriteTextAsync(get_abi(file), get_abi(contents), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->WriteTextWithEncodingAsync(get_abi(file), get_abi(contents), get_abi(encoding), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->AppendTextAsync(get_abi(file), get_abi(contents), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->AppendTextWithEncodingAsync(get_abi(file), get_abi(contents), get_abi(encoding), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> consume_Windows_Storage_IFileIOStatics<D>::ReadLinesAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->ReadLinesAsync(get_abi(file), put_abi(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> consume_Windows_Storage_IFileIOStatics<D>::ReadLinesAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->ReadLinesWithEncodingAsync(get_abi(file), get_abi(encoding), put_abi(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->WriteLinesAsync(get_abi(file), get_abi(lines), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->WriteLinesWithEncodingAsync(get_abi(file), get_abi(lines), get_abi(encoding), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->AppendLinesAsync(get_abi(file), get_abi(lines), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->AppendLinesWithEncodingAsync(get_abi(file), get_abi(lines), get_abi(encoding), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Storage_IFileIOStatics<D>::ReadBufferAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->ReadBufferAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::WriteBufferAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->WriteBufferAsync(get_abi(file), get_abi(buffer), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IFileIOStatics<D>::WriteBytesAsync(Windows::Storage::IStorageFile const& file, array_view<uint8_t const> buffer) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IFileIOStatics)->WriteBytesAsync(get_abi(file), buffer.size(), get_abi(buffer), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersCameraRollStatics<D>::CameraRoll() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersCameraRollStatics)->get_CameraRoll(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersPlaylistsStatics<D>::Playlists() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersPlaylistsStatics)->get_Playlists(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersSavedPicturesStatics<D>::SavedPictures() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersSavedPicturesStatics)->get_SavedPictures(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics<D>::MusicLibrary() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics)->get_MusicLibrary(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics<D>::PicturesLibrary() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics)->get_PicturesLibrary(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics<D>::VideosLibrary() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics)->get_VideosLibrary(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics<D>::DocumentsLibrary() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics)->get_DocumentsLibrary(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics<D>::HomeGroup() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics)->get_HomeGroup(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics<D>::RemovableDevices() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics)->get_RemovableDevices(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics<D>::MediaServerDevices() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics)->get_MediaServerDevices(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics2<D>::Objects3D() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics2)->get_Objects3D(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics2<D>::AppCaptures() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics2)->get_AppCaptures(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IKnownFoldersStatics2<D>::RecordedCalls() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics2)->get_RecordedCalls(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IKnownFoldersStatics3<D>::GetFolderForUserAsync(Windows::System::User const& user, Windows::Storage::KnownFolderId const& folderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IKnownFoldersStatics3)->GetFolderForUserAsync(get_abi(user), get_abi(folderId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Storage_IPathIOStatics<D>::ReadTextAsync(param::hstring const& absolutePath) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->ReadTextAsync(get_abi(absolutePath), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Storage_IPathIOStatics<D>::ReadTextAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->ReadTextWithEncodingAsync(get_abi(absolutePath), get_abi(encoding), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->WriteTextAsync(get_abi(absolutePath), get_abi(contents), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->WriteTextWithEncodingAsync(get_abi(absolutePath), get_abi(contents), get_abi(encoding), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->AppendTextAsync(get_abi(absolutePath), get_abi(contents), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction textOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->AppendTextWithEncodingAsync(get_abi(absolutePath), get_abi(contents), get_abi(encoding), put_abi(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> consume_Windows_Storage_IPathIOStatics<D>::ReadLinesAsync(param::hstring const& absolutePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->ReadLinesAsync(get_abi(absolutePath), put_abi(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> consume_Windows_Storage_IPathIOStatics<D>::ReadLinesAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->ReadLinesWithEncodingAsync(get_abi(absolutePath), get_abi(encoding), put_abi(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->WriteLinesAsync(get_abi(absolutePath), get_abi(lines), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->WriteLinesWithEncodingAsync(get_abi(absolutePath), get_abi(lines), get_abi(encoding), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->AppendLinesAsync(get_abi(absolutePath), get_abi(lines), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->AppendLinesWithEncodingAsync(get_abi(absolutePath), get_abi(lines), get_abi(encoding), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Storage_IPathIOStatics<D>::ReadBufferAsync(param::hstring const& absolutePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->ReadBufferAsync(get_abi(absolutePath), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::WriteBufferAsync(param::hstring const& absolutePath, Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->WriteBufferAsync(get_abi(absolutePath), get_abi(buffer), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IPathIOStatics<D>::WriteBytesAsync(param::hstring const& absolutePath, array_view<uint8_t const> buffer) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IPathIOStatics)->WriteBytesAsync(get_abi(absolutePath), buffer.size(), get_abi(buffer), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Storage_ISetVersionDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::ISetVersionDeferral)->Complete());
}

template <typename D> uint32_t consume_Windows_Storage_ISetVersionRequest<D>::CurrentVersion() const
{
    uint32_t currentVersion{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISetVersionRequest)->get_CurrentVersion(&currentVersion));
    return currentVersion;
}

template <typename D> uint32_t consume_Windows_Storage_ISetVersionRequest<D>::DesiredVersion() const
{
    uint32_t desiredVersion{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISetVersionRequest)->get_DesiredVersion(&desiredVersion));
    return desiredVersion;
}

template <typename D> Windows::Storage::SetVersionDeferral consume_Windows_Storage_ISetVersionRequest<D>::GetDeferral() const
{
    Windows::Storage::SetVersionDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISetVersionRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> hstring consume_Windows_Storage_IStorageFile<D>::FileType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->get_FileType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IStorageFile<D>::ContentType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Storage_IStorageFile<D>::OpenAsync(Windows::Storage::FileAccessMode const& accessMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->OpenAsync(get_abi(accessMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> consume_Windows_Storage_IStorageFile<D>::OpenTransactedWriteAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->OpenTransactedWriteAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFile<D>::CopyAsync(Windows::Storage::IStorageFolder const& destinationFolder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->CopyOverloadDefaultNameAndOptions(get_abi(destinationFolder), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFile<D>::CopyAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->CopyOverloadDefaultOptions(get_abi(destinationFolder), get_abi(desiredNewName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFile<D>::CopyAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName, Windows::Storage::NameCollisionOption const& option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->CopyOverload(get_abi(destinationFolder), get_abi(desiredNewName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageFile<D>::CopyAndReplaceAsync(Windows::Storage::IStorageFile const& fileToReplace) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->CopyAndReplaceAsync(get_abi(fileToReplace), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageFile<D>::MoveAsync(Windows::Storage::IStorageFolder const& destinationFolder) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->MoveOverloadDefaultNameAndOptions(get_abi(destinationFolder), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageFile<D>::MoveAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->MoveOverloadDefaultOptions(get_abi(destinationFolder), get_abi(desiredNewName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageFile<D>::MoveAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName, Windows::Storage::NameCollisionOption const& option) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->MoveOverload(get_abi(destinationFolder), get_abi(desiredNewName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageFile<D>::MoveAndReplaceAsync(Windows::Storage::IStorageFile const& fileToReplace) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile)->MoveAndReplaceAsync(get_abi(fileToReplace), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Storage_IStorageFile2<D>::OpenAsync(Windows::Storage::FileAccessMode const& accessMode, Windows::Storage::StorageOpenOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile2)->OpenWithOptionsAsync(get_abi(accessMode), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> consume_Windows_Storage_IStorageFile2<D>::OpenTransactedWriteAsync(Windows::Storage::StorageOpenOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFile2)->OpenTransactedWriteWithOptionsAsync(get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Storage_IStorageFilePropertiesWithAvailability<D>::IsAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFilePropertiesWithAvailability)->get_IsAvailable(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFileStatics<D>::GetFileFromPathAsync(param::hstring const& path) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFileStatics)->GetFileFromPathAsync(get_abi(path), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFileStatics<D>::GetFileFromApplicationUriAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFileStatics)->GetFileFromApplicationUriAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFileStatics<D>::CreateStreamedFileAsync(param::hstring const& displayNameWithExtension, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFileStatics)->CreateStreamedFileAsync(get_abi(displayNameWithExtension), get_abi(dataRequested), get_abi(thumbnail), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFileStatics<D>::ReplaceWithStreamedFileAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFileStatics)->ReplaceWithStreamedFileAsync(get_abi(fileToReplace), get_abi(dataRequested), get_abi(thumbnail), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFileStatics<D>::CreateStreamedFileFromUriAsync(param::hstring const& displayNameWithExtension, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFileStatics)->CreateStreamedFileFromUriAsync(get_abi(displayNameWithExtension), get_abi(uri), get_abi(thumbnail), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFileStatics<D>::ReplaceWithStreamedFileFromUriAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFileStatics)->ReplaceWithStreamedFileFromUriAsync(get_abi(fileToReplace), get_abi(uri), get_abi(thumbnail), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFolder<D>::CreateFileAsync(param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->CreateFileAsyncOverloadDefaultOptions(get_abi(desiredName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFolder<D>::CreateFileAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->CreateFileAsync(get_abi(desiredName), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IStorageFolder<D>::CreateFolderAsync(param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->CreateFolderAsyncOverloadDefaultOptions(get_abi(desiredName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IStorageFolder<D>::CreateFolderAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->CreateFolderAsync(get_abi(desiredName), get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_IStorageFolder<D>::GetFileAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->GetFileAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IStorageFolder<D>::GetFolderAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->GetFolderAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> consume_Windows_Storage_IStorageFolder<D>::GetItemAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->GetItemAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> consume_Windows_Storage_IStorageFolder<D>::GetFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->GetFilesAsyncOverloadDefaultOptionsStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> consume_Windows_Storage_IStorageFolder<D>::GetFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->GetFoldersAsyncOverloadDefaultOptionsStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> consume_Windows_Storage_IStorageFolder<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder)->GetItemsAsyncOverloadDefaultStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> consume_Windows_Storage_IStorageFolder2<D>::TryGetItemAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolder2)->TryGetItemAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IStorageFolderStatics<D>::GetFolderFromPathAsync(param::hstring const& path) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageFolderStatics)->GetFolderFromPathAsync(get_abi(path), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageItem<D>::RenameAsync(param::hstring const& desiredName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->RenameAsyncOverloadDefaultOptions(get_abi(desiredName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageItem<D>::RenameAsync(param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->RenameAsync(get_abi(desiredName), get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageItem<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->DeleteAsyncOverloadDefaultOptions(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageItem<D>::DeleteAsync(Windows::Storage::StorageDeleteOption const& option) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->DeleteAsync(get_abi(option), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::BasicProperties> consume_Windows_Storage_IStorageItem<D>::GetBasicPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::BasicProperties> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->GetBasicPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Storage_IStorageItem<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IStorageItem<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->get_Path(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileAttributes consume_Windows_Storage_IStorageItem<D>::Attributes() const
{
    Windows::Storage::FileAttributes value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->get_Attributes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Storage_IStorageItem<D>::DateCreated() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->get_DateCreated(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Storage_IStorageItem<D>::IsOfType(Windows::Storage::StorageItemTypes const& type) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem)->IsOfType(get_abi(type), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IStorageItem2<D>::GetParentAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem2)->GetParentAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Storage_IStorageItem2<D>::IsEqual(Windows::Storage::IStorageItem const& item) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItem2)->IsEqual(get_abi(item), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> consume_Windows_Storage_IStorageItemProperties<D>::GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties)->GetThumbnailAsyncOverloadDefaultSizeDefaultOptions(get_abi(mode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> consume_Windows_Storage_IStorageItemProperties<D>::GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties)->GetThumbnailAsyncOverloadDefaultOptions(get_abi(mode), requestedSize, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> consume_Windows_Storage_IStorageItemProperties<D>::GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties)->GetThumbnailAsync(get_abi(mode), requestedSize, get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Storage_IStorageItemProperties<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IStorageItemProperties<D>::DisplayType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties)->get_DisplayType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IStorageItemProperties<D>::FolderRelativeId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties)->get_FolderRelativeId(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::StorageItemContentProperties consume_Windows_Storage_IStorageItemProperties<D>::Properties() const
{
    Windows::Storage::FileProperties::StorageItemContentProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> consume_Windows_Storage_IStorageItemProperties2<D>::GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties2)->GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions(get_abi(mode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> consume_Windows_Storage_IStorageItemProperties2<D>::GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties2)->GetScaledImageAsThumbnailAsyncOverloadDefaultOptions(get_abi(mode), requestedSize, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> consume_Windows_Storage_IStorageItemProperties2<D>::GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemProperties2)->GetScaledImageAsThumbnailAsync(get_abi(mode), requestedSize, get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageProvider consume_Windows_Storage_IStorageItemPropertiesWithProvider<D>::Provider() const
{
    Windows::Storage::StorageProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageItemPropertiesWithProvider)->get_Provider(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_IStorageLibrary<D>::RequestAddFolderAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibrary)->RequestAddFolderAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Storage_IStorageLibrary<D>::RequestRemoveFolderAsync(Windows::Storage::StorageFolder const& folder) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibrary)->RequestRemoveFolderAsync(get_abi(folder), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Storage::StorageFolder> consume_Windows_Storage_IStorageLibrary<D>::Folders() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Storage::StorageFolder> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibrary)->get_Folders(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Storage_IStorageLibrary<D>::SaveFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibrary)->get_SaveFolder(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Storage_IStorageLibrary<D>::DefinitionChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::Foundation::IInspectable> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibrary)->add_DefinitionChanged(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Storage::IStorageLibrary> consume_Windows_Storage_IStorageLibrary<D>::DefinitionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Storage::IStorageLibrary>(this, &abi_t<Windows::Storage::IStorageLibrary>::remove_DefinitionChanged, DefinitionChanged(handler));
}

template <typename D> void consume_Windows_Storage_IStorageLibrary<D>::DefinitionChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibrary)->remove_DefinitionChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Storage::StorageLibraryChangeTracker consume_Windows_Storage_IStorageLibrary2<D>::ChangeTracker() const
{
    Windows::Storage::StorageLibraryChangeTracker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibrary2)->get_ChangeTracker(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageLibraryChangeType consume_Windows_Storage_IStorageLibraryChange<D>::ChangeType() const
{
    Windows::Storage::StorageLibraryChangeType value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChange)->get_ChangeType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IStorageLibraryChange<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChange)->get_Path(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IStorageLibraryChange<D>::PreviousPath() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChange)->get_PreviousPath(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Storage_IStorageLibraryChange<D>::IsOfType(Windows::Storage::StorageItemTypes const& type) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChange)->IsOfType(get_abi(type), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> consume_Windows_Storage_IStorageLibraryChange<D>::GetStorageItemAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChange)->GetStorageItemAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageLibraryChange>> consume_Windows_Storage_IStorageLibraryChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageLibraryChange>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChangeReader)->ReadBatchAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageLibraryChangeReader<D>::AcceptChangesAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChangeReader)->AcceptChangesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageLibraryChangeReader consume_Windows_Storage_IStorageLibraryChangeTracker<D>::GetChangeReader() const
{
    Windows::Storage::StorageLibraryChangeReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChangeTracker)->GetChangeReader(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_IStorageLibraryChangeTracker<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChangeTracker)->Enable());
}

template <typename D> void consume_Windows_Storage_IStorageLibraryChangeTracker<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryChangeTracker)->Reset());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> consume_Windows_Storage_IStorageLibraryStatics<D>::GetLibraryAsync(Windows::Storage::KnownLibraryId const& libraryId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryStatics)->GetLibraryAsync(get_abi(libraryId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> consume_Windows_Storage_IStorageLibraryStatics2<D>::GetLibraryForUserAsync(Windows::System::User const& user, Windows::Storage::KnownLibraryId const& libraryId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageLibraryStatics2)->GetLibraryForUserAsync(get_abi(user), get_abi(libraryId), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Storage_IStorageProvider<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageProvider)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_IStorageProvider<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageProvider)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Storage_IStorageStreamTransaction<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageStreamTransaction)->get_Stream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_IStorageStreamTransaction<D>::CommitAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::IStorageStreamTransaction)->CommitAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Storage_IStreamedFileDataRequest<D>::FailAndClose(Windows::Storage::StreamedFileFailureMode const& failureMode) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::IStreamedFileDataRequest)->FailAndClose(get_abi(failureMode)));
}

template <typename D> hstring consume_Windows_Storage_ISystemAudioProperties<D>::EncodingBitrate() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemAudioProperties)->get_EncodingBitrate(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemGPSProperties<D>::LatitudeDecimal() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemGPSProperties)->get_LatitudeDecimal(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemGPSProperties<D>::LongitudeDecimal() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemGPSProperties)->get_LongitudeDecimal(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemImageProperties<D>::HorizontalSize() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemImageProperties)->get_HorizontalSize(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemImageProperties<D>::VerticalSize() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemImageProperties)->get_VerticalSize(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMediaProperties<D>::Duration() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMediaProperties)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMediaProperties<D>::Producer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMediaProperties)->get_Producer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMediaProperties<D>::Publisher() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMediaProperties)->get_Publisher(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMediaProperties<D>::SubTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMediaProperties)->get_SubTitle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMediaProperties<D>::Writer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMediaProperties)->get_Writer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMediaProperties<D>::Year() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMediaProperties)->get_Year(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::AlbumArtist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_AlbumArtist(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::AlbumTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_AlbumTitle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::Artist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_Artist(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::Composer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_Composer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::Conductor() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_Conductor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::DisplayArtist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_DisplayArtist(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::Genre() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_Genre(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemMusicProperties<D>::TrackNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemMusicProperties)->get_TrackNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemPhotoProperties<D>::CameraManufacturer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemPhotoProperties)->get_CameraManufacturer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemPhotoProperties<D>::CameraModel() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemPhotoProperties)->get_CameraModel(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemPhotoProperties<D>::DateTaken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemPhotoProperties)->get_DateTaken(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemPhotoProperties<D>::Orientation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemPhotoProperties)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemPhotoProperties<D>::PeopleNames() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemPhotoProperties)->get_PeopleNames(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemProperties<D>::Author() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Author(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemProperties<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemProperties<D>::ItemNameDisplay() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_ItemNameDisplay(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemProperties<D>::Keywords() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Keywords(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemProperties<D>::Rating() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Rating(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::SystemAudioProperties consume_Windows_Storage_ISystemProperties<D>::Audio() const
{
    Windows::Storage::SystemAudioProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Audio(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::SystemGPSProperties consume_Windows_Storage_ISystemProperties<D>::GPS() const
{
    Windows::Storage::SystemGPSProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_GPS(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::SystemMediaProperties consume_Windows_Storage_ISystemProperties<D>::Media() const
{
    Windows::Storage::SystemMediaProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Media(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::SystemMusicProperties consume_Windows_Storage_ISystemProperties<D>::Music() const
{
    Windows::Storage::SystemMusicProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Music(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::SystemPhotoProperties consume_Windows_Storage_ISystemProperties<D>::Photo() const
{
    Windows::Storage::SystemPhotoProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Photo(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::SystemVideoProperties consume_Windows_Storage_ISystemProperties<D>::Video() const
{
    Windows::Storage::SystemVideoProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Video(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::SystemImageProperties consume_Windows_Storage_ISystemProperties<D>::Image() const
{
    Windows::Storage::SystemImageProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemProperties)->get_Image(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemVideoProperties<D>::Director() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemVideoProperties)->get_Director(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemVideoProperties<D>::FrameHeight() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemVideoProperties)->get_FrameHeight(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemVideoProperties<D>::FrameWidth() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemVideoProperties)->get_FrameWidth(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemVideoProperties<D>::Orientation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemVideoProperties)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_ISystemVideoProperties<D>::TotalBitrate() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::ISystemVideoProperties)->get_TotalBitrate(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Storage::ApplicationDataSetVersionHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Storage::ApplicationDataSetVersionHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Storage::ApplicationDataSetVersionHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* setVersionRequest) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Storage::SetVersionRequest const*>(&setVersionRequest));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Storage::StreamedFileDataRequestedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Storage::StreamedFileDataRequestedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Storage::StreamedFileDataRequestedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* stream) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Storage::StreamedFileDataRequest const*>(&stream));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Storage::IApplicationData> : produce_base<D, Windows::Storage::IApplicationData>
{
    HRESULT __stdcall get_Version(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetVersionAsync(uint32_t desiredVersion, ::IUnknown* handler, ::IUnknown** setVersionOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *setVersionOperation = detach_abi(this->shim().SetVersionAsync(desiredVersion, *reinterpret_cast<Windows::Storage::ApplicationDataSetVersionHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *setVersionOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearAllAsync(::IUnknown** clearOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *clearOperation = detach_abi(this->shim().ClearAsync());
            return S_OK;
        }
        catch (...)
        {
            *clearOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearAsync(abi_t<Windows::Storage::ApplicationDataLocality> locality, ::IUnknown** clearOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *clearOperation = detach_abi(this->shim().ClearAsync(*reinterpret_cast<Windows::Storage::ApplicationDataLocality const*>(&locality)));
            return S_OK;
        }
        catch (...)
        {
            *clearOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalSettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingSettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoamingSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoamingFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TemporaryFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TemporaryFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DataChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SignalDataChanged() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignalDataChanged();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingStorageQuota(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoamingStorageQuota());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IApplicationData2> : produce_base<D, Windows::Storage::IApplicationData2>
{
    HRESULT __stdcall get_LocalCacheFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalCacheFolder());
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
struct produce<D, Windows::Storage::IApplicationData3> : produce_base<D, Windows::Storage::IApplicationData3>
{
    HRESULT __stdcall GetPublisherCacheFolder(HSTRING folderName, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPublisherCacheFolder(*reinterpret_cast<hstring const*>(&folderName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearPublisherCacheFolderAsync(HSTRING folderName, ::IUnknown** clearOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *clearOperation = detach_abi(this->shim().ClearPublisherCacheFolderAsync(*reinterpret_cast<hstring const*>(&folderName)));
            return S_OK;
        }
        catch (...)
        {
            *clearOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharedLocalFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SharedLocalFolder());
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
struct produce<D, Windows::Storage::IApplicationDataContainer> : produce_base<D, Windows::Storage::IApplicationDataContainer>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locality(abi_t<Windows::Storage::ApplicationDataLocality>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Locality());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Values(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Values());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Containers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Containers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateContainer(HSTRING name, abi_t<Windows::Storage::ApplicationDataCreateDisposition> disposition, ::IUnknown** container) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *container = detach_abi(this->shim().CreateContainer(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Storage::ApplicationDataCreateDisposition const*>(&disposition)));
            return S_OK;
        }
        catch (...)
        {
            *container = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteContainer(HSTRING name) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteContainer(*reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IApplicationDataStatics> : produce_base<D, Windows::Storage::IApplicationDataStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
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
struct produce<D, Windows::Storage::IApplicationDataStatics2> : produce_base<D, Windows::Storage::IApplicationDataStatics2>
{
    HRESULT __stdcall GetForUserAsync(::IUnknown* user, ::IUnknown** getForUserOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *getForUserOperation = detach_abi(this->shim().GetForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *getForUserOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::ICachedFileManagerStatics> : produce_base<D, Windows::Storage::ICachedFileManagerStatics>
{
    HRESULT __stdcall DeferUpdates(::IUnknown* file) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeferUpdates(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompleteUpdatesAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CompleteUpdatesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IDownloadsFolderStatics> : produce_base<D, Windows::Storage::IDownloadsFolderStatics>
{
    HRESULT __stdcall CreateFileAsync(HSTRING desiredName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFileAsync(*reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderAsync(HSTRING desiredName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFolderAsync(*reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileWithCollisionOptionAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFileAsync(*reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::CreationCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderWithCollisionOptionAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFolderAsync(*reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::CreationCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IDownloadsFolderStatics2> : produce_base<D, Windows::Storage::IDownloadsFolderStatics2>
{
    HRESULT __stdcall CreateFileForUserAsync(::IUnknown* user, HSTRING desiredName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFileForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderForUserAsync(::IUnknown* user, HSTRING desiredName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFolderForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileForUserWithCollisionOptionAsync(::IUnknown* user, HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFileForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::CreationCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderForUserWithCollisionOptionAsync(::IUnknown* user, HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFolderForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::CreationCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IFileIOStatics> : produce_base<D, Windows::Storage::IFileIOStatics>
{
    HRESULT __stdcall ReadTextAsync(::IUnknown* file, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().ReadTextAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadTextWithEncodingAsync(::IUnknown* file, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().ReadTextAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteTextAsync(::IUnknown* file, HSTRING contents, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().WriteTextAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteTextWithEncodingAsync(::IUnknown* file, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().WriteTextAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contents), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendTextAsync(::IUnknown* file, HSTRING contents, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().AppendTextAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendTextWithEncodingAsync(::IUnknown* file, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().AppendTextAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contents), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadLinesAsync(::IUnknown* file, ::IUnknown** linesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *linesOperation = detach_abi(this->shim().ReadLinesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadLinesWithEncodingAsync(::IUnknown* file, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** linesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *linesOperation = detach_abi(this->shim().ReadLinesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteLinesAsync(::IUnknown* file, ::IUnknown* lines, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteLinesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteLinesWithEncodingAsync(::IUnknown* file, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteLinesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendLinesAsync(::IUnknown* file, ::IUnknown* lines, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AppendLinesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendLinesWithEncodingAsync(::IUnknown* file, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AppendLinesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBufferAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReadBufferAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBufferAsync(::IUnknown* file, ::IUnknown* buffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteBufferAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBytesAsync(::IUnknown* file, uint32_t __bufferSize, uint8_t* buffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteBytesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(buffer), reinterpret_cast<uint8_t const *>(buffer) + __bufferSize)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IKnownFoldersCameraRollStatics> : produce_base<D, Windows::Storage::IKnownFoldersCameraRollStatics>
{
    HRESULT __stdcall get_CameraRoll(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraRoll());
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
struct produce<D, Windows::Storage::IKnownFoldersPlaylistsStatics> : produce_base<D, Windows::Storage::IKnownFoldersPlaylistsStatics>
{
    HRESULT __stdcall get_Playlists(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Playlists());
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
struct produce<D, Windows::Storage::IKnownFoldersSavedPicturesStatics> : produce_base<D, Windows::Storage::IKnownFoldersSavedPicturesStatics>
{
    HRESULT __stdcall get_SavedPictures(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SavedPictures());
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
struct produce<D, Windows::Storage::IKnownFoldersStatics> : produce_base<D, Windows::Storage::IKnownFoldersStatics>
{
    HRESULT __stdcall get_MusicLibrary(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MusicLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PicturesLibrary(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PicturesLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosLibrary(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideosLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentsLibrary(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentsLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeGroup(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HomeGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemovableDevices(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemovableDevices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaServerDevices(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaServerDevices());
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
struct produce<D, Windows::Storage::IKnownFoldersStatics2> : produce_base<D, Windows::Storage::IKnownFoldersStatics2>
{
    HRESULT __stdcall get_Objects3D(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Objects3D());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppCaptures(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppCaptures());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordedCalls(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordedCalls());
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
struct produce<D, Windows::Storage::IKnownFoldersStatics3> : produce_base<D, Windows::Storage::IKnownFoldersStatics3>
{
    HRESULT __stdcall GetFolderForUserAsync(::IUnknown* user, abi_t<Windows::Storage::KnownFolderId> folderId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFolderForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Storage::KnownFolderId const*>(&folderId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IPathIOStatics> : produce_base<D, Windows::Storage::IPathIOStatics>
{
    HRESULT __stdcall ReadTextAsync(HSTRING absolutePath, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().ReadTextAsync(*reinterpret_cast<hstring const*>(&absolutePath)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadTextWithEncodingAsync(HSTRING absolutePath, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().ReadTextAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteTextAsync(HSTRING absolutePath, HSTRING contents, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().WriteTextAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<hstring const*>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteTextWithEncodingAsync(HSTRING absolutePath, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().WriteTextAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<hstring const*>(&contents), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendTextAsync(HSTRING absolutePath, HSTRING contents, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().AppendTextAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<hstring const*>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendTextWithEncodingAsync(HSTRING absolutePath, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textOperation = detach_abi(this->shim().AppendTextAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<hstring const*>(&contents), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadLinesAsync(HSTRING absolutePath, ::IUnknown** linesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *linesOperation = detach_abi(this->shim().ReadLinesAsync(*reinterpret_cast<hstring const*>(&absolutePath)));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadLinesWithEncodingAsync(HSTRING absolutePath, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** linesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *linesOperation = detach_abi(this->shim().ReadLinesAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteLinesAsync(HSTRING absolutePath, ::IUnknown* lines, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteLinesAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteLinesWithEncodingAsync(HSTRING absolutePath, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteLinesAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendLinesAsync(HSTRING absolutePath, ::IUnknown* lines, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AppendLinesAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AppendLinesWithEncodingAsync(HSTRING absolutePath, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AppendLinesAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&lines), *reinterpret_cast<Windows::Storage::Streams::UnicodeEncoding const*>(&encoding)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadBufferAsync(HSTRING absolutePath, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReadBufferAsync(*reinterpret_cast<hstring const*>(&absolutePath)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBufferAsync(HSTRING absolutePath, ::IUnknown* buffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteBufferAsync(*reinterpret_cast<hstring const*>(&absolutePath), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteBytesAsync(HSTRING absolutePath, uint32_t __bufferSize, uint8_t* buffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteBytesAsync(*reinterpret_cast<hstring const*>(&absolutePath), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(buffer), reinterpret_cast<uint8_t const *>(buffer) + __bufferSize)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::ISetVersionDeferral> : produce_base<D, Windows::Storage::ISetVersionDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
struct produce<D, Windows::Storage::ISetVersionRequest> : produce_base<D, Windows::Storage::ISetVersionRequest>
{
    HRESULT __stdcall get_CurrentVersion(uint32_t* currentVersion) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *currentVersion = detach_abi(this->shim().CurrentVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredVersion(uint32_t* desiredVersion) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *desiredVersion = detach_abi(this->shim().DesiredVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFile> : produce_base<D, Windows::Storage::IStorageFile>
{
    HRESULT __stdcall get_FileType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenAsync(abi_t<Windows::Storage::FileAccessMode> accessMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenAsync(*reinterpret_cast<Windows::Storage::FileAccessMode const*>(&accessMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenTransactedWriteAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenTransactedWriteAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyOverloadDefaultNameAndOptions(::IUnknown* destinationFolder, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CopyAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&destinationFolder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyOverloadDefaultOptions(::IUnknown* destinationFolder, HSTRING desiredNewName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CopyAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&destinationFolder), *reinterpret_cast<hstring const*>(&desiredNewName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyOverload(::IUnknown* destinationFolder, HSTRING desiredNewName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CopyAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&destinationFolder), *reinterpret_cast<hstring const*>(&desiredNewName), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CopyAndReplaceAsync(::IUnknown* fileToReplace, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CopyAndReplaceAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&fileToReplace)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveOverloadDefaultNameAndOptions(::IUnknown* destinationFolder, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().MoveAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&destinationFolder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveOverloadDefaultOptions(::IUnknown* destinationFolder, HSTRING desiredNewName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().MoveAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&destinationFolder), *reinterpret_cast<hstring const*>(&desiredNewName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveOverload(::IUnknown* destinationFolder, HSTRING desiredNewName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().MoveAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&destinationFolder), *reinterpret_cast<hstring const*>(&desiredNewName), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveAndReplaceAsync(::IUnknown* fileToReplace, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().MoveAndReplaceAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&fileToReplace)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFile2> : produce_base<D, Windows::Storage::IStorageFile2>
{
    HRESULT __stdcall OpenWithOptionsAsync(abi_t<Windows::Storage::FileAccessMode> accessMode, abi_t<Windows::Storage::StorageOpenOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenAsync(*reinterpret_cast<Windows::Storage::FileAccessMode const*>(&accessMode), *reinterpret_cast<Windows::Storage::StorageOpenOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenTransactedWriteWithOptionsAsync(abi_t<Windows::Storage::StorageOpenOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenTransactedWriteAsync(*reinterpret_cast<Windows::Storage::StorageOpenOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFilePropertiesWithAvailability> : produce_base<D, Windows::Storage::IStorageFilePropertiesWithAvailability>
{
    HRESULT __stdcall get_IsAvailable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFileStatics> : produce_base<D, Windows::Storage::IStorageFileStatics>
{
    HRESULT __stdcall GetFileFromPathAsync(HSTRING path, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFileFromPathAsync(*reinterpret_cast<hstring const*>(&path)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFileFromApplicationUriAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFileFromApplicationUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStreamedFileAsync(HSTRING displayNameWithExtension, ::IUnknown* dataRequested, ::IUnknown* thumbnail, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateStreamedFileAsync(*reinterpret_cast<hstring const*>(&displayNameWithExtension), *reinterpret_cast<Windows::Storage::StreamedFileDataRequestedHandler const*>(&dataRequested), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReplaceWithStreamedFileAsync(::IUnknown* fileToReplace, ::IUnknown* dataRequested, ::IUnknown* thumbnail, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReplaceWithStreamedFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&fileToReplace), *reinterpret_cast<Windows::Storage::StreamedFileDataRequestedHandler const*>(&dataRequested), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStreamedFileFromUriAsync(HSTRING displayNameWithExtension, ::IUnknown* uri, ::IUnknown* thumbnail, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateStreamedFileFromUriAsync(*reinterpret_cast<hstring const*>(&displayNameWithExtension), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReplaceWithStreamedFileFromUriAsync(::IUnknown* fileToReplace, ::IUnknown* uri, ::IUnknown* thumbnail, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReplaceWithStreamedFileFromUriAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&fileToReplace), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFolder> : produce_base<D, Windows::Storage::IStorageFolder>
{
    HRESULT __stdcall CreateFileAsyncOverloadDefaultOptions(HSTRING desiredName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFileAsync(*reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFileAsync(*reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::CreationCollisionOption const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderAsyncOverloadDefaultOptions(HSTRING desiredName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFolderAsync(*reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFolderAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFolderAsync(*reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::CreationCollisionOption const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFileAsync(HSTRING name, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFileAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFolderAsync(HSTRING name, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFolderAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemAsync(HSTRING name, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFilesAsyncOverloadDefaultOptionsStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFilesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFoldersAsyncOverloadDefaultOptionsStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFoldersAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemsAsyncOverloadDefaultStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFolder2> : produce_base<D, Windows::Storage::IStorageFolder2>
{
    HRESULT __stdcall TryGetItemAsync(HSTRING name, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryGetItemAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFolderStatics> : produce_base<D, Windows::Storage::IStorageFolderStatics>
{
    HRESULT __stdcall GetFolderFromPathAsync(HSTRING path, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFolderFromPathAsync(*reinterpret_cast<hstring const*>(&path)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageItem> : produce_base<D, Windows::Storage::IStorageItem>
{
    HRESULT __stdcall RenameAsyncOverloadDefaultOptions(HSTRING desiredName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RenameAsync(*reinterpret_cast<hstring const*>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenameAsync(HSTRING desiredName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RenameAsync(*reinterpret_cast<hstring const*>(&desiredName), *reinterpret_cast<Windows::Storage::NameCollisionOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsyncOverloadDefaultOptions(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(abi_t<Windows::Storage::StorageDeleteOption> option, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeleteAsync(*reinterpret_cast<Windows::Storage::StorageDeleteOption const*>(&option)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBasicPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetBasicPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Attributes(abi_t<Windows::Storage::FileAttributes>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Attributes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateCreated(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateCreated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsOfType(abi_t<Windows::Storage::StorageItemTypes> type, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOfType(*reinterpret_cast<Windows::Storage::StorageItemTypes const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageItem2> : produce_base<D, Windows::Storage::IStorageItem2>
{
    HRESULT __stdcall GetParentAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetParentAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEqual(::IUnknown* item, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEqual(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageItemProperties> : produce_base<D, Windows::Storage::IStorageItemProperties>
{
    HRESULT __stdcall GetThumbnailAsyncOverloadDefaultSizeDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetThumbnailAsync(*reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetThumbnailAsyncOverloadDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetThumbnailAsync(*reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedSize));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetThumbnailAsync(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetThumbnailAsync(*reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedSize, *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FolderRelativeId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FolderRelativeId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
struct produce<D, Windows::Storage::IStorageItemProperties2> : produce_base<D, Windows::Storage::IStorageItemProperties2>
{
    HRESULT __stdcall GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetScaledImageAsThumbnailAsync(*reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScaledImageAsThumbnailAsyncOverloadDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetScaledImageAsThumbnailAsync(*reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedSize));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScaledImageAsThumbnailAsync(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetScaledImageAsThumbnailAsync(*reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedSize, *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageItemPropertiesWithProvider> : produce_base<D, Windows::Storage::IStorageItemPropertiesWithProvider>
{
    HRESULT __stdcall get_Provider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Provider());
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
struct produce<D, Windows::Storage::IStorageLibrary> : produce_base<D, Windows::Storage::IStorageLibrary>
{
    HRESULT __stdcall RequestAddFolderAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestAddFolderAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestRemoveFolderAsync(::IUnknown* folder, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestRemoveFolderAsync(*reinterpret_cast<Windows::Storage::StorageFolder const*>(&folder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Folders(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Folders());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaveFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SaveFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefinitionChanged(::IUnknown* handler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().DefinitionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefinitionChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefinitionChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageLibrary2> : produce_base<D, Windows::Storage::IStorageLibrary2>
{
    HRESULT __stdcall get_ChangeTracker(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeTracker());
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
struct produce<D, Windows::Storage::IStorageLibraryChange> : produce_base<D, Windows::Storage::IStorageLibraryChange>
{
    HRESULT __stdcall get_ChangeType(abi_t<Windows::Storage::StorageLibraryChangeType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousPath(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviousPath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsOfType(abi_t<Windows::Storage::StorageItemTypes> type, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOfType(*reinterpret_cast<Windows::Storage::StorageItemTypes const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStorageItemAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStorageItemAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageLibraryChangeReader> : produce_base<D, Windows::Storage::IStorageLibraryChangeReader>
{
    HRESULT __stdcall ReadBatchAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptChangesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AcceptChangesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageLibraryChangeTracker> : produce_base<D, Windows::Storage::IStorageLibraryChangeTracker>
{
    HRESULT __stdcall GetChangeReader(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Enable() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageLibraryStatics> : produce_base<D, Windows::Storage::IStorageLibraryStatics>
{
    HRESULT __stdcall GetLibraryAsync(abi_t<Windows::Storage::KnownLibraryId> libraryId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetLibraryAsync(*reinterpret_cast<Windows::Storage::KnownLibraryId const*>(&libraryId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageLibraryStatics2> : produce_base<D, Windows::Storage::IStorageLibraryStatics2>
{
    HRESULT __stdcall GetLibraryForUserAsync(::IUnknown* user, abi_t<Windows::Storage::KnownLibraryId> libraryId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetLibraryForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<Windows::Storage::KnownLibraryId const*>(&libraryId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageProvider> : produce_base<D, Windows::Storage::IStorageProvider>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
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
struct produce<D, Windows::Storage::IStorageStreamTransaction> : produce_base<D, Windows::Storage::IStorageStreamTransaction>
{
    HRESULT __stdcall get_Stream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CommitAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CommitAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStreamedFileDataRequest> : produce_base<D, Windows::Storage::IStreamedFileDataRequest>
{
    HRESULT __stdcall FailAndClose(abi_t<Windows::Storage::StreamedFileFailureMode> failureMode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailAndClose(*reinterpret_cast<Windows::Storage::StreamedFileFailureMode const*>(&failureMode));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::ISystemAudioProperties> : produce_base<D, Windows::Storage::ISystemAudioProperties>
{
    HRESULT __stdcall get_EncodingBitrate(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncodingBitrate());
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
struct produce<D, Windows::Storage::ISystemGPSProperties> : produce_base<D, Windows::Storage::ISystemGPSProperties>
{
    HRESULT __stdcall get_LatitudeDecimal(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LatitudeDecimal());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LongitudeDecimal(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LongitudeDecimal());
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
struct produce<D, Windows::Storage::ISystemImageProperties> : produce_base<D, Windows::Storage::ISystemImageProperties>
{
    HRESULT __stdcall get_HorizontalSize(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalSize());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalSize(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalSize());
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
struct produce<D, Windows::Storage::ISystemMediaProperties> : produce_base<D, Windows::Storage::ISystemMediaProperties>
{
    HRESULT __stdcall get_Duration(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Producer(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Producer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubTitle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Writer(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Writer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Year());
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
struct produce<D, Windows::Storage::ISystemMusicProperties> : produce_base<D, Windows::Storage::ISystemMusicProperties>
{
    HRESULT __stdcall get_AlbumArtist(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlbumArtist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlbumTitle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlbumTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Artist(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Artist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Composer(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Composer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Conductor(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Conductor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayArtist(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayArtist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Genre(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Genre());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrackNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrackNumber());
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
struct produce<D, Windows::Storage::ISystemPhotoProperties> : produce_base<D, Windows::Storage::ISystemPhotoProperties>
{
    HRESULT __stdcall get_CameraManufacturer(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraManufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraModel(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraModel());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTaken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateTaken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeopleNames(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeopleNames());
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
struct produce<D, Windows::Storage::ISystemProperties> : produce_base<D, Windows::Storage::ISystemProperties>
{
    HRESULT __stdcall get_Author(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemNameDisplay(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemNameDisplay());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rating(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Audio(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Audio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GPS(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GPS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Media(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Media());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Music(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Music());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Photo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Photo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Video(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Video());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Image());
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
struct produce<D, Windows::Storage::ISystemVideoProperties> : produce_base<D, Windows::Storage::ISystemVideoProperties>
{
    HRESULT __stdcall get_Director(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Director());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameHeight(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameHeight());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameWidth(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameWidth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalBitrate(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalBitrate());
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

WINRT_EXPORT namespace winrt::Windows::Storage {

inline Windows::Storage::ApplicationData ApplicationData::Current()
{
    return get_activation_factory<ApplicationData, Windows::Storage::IApplicationDataStatics>().Current();
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> ApplicationData::GetForUserAsync(Windows::System::User const& user)
{
    return get_activation_factory<ApplicationData, Windows::Storage::IApplicationDataStatics2>().GetForUserAsync(user);
}

inline ApplicationDataCompositeValue::ApplicationDataCompositeValue() :
    ApplicationDataCompositeValue(activate_instance<ApplicationDataCompositeValue>())
{}

inline void CachedFileManager::DeferUpdates(Windows::Storage::IStorageFile const& file)
{
    get_activation_factory<CachedFileManager, Windows::Storage::ICachedFileManagerStatics>().DeferUpdates(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Provider::FileUpdateStatus> CachedFileManager::CompleteUpdatesAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<CachedFileManager, Windows::Storage::ICachedFileManagerStatics>().CompleteUpdatesAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileAsync(param::hstring const& desiredName)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics>().CreateFileAsync(desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderAsync(param::hstring const& desiredName)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics>().CreateFolderAsync(desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics>().CreateFileAsync(desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics>().CreateFolderAsync(desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics2>().CreateFileForUserAsync(user, desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics2>().CreateFolderForUserAsync(user, desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics2>().CreateFileForUserAsync(user, desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option)
{
    return get_activation_factory<DownloadsFolder, Windows::Storage::IDownloadsFolderStatics2>().CreateFolderForUserAsync(user, desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<hstring> FileIO::ReadTextAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().ReadTextAsync(file);
}

inline Windows::Foundation::IAsyncOperation<hstring> FileIO::ReadTextAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().ReadTextAsync(file, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().WriteTextAsync(file, contents);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().WriteTextAsync(file, contents, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().AppendTextAsync(file, contents);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().AppendTextAsync(file, contents, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> FileIO::ReadLinesAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().ReadLinesAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> FileIO::ReadLinesAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().ReadLinesAsync(file, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().WriteLinesAsync(file, lines);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().WriteLinesAsync(file, lines, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().AppendLinesAsync(file, lines);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().AppendLinesAsync(file, lines, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> FileIO::ReadBufferAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().ReadBufferAsync(file);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteBufferAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().WriteBufferAsync(file, buffer);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteBytesAsync(Windows::Storage::IStorageFile const& file, array_view<uint8_t const> buffer)
{
    return get_activation_factory<FileIO, Windows::Storage::IFileIOStatics>().WriteBytesAsync(file, buffer);
}

inline Windows::Storage::StorageFolder KnownFolders::CameraRoll()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersCameraRollStatics>().CameraRoll();
}

inline Windows::Storage::StorageFolder KnownFolders::Playlists()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersPlaylistsStatics>().Playlists();
}

inline Windows::Storage::StorageFolder KnownFolders::SavedPictures()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersSavedPicturesStatics>().SavedPictures();
}

inline Windows::Storage::StorageFolder KnownFolders::MusicLibrary()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics>().MusicLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::PicturesLibrary()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics>().PicturesLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::VideosLibrary()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics>().VideosLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::DocumentsLibrary()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics>().DocumentsLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::HomeGroup()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics>().HomeGroup();
}

inline Windows::Storage::StorageFolder KnownFolders::RemovableDevices()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics>().RemovableDevices();
}

inline Windows::Storage::StorageFolder KnownFolders::MediaServerDevices()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics>().MediaServerDevices();
}

inline Windows::Storage::StorageFolder KnownFolders::Objects3D()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics2>().Objects3D();
}

inline Windows::Storage::StorageFolder KnownFolders::AppCaptures()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics2>().AppCaptures();
}

inline Windows::Storage::StorageFolder KnownFolders::RecordedCalls()
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics2>().RecordedCalls();
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> KnownFolders::GetFolderForUserAsync(Windows::System::User const& user, Windows::Storage::KnownFolderId const& folderId)
{
    return get_activation_factory<KnownFolders, Windows::Storage::IKnownFoldersStatics3>().GetFolderForUserAsync(user, folderId);
}

inline Windows::Foundation::IAsyncOperation<hstring> PathIO::ReadTextAsync(param::hstring const& absolutePath)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().ReadTextAsync(absolutePath);
}

inline Windows::Foundation::IAsyncOperation<hstring> PathIO::ReadTextAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().ReadTextAsync(absolutePath, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().WriteTextAsync(absolutePath, contents);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().WriteTextAsync(absolutePath, contents, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().AppendTextAsync(absolutePath, contents);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().AppendTextAsync(absolutePath, contents, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> PathIO::ReadLinesAsync(param::hstring const& absolutePath)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().ReadLinesAsync(absolutePath);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> PathIO::ReadLinesAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().ReadLinesAsync(absolutePath, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().WriteLinesAsync(absolutePath, lines);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().WriteLinesAsync(absolutePath, lines, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().AppendLinesAsync(absolutePath, lines);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().AppendLinesAsync(absolutePath, lines, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> PathIO::ReadBufferAsync(param::hstring const& absolutePath)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().ReadBufferAsync(absolutePath);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteBufferAsync(param::hstring const& absolutePath, Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().WriteBufferAsync(absolutePath, buffer);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteBytesAsync(param::hstring const& absolutePath, array_view<uint8_t const> buffer)
{
    return get_activation_factory<PathIO, Windows::Storage::IPathIOStatics>().WriteBytesAsync(absolutePath, buffer);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::GetFileFromPathAsync(param::hstring const& path)
{
    return get_activation_factory<StorageFile, Windows::Storage::IStorageFileStatics>().GetFileFromPathAsync(path);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::GetFileFromApplicationUriAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<StorageFile, Windows::Storage::IStorageFileStatics>().GetFileFromApplicationUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::CreateStreamedFileAsync(param::hstring const& displayNameWithExtension, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail)
{
    return get_activation_factory<StorageFile, Windows::Storage::IStorageFileStatics>().CreateStreamedFileAsync(displayNameWithExtension, dataRequested, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::ReplaceWithStreamedFileAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail)
{
    return get_activation_factory<StorageFile, Windows::Storage::IStorageFileStatics>().ReplaceWithStreamedFileAsync(fileToReplace, dataRequested, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::CreateStreamedFileFromUriAsync(param::hstring const& displayNameWithExtension, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail)
{
    return get_activation_factory<StorageFile, Windows::Storage::IStorageFileStatics>().CreateStreamedFileFromUriAsync(displayNameWithExtension, uri, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::ReplaceWithStreamedFileFromUriAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail)
{
    return get_activation_factory<StorageFile, Windows::Storage::IStorageFileStatics>().ReplaceWithStreamedFileFromUriAsync(fileToReplace, uri, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> StorageFolder::GetFolderFromPathAsync(param::hstring const& path)
{
    return get_activation_factory<StorageFolder, Windows::Storage::IStorageFolderStatics>().GetFolderFromPathAsync(path);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> StorageLibrary::GetLibraryAsync(Windows::Storage::KnownLibraryId const& libraryId)
{
    return get_activation_factory<StorageLibrary, Windows::Storage::IStorageLibraryStatics>().GetLibraryAsync(libraryId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> StorageLibrary::GetLibraryForUserAsync(Windows::System::User const& user, Windows::Storage::KnownLibraryId const& libraryId)
{
    return get_activation_factory<StorageLibrary, Windows::Storage::IStorageLibraryStatics2>().GetLibraryForUserAsync(user, libraryId);
}

inline hstring SystemProperties::Author()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Author();
}

inline hstring SystemProperties::Comment()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Comment();
}

inline hstring SystemProperties::ItemNameDisplay()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().ItemNameDisplay();
}

inline hstring SystemProperties::Keywords()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Keywords();
}

inline hstring SystemProperties::Rating()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Rating();
}

inline hstring SystemProperties::Title()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Title();
}

inline Windows::Storage::SystemAudioProperties SystemProperties::Audio()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Audio();
}

inline Windows::Storage::SystemGPSProperties SystemProperties::GPS()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().GPS();
}

inline Windows::Storage::SystemMediaProperties SystemProperties::Media()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Media();
}

inline Windows::Storage::SystemMusicProperties SystemProperties::Music()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Music();
}

inline Windows::Storage::SystemPhotoProperties SystemProperties::Photo()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Photo();
}

inline Windows::Storage::SystemVideoProperties SystemProperties::Video()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Video();
}

inline Windows::Storage::SystemImageProperties SystemProperties::Image()
{
    return get_activation_factory<SystemProperties, Windows::Storage::ISystemProperties>().Image();
}

template <typename L> ApplicationDataSetVersionHandler::ApplicationDataSetVersionHandler(L handler) :
    ApplicationDataSetVersionHandler(impl::make_delegate<ApplicationDataSetVersionHandler>(std::forward<L>(handler)))
{}

template <typename F> ApplicationDataSetVersionHandler::ApplicationDataSetVersionHandler(F* handler) :
    ApplicationDataSetVersionHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> ApplicationDataSetVersionHandler::ApplicationDataSetVersionHandler(O* object, M method) :
    ApplicationDataSetVersionHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void ApplicationDataSetVersionHandler::operator()(Windows::Storage::SetVersionRequest const& setVersionRequest) const
{
    check_hresult((*(abi_t<ApplicationDataSetVersionHandler>**)this)->Invoke(get_abi(setVersionRequest)));
}

template <typename L> StreamedFileDataRequestedHandler::StreamedFileDataRequestedHandler(L handler) :
    StreamedFileDataRequestedHandler(impl::make_delegate<StreamedFileDataRequestedHandler>(std::forward<L>(handler)))
{}

template <typename F> StreamedFileDataRequestedHandler::StreamedFileDataRequestedHandler(F* handler) :
    StreamedFileDataRequestedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> StreamedFileDataRequestedHandler::StreamedFileDataRequestedHandler(O* object, M method) :
    StreamedFileDataRequestedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void StreamedFileDataRequestedHandler::operator()(Windows::Storage::StreamedFileDataRequest const& stream) const
{
    check_hresult((*(abi_t<StreamedFileDataRequestedHandler>**)this)->Invoke(get_abi(stream)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::IApplicationData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IApplicationData> {};

template<> struct hash<winrt::Windows::Storage::IApplicationData2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IApplicationData2> {};

template<> struct hash<winrt::Windows::Storage::IApplicationData3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IApplicationData3> {};

template<> struct hash<winrt::Windows::Storage::IApplicationDataContainer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IApplicationDataContainer> {};

template<> struct hash<winrt::Windows::Storage::IApplicationDataStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IApplicationDataStatics> {};

template<> struct hash<winrt::Windows::Storage::IApplicationDataStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IApplicationDataStatics2> {};

template<> struct hash<winrt::Windows::Storage::ICachedFileManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ICachedFileManagerStatics> {};

template<> struct hash<winrt::Windows::Storage::IDownloadsFolderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IDownloadsFolderStatics> {};

template<> struct hash<winrt::Windows::Storage::IDownloadsFolderStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IDownloadsFolderStatics2> {};

template<> struct hash<winrt::Windows::Storage::IFileIOStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IFileIOStatics> {};

template<> struct hash<winrt::Windows::Storage::IKnownFoldersCameraRollStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IKnownFoldersCameraRollStatics> {};

template<> struct hash<winrt::Windows::Storage::IKnownFoldersPlaylistsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IKnownFoldersPlaylistsStatics> {};

template<> struct hash<winrt::Windows::Storage::IKnownFoldersSavedPicturesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IKnownFoldersSavedPicturesStatics> {};

template<> struct hash<winrt::Windows::Storage::IKnownFoldersStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IKnownFoldersStatics> {};

template<> struct hash<winrt::Windows::Storage::IKnownFoldersStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IKnownFoldersStatics2> {};

template<> struct hash<winrt::Windows::Storage::IKnownFoldersStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IKnownFoldersStatics3> {};

template<> struct hash<winrt::Windows::Storage::IPathIOStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IPathIOStatics> {};

template<> struct hash<winrt::Windows::Storage::ISetVersionDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISetVersionDeferral> {};

template<> struct hash<winrt::Windows::Storage::ISetVersionRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISetVersionRequest> {};

template<> struct hash<winrt::Windows::Storage::IStorageFile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageFile> {};

template<> struct hash<winrt::Windows::Storage::IStorageFile2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageFile2> {};

template<> struct hash<winrt::Windows::Storage::IStorageFilePropertiesWithAvailability> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageFilePropertiesWithAvailability> {};

template<> struct hash<winrt::Windows::Storage::IStorageFileStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageFileStatics> {};

template<> struct hash<winrt::Windows::Storage::IStorageFolder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageFolder> {};

template<> struct hash<winrt::Windows::Storage::IStorageFolder2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageFolder2> {};

template<> struct hash<winrt::Windows::Storage::IStorageFolderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageFolderStatics> {};

template<> struct hash<winrt::Windows::Storage::IStorageItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageItem> {};

template<> struct hash<winrt::Windows::Storage::IStorageItem2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageItem2> {};

template<> struct hash<winrt::Windows::Storage::IStorageItemProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageItemProperties> {};

template<> struct hash<winrt::Windows::Storage::IStorageItemProperties2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageItemProperties2> {};

template<> struct hash<winrt::Windows::Storage::IStorageItemPropertiesWithProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageItemPropertiesWithProvider> {};

template<> struct hash<winrt::Windows::Storage::IStorageLibrary> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageLibrary> {};

template<> struct hash<winrt::Windows::Storage::IStorageLibrary2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageLibrary2> {};

template<> struct hash<winrt::Windows::Storage::IStorageLibraryChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageLibraryChange> {};

template<> struct hash<winrt::Windows::Storage::IStorageLibraryChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageLibraryChangeReader> {};

template<> struct hash<winrt::Windows::Storage::IStorageLibraryChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageLibraryChangeTracker> {};

template<> struct hash<winrt::Windows::Storage::IStorageLibraryStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageLibraryStatics> {};

template<> struct hash<winrt::Windows::Storage::IStorageLibraryStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageLibraryStatics2> {};

template<> struct hash<winrt::Windows::Storage::IStorageProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageProvider> {};

template<> struct hash<winrt::Windows::Storage::IStorageStreamTransaction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStorageStreamTransaction> {};

template<> struct hash<winrt::Windows::Storage::IStreamedFileDataRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::IStreamedFileDataRequest> {};

template<> struct hash<winrt::Windows::Storage::ISystemAudioProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemAudioProperties> {};

template<> struct hash<winrt::Windows::Storage::ISystemGPSProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemGPSProperties> {};

template<> struct hash<winrt::Windows::Storage::ISystemImageProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemImageProperties> {};

template<> struct hash<winrt::Windows::Storage::ISystemMediaProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemMediaProperties> {};

template<> struct hash<winrt::Windows::Storage::ISystemMusicProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemMusicProperties> {};

template<> struct hash<winrt::Windows::Storage::ISystemPhotoProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemPhotoProperties> {};

template<> struct hash<winrt::Windows::Storage::ISystemProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemProperties> {};

template<> struct hash<winrt::Windows::Storage::ISystemVideoProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ISystemVideoProperties> {};

template<> struct hash<winrt::Windows::Storage::ApplicationData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ApplicationData> {};

template<> struct hash<winrt::Windows::Storage::ApplicationDataCompositeValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ApplicationDataCompositeValue> {};

template<> struct hash<winrt::Windows::Storage::ApplicationDataContainer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ApplicationDataContainer> {};

template<> struct hash<winrt::Windows::Storage::ApplicationDataContainerSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::ApplicationDataContainerSettings> {};

template<> struct hash<winrt::Windows::Storage::CachedFileManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::CachedFileManager> {};

template<> struct hash<winrt::Windows::Storage::DownloadsFolder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::DownloadsFolder> {};

template<> struct hash<winrt::Windows::Storage::FileIO> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileIO> {};

template<> struct hash<winrt::Windows::Storage::KnownFolders> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::KnownFolders> {};

template<> struct hash<winrt::Windows::Storage::PathIO> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::PathIO> {};

template<> struct hash<winrt::Windows::Storage::SetVersionDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SetVersionDeferral> {};

template<> struct hash<winrt::Windows::Storage::SetVersionRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SetVersionRequest> {};

template<> struct hash<winrt::Windows::Storage::StorageFile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageFile> {};

template<> struct hash<winrt::Windows::Storage::StorageFolder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageFolder> {};

template<> struct hash<winrt::Windows::Storage::StorageLibrary> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageLibrary> {};

template<> struct hash<winrt::Windows::Storage::StorageLibraryChange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageLibraryChange> {};

template<> struct hash<winrt::Windows::Storage::StorageLibraryChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageLibraryChangeReader> {};

template<> struct hash<winrt::Windows::Storage::StorageLibraryChangeTracker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageLibraryChangeTracker> {};

template<> struct hash<winrt::Windows::Storage::StorageProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageProvider> {};

template<> struct hash<winrt::Windows::Storage::StorageStreamTransaction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StorageStreamTransaction> {};

template<> struct hash<winrt::Windows::Storage::StreamedFileDataRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::StreamedFileDataRequest> {};

template<> struct hash<winrt::Windows::Storage::SystemAudioProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemAudioProperties> {};

template<> struct hash<winrt::Windows::Storage::SystemGPSProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemGPSProperties> {};

template<> struct hash<winrt::Windows::Storage::SystemImageProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemImageProperties> {};

template<> struct hash<winrt::Windows::Storage::SystemMediaProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemMediaProperties> {};

template<> struct hash<winrt::Windows::Storage::SystemMusicProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemMusicProperties> {};

template<> struct hash<winrt::Windows::Storage::SystemPhotoProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemPhotoProperties> {};

template<> struct hash<winrt::Windows::Storage::SystemProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemProperties> {};

template<> struct hash<winrt::Windows::Storage::SystemVideoProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::SystemVideoProperties> {};

}

WINRT_WARNING_POP
