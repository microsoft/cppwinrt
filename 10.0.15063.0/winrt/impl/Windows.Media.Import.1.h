// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Import.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Import {

struct WINRT_EBO IPhotoImportDeleteImportedItemsFromSourceResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportDeleteImportedItemsFromSourceResult>
{
    IPhotoImportDeleteImportedItemsFromSourceResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportFindItemsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportFindItemsResult>
{
    IPhotoImportFindItemsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportFindItemsResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportFindItemsResult2>
{
    IPhotoImportFindItemsResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportImportItemsResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportImportItemsResult>
{
    IPhotoImportImportItemsResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportItem>
{
    IPhotoImportItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportItemImportedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportItemImportedEventArgs>
{
    IPhotoImportItemImportedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportManagerStatics>
{
    IPhotoImportManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportOperation>
{
    IPhotoImportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportSelectionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSelectionChangedEventArgs>
{
    IPhotoImportSelectionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSession>,
    impl::require<IPhotoImportSession, Windows::Foundation::IClosable>
{
    IPhotoImportSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportSession2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSession2>
{
    IPhotoImportSession2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportSidecar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSidecar>
{
    IPhotoImportSidecar(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSource>
{
    IPhotoImportSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportSourceStatics>
{
    IPhotoImportSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportStorageMedium :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportStorageMedium>
{
    IPhotoImportStorageMedium(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoImportVideoSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoImportVideoSegment>
{
    IPhotoImportVideoSegment(std::nullptr_t = nullptr) noexcept {}
};

}
