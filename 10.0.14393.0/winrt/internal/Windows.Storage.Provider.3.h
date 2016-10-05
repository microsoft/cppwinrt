// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Storage.Provider.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Storage::Provider {

struct CachedFileUpdater
{
    CachedFileUpdater() = delete;
    static void SetUpdateInformation(const Windows::Storage::IStorageFile & file, hstring_ref contentId, Windows::Storage::Provider::ReadActivationMode readMode, Windows::Storage::Provider::WriteActivationMode writeMode, Windows::Storage::Provider::CachedFileOptions options);
};

struct WINRT_EBO CachedFileUpdaterUI :
    Windows::Storage::Provider::ICachedFileUpdaterUI,
    impl::require<CachedFileUpdaterUI, Windows::Storage::Provider::ICachedFileUpdaterUI2>
{
    CachedFileUpdaterUI(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FileUpdateRequest :
    Windows::Storage::Provider::IFileUpdateRequest,
    impl::require<FileUpdateRequest, Windows::Storage::Provider::IFileUpdateRequest2>
{
    FileUpdateRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FileUpdateRequestDeferral :
    Windows::Storage::Provider::IFileUpdateRequestDeferral
{
    FileUpdateRequestDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FileUpdateRequestedEventArgs :
    Windows::Storage::Provider::IFileUpdateRequestedEventArgs
{
    FileUpdateRequestedEventArgs(std::nullptr_t) noexcept {}
};

}

}
