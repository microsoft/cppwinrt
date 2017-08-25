// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.FileProperties.0.h"
#include "winrt/impl/Windows.Storage.Search.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Storage.BulkAccess.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::BulkAccess {

struct WINRT_EBO IFileInformationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileInformationFactory>
{
    IFileInformationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileInformationFactoryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileInformationFactoryFactory>
{
    IFileInformationFactoryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemInformation>
{
    IStorageItemInformation(std::nullptr_t = nullptr) noexcept {}
};

}
