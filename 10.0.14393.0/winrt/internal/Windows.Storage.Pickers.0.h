// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Pickers {

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

namespace Windows::Storage::Pickers {

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

namespace Windows::Storage::Pickers {

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

}

}
