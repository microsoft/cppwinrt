// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties {

enum class ThumbnailMode;
enum class ThumbnailOptions : unsigned;
struct BasicProperties;
struct StorageItemContentProperties;
struct StorageItemThumbnail;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

enum class FileUpdateStatus;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Search {

enum class CommonFileQuery;
enum class CommonFolderQuery;
enum class IndexedState;
struct QueryOptions;
struct StorageFileQueryResult;
struct StorageFolderQueryResult;
struct StorageItemQueryResult;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

enum class UnicodeEncoding;
struct IBuffer;
struct IInputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamReference;
struct IRandomAccessStreamWithContentType;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

enum class ApplicationDataCreateDisposition
{
    Always = 0,
    Existing = 1,
};

enum class ApplicationDataLocality
{
    Local = 0,
    Roaming = 1,
    Temporary = 2,
    LocalCache = 3,
};

enum class CreationCollisionOption
{
    GenerateUniqueName = 0,
    ReplaceExisting = 1,
    FailIfExists = 2,
    OpenIfExists = 3,
};

enum class FileAccessMode
{
    Read = 0,
    ReadWrite = 1,
};

enum class FileAttributes : unsigned
{
    Normal = 0x0,
    ReadOnly = 0x1,
    Directory = 0x10,
    Archive = 0x20,
    Temporary = 0x100,
    LocallyIncomplete = 0x200,
};

DEFINE_ENUM_FLAG_OPERATORS(FileAttributes)

enum class KnownFolderId
{
    AppCaptures = 0,
    CameraRoll = 1,
    DocumentsLibrary = 2,
    HomeGroup = 3,
    MediaServerDevices = 4,
    MusicLibrary = 5,
    Objects3D = 6,
    PicturesLibrary = 7,
    Playlists = 8,
    RecordedCalls = 9,
    RemovableDevices = 10,
    SavedPictures = 11,
    Screenshots = 12,
    VideosLibrary = 13,
    AllAppMods = 14,
    CurrentAppMods = 15,
};

enum class KnownLibraryId
{
    Music = 0,
    Pictures = 1,
    Videos = 2,
    Documents = 3,
};

enum class NameCollisionOption
{
    GenerateUniqueName = 0,
    ReplaceExisting = 1,
    FailIfExists = 2,
};

enum class StorageDeleteOption
{
    Default = 0,
    PermanentDelete = 1,
};

enum class StorageItemTypes : unsigned
{
    None = 0x0,
    File = 0x1,
    Folder = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(StorageItemTypes)

enum class StorageLibraryChangeType
{
    Created = 0,
    Deleted = 1,
    MovedOrRenamed = 2,
    ContentsChanged = 3,
    MovedOutOfLibrary = 4,
    MovedIntoLibrary = 5,
    ContentsReplaced = 6,
    IndexingStatusChanged = 7,
    EncryptionChanged = 8,
    ChangeTrackingLost = 9,
};

enum class StorageOpenOptions : unsigned
{
    None = 0x0,
    AllowOnlyReaders = 0x1,
    AllowReadersAndWriters = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(StorageOpenOptions)

enum class StreamedFileFailureMode
{
    Failed = 0,
    CurrentlyUnavailable = 1,
    Incomplete = 2,
};

struct IApplicationData;
struct IApplicationData2;
struct IApplicationData3;
struct IApplicationDataContainer;
struct IApplicationDataStatics;
struct IApplicationDataStatics2;
struct ICachedFileManagerStatics;
struct IDownloadsFolderStatics;
struct IDownloadsFolderStatics2;
struct IFileIOStatics;
struct IKnownFoldersCameraRollStatics;
struct IKnownFoldersPlaylistsStatics;
struct IKnownFoldersSavedPicturesStatics;
struct IKnownFoldersStatics;
struct IKnownFoldersStatics2;
struct IKnownFoldersStatics3;
struct IPathIOStatics;
struct ISetVersionDeferral;
struct ISetVersionRequest;
struct IStorageFile;
struct IStorageFile2;
struct IStorageFilePropertiesWithAvailability;
struct IStorageFileStatics;
struct IStorageFolder;
struct IStorageFolder2;
struct IStorageFolderStatics;
struct IStorageItem;
struct IStorageItem2;
struct IStorageItemProperties;
struct IStorageItemProperties2;
struct IStorageItemPropertiesWithProvider;
struct IStorageLibrary;
struct IStorageLibrary2;
struct IStorageLibraryChange;
struct IStorageLibraryChangeReader;
struct IStorageLibraryChangeTracker;
struct IStorageLibraryStatics;
struct IStorageLibraryStatics2;
struct IStorageProvider;
struct IStorageStreamTransaction;
struct IStreamedFileDataRequest;
struct ISystemAudioProperties;
struct ISystemGPSProperties;
struct ISystemImageProperties;
struct ISystemMediaProperties;
struct ISystemMusicProperties;
struct ISystemPhotoProperties;
struct ISystemProperties;
struct ISystemVideoProperties;
struct ApplicationData;
struct ApplicationDataCompositeValue;
struct ApplicationDataContainer;
struct ApplicationDataContainerSettings;
struct CachedFileManager;
struct DownloadsFolder;
struct FileIO;
struct KnownFolders;
struct PathIO;
struct SetVersionDeferral;
struct SetVersionRequest;
struct StorageFile;
struct StorageFolder;
struct StorageLibrary;
struct StorageLibraryChange;
struct StorageLibraryChangeReader;
struct StorageLibraryChangeTracker;
struct StorageProvider;
struct StorageStreamTransaction;
struct StreamedFileDataRequest;
struct SystemAudioProperties;
struct SystemGPSProperties;
struct SystemImageProperties;
struct SystemMediaProperties;
struct SystemMusicProperties;
struct SystemPhotoProperties;
struct SystemProperties;
struct SystemVideoProperties;
struct ApplicationDataSetVersionHandler;
struct StreamedFileDataRequestedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Storage::IApplicationData>{ using type = interface_category; };
template <> struct category<Windows::Storage::IApplicationData2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IApplicationData3>{ using type = interface_category; };
template <> struct category<Windows::Storage::IApplicationDataContainer>{ using type = interface_category; };
template <> struct category<Windows::Storage::IApplicationDataStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IApplicationDataStatics2>{ using type = interface_category; };
template <> struct category<Windows::Storage::ICachedFileManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IDownloadsFolderStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IDownloadsFolderStatics2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IFileIOStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IKnownFoldersCameraRollStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IKnownFoldersPlaylistsStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IKnownFoldersSavedPicturesStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IKnownFoldersStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IKnownFoldersStatics2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IKnownFoldersStatics3>{ using type = interface_category; };
template <> struct category<Windows::Storage::IPathIOStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISetVersionDeferral>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISetVersionRequest>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageFile>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageFile2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageFilePropertiesWithAvailability>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageFileStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageFolder>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageFolder2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageFolderStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageItem>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageItem2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageItemProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageItemProperties2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageItemPropertiesWithProvider>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageLibrary>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageLibrary2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageLibraryChange>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageLibraryChangeReader>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageLibraryChangeTracker>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageLibraryStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageLibraryStatics2>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageProvider>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStorageStreamTransaction>{ using type = interface_category; };
template <> struct category<Windows::Storage::IStreamedFileDataRequest>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemAudioProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemGPSProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemImageProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemMediaProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemMusicProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemPhotoProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ISystemVideoProperties>{ using type = interface_category; };
template <> struct category<Windows::Storage::ApplicationData>{ using type = class_category; };
template <> struct category<Windows::Storage::ApplicationDataCompositeValue>{ using type = class_category; };
template <> struct category<Windows::Storage::ApplicationDataContainer>{ using type = class_category; };
template <> struct category<Windows::Storage::ApplicationDataContainerSettings>{ using type = class_category; };
template <> struct category<Windows::Storage::CachedFileManager>{ using type = class_category; };
template <> struct category<Windows::Storage::DownloadsFolder>{ using type = class_category; };
template <> struct category<Windows::Storage::FileIO>{ using type = class_category; };
template <> struct category<Windows::Storage::KnownFolders>{ using type = class_category; };
template <> struct category<Windows::Storage::PathIO>{ using type = class_category; };
template <> struct category<Windows::Storage::SetVersionDeferral>{ using type = class_category; };
template <> struct category<Windows::Storage::SetVersionRequest>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageFile>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageFolder>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageLibrary>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageLibraryChange>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageLibraryChangeReader>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageLibraryChangeTracker>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageProvider>{ using type = class_category; };
template <> struct category<Windows::Storage::StorageStreamTransaction>{ using type = class_category; };
template <> struct category<Windows::Storage::StreamedFileDataRequest>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemAudioProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemGPSProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemImageProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemMediaProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemMusicProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemPhotoProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::SystemVideoProperties>{ using type = class_category; };
template <> struct category<Windows::Storage::ApplicationDataCreateDisposition>{ using type = enum_category; };
template <> struct category<Windows::Storage::ApplicationDataLocality>{ using type = enum_category; };
template <> struct category<Windows::Storage::CreationCollisionOption>{ using type = enum_category; };
template <> struct category<Windows::Storage::FileAccessMode>{ using type = enum_category; };
template <> struct category<Windows::Storage::FileAttributes>{ using type = enum_category; };
template <> struct category<Windows::Storage::KnownFolderId>{ using type = enum_category; };
template <> struct category<Windows::Storage::KnownLibraryId>{ using type = enum_category; };
template <> struct category<Windows::Storage::NameCollisionOption>{ using type = enum_category; };
template <> struct category<Windows::Storage::StorageDeleteOption>{ using type = enum_category; };
template <> struct category<Windows::Storage::StorageItemTypes>{ using type = enum_category; };
template <> struct category<Windows::Storage::StorageLibraryChangeType>{ using type = enum_category; };
template <> struct category<Windows::Storage::StorageOpenOptions>{ using type = enum_category; };
template <> struct category<Windows::Storage::StreamedFileFailureMode>{ using type = enum_category; };
template <> struct category<Windows::Storage::ApplicationDataSetVersionHandler>{ using type = delegate_category; };
template <> struct category<Windows::Storage::StreamedFileDataRequestedHandler>{ using type = delegate_category; };
template <> struct name<Windows::Storage::IApplicationData>{ static constexpr auto & value{ L"Windows.Storage.IApplicationData" }; };
template <> struct name<Windows::Storage::IApplicationData2>{ static constexpr auto & value{ L"Windows.Storage.IApplicationData2" }; };
template <> struct name<Windows::Storage::IApplicationData3>{ static constexpr auto & value{ L"Windows.Storage.IApplicationData3" }; };
template <> struct name<Windows::Storage::IApplicationDataContainer>{ static constexpr auto & value{ L"Windows.Storage.IApplicationDataContainer" }; };
template <> struct name<Windows::Storage::IApplicationDataStatics>{ static constexpr auto & value{ L"Windows.Storage.IApplicationDataStatics" }; };
template <> struct name<Windows::Storage::IApplicationDataStatics2>{ static constexpr auto & value{ L"Windows.Storage.IApplicationDataStatics2" }; };
template <> struct name<Windows::Storage::ICachedFileManagerStatics>{ static constexpr auto & value{ L"Windows.Storage.ICachedFileManagerStatics" }; };
template <> struct name<Windows::Storage::IDownloadsFolderStatics>{ static constexpr auto & value{ L"Windows.Storage.IDownloadsFolderStatics" }; };
template <> struct name<Windows::Storage::IDownloadsFolderStatics2>{ static constexpr auto & value{ L"Windows.Storage.IDownloadsFolderStatics2" }; };
template <> struct name<Windows::Storage::IFileIOStatics>{ static constexpr auto & value{ L"Windows.Storage.IFileIOStatics" }; };
template <> struct name<Windows::Storage::IKnownFoldersCameraRollStatics>{ static constexpr auto & value{ L"Windows.Storage.IKnownFoldersCameraRollStatics" }; };
template <> struct name<Windows::Storage::IKnownFoldersPlaylistsStatics>{ static constexpr auto & value{ L"Windows.Storage.IKnownFoldersPlaylistsStatics" }; };
template <> struct name<Windows::Storage::IKnownFoldersSavedPicturesStatics>{ static constexpr auto & value{ L"Windows.Storage.IKnownFoldersSavedPicturesStatics" }; };
template <> struct name<Windows::Storage::IKnownFoldersStatics>{ static constexpr auto & value{ L"Windows.Storage.IKnownFoldersStatics" }; };
template <> struct name<Windows::Storage::IKnownFoldersStatics2>{ static constexpr auto & value{ L"Windows.Storage.IKnownFoldersStatics2" }; };
template <> struct name<Windows::Storage::IKnownFoldersStatics3>{ static constexpr auto & value{ L"Windows.Storage.IKnownFoldersStatics3" }; };
template <> struct name<Windows::Storage::IPathIOStatics>{ static constexpr auto & value{ L"Windows.Storage.IPathIOStatics" }; };
template <> struct name<Windows::Storage::ISetVersionDeferral>{ static constexpr auto & value{ L"Windows.Storage.ISetVersionDeferral" }; };
template <> struct name<Windows::Storage::ISetVersionRequest>{ static constexpr auto & value{ L"Windows.Storage.ISetVersionRequest" }; };
template <> struct name<Windows::Storage::IStorageFile>{ static constexpr auto & value{ L"Windows.Storage.IStorageFile" }; };
template <> struct name<Windows::Storage::IStorageFile2>{ static constexpr auto & value{ L"Windows.Storage.IStorageFile2" }; };
template <> struct name<Windows::Storage::IStorageFilePropertiesWithAvailability>{ static constexpr auto & value{ L"Windows.Storage.IStorageFilePropertiesWithAvailability" }; };
template <> struct name<Windows::Storage::IStorageFileStatics>{ static constexpr auto & value{ L"Windows.Storage.IStorageFileStatics" }; };
template <> struct name<Windows::Storage::IStorageFolder>{ static constexpr auto & value{ L"Windows.Storage.IStorageFolder" }; };
template <> struct name<Windows::Storage::IStorageFolder2>{ static constexpr auto & value{ L"Windows.Storage.IStorageFolder2" }; };
template <> struct name<Windows::Storage::IStorageFolderStatics>{ static constexpr auto & value{ L"Windows.Storage.IStorageFolderStatics" }; };
template <> struct name<Windows::Storage::IStorageItem>{ static constexpr auto & value{ L"Windows.Storage.IStorageItem" }; };
template <> struct name<Windows::Storage::IStorageItem2>{ static constexpr auto & value{ L"Windows.Storage.IStorageItem2" }; };
template <> struct name<Windows::Storage::IStorageItemProperties>{ static constexpr auto & value{ L"Windows.Storage.IStorageItemProperties" }; };
template <> struct name<Windows::Storage::IStorageItemProperties2>{ static constexpr auto & value{ L"Windows.Storage.IStorageItemProperties2" }; };
template <> struct name<Windows::Storage::IStorageItemPropertiesWithProvider>{ static constexpr auto & value{ L"Windows.Storage.IStorageItemPropertiesWithProvider" }; };
template <> struct name<Windows::Storage::IStorageLibrary>{ static constexpr auto & value{ L"Windows.Storage.IStorageLibrary" }; };
template <> struct name<Windows::Storage::IStorageLibrary2>{ static constexpr auto & value{ L"Windows.Storage.IStorageLibrary2" }; };
template <> struct name<Windows::Storage::IStorageLibraryChange>{ static constexpr auto & value{ L"Windows.Storage.IStorageLibraryChange" }; };
template <> struct name<Windows::Storage::IStorageLibraryChangeReader>{ static constexpr auto & value{ L"Windows.Storage.IStorageLibraryChangeReader" }; };
template <> struct name<Windows::Storage::IStorageLibraryChangeTracker>{ static constexpr auto & value{ L"Windows.Storage.IStorageLibraryChangeTracker" }; };
template <> struct name<Windows::Storage::IStorageLibraryStatics>{ static constexpr auto & value{ L"Windows.Storage.IStorageLibraryStatics" }; };
template <> struct name<Windows::Storage::IStorageLibraryStatics2>{ static constexpr auto & value{ L"Windows.Storage.IStorageLibraryStatics2" }; };
template <> struct name<Windows::Storage::IStorageProvider>{ static constexpr auto & value{ L"Windows.Storage.IStorageProvider" }; };
template <> struct name<Windows::Storage::IStorageStreamTransaction>{ static constexpr auto & value{ L"Windows.Storage.IStorageStreamTransaction" }; };
template <> struct name<Windows::Storage::IStreamedFileDataRequest>{ static constexpr auto & value{ L"Windows.Storage.IStreamedFileDataRequest" }; };
template <> struct name<Windows::Storage::ISystemAudioProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemAudioProperties" }; };
template <> struct name<Windows::Storage::ISystemGPSProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemGPSProperties" }; };
template <> struct name<Windows::Storage::ISystemImageProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemImageProperties" }; };
template <> struct name<Windows::Storage::ISystemMediaProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemMediaProperties" }; };
template <> struct name<Windows::Storage::ISystemMusicProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemMusicProperties" }; };
template <> struct name<Windows::Storage::ISystemPhotoProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemPhotoProperties" }; };
template <> struct name<Windows::Storage::ISystemProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemProperties" }; };
template <> struct name<Windows::Storage::ISystemVideoProperties>{ static constexpr auto & value{ L"Windows.Storage.ISystemVideoProperties" }; };
template <> struct name<Windows::Storage::ApplicationData>{ static constexpr auto & value{ L"Windows.Storage.ApplicationData" }; };
template <> struct name<Windows::Storage::ApplicationDataCompositeValue>{ static constexpr auto & value{ L"Windows.Storage.ApplicationDataCompositeValue" }; };
template <> struct name<Windows::Storage::ApplicationDataContainer>{ static constexpr auto & value{ L"Windows.Storage.ApplicationDataContainer" }; };
template <> struct name<Windows::Storage::ApplicationDataContainerSettings>{ static constexpr auto & value{ L"Windows.Storage.ApplicationDataContainerSettings" }; };
template <> struct name<Windows::Storage::CachedFileManager>{ static constexpr auto & value{ L"Windows.Storage.CachedFileManager" }; };
template <> struct name<Windows::Storage::DownloadsFolder>{ static constexpr auto & value{ L"Windows.Storage.DownloadsFolder" }; };
template <> struct name<Windows::Storage::FileIO>{ static constexpr auto & value{ L"Windows.Storage.FileIO" }; };
template <> struct name<Windows::Storage::KnownFolders>{ static constexpr auto & value{ L"Windows.Storage.KnownFolders" }; };
template <> struct name<Windows::Storage::PathIO>{ static constexpr auto & value{ L"Windows.Storage.PathIO" }; };
template <> struct name<Windows::Storage::SetVersionDeferral>{ static constexpr auto & value{ L"Windows.Storage.SetVersionDeferral" }; };
template <> struct name<Windows::Storage::SetVersionRequest>{ static constexpr auto & value{ L"Windows.Storage.SetVersionRequest" }; };
template <> struct name<Windows::Storage::StorageFile>{ static constexpr auto & value{ L"Windows.Storage.StorageFile" }; };
template <> struct name<Windows::Storage::StorageFolder>{ static constexpr auto & value{ L"Windows.Storage.StorageFolder" }; };
template <> struct name<Windows::Storage::StorageLibrary>{ static constexpr auto & value{ L"Windows.Storage.StorageLibrary" }; };
template <> struct name<Windows::Storage::StorageLibraryChange>{ static constexpr auto & value{ L"Windows.Storage.StorageLibraryChange" }; };
template <> struct name<Windows::Storage::StorageLibraryChangeReader>{ static constexpr auto & value{ L"Windows.Storage.StorageLibraryChangeReader" }; };
template <> struct name<Windows::Storage::StorageLibraryChangeTracker>{ static constexpr auto & value{ L"Windows.Storage.StorageLibraryChangeTracker" }; };
template <> struct name<Windows::Storage::StorageProvider>{ static constexpr auto & value{ L"Windows.Storage.StorageProvider" }; };
template <> struct name<Windows::Storage::StorageStreamTransaction>{ static constexpr auto & value{ L"Windows.Storage.StorageStreamTransaction" }; };
template <> struct name<Windows::Storage::StreamedFileDataRequest>{ static constexpr auto & value{ L"Windows.Storage.StreamedFileDataRequest" }; };
template <> struct name<Windows::Storage::SystemAudioProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemAudioProperties" }; };
template <> struct name<Windows::Storage::SystemGPSProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemGPSProperties" }; };
template <> struct name<Windows::Storage::SystemImageProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemImageProperties" }; };
template <> struct name<Windows::Storage::SystemMediaProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemMediaProperties" }; };
template <> struct name<Windows::Storage::SystemMusicProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemMusicProperties" }; };
template <> struct name<Windows::Storage::SystemPhotoProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemPhotoProperties" }; };
template <> struct name<Windows::Storage::SystemProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemProperties" }; };
template <> struct name<Windows::Storage::SystemVideoProperties>{ static constexpr auto & value{ L"Windows.Storage.SystemVideoProperties" }; };
template <> struct name<Windows::Storage::ApplicationDataCreateDisposition>{ static constexpr auto & value{ L"Windows.Storage.ApplicationDataCreateDisposition" }; };
template <> struct name<Windows::Storage::ApplicationDataLocality>{ static constexpr auto & value{ L"Windows.Storage.ApplicationDataLocality" }; };
template <> struct name<Windows::Storage::CreationCollisionOption>{ static constexpr auto & value{ L"Windows.Storage.CreationCollisionOption" }; };
template <> struct name<Windows::Storage::FileAccessMode>{ static constexpr auto & value{ L"Windows.Storage.FileAccessMode" }; };
template <> struct name<Windows::Storage::FileAttributes>{ static constexpr auto & value{ L"Windows.Storage.FileAttributes" }; };
template <> struct name<Windows::Storage::KnownFolderId>{ static constexpr auto & value{ L"Windows.Storage.KnownFolderId" }; };
template <> struct name<Windows::Storage::KnownLibraryId>{ static constexpr auto & value{ L"Windows.Storage.KnownLibraryId" }; };
template <> struct name<Windows::Storage::NameCollisionOption>{ static constexpr auto & value{ L"Windows.Storage.NameCollisionOption" }; };
template <> struct name<Windows::Storage::StorageDeleteOption>{ static constexpr auto & value{ L"Windows.Storage.StorageDeleteOption" }; };
template <> struct name<Windows::Storage::StorageItemTypes>{ static constexpr auto & value{ L"Windows.Storage.StorageItemTypes" }; };
template <> struct name<Windows::Storage::StorageLibraryChangeType>{ static constexpr auto & value{ L"Windows.Storage.StorageLibraryChangeType" }; };
template <> struct name<Windows::Storage::StorageOpenOptions>{ static constexpr auto & value{ L"Windows.Storage.StorageOpenOptions" }; };
template <> struct name<Windows::Storage::StreamedFileFailureMode>{ static constexpr auto & value{ L"Windows.Storage.StreamedFileFailureMode" }; };
template <> struct name<Windows::Storage::ApplicationDataSetVersionHandler>{ static constexpr auto & value{ L"Windows.Storage.ApplicationDataSetVersionHandler" }; };
template <> struct name<Windows::Storage::StreamedFileDataRequestedHandler>{ static constexpr auto & value{ L"Windows.Storage.StreamedFileDataRequestedHandler" }; };
template <> struct guid<Windows::Storage::IApplicationData>{ static constexpr GUID value{ 0xC3DA6FB7,0xB744,0x4B45,{ 0xB0,0xB8,0x22,0x3A,0x09,0x38,0xD0,0xDC } }; };
template <> struct guid<Windows::Storage::IApplicationData2>{ static constexpr GUID value{ 0x9E65CD69,0x0BA3,0x4E32,{ 0xBE,0x29,0xB0,0x2D,0xE6,0x60,0x76,0x38 } }; };
template <> struct guid<Windows::Storage::IApplicationData3>{ static constexpr GUID value{ 0xDC222CF4,0x2772,0x4C1D,{ 0xAA,0x2C,0xC9,0xF7,0x43,0xAD,0xE8,0xD1 } }; };
template <> struct guid<Windows::Storage::IApplicationDataContainer>{ static constexpr GUID value{ 0xC5AEFD1E,0xF467,0x40BA,{ 0x85,0x66,0xAB,0x64,0x0A,0x44,0x1E,0x1D } }; };
template <> struct guid<Windows::Storage::IApplicationDataStatics>{ static constexpr GUID value{ 0x5612147B,0xE843,0x45E3,{ 0x94,0xD8,0x06,0x16,0x9E,0x3C,0x8E,0x17 } }; };
template <> struct guid<Windows::Storage::IApplicationDataStatics2>{ static constexpr GUID value{ 0xCD606211,0xCF49,0x40A4,{ 0xA4,0x7C,0xC7,0xF0,0xDB,0xBA,0x81,0x07 } }; };
template <> struct guid<Windows::Storage::ICachedFileManagerStatics>{ static constexpr GUID value{ 0x8FFC224A,0xE782,0x495D,{ 0xB6,0x14,0x65,0x4C,0x4F,0x0B,0x23,0x70 } }; };
template <> struct guid<Windows::Storage::IDownloadsFolderStatics>{ static constexpr GUID value{ 0x27862ED0,0x404E,0x47DF,{ 0xA1,0xE2,0xE3,0x73,0x08,0xBE,0x7B,0x37 } }; };
template <> struct guid<Windows::Storage::IDownloadsFolderStatics2>{ static constexpr GUID value{ 0xE93045BD,0x8EF8,0x4F8E,{ 0x8D,0x15,0xAC,0x0E,0x26,0x5F,0x39,0x0D } }; };
template <> struct guid<Windows::Storage::IFileIOStatics>{ static constexpr GUID value{ 0x887411EB,0x7F54,0x4732,{ 0xA5,0xF0,0x5E,0x43,0xE3,0xB8,0xC2,0xF5 } }; };
template <> struct guid<Windows::Storage::IKnownFoldersCameraRollStatics>{ static constexpr GUID value{ 0x5D115E66,0x27E8,0x492F,{ 0xB8,0xE5,0x2F,0x90,0x89,0x6C,0xD4,0xCD } }; };
template <> struct guid<Windows::Storage::IKnownFoldersPlaylistsStatics>{ static constexpr GUID value{ 0xDAD5ECD6,0x306F,0x4D6A,{ 0xB4,0x96,0x46,0xBA,0x8E,0xB1,0x06,0xCE } }; };
template <> struct guid<Windows::Storage::IKnownFoldersSavedPicturesStatics>{ static constexpr GUID value{ 0x055C93EA,0x253D,0x467C,{ 0xB6,0xCA,0xA9,0x7D,0xA1,0xE9,0xA1,0x8D } }; };
template <> struct guid<Windows::Storage::IKnownFoldersStatics>{ static constexpr GUID value{ 0x5A2A7520,0x4802,0x452D,{ 0x9A,0xD9,0x43,0x51,0xAD,0xA7,0xEC,0x35 } }; };
template <> struct guid<Windows::Storage::IKnownFoldersStatics2>{ static constexpr GUID value{ 0x194BD0CD,0xCF6E,0x4D07,{ 0x9D,0x53,0xE9,0x16,0x3A,0x25,0x36,0xE9 } }; };
template <> struct guid<Windows::Storage::IKnownFoldersStatics3>{ static constexpr GUID value{ 0xC5194341,0x9742,0x4ED5,{ 0x82,0x3D,0xFC,0x14,0x01,0x14,0x87,0x64 } }; };
template <> struct guid<Windows::Storage::IPathIOStatics>{ static constexpr GUID value{ 0x0F2F3758,0x8EC7,0x4381,{ 0x92,0x2B,0x8F,0x6C,0x07,0xD2,0x88,0xF3 } }; };
template <> struct guid<Windows::Storage::ISetVersionDeferral>{ static constexpr GUID value{ 0x033508A2,0x781A,0x437A,{ 0xB0,0x78,0x3F,0x32,0xBA,0xDC,0xFE,0x47 } }; };
template <> struct guid<Windows::Storage::ISetVersionRequest>{ static constexpr GUID value{ 0xB9C76B9B,0x1056,0x4E69,{ 0x83,0x30,0x16,0x26,0x19,0x95,0x6F,0x9B } }; };
template <> struct guid<Windows::Storage::IStorageFile>{ static constexpr GUID value{ 0xFA3F6186,0x4214,0x428C,{ 0xA6,0x4C,0x14,0xC9,0xAC,0x73,0x15,0xEA } }; };
template <> struct guid<Windows::Storage::IStorageFile2>{ static constexpr GUID value{ 0x954E4BCF,0x0A77,0x42FB,{ 0xB7,0x77,0xC2,0xED,0x58,0xA5,0x2E,0x44 } }; };
template <> struct guid<Windows::Storage::IStorageFilePropertiesWithAvailability>{ static constexpr GUID value{ 0xAFCBBE9B,0x582B,0x4133,{ 0x96,0x48,0xE4,0x4C,0xA4,0x6E,0xE4,0x91 } }; };
template <> struct guid<Windows::Storage::IStorageFileStatics>{ static constexpr GUID value{ 0x5984C710,0xDAF2,0x43C8,{ 0x8B,0xB4,0xA4,0xD3,0xEA,0xCF,0xD0,0x3F } }; };
template <> struct guid<Windows::Storage::IStorageFolder>{ static constexpr GUID value{ 0x72D1CB78,0xB3EF,0x4F75,{ 0xA8,0x0B,0x6F,0xD9,0xDA,0xE2,0x94,0x4B } }; };
template <> struct guid<Windows::Storage::IStorageFolder2>{ static constexpr GUID value{ 0xE827E8B9,0x08D9,0x4A8E,{ 0xA0,0xAC,0xFE,0x5E,0xD3,0xCB,0xBB,0xD3 } }; };
template <> struct guid<Windows::Storage::IStorageFolderStatics>{ static constexpr GUID value{ 0x08F327FF,0x85D5,0x48B9,{ 0xAE,0xE9,0x28,0x51,0x1E,0x33,0x9F,0x9F } }; };
template <> struct guid<Windows::Storage::IStorageItem>{ static constexpr GUID value{ 0x4207A996,0xCA2F,0x42F7,{ 0xBD,0xE8,0x8B,0x10,0x45,0x7A,0x7F,0x30 } }; };
template <> struct guid<Windows::Storage::IStorageItem2>{ static constexpr GUID value{ 0x53F926D2,0x083C,0x4283,{ 0xB4,0x5B,0x81,0xC0,0x07,0x23,0x7E,0x44 } }; };
template <> struct guid<Windows::Storage::IStorageItemProperties>{ static constexpr GUID value{ 0x86664478,0x8029,0x46FE,{ 0xA7,0x89,0x1C,0x2F,0x3E,0x2F,0xFB,0x5C } }; };
template <> struct guid<Windows::Storage::IStorageItemProperties2>{ static constexpr GUID value{ 0x8E86A951,0x04B9,0x4BD2,{ 0x92,0x9D,0xFE,0xF3,0xF7,0x16,0x21,0xD0 } }; };
template <> struct guid<Windows::Storage::IStorageItemPropertiesWithProvider>{ static constexpr GUID value{ 0x861BF39B,0x6368,0x4DEE,{ 0xB4,0x0E,0x74,0x68,0x4A,0x5C,0xE7,0x14 } }; };
template <> struct guid<Windows::Storage::IStorageLibrary>{ static constexpr GUID value{ 0x1EDD7103,0x0E5E,0x4D6C,{ 0xB5,0xE8,0x93,0x18,0x98,0x3D,0x6A,0x03 } }; };
template <> struct guid<Windows::Storage::IStorageLibrary2>{ static constexpr GUID value{ 0x5B0CE348,0xFCB3,0x4031,{ 0xAF,0xB0,0xA6,0x8D,0x7B,0xD4,0x45,0x34 } }; };
template <> struct guid<Windows::Storage::IStorageLibraryChange>{ static constexpr GUID value{ 0x00980B23,0x2BE2,0x4909,{ 0xAA,0x48,0x15,0x9F,0x52,0x03,0xA5,0x1E } }; };
template <> struct guid<Windows::Storage::IStorageLibraryChangeReader>{ static constexpr GUID value{ 0xF205BC83,0xFCA2,0x41F9,{ 0x89,0x54,0xEE,0x2E,0x99,0x1E,0xB9,0x6F } }; };
template <> struct guid<Windows::Storage::IStorageLibraryChangeTracker>{ static constexpr GUID value{ 0x9E157316,0x6073,0x44F6,{ 0x96,0x81,0x74,0x92,0xD1,0x28,0x6C,0x90 } }; };
template <> struct guid<Windows::Storage::IStorageLibraryStatics>{ static constexpr GUID value{ 0x4208A6DB,0x684A,0x49C6,{ 0x9E,0x59,0x90,0x12,0x1E,0xE0,0x50,0xD6 } }; };
template <> struct guid<Windows::Storage::IStorageLibraryStatics2>{ static constexpr GUID value{ 0xFFB08DDC,0xFA75,0x4695,{ 0xB9,0xD1,0x7F,0x81,0xF9,0x78,0x32,0xE3 } }; };
template <> struct guid<Windows::Storage::IStorageProvider>{ static constexpr GUID value{ 0xE705EED4,0xD478,0x47D6,{ 0xBA,0x46,0x1A,0x8E,0xBE,0x11,0x4A,0x20 } }; };
template <> struct guid<Windows::Storage::IStorageStreamTransaction>{ static constexpr GUID value{ 0xF67CF363,0xA53D,0x4D94,{ 0xAE,0x2C,0x67,0x23,0x2D,0x93,0xAC,0xDD } }; };
template <> struct guid<Windows::Storage::IStreamedFileDataRequest>{ static constexpr GUID value{ 0x1673FCCE,0xDABD,0x4D50,{ 0xBE,0xEE,0x18,0x0B,0x8A,0x81,0x91,0xB6 } }; };
template <> struct guid<Windows::Storage::ISystemAudioProperties>{ static constexpr GUID value{ 0x3F8F38B7,0x308C,0x47E1,{ 0x92,0x4D,0x86,0x45,0x34,0x8E,0x5D,0xB7 } }; };
template <> struct guid<Windows::Storage::ISystemGPSProperties>{ static constexpr GUID value{ 0xC0F46EB4,0xC174,0x481A,{ 0xBC,0x25,0x92,0x19,0x86,0xF6,0xA6,0xF3 } }; };
template <> struct guid<Windows::Storage::ISystemImageProperties>{ static constexpr GUID value{ 0x011B2E30,0x8B39,0x4308,{ 0xBE,0xA1,0xE8,0xAA,0x61,0xE4,0x78,0x26 } }; };
template <> struct guid<Windows::Storage::ISystemMediaProperties>{ static constexpr GUID value{ 0xA42B3316,0x8415,0x40DC,{ 0x8C,0x44,0x98,0x36,0x1D,0x23,0x54,0x30 } }; };
template <> struct guid<Windows::Storage::ISystemMusicProperties>{ static constexpr GUID value{ 0xB47988D5,0x67AF,0x4BC3,{ 0x8D,0x39,0x5B,0x89,0x02,0x20,0x26,0xA1 } }; };
template <> struct guid<Windows::Storage::ISystemPhotoProperties>{ static constexpr GUID value{ 0x4734FC3D,0xAB21,0x4424,{ 0xB7,0x35,0xF4,0x35,0x3A,0x56,0xC8,0xFC } }; };
template <> struct guid<Windows::Storage::ISystemProperties>{ static constexpr GUID value{ 0x917A71C1,0x85F3,0x4DD1,{ 0xB0,0x01,0xA5,0x0B,0xFD,0x21,0xC8,0xD2 } }; };
template <> struct guid<Windows::Storage::ISystemVideoProperties>{ static constexpr GUID value{ 0x2040F715,0x67F8,0x4322,{ 0x9B,0x80,0x4F,0xA9,0xFE,0xFB,0x83,0xE8 } }; };
template <> struct guid<Windows::Storage::ApplicationDataSetVersionHandler>{ static constexpr GUID value{ 0xA05791E6,0xCC9F,0x4687,{ 0xAC,0xAB,0xA3,0x64,0xFD,0x78,0x54,0x63 } }; };
template <> struct guid<Windows::Storage::StreamedFileDataRequestedHandler>{ static constexpr GUID value{ 0xFEF6A824,0x2FE1,0x4D07,{ 0xA3,0x5B,0xB7,0x7C,0x50,0xB5,0xF4,0xCC } }; };
template <> struct default_interface<Windows::Storage::ApplicationData>{ using type = Windows::Storage::IApplicationData; };
template <> struct default_interface<Windows::Storage::ApplicationDataCompositeValue>{ using type = Windows::Foundation::Collections::IPropertySet; };
template <> struct default_interface<Windows::Storage::ApplicationDataContainer>{ using type = Windows::Storage::IApplicationDataContainer; };
template <> struct default_interface<Windows::Storage::ApplicationDataContainerSettings>{ using type = Windows::Foundation::Collections::IPropertySet; };
template <> struct default_interface<Windows::Storage::SetVersionDeferral>{ using type = Windows::Storage::ISetVersionDeferral; };
template <> struct default_interface<Windows::Storage::SetVersionRequest>{ using type = Windows::Storage::ISetVersionRequest; };
template <> struct default_interface<Windows::Storage::StorageFile>{ using type = Windows::Storage::IStorageFile; };
template <> struct default_interface<Windows::Storage::StorageFolder>{ using type = Windows::Storage::IStorageFolder; };
template <> struct default_interface<Windows::Storage::StorageLibrary>{ using type = Windows::Storage::IStorageLibrary; };
template <> struct default_interface<Windows::Storage::StorageLibraryChange>{ using type = Windows::Storage::IStorageLibraryChange; };
template <> struct default_interface<Windows::Storage::StorageLibraryChangeReader>{ using type = Windows::Storage::IStorageLibraryChangeReader; };
template <> struct default_interface<Windows::Storage::StorageLibraryChangeTracker>{ using type = Windows::Storage::IStorageLibraryChangeTracker; };
template <> struct default_interface<Windows::Storage::StorageProvider>{ using type = Windows::Storage::IStorageProvider; };
template <> struct default_interface<Windows::Storage::StorageStreamTransaction>{ using type = Windows::Storage::IStorageStreamTransaction; };
template <> struct default_interface<Windows::Storage::StreamedFileDataRequest>{ using type = Windows::Storage::Streams::IOutputStream; };
template <> struct default_interface<Windows::Storage::SystemAudioProperties>{ using type = Windows::Storage::ISystemAudioProperties; };
template <> struct default_interface<Windows::Storage::SystemGPSProperties>{ using type = Windows::Storage::ISystemGPSProperties; };
template <> struct default_interface<Windows::Storage::SystemImageProperties>{ using type = Windows::Storage::ISystemImageProperties; };
template <> struct default_interface<Windows::Storage::SystemMediaProperties>{ using type = Windows::Storage::ISystemMediaProperties; };
template <> struct default_interface<Windows::Storage::SystemMusicProperties>{ using type = Windows::Storage::ISystemMusicProperties; };
template <> struct default_interface<Windows::Storage::SystemPhotoProperties>{ using type = Windows::Storage::ISystemPhotoProperties; };
template <> struct default_interface<Windows::Storage::SystemVideoProperties>{ using type = Windows::Storage::ISystemVideoProperties; };

template <typename D>
struct consume_Windows_Storage_IApplicationData
{
    uint32_t Version() const;
    Windows::Foundation::IAsyncAction SetVersionAsync(uint32_t desiredVersion, Windows::Storage::ApplicationDataSetVersionHandler const& handler) const;
    Windows::Foundation::IAsyncAction ClearAsync() const;
    Windows::Foundation::IAsyncAction ClearAsync(Windows::Storage::ApplicationDataLocality const& locality) const;
    Windows::Storage::ApplicationDataContainer LocalSettings() const;
    Windows::Storage::ApplicationDataContainer RoamingSettings() const;
    Windows::Storage::StorageFolder LocalFolder() const;
    Windows::Storage::StorageFolder RoamingFolder() const;
    Windows::Storage::StorageFolder TemporaryFolder() const;
    event_token DataChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::Foundation::IInspectable> const& handler) const;
    using DataChanged_revoker = event_revoker<Windows::Storage::IApplicationData>;
    DataChanged_revoker DataChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::Foundation::IInspectable> const& handler) const;
    void DataChanged(event_token const& token) const;
    void SignalDataChanged() const;
    uint64_t RoamingStorageQuota() const;
};
template <> struct consume<Windows::Storage::IApplicationData> { template <typename D> using type = consume_Windows_Storage_IApplicationData<D>; };

template <typename D>
struct consume_Windows_Storage_IApplicationData2
{
    Windows::Storage::StorageFolder LocalCacheFolder() const;
};
template <> struct consume<Windows::Storage::IApplicationData2> { template <typename D> using type = consume_Windows_Storage_IApplicationData2<D>; };

template <typename D>
struct consume_Windows_Storage_IApplicationData3
{
    Windows::Storage::StorageFolder GetPublisherCacheFolder(param::hstring const& folderName) const;
    Windows::Foundation::IAsyncAction ClearPublisherCacheFolderAsync(param::hstring const& folderName) const;
    Windows::Storage::StorageFolder SharedLocalFolder() const;
};
template <> struct consume<Windows::Storage::IApplicationData3> { template <typename D> using type = consume_Windows_Storage_IApplicationData3<D>; };

template <typename D>
struct consume_Windows_Storage_IApplicationDataContainer
{
    hstring Name() const;
    Windows::Storage::ApplicationDataLocality Locality() const;
    Windows::Foundation::Collections::IPropertySet Values() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::ApplicationDataContainer> Containers() const;
    Windows::Storage::ApplicationDataContainer CreateContainer(param::hstring const& name, Windows::Storage::ApplicationDataCreateDisposition const& disposition) const;
    void DeleteContainer(param::hstring const& name) const;
};
template <> struct consume<Windows::Storage::IApplicationDataContainer> { template <typename D> using type = consume_Windows_Storage_IApplicationDataContainer<D>; };

template <typename D>
struct consume_Windows_Storage_IApplicationDataStatics
{
    Windows::Storage::ApplicationData Current() const;
};
template <> struct consume<Windows::Storage::IApplicationDataStatics> { template <typename D> using type = consume_Windows_Storage_IApplicationDataStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IApplicationDataStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> GetForUserAsync(Windows::System::User const& user) const;
};
template <> struct consume<Windows::Storage::IApplicationDataStatics2> { template <typename D> using type = consume_Windows_Storage_IApplicationDataStatics2<D>; };

template <typename D>
struct consume_Windows_Storage_ICachedFileManagerStatics
{
    void DeferUpdates(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Provider::FileUpdateStatus> CompleteUpdatesAsync(Windows::Storage::IStorageFile const& file) const;
};
template <> struct consume<Windows::Storage::ICachedFileManagerStatics> { template <typename D> using type = consume_Windows_Storage_ICachedFileManagerStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IDownloadsFolderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileAsync(param::hstring const& desiredName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderAsync(param::hstring const& desiredName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const;
};
template <> struct consume<Windows::Storage::IDownloadsFolderStatics> { template <typename D> using type = consume_Windows_Storage_IDownloadsFolderStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IDownloadsFolderStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderForUserAsync(Windows::System::User const& user, param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& option) const;
};
template <> struct consume<Windows::Storage::IDownloadsFolderStatics2> { template <typename D> using type = consume_Windows_Storage_IDownloadsFolderStatics2<D>; };

template <typename D>
struct consume_Windows_Storage_IFileIOStatics
{
    Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents) const;
    Windows::Foundation::IAsyncAction WriteTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents) const;
    Windows::Foundation::IAsyncAction AppendTextAsync(Windows::Storage::IStorageFile const& file, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines) const;
    Windows::Foundation::IAsyncAction WriteLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines) const;
    Windows::Foundation::IAsyncAction AppendLinesAsync(Windows::Storage::IStorageFile const& file, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ReadBufferAsync(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncAction WriteBufferAsync(Windows::Storage::IStorageFile const& file, Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Foundation::IAsyncAction WriteBytesAsync(Windows::Storage::IStorageFile const& file, array_view<uint8_t const> buffer) const;
};
template <> struct consume<Windows::Storage::IFileIOStatics> { template <typename D> using type = consume_Windows_Storage_IFileIOStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IKnownFoldersCameraRollStatics
{
    Windows::Storage::StorageFolder CameraRoll() const;
};
template <> struct consume<Windows::Storage::IKnownFoldersCameraRollStatics> { template <typename D> using type = consume_Windows_Storage_IKnownFoldersCameraRollStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IKnownFoldersPlaylistsStatics
{
    Windows::Storage::StorageFolder Playlists() const;
};
template <> struct consume<Windows::Storage::IKnownFoldersPlaylistsStatics> { template <typename D> using type = consume_Windows_Storage_IKnownFoldersPlaylistsStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IKnownFoldersSavedPicturesStatics
{
    Windows::Storage::StorageFolder SavedPictures() const;
};
template <> struct consume<Windows::Storage::IKnownFoldersSavedPicturesStatics> { template <typename D> using type = consume_Windows_Storage_IKnownFoldersSavedPicturesStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IKnownFoldersStatics
{
    Windows::Storage::StorageFolder MusicLibrary() const;
    Windows::Storage::StorageFolder PicturesLibrary() const;
    Windows::Storage::StorageFolder VideosLibrary() const;
    Windows::Storage::StorageFolder DocumentsLibrary() const;
    Windows::Storage::StorageFolder HomeGroup() const;
    Windows::Storage::StorageFolder RemovableDevices() const;
    Windows::Storage::StorageFolder MediaServerDevices() const;
};
template <> struct consume<Windows::Storage::IKnownFoldersStatics> { template <typename D> using type = consume_Windows_Storage_IKnownFoldersStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IKnownFoldersStatics2
{
    Windows::Storage::StorageFolder Objects3D() const;
    Windows::Storage::StorageFolder AppCaptures() const;
    Windows::Storage::StorageFolder RecordedCalls() const;
};
template <> struct consume<Windows::Storage::IKnownFoldersStatics2> { template <typename D> using type = consume_Windows_Storage_IKnownFoldersStatics2<D>; };

template <typename D>
struct consume_Windows_Storage_IKnownFoldersStatics3
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetFolderForUserAsync(Windows::System::User const& user, Windows::Storage::KnownFolderId const& folderId) const;
};
template <> struct consume<Windows::Storage::IKnownFoldersStatics3> { template <typename D> using type = consume_Windows_Storage_IKnownFoldersStatics3<D>; };

template <typename D>
struct consume_Windows_Storage_IPathIOStatics
{
    Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(param::hstring const& absolutePath) const;
    Windows::Foundation::IAsyncOperation<hstring> ReadTextAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents) const;
    Windows::Foundation::IAsyncAction WriteTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents) const;
    Windows::Foundation::IAsyncAction AppendTextAsync(param::hstring const& absolutePath, param::hstring const& contents, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(param::hstring const& absolutePath) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> ReadLinesAsync(param::hstring const& absolutePath, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines) const;
    Windows::Foundation::IAsyncAction WriteLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncAction AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines) const;
    Windows::Foundation::IAsyncAction AppendLinesAsync(param::hstring const& absolutePath, param::async_iterable<hstring> const& lines, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ReadBufferAsync(param::hstring const& absolutePath) const;
    Windows::Foundation::IAsyncAction WriteBufferAsync(param::hstring const& absolutePath, Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Foundation::IAsyncAction WriteBytesAsync(param::hstring const& absolutePath, array_view<uint8_t const> buffer) const;
};
template <> struct consume<Windows::Storage::IPathIOStatics> { template <typename D> using type = consume_Windows_Storage_IPathIOStatics<D>; };

template <typename D>
struct consume_Windows_Storage_ISetVersionDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Storage::ISetVersionDeferral> { template <typename D> using type = consume_Windows_Storage_ISetVersionDeferral<D>; };

template <typename D>
struct consume_Windows_Storage_ISetVersionRequest
{
    uint32_t CurrentVersion() const;
    uint32_t DesiredVersion() const;
    Windows::Storage::SetVersionDeferral GetDeferral() const;
};
template <> struct consume<Windows::Storage::ISetVersionRequest> { template <typename D> using type = consume_Windows_Storage_ISetVersionRequest<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageFile
{
    hstring FileType() const;
    hstring ContentType() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> OpenAsync(Windows::Storage::FileAccessMode const& accessMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> OpenTransactedWriteAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CopyAsync(Windows::Storage::IStorageFolder const& destinationFolder) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CopyAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CopyAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName, Windows::Storage::NameCollisionOption const& option) const;
    Windows::Foundation::IAsyncAction CopyAndReplaceAsync(Windows::Storage::IStorageFile const& fileToReplace) const;
    Windows::Foundation::IAsyncAction MoveAsync(Windows::Storage::IStorageFolder const& destinationFolder) const;
    Windows::Foundation::IAsyncAction MoveAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName) const;
    Windows::Foundation::IAsyncAction MoveAsync(Windows::Storage::IStorageFolder const& destinationFolder, param::hstring const& desiredNewName, Windows::Storage::NameCollisionOption const& option) const;
    Windows::Foundation::IAsyncAction MoveAndReplaceAsync(Windows::Storage::IStorageFile const& fileToReplace) const;
};
template <> struct consume<Windows::Storage::IStorageFile> { template <typename D> using type = consume_Windows_Storage_IStorageFile<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageFile2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> OpenAsync(Windows::Storage::FileAccessMode const& accessMode, Windows::Storage::StorageOpenOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> OpenTransactedWriteAsync(Windows::Storage::StorageOpenOptions const& options) const;
};
template <> struct consume<Windows::Storage::IStorageFile2> { template <typename D> using type = consume_Windows_Storage_IStorageFile2<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageFilePropertiesWithAvailability
{
    bool IsAvailable() const;
};
template <> struct consume<Windows::Storage::IStorageFilePropertiesWithAvailability> { template <typename D> using type = consume_Windows_Storage_IStorageFilePropertiesWithAvailability<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageFileStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetFileFromPathAsync(param::hstring const& path) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetFileFromApplicationUriAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateStreamedFileAsync(param::hstring const& displayNameWithExtension, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ReplaceWithStreamedFileAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Storage::StreamedFileDataRequestedHandler const& dataRequested, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateStreamedFileFromUriAsync(param::hstring const& displayNameWithExtension, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ReplaceWithStreamedFileFromUriAsync(Windows::Storage::IStorageFile const& fileToReplace, Windows::Foundation::Uri const& uri, Windows::Storage::Streams::IRandomAccessStreamReference const& thumbnail) const;
};
template <> struct consume<Windows::Storage::IStorageFileStatics> { template <typename D> using type = consume_Windows_Storage_IStorageFileStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageFolder
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileAsync(param::hstring const& desiredName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CreateFileAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderAsync(param::hstring const& desiredName) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> CreateFolderAsync(param::hstring const& desiredName, Windows::Storage::CreationCollisionOption const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> GetFileAsync(param::hstring const& name) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetFolderAsync(param::hstring const& name) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> GetItemAsync(param::hstring const& name) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> GetFilesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> GetFoldersAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> GetItemsAsync() const;
};
template <> struct consume<Windows::Storage::IStorageFolder> { template <typename D> using type = consume_Windows_Storage_IStorageFolder<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageFolder2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> TryGetItemAsync(param::hstring const& name) const;
};
template <> struct consume<Windows::Storage::IStorageFolder2> { template <typename D> using type = consume_Windows_Storage_IStorageFolder2<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageFolderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetFolderFromPathAsync(param::hstring const& path) const;
};
template <> struct consume<Windows::Storage::IStorageFolderStatics> { template <typename D> using type = consume_Windows_Storage_IStorageFolderStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageItem
{
    Windows::Foundation::IAsyncAction RenameAsync(param::hstring const& desiredName) const;
    Windows::Foundation::IAsyncAction RenameAsync(param::hstring const& desiredName, Windows::Storage::NameCollisionOption const& option) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncAction DeleteAsync(Windows::Storage::StorageDeleteOption const& option) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::BasicProperties> GetBasicPropertiesAsync() const;
    hstring Name() const;
    hstring Path() const;
    Windows::Storage::FileAttributes Attributes() const;
    Windows::Foundation::DateTime DateCreated() const;
    bool IsOfType(Windows::Storage::StorageItemTypes const& type) const;
};
template <> struct consume<Windows::Storage::IStorageItem> { template <typename D> using type = consume_Windows_Storage_IStorageItem<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageItem2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetParentAsync() const;
    bool IsEqual(Windows::Storage::IStorageItem const& item) const;
};
template <> struct consume<Windows::Storage::IStorageItem2> { template <typename D> using type = consume_Windows_Storage_IStorageItem2<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageItemProperties
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions const& options) const;
    hstring DisplayName() const;
    hstring DisplayType() const;
    hstring FolderRelativeId() const;
    Windows::Storage::FileProperties::StorageItemContentProperties Properties() const;
};
template <> struct consume<Windows::Storage::IStorageItemProperties> { template <typename D> using type = consume_Windows_Storage_IStorageItemProperties<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageItemProperties2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions const& options) const;
};
template <> struct consume<Windows::Storage::IStorageItemProperties2> { template <typename D> using type = consume_Windows_Storage_IStorageItemProperties2<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageItemPropertiesWithProvider
{
    Windows::Storage::StorageProvider Provider() const;
};
template <> struct consume<Windows::Storage::IStorageItemPropertiesWithProvider> { template <typename D> using type = consume_Windows_Storage_IStorageItemPropertiesWithProvider<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageLibrary
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> RequestAddFolderAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestRemoveFolderAsync(Windows::Storage::StorageFolder const& folder) const;
    Windows::Foundation::Collections::IObservableVector<Windows::Storage::StorageFolder> Folders() const;
    Windows::Storage::StorageFolder SaveFolder() const;
    event_token DefinitionChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::Foundation::IInspectable> const& handler) const;
    using DefinitionChanged_revoker = event_revoker<Windows::Storage::IStorageLibrary>;
    DefinitionChanged_revoker DefinitionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::Foundation::IInspectable> const& handler) const;
    void DefinitionChanged(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Storage::IStorageLibrary> { template <typename D> using type = consume_Windows_Storage_IStorageLibrary<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageLibrary2
{
    Windows::Storage::StorageLibraryChangeTracker ChangeTracker() const;
};
template <> struct consume<Windows::Storage::IStorageLibrary2> { template <typename D> using type = consume_Windows_Storage_IStorageLibrary2<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageLibraryChange
{
    Windows::Storage::StorageLibraryChangeType ChangeType() const;
    hstring Path() const;
    hstring PreviousPath() const;
    bool IsOfType(Windows::Storage::StorageItemTypes const& type) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> GetStorageItemAsync() const;
};
template <> struct consume<Windows::Storage::IStorageLibraryChange> { template <typename D> using type = consume_Windows_Storage_IStorageLibraryChange<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageLibraryChangeReader
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageLibraryChange>> ReadBatchAsync() const;
    Windows::Foundation::IAsyncAction AcceptChangesAsync() const;
};
template <> struct consume<Windows::Storage::IStorageLibraryChangeReader> { template <typename D> using type = consume_Windows_Storage_IStorageLibraryChangeReader<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageLibraryChangeTracker
{
    Windows::Storage::StorageLibraryChangeReader GetChangeReader() const;
    void Enable() const;
    void Reset() const;
};
template <> struct consume<Windows::Storage::IStorageLibraryChangeTracker> { template <typename D> using type = consume_Windows_Storage_IStorageLibraryChangeTracker<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageLibraryStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> GetLibraryAsync(Windows::Storage::KnownLibraryId const& libraryId) const;
};
template <> struct consume<Windows::Storage::IStorageLibraryStatics> { template <typename D> using type = consume_Windows_Storage_IStorageLibraryStatics<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageLibraryStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> GetLibraryForUserAsync(Windows::System::User const& user, Windows::Storage::KnownLibraryId const& libraryId) const;
};
template <> struct consume<Windows::Storage::IStorageLibraryStatics2> { template <typename D> using type = consume_Windows_Storage_IStorageLibraryStatics2<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageProvider
{
    hstring Id() const;
    hstring DisplayName() const;
};
template <> struct consume<Windows::Storage::IStorageProvider> { template <typename D> using type = consume_Windows_Storage_IStorageProvider<D>; };

template <typename D>
struct consume_Windows_Storage_IStorageStreamTransaction
{
    Windows::Storage::Streams::IRandomAccessStream Stream() const;
    Windows::Foundation::IAsyncAction CommitAsync() const;
};
template <> struct consume<Windows::Storage::IStorageStreamTransaction> { template <typename D> using type = consume_Windows_Storage_IStorageStreamTransaction<D>; };

template <typename D>
struct consume_Windows_Storage_IStreamedFileDataRequest
{
    void FailAndClose(Windows::Storage::StreamedFileFailureMode const& failureMode) const;
};
template <> struct consume<Windows::Storage::IStreamedFileDataRequest> { template <typename D> using type = consume_Windows_Storage_IStreamedFileDataRequest<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemAudioProperties
{
    hstring EncodingBitrate() const;
};
template <> struct consume<Windows::Storage::ISystemAudioProperties> { template <typename D> using type = consume_Windows_Storage_ISystemAudioProperties<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemGPSProperties
{
    hstring LatitudeDecimal() const;
    hstring LongitudeDecimal() const;
};
template <> struct consume<Windows::Storage::ISystemGPSProperties> { template <typename D> using type = consume_Windows_Storage_ISystemGPSProperties<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemImageProperties
{
    hstring HorizontalSize() const;
    hstring VerticalSize() const;
};
template <> struct consume<Windows::Storage::ISystemImageProperties> { template <typename D> using type = consume_Windows_Storage_ISystemImageProperties<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemMediaProperties
{
    hstring Duration() const;
    hstring Producer() const;
    hstring Publisher() const;
    hstring SubTitle() const;
    hstring Writer() const;
    hstring Year() const;
};
template <> struct consume<Windows::Storage::ISystemMediaProperties> { template <typename D> using type = consume_Windows_Storage_ISystemMediaProperties<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemMusicProperties
{
    hstring AlbumArtist() const;
    hstring AlbumTitle() const;
    hstring Artist() const;
    hstring Composer() const;
    hstring Conductor() const;
    hstring DisplayArtist() const;
    hstring Genre() const;
    hstring TrackNumber() const;
};
template <> struct consume<Windows::Storage::ISystemMusicProperties> { template <typename D> using type = consume_Windows_Storage_ISystemMusicProperties<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemPhotoProperties
{
    hstring CameraManufacturer() const;
    hstring CameraModel() const;
    hstring DateTaken() const;
    hstring Orientation() const;
    hstring PeopleNames() const;
};
template <> struct consume<Windows::Storage::ISystemPhotoProperties> { template <typename D> using type = consume_Windows_Storage_ISystemPhotoProperties<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemProperties
{
    hstring Author() const;
    hstring Comment() const;
    hstring ItemNameDisplay() const;
    hstring Keywords() const;
    hstring Rating() const;
    hstring Title() const;
    Windows::Storage::SystemAudioProperties Audio() const;
    Windows::Storage::SystemGPSProperties GPS() const;
    Windows::Storage::SystemMediaProperties Media() const;
    Windows::Storage::SystemMusicProperties Music() const;
    Windows::Storage::SystemPhotoProperties Photo() const;
    Windows::Storage::SystemVideoProperties Video() const;
    Windows::Storage::SystemImageProperties Image() const;
};
template <> struct consume<Windows::Storage::ISystemProperties> { template <typename D> using type = consume_Windows_Storage_ISystemProperties<D>; };

template <typename D>
struct consume_Windows_Storage_ISystemVideoProperties
{
    hstring Director() const;
    hstring FrameHeight() const;
    hstring FrameWidth() const;
    hstring Orientation() const;
    hstring TotalBitrate() const;
};
template <> struct consume<Windows::Storage::ISystemVideoProperties> { template <typename D> using type = consume_Windows_Storage_ISystemVideoProperties<D>; };

template <> struct abi<Windows::Storage::IApplicationData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Version(uint32_t* value) = 0;
    virtual HRESULT __stdcall SetVersionAsync(uint32_t desiredVersion, ::IUnknown* handler, ::IUnknown** setVersionOperation) = 0;
    virtual HRESULT __stdcall ClearAllAsync(::IUnknown** clearOperation) = 0;
    virtual HRESULT __stdcall ClearAsync(abi_t<Windows::Storage::ApplicationDataLocality> locality, ::IUnknown** clearOperation) = 0;
    virtual HRESULT __stdcall get_LocalSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RoamingSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalFolder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RoamingFolder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TemporaryFolder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_DataChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DataChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall SignalDataChanged() = 0;
    virtual HRESULT __stdcall get_RoamingStorageQuota(uint64_t* value) = 0;
};};

template <> struct abi<Windows::Storage::IApplicationData2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalCacheFolder(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IApplicationData3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPublisherCacheFolder(HSTRING folderName, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClearPublisherCacheFolderAsync(HSTRING folderName, ::IUnknown** clearOperation) = 0;
    virtual HRESULT __stdcall get_SharedLocalFolder(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IApplicationDataContainer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Locality(abi_t<Windows::Storage::ApplicationDataLocality>* value) = 0;
    virtual HRESULT __stdcall get_Values(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Containers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateContainer(HSTRING name, abi_t<Windows::Storage::ApplicationDataCreateDisposition> disposition, ::IUnknown** container) = 0;
    virtual HRESULT __stdcall DeleteContainer(HSTRING name) = 0;
};};

template <> struct abi<Windows::Storage::IApplicationDataStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IApplicationDataStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForUserAsync(::IUnknown* user, ::IUnknown** getForUserOperation) = 0;
};};

template <> struct abi<Windows::Storage::ICachedFileManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DeferUpdates(::IUnknown* file) = 0;
    virtual HRESULT __stdcall CompleteUpdatesAsync(::IUnknown* file, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IDownloadsFolderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFileAsync(HSTRING desiredName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFolderAsync(HSTRING desiredName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFileWithCollisionOptionAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFolderWithCollisionOptionAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IDownloadsFolderStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFileForUserAsync(::IUnknown* user, HSTRING desiredName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFolderForUserAsync(::IUnknown* user, HSTRING desiredName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFileForUserWithCollisionOptionAsync(::IUnknown* user, HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFolderForUserWithCollisionOptionAsync(::IUnknown* user, HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> option, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IFileIOStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadTextAsync(::IUnknown* file, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall ReadTextWithEncodingAsync(::IUnknown* file, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall WriteTextAsync(::IUnknown* file, HSTRING contents, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall WriteTextWithEncodingAsync(::IUnknown* file, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall AppendTextAsync(::IUnknown* file, HSTRING contents, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall AppendTextWithEncodingAsync(::IUnknown* file, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall ReadLinesAsync(::IUnknown* file, ::IUnknown** linesOperation) = 0;
    virtual HRESULT __stdcall ReadLinesWithEncodingAsync(::IUnknown* file, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** linesOperation) = 0;
    virtual HRESULT __stdcall WriteLinesAsync(::IUnknown* file, ::IUnknown* lines, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall WriteLinesWithEncodingAsync(::IUnknown* file, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AppendLinesAsync(::IUnknown* file, ::IUnknown* lines, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AppendLinesWithEncodingAsync(::IUnknown* file, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReadBufferAsync(::IUnknown* file, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall WriteBufferAsync(::IUnknown* file, ::IUnknown* buffer, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall WriteBytesAsync(::IUnknown* file, uint32_t __bufferSize, uint8_t* buffer, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IKnownFoldersCameraRollStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CameraRoll(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IKnownFoldersPlaylistsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Playlists(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IKnownFoldersSavedPicturesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SavedPictures(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IKnownFoldersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MusicLibrary(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PicturesLibrary(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideosLibrary(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DocumentsLibrary(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HomeGroup(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemovableDevices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MediaServerDevices(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IKnownFoldersStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Objects3D(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AppCaptures(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RecordedCalls(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IKnownFoldersStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFolderForUserAsync(::IUnknown* user, abi_t<Windows::Storage::KnownFolderId> folderId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IPathIOStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadTextAsync(HSTRING absolutePath, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall ReadTextWithEncodingAsync(HSTRING absolutePath, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall WriteTextAsync(HSTRING absolutePath, HSTRING contents, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall WriteTextWithEncodingAsync(HSTRING absolutePath, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall AppendTextAsync(HSTRING absolutePath, HSTRING contents, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall AppendTextWithEncodingAsync(HSTRING absolutePath, HSTRING contents, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** textOperation) = 0;
    virtual HRESULT __stdcall ReadLinesAsync(HSTRING absolutePath, ::IUnknown** linesOperation) = 0;
    virtual HRESULT __stdcall ReadLinesWithEncodingAsync(HSTRING absolutePath, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** linesOperation) = 0;
    virtual HRESULT __stdcall WriteLinesAsync(HSTRING absolutePath, ::IUnknown* lines, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall WriteLinesWithEncodingAsync(HSTRING absolutePath, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AppendLinesAsync(HSTRING absolutePath, ::IUnknown* lines, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AppendLinesWithEncodingAsync(HSTRING absolutePath, ::IUnknown* lines, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReadBufferAsync(HSTRING absolutePath, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall WriteBufferAsync(HSTRING absolutePath, ::IUnknown* buffer, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall WriteBytesAsync(HSTRING absolutePath, uint32_t __bufferSize, uint8_t* buffer, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::ISetVersionDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::Storage::ISetVersionRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentVersion(uint32_t* currentVersion) = 0;
    virtual HRESULT __stdcall get_DesiredVersion(uint32_t* desiredVersion) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::Storage::IStorageFile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FileType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ContentType(HSTRING* value) = 0;
    virtual HRESULT __stdcall OpenAsync(abi_t<Windows::Storage::FileAccessMode> accessMode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall OpenTransactedWriteAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CopyOverloadDefaultNameAndOptions(::IUnknown* destinationFolder, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CopyOverloadDefaultOptions(::IUnknown* destinationFolder, HSTRING desiredNewName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CopyOverload(::IUnknown* destinationFolder, HSTRING desiredNewName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CopyAndReplaceAsync(::IUnknown* fileToReplace, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall MoveOverloadDefaultNameAndOptions(::IUnknown* destinationFolder, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall MoveOverloadDefaultOptions(::IUnknown* destinationFolder, HSTRING desiredNewName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall MoveOverload(::IUnknown* destinationFolder, HSTRING desiredNewName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall MoveAndReplaceAsync(::IUnknown* fileToReplace, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageFile2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OpenWithOptionsAsync(abi_t<Windows::Storage::FileAccessMode> accessMode, abi_t<Windows::Storage::StorageOpenOptions> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall OpenTransactedWriteWithOptionsAsync(abi_t<Windows::Storage::StorageOpenOptions> options, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageFilePropertiesWithAvailability>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAvailable(bool* value) = 0;
};};

template <> struct abi<Windows::Storage::IStorageFileStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFileFromPathAsync(HSTRING path, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFileFromApplicationUriAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateStreamedFileAsync(HSTRING displayNameWithExtension, ::IUnknown* dataRequested, ::IUnknown* thumbnail, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReplaceWithStreamedFileAsync(::IUnknown* fileToReplace, ::IUnknown* dataRequested, ::IUnknown* thumbnail, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateStreamedFileFromUriAsync(HSTRING displayNameWithExtension, ::IUnknown* uri, ::IUnknown* thumbnail, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReplaceWithStreamedFileFromUriAsync(::IUnknown* fileToReplace, ::IUnknown* uri, ::IUnknown* thumbnail, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageFolder>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFileAsyncOverloadDefaultOptions(HSTRING desiredName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFileAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFolderAsyncOverloadDefaultOptions(HSTRING desiredName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateFolderAsync(HSTRING desiredName, abi_t<Windows::Storage::CreationCollisionOption> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFileAsync(HSTRING name, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFolderAsync(HSTRING name, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetItemAsync(HSTRING name, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFilesAsyncOverloadDefaultOptionsStartAndCount(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFoldersAsyncOverloadDefaultOptionsStartAndCount(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetItemsAsyncOverloadDefaultStartAndCount(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageFolder2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryGetItemAsync(HSTRING name, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageFolderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFolderFromPathAsync(HSTRING path, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RenameAsyncOverloadDefaultOptions(HSTRING desiredName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RenameAsync(HSTRING desiredName, abi_t<Windows::Storage::NameCollisionOption> option, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteAsyncOverloadDefaultOptions(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteAsync(abi_t<Windows::Storage::StorageDeleteOption> option, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetBasicPropertiesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Attributes(abi_t<Windows::Storage::FileAttributes>* value) = 0;
    virtual HRESULT __stdcall get_DateCreated(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall IsOfType(abi_t<Windows::Storage::StorageItemTypes> type, bool* value) = 0;
};};

template <> struct abi<Windows::Storage::IStorageItem2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetParentAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall IsEqual(::IUnknown* item, bool* value) = 0;
};};

template <> struct abi<Windows::Storage::IStorageItemProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetThumbnailAsyncOverloadDefaultSizeDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetThumbnailAsyncOverloadDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetThumbnailAsync(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FolderRelativeId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IStorageItemProperties2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetScaledImageAsThumbnailAsyncOverloadDefaultOptions(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetScaledImageAsThumbnailAsync(abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> options, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageItemPropertiesWithProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Provider(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IStorageLibrary>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAddFolderAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestRemoveFolderAsync(::IUnknown* folder, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Folders(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SaveFolder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_DefinitionChanged(::IUnknown* handler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_DefinitionChanged(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Storage::IStorageLibrary2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeTracker(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::IStorageLibraryChange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeType(abi_t<Windows::Storage::StorageLibraryChangeType>* value) = 0;
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PreviousPath(HSTRING* value) = 0;
    virtual HRESULT __stdcall IsOfType(abi_t<Windows::Storage::StorageItemTypes> type, bool* value) = 0;
    virtual HRESULT __stdcall GetStorageItemAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageLibraryChangeReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AcceptChangesAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageLibraryChangeTracker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetChangeReader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Enable() = 0;
    virtual HRESULT __stdcall Reset() = 0;
};};

template <> struct abi<Windows::Storage::IStorageLibraryStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetLibraryAsync(abi_t<Windows::Storage::KnownLibraryId> libraryId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageLibraryStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetLibraryForUserAsync(::IUnknown* user, abi_t<Windows::Storage::KnownLibraryId> libraryId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStorageProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::IStorageStreamTransaction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Stream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CommitAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Storage::IStreamedFileDataRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FailAndClose(abi_t<Windows::Storage::StreamedFileFailureMode> failureMode) = 0;
};};

template <> struct abi<Windows::Storage::ISystemAudioProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EncodingBitrate(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::ISystemGPSProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LatitudeDecimal(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LongitudeDecimal(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::ISystemImageProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalSize(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_VerticalSize(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::ISystemMediaProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Duration(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Producer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Publisher(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SubTitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Writer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Year(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::ISystemMusicProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlbumArtist(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AlbumTitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Artist(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Composer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Conductor(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayArtist(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Genre(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TrackNumber(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::ISystemPhotoProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CameraManufacturer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CameraModel(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DateTaken(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Orientation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PeopleNames(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::ISystemProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Author(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Comment(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ItemNameDisplay(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Keywords(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rating(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Audio(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_GPS(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Media(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Music(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Photo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Video(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Image(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::ISystemVideoProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Director(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FrameHeight(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FrameWidth(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Orientation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TotalBitrate(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Storage::ApplicationDataSetVersionHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* setVersionRequest) = 0;
};};

template <> struct abi<Windows::Storage::StreamedFileDataRequestedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* stream) = 0;
};};

}
