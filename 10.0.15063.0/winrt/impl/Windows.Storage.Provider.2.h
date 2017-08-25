// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

struct CachedFileUpdater
{
    CachedFileUpdater() = delete;
    static void SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options);
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
