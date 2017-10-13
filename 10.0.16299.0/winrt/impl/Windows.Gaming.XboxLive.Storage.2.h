// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Gaming.XboxLive.Storage.1.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::XboxLive::Storage {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Gaming::XboxLive::Storage {

struct WINRT_EBO GameSaveBlobGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobGetResult
{
    GameSaveBlobGetResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveBlobInfo :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfo
{
    GameSaveBlobInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveBlobInfoGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoGetResult
{
    GameSaveBlobInfoGetResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveBlobInfoQuery :
    Windows::Gaming::XboxLive::Storage::IGameSaveBlobInfoQuery
{
    GameSaveBlobInfoQuery(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainer :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainer
{
    GameSaveContainer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainerInfo :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfo
{
    GameSaveContainerInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainerInfoGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoGetResult
{
    GameSaveContainerInfoGetResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveContainerInfoQuery :
    Windows::Gaming::XboxLive::Storage::IGameSaveContainerInfoQuery
{
    GameSaveContainerInfoQuery(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveOperationResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveOperationResult
{
    GameSaveOperationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GameSaveProvider :
    Windows::Gaming::XboxLive::Storage::IGameSaveProvider
{
    GameSaveProvider(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GetForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId);
    static Windows::Foundation::IAsyncOperation<Windows::Gaming::XboxLive::Storage::GameSaveProviderGetResult> GetSyncOnDemandForUserAsync(Windows::System::User const& user, param::hstring const& serviceConfigId);
};

struct WINRT_EBO GameSaveProviderGetResult :
    Windows::Gaming::XboxLive::Storage::IGameSaveProviderGetResult
{
    GameSaveProviderGetResult(std::nullptr_t) noexcept {}
};

}
