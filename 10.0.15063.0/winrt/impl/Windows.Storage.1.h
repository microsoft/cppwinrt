// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.FileProperties.0.h"
#include "winrt/impl/Windows.Storage.Provider.0.h"
#include "winrt/impl/Windows.Storage.Search.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Storage.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage {

struct WINRT_EBO IApplicationData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationData>
{
    IApplicationData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationData2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationData2>
{
    IApplicationData2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationData3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationData3>
{
    IApplicationData3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationDataContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataContainer>
{
    IApplicationDataContainer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationDataStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataStatics>
{
    IApplicationDataStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IApplicationDataStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationDataStatics2>
{
    IApplicationDataStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICachedFileManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileManagerStatics>
{
    ICachedFileManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDownloadsFolderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadsFolderStatics>
{
    IDownloadsFolderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDownloadsFolderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDownloadsFolderStatics2>
{
    IDownloadsFolderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileIOStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileIOStatics>
{
    IFileIOStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownFoldersCameraRollStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersCameraRollStatics>
{
    IKnownFoldersCameraRollStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownFoldersPlaylistsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersPlaylistsStatics>
{
    IKnownFoldersPlaylistsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownFoldersSavedPicturesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersSavedPicturesStatics>
{
    IKnownFoldersSavedPicturesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownFoldersStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersStatics>
{
    IKnownFoldersStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownFoldersStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersStatics2>
{
    IKnownFoldersStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownFoldersStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownFoldersStatics3>
{
    IKnownFoldersStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathIOStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathIOStatics>
{
    IPathIOStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISetVersionDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISetVersionDeferral>
{
    ISetVersionDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISetVersionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISetVersionRequest>
{
    ISetVersionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFile>,
    impl::require<IStorageFile, Windows::Storage::IStorageItem, Windows::Storage::Streams::IInputStreamReference, Windows::Storage::Streams::IRandomAccessStreamReference>
{
    IStorageFile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFile2>
{
    IStorageFile2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFilePropertiesWithAvailability :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFilePropertiesWithAvailability>
{
    IStorageFilePropertiesWithAvailability(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFileStatics>
{
    IStorageFileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFolder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolder>,
    impl::require<IStorageFolder, Windows::Storage::IStorageItem>
{
    IStorageFolder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFolder2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolder2>
{
    IStorageFolder2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageFolderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageFolderStatics>
{
    IStorageFolderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItem>
{
    IStorageItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItem2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItem2>,
    impl::require<IStorageItem2, Windows::Storage::IStorageItem>
{
    IStorageItem2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemProperties>
{
    IStorageItemProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemProperties2>,
    impl::require<IStorageItemProperties2, Windows::Storage::IStorageItemProperties>
{
    IStorageItemProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemPropertiesWithProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemPropertiesWithProvider>,
    impl::require<IStorageItemPropertiesWithProvider, Windows::Storage::IStorageItemProperties>
{
    IStorageItemPropertiesWithProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibrary :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibrary>
{
    IStorageLibrary(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibrary2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibrary2>
{
    IStorageLibrary2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryChange>
{
    IStorageLibraryChange(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryChangeReader>
{
    IStorageLibraryChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryChangeTracker>
{
    IStorageLibraryChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryStatics>
{
    IStorageLibraryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageLibraryStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageLibraryStatics2>
{
    IStorageLibraryStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProvider>
{
    IStorageProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageStreamTransaction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageStreamTransaction>,
    impl::require<IStorageStreamTransaction, Windows::Foundation::IClosable>
{
    IStorageStreamTransaction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreamedFileDataRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreamedFileDataRequest>
{
    IStreamedFileDataRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemAudioProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemAudioProperties>
{
    ISystemAudioProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemGPSProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemGPSProperties>
{
    ISystemGPSProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemImageProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemImageProperties>
{
    ISystemImageProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMediaProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMediaProperties>
{
    ISystemMediaProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMusicProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMusicProperties>
{
    ISystemMusicProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemPhotoProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemPhotoProperties>
{
    ISystemPhotoProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemProperties>
{
    ISystemProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemVideoProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemVideoProperties>
{
    ISystemVideoProperties(std::nullptr_t = nullptr) noexcept {}
};

}
