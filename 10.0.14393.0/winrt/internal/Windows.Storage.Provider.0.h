// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Provider {

struct ICachedFileUpdaterStatics;
struct ICachedFileUpdaterUI;
struct ICachedFileUpdaterUI2;
struct IFileUpdateRequest;
struct IFileUpdateRequest2;
struct IFileUpdateRequestDeferral;
struct IFileUpdateRequestedEventArgs;
struct CachedFileUpdaterUI;
struct FileUpdateRequest;
struct FileUpdateRequestDeferral;
struct FileUpdateRequestedEventArgs;

}

namespace Windows::Storage::Provider {

struct ICachedFileUpdaterStatics;
struct ICachedFileUpdaterUI;
struct ICachedFileUpdaterUI2;
struct IFileUpdateRequest;
struct IFileUpdateRequest2;
struct IFileUpdateRequestDeferral;
struct IFileUpdateRequestedEventArgs;
struct CachedFileUpdater;
struct CachedFileUpdaterUI;
struct FileUpdateRequest;
struct FileUpdateRequestDeferral;
struct FileUpdateRequestedEventArgs;

}

namespace Windows::Storage::Provider {

enum class CachedFileOptions : unsigned
{
    None = 0x0,
    RequireUpdateOnAccess = 0x1,
    UseCachedFileWhenOffline = 0x2,
    DenyAccessWhenOffline = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(CachedFileOptions)

enum class CachedFileTarget
{
    Local = 0,
    Remote = 1,
};

enum class FileUpdateStatus
{
    Incomplete = 0,
    Complete = 1,
    UserInputNeeded = 2,
    CurrentlyUnavailable = 3,
    Failed = 4,
    CompleteAndRenamed = 5,
};

enum class ReadActivationMode
{
    NotNeeded = 0,
    BeforeAccess = 1,
};

enum class UIStatus
{
    Unavailable = 0,
    Hidden = 1,
    Visible = 2,
    Complete = 3,
};

enum class WriteActivationMode
{
    ReadOnly = 0,
    NotNeeded = 1,
    AfterWrite = 2,
};

}

}
