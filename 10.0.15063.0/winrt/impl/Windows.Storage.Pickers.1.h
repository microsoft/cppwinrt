// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Pickers.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Pickers {

struct WINRT_EBO IFileOpenPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPicker>
{
    IFileOpenPicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileOpenPicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPicker2>,
    impl::require<IFileOpenPicker2, Windows::Storage::Pickers::IFileOpenPicker>
{
    IFileOpenPicker2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileOpenPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerStatics>
{
    IFileOpenPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileOpenPickerWithOperationId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerWithOperationId>
{
    IFileOpenPickerWithOperationId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileSavePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePicker>
{
    IFileSavePicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileSavePicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePicker2>,
    impl::require<IFileSavePicker2, Windows::Storage::Pickers::IFileSavePicker>
{
    IFileSavePicker2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileSavePicker3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePicker3>,
    impl::require<IFileSavePicker3, Windows::Storage::Pickers::IFileSavePicker>
{
    IFileSavePicker3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFolderPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFolderPicker>
{
    IFolderPicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFolderPicker2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFolderPicker2>,
    impl::require<IFolderPicker2, Windows::Storage::Pickers::IFolderPicker>
{
    IFolderPicker2(std::nullptr_t = nullptr) noexcept {}
};

}
