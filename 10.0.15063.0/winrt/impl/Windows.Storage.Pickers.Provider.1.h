// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Pickers::Provider {

struct WINRT_EBO IFileOpenPickerUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileOpenPickerUI>
{
    IFileOpenPickerUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("Since Windows 10, only apps can remove files, not end users so the FileRemoved event will not be raised.")]] IFileRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileRemovedEventArgs>
{
    IFileRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileSavePickerUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileSavePickerUI>
{
    IFileSavePickerUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPickerClosingDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerClosingDeferral>
{
    IPickerClosingDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPickerClosingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerClosingEventArgs>
{
    IPickerClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPickerClosingOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPickerClosingOperation>
{
    IPickerClosingOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetFileRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetFileRequest>
{
    ITargetFileRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetFileRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetFileRequestDeferral>
{
    ITargetFileRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetFileRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetFileRequestedEventArgs>
{
    ITargetFileRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
