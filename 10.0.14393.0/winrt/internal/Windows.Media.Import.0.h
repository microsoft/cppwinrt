// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Import {

struct PhotoImportProgress;

}

namespace Windows::Media::Import {

using PhotoImportProgress = ABI::Windows::Media::Import::PhotoImportProgress;

}

namespace ABI::Windows::Media::Import {

struct IPhotoImportDeleteImportedItemsFromSourceResult;
struct IPhotoImportFindItemsResult;
struct IPhotoImportFindItemsResult2;
struct IPhotoImportImportItemsResult;
struct IPhotoImportItem;
struct IPhotoImportItemImportedEventArgs;
struct IPhotoImportManagerStatics;
struct IPhotoImportOperation;
struct IPhotoImportSelectionChangedEventArgs;
struct IPhotoImportSession;
struct IPhotoImportSession2;
struct IPhotoImportSidecar;
struct IPhotoImportSource;
struct IPhotoImportSourceStatics;
struct IPhotoImportStorageMedium;
struct IPhotoImportVideoSegment;
struct PhotoImportDeleteImportedItemsFromSourceResult;
struct PhotoImportFindItemsResult;
struct PhotoImportImportItemsResult;
struct PhotoImportItem;
struct PhotoImportItemImportedEventArgs;
struct PhotoImportOperation;
struct PhotoImportSelectionChangedEventArgs;
struct PhotoImportSession;
struct PhotoImportSidecar;
struct PhotoImportSource;
struct PhotoImportStorageMedium;
struct PhotoImportVideoSegment;

}

namespace Windows::Media::Import {

struct IPhotoImportDeleteImportedItemsFromSourceResult;
struct IPhotoImportFindItemsResult;
struct IPhotoImportFindItemsResult2;
struct IPhotoImportImportItemsResult;
struct IPhotoImportItem;
struct IPhotoImportItemImportedEventArgs;
struct IPhotoImportManagerStatics;
struct IPhotoImportOperation;
struct IPhotoImportSelectionChangedEventArgs;
struct IPhotoImportSession;
struct IPhotoImportSession2;
struct IPhotoImportSidecar;
struct IPhotoImportSource;
struct IPhotoImportSourceStatics;
struct IPhotoImportStorageMedium;
struct IPhotoImportVideoSegment;
struct PhotoImportDeleteImportedItemsFromSourceResult;
struct PhotoImportFindItemsResult;
struct PhotoImportImportItemsResult;
struct PhotoImportItem;
struct PhotoImportItemImportedEventArgs;
struct PhotoImportManager;
struct PhotoImportOperation;
struct PhotoImportSelectionChangedEventArgs;
struct PhotoImportSession;
struct PhotoImportSidecar;
struct PhotoImportSource;
struct PhotoImportStorageMedium;
struct PhotoImportVideoSegment;

}

namespace Windows::Media::Import {

enum class PhotoImportAccessMode
{
    ReadWrite = 0,
    ReadOnly = 1,
    ReadAndDelete = 2,
};

enum class PhotoImportConnectionTransport
{
    Unknown = 0,
    Usb = 1,
    IP = 2,
    Bluetooth = 3,
};

enum class PhotoImportContentType
{
    Unknown = 0,
    Image = 1,
    Video = 2,
};

enum class PhotoImportContentTypeFilter
{
    OnlyImages = 0,
    OnlyVideos = 1,
    ImagesAndVideos = 2,
};

enum class PhotoImportImportMode
{
    ImportEverything = 0,
    IgnoreSidecars = 1,
    IgnoreSiblings = 2,
    IgnoreSidecarsAndSiblings = 3,
};

enum class PhotoImportItemSelectionMode
{
    SelectAll = 0,
    SelectNone = 1,
    SelectNew = 2,
};

enum class PhotoImportPowerSource
{
    Unknown = 0,
    Battery = 1,
    External = 2,
};

enum class PhotoImportSourceType
{
    Generic = 0,
    Camera = 1,
    MediaPlayer = 2,
    Phone = 3,
    Video = 4,
    PersonalInfoManager = 5,
    AudioRecorder = 6,
};

enum class PhotoImportStage
{
    NotStarted = 0,
    FindingItems = 1,
    ImportingItems = 2,
    DeletingImportedItemsFromSource = 3,
};

enum class PhotoImportStorageMediumType
{
    Undefined = 0,
    Fixed = 1,
    Removable = 2,
};

enum class PhotoImportSubfolderCreationMode
{
    DoNotCreateSubfolders = 0,
    CreateSubfoldersFromFileDate = 1,
    CreateSubfoldersFromExifDate = 2,
    KeepOriginalFolderStructure = 3,
};

enum class PhotoImportSubfolderDateFormat
{
    Year = 0,
    YearMonth = 1,
    YearMonthDay = 2,
};

}

}
