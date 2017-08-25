// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.FileProperties.1.h"
#include "winrt/impl/Windows.Storage.Provider.1.h"
#include "winrt/impl/Windows.Storage.Search.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Storage.1.h"

WINRT_EXPORT namespace winrt::Windows::Storage {

struct ApplicationDataSetVersionHandler : Windows::Foundation::IUnknown
{
    ApplicationDataSetVersionHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ApplicationDataSetVersionHandler(L lambda);
    template <typename F> ApplicationDataSetVersionHandler(F* function);
    template <typename O, typename M> ApplicationDataSetVersionHandler(O* object, M method);
    void operator()(Windows::Storage::SetVersionRequest const& setVersionRequest) const;
};

struct StreamedFileDataRequestedHandler : Windows::Foundation::IUnknown
{
    StreamedFileDataRequestedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> StreamedFileDataRequestedHandler(L lambda);
    template <typename F> StreamedFileDataRequestedHandler(F* function);
    template <typename O, typename M> StreamedFileDataRequestedHandler(O* object, M method);
    void operator()(Windows::Storage::StreamedFileDataRequest const& stream) const;
};

struct WINRT_EBO ApplicationData :
    Windows::Storage::IApplicationData,
    impl::require<ApplicationData, Windows::Storage::IApplicationData2, Windows::Storage::IApplicationData3>
{
    ApplicationData(std::nullptr_t) noexcept {}
    static Windows::Storage::ApplicationData Current();
    static Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> GetForUserAsync(Windows::System::User const& user);
};

struct WINRT_EBO ApplicationDataCompositeValue :
    Windows::Foundation::Collections::IPropertySet
{
    ApplicationDataCompositeValue(std::nullptr_t) noexcept {}
    ApplicationDataCompositeValue();
};

struct WINRT_EBO ApplicationDataContainer :
    Windows::Storage::IApplicationDataContainer
{
    ApplicationDataContainer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ApplicationDataContainerSettings :
    Windows::Foundation::Collections::IPropertySet
{
    ApplicationDataContainerSettings(std::nullptr_t) noexcept {}
};

struct CachedFileManager
{
    CachedFileManager() = delete;
    static void DeferUpdates(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Provider::FileUpdateStatus> CompleteUpdatesAsync(Windows::Storage::IStorageFile const& file);
};

struct DownloadsFolder
{
    DownloadsFolder() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileAsync(param::hstring const& desiredName);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderAsync(param::hstring const& desiredName);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option);
};

struct FileIO
{
    FileIO() = delete;
    static Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents);
    static Windows::Foundation::IAsyncAction WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents);
    static Windows::Foundation::IAsyncAction AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines);
    static Windows::Foundation::IAsyncAction WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines);
    static Windows::Foundation::IAsyncAction AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ReadBufferAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncAction WriteBufferAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::IBuffer const& buffer);
    static Windows::Foundation::IAsyncAction WriteBytesAsync(Windows::Storage::IStorageFile const& file, array_view<uint8_t const> buffer);
};

struct KnownFolders
{
    KnownFolders() = delete;
    static Windows::Storage::StorageFolder CameraRoll();
    static Windows::Storage::StorageFolder Playlists();
    static Windows::Storage::StorageFolder SavedPictures();
    static Windows::Storage::StorageFolder MusicLibrary();
    static Windows::Storage::StorageFolder PicturesLibrary();
    static Windows::Storage::StorageFolder VideosLibrary();
    static Windows::Storage::StorageFolder DocumentsLibrary();
    static Windows::Storage::StorageFolder HomeGroup();
    static Windows::Storage::StorageFolder RemovableDevices();
    static Windows::Storage::StorageFolder MediaServerDevices();
    static Windows::Storage::StorageFolder Objects3D();
    static Windows::Storage::StorageFolder AppCaptures();
    static Windows::Storage::StorageFolder RecordedCalls();
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetFolderForUserAsync(Windows::System::User const& user, Windows::Storage::KnownFolderId const& folderId);
};

struct PathIO
{
    PathIO() = delete;
    static Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(param::hstring const& absolutePath);
    static Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents);
    static Windows::Foundation::IAsyncAction WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents);
    static Windows::Foundation::IAsyncAction AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(param::hstring const& absolutePath);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines);
    static Windows::Foundation::IAsyncAction WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncAction AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines);
    static Windows::Foundation::IAsyncAction AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ReadBufferAsync(param::hstring const& absolutePath);
    static Windows::Foundation::IAsyncAction WriteBufferAsync(param::hstring const& absolutePath, Windows::Storage::Streams::IBuffer const& buffer);
    static Windows::Foundation::IAsyncAction WriteBytesAsync(param::hstring const& absolutePath, array_view<uint8_t const> buffer);
};

