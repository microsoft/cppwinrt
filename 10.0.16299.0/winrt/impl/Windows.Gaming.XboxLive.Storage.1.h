// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Gaming.XboxLive.Storage.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::XboxLive::Storage {

struct WINRT_EBO IGameSaveBlobGetResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveBlobGetResult>
{
    IGameSaveBlobGetResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveBlobInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveBlobInfo>
{
    IGameSaveBlobInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveBlobInfoGetResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveBlobInfoGetResult>
{
    IGameSaveBlobInfoGetResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveBlobInfoQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveBlobInfoQuery>
{
    IGameSaveBlobInfoQuery(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveContainer>
{
    IGameSaveContainer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveContainerInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveContainerInfo>
{
    IGameSaveContainerInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveContainerInfoGetResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveContainerInfoGetResult>
{
    IGameSaveContainerInfoGetResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveContainerInfoQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveContainerInfoQuery>
{
    IGameSaveContainerInfoQuery(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveOperationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveOperationResult>
{
    IGameSaveOperationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveProvider>
{
    IGameSaveProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveProviderGetResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveProviderGetResult>
{
    IGameSaveProviderGetResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameSaveProviderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameSaveProviderStatics>
{
    IGameSaveProviderStatics(std::nullptr_t = nullptr) noexcept {}
};

}