struct WINRT_EBO SetVersionDeferral :
    Windows::Storage::ISetVersionDeferral
{
    SetVersionDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SetVersionRequest :
    Windows::Storage::ISetVersionRequest
{
    SetVersionRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageFile :
    Windows::Storage::IStorageFile,
    impl::require<StorageFile, Windows::Storage::IStorageFile2, Windows::Storage::IStorageFilePropertiesWithAvailability, Windows::Storage::IStorageItem2, Windows::Storage::IStorageItemProperties, Windows::Storage::IStorageItemProperties2, Windows::Storage::IStorageItemPropertiesWithProvider>
{
    StorageFile(std::nullptr_t) noexcept {}
    using impl::consume_t<StorageFile, Windows::Storage::IStorageFile2>::OpenAsync;
    using Windows::Storage::IStorageFile::OpenAsync;
    using impl::consume_t<StorageFile, Windows::Storage::IStorageFile2>::OpenTransactedWriteAsync;
    using Windows::Storage::IStorageFile::OpenTransactedWriteAsync;
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetFileFromPathAsync(param::hstring const& path);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetFileFromApplicationUriAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateStreamedFileAsync(param::hstring const& displayNameWithExtension, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ReplaceWithStreamedFileAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateStreamedFileFromUriAsync(param::hstring const& displayNameWithExtension, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ReplaceWithStreamedFileFromUriAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail);
};

struct WINRT_EBO StorageFolder :
    Windows::Storage::IStorageFolder,
    impl::require<StorageFolder, Windows::Storage::IStorageFolder2, Windows::Storage::IStorageItem2, Windows::Storage::IStorageItemProperties, Windows::Storage::IStorageItemProperties2, Windows::Storage::IStorageItemPropertiesWithProvider, Windows::Storage::Search::IStorageFolderQueryOperations>
{
    StorageFolder(std::nullptr_t) noexcept {}
    using impl::consume_t<StorageFolder, Windows::Storage::Search::IStorageFolderQueryOperations>::GetFilesAsync;
    using Windows::Storage::IStorageFolder::GetFilesAsync;
    using impl::consume_t<StorageFolder, Windows::Storage::Search::IStorageFolderQueryOperations>::GetFoldersAsync;
    using Windows::Storage::IStorageFolder::GetFoldersAsync;
    using impl::consume_t<StorageFolder, Windows::Storage::Search::IStorageFolderQueryOperations>::GetItemsAsync;
    using Windows::Storage::IStorageFolder::GetItemsAsync;
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetFolderFromPathAsync(param::hstring const& path);
};

struct WINRT_EBO StorageLibrary :
    Windows::Storage::IStorageLibrary,
    impl::require<StorageLibrary, Windows::Storage::IStorageLibrary2>
{
    StorageLibrary(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> GetLibraryAsync(Windows::Storage::KnownLibraryId const& libraryId);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> GetLibraryForUserAsync(Windows::System::User const& user, Windows::Storage::KnownLibraryId const& libraryId);
};

struct WINRT_EBO StorageLibraryChange :
    Windows::Storage::IStorageLibraryChange
{
    StorageLibraryChange(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageLibraryChangeReader :
    Windows::Storage::IStorageLibraryChangeReader
{
    StorageLibraryChangeReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageLibraryChangeTracker :
    Windows::Storage::IStorageLibraryChangeTracker
{
    StorageLibraryChangeTracker(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageProvider :
    Windows::Storage::IStorageProvider
{
    StorageProvider(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageStreamTransaction :
    Windows::Storage::IStorageStreamTransaction
{
    StorageStreamTransaction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StreamedFileDataRequest :
    Windows::Storage::Streams::IOutputStream,
    impl::require<StreamedFileDataRequest, Windows::Storage::IStreamedFileDataRequest>
{
    StreamedFileDataRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemAudioProperties :
    Windows::Storage::ISystemAudioProperties
{
    SystemAudioProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemGPSProperties :
    Windows::Storage::ISystemGPSProperties
{
    SystemGPSProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemImageProperties :
    Windows::Storage::ISystemImageProperties
{
    SystemImageProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemMediaProperties :
    Windows::Storage::ISystemMediaProperties
{
    SystemMediaProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemMusicProperties :
    Windows::Storage::ISystemMusicProperties
{
    SystemMusicProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemPhotoProperties :
    Windows::Storage::ISystemPhotoProperties
{
    SystemPhotoProperties(std::nullptr_t) noexcept {}
};

struct SystemProperties
{
    SystemProperties() = delete;
    static hstring Author();
    static hstring Comment();
    static hstring ItemNameDisplay();
    static hstring Keywords();
    static hstring Rating();
    static hstring Title();
    static Windows::Storage::SystemAudioProperties Audio();
    static Windows::Storage::SystemGPSProperties GPS();
    static Windows::Storage::SystemMediaProperties Media();
    static Windows::Storage::SystemMusicProperties Music();
    static Windows::Storage::SystemPhotoProperties Photo();
    static Windows::Storage::SystemVideoProperties Video();
    static Windows::Storage::SystemImageProperties Image();
};

struct WINRT_EBO SystemVideoProperties :
    Windows::Storage::ISystemVideoProperties
{
    SystemVideoProperties(std::nullptr_t) noexcept {}
};

}
