// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Storage.Pickers.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f1fb2939_695b_5f56_841a_a52a7d148572
#define WINRT_GENERIC_f1fb2939_695b_5f56_841a_a52a7d148572
template <> struct __declspec(uuid("f1fb2939-695b-5f56-841a-a52a7d148572")) __declspec(novtable) TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> : impl_TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_2b06bdac_983b_5552_b5c9_b0990a2db3a1
#define WINRT_GENERIC_2b06bdac_983b_5552_b5c9_b0990a2db3a1
template <> struct __declspec(uuid("2b06bdac-983b-5552-b5c9-b0990a2db3a1")) __declspec(novtable) TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> : impl_TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_f1e6a632_f97f_54d9_9e1b_a714edc3ff06
#define WINRT_GENERIC_f1e6a632_f97f_54d9_9e1b_a714edc3ff06
template <> struct __declspec(uuid("f1e6a632-f97f-54d9-9e1b-a714edc3ff06")) __declspec(novtable) TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> : impl_TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_d3e1f8c7_45c5_5249_b336_a111bfaa985b
#define WINRT_GENERIC_d3e1f8c7_45c5_5249_b336_a111bfaa985b
template <> struct __declspec(uuid("d3e1f8c7-45c5-5249-b336-a111bfaa985b")) __declspec(novtable) TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> : impl_TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif


}

namespace Windows::Storage::Pickers::Provider {

template <typename D>
struct WINRT_EBO impl_IFileOpenPickerUI
{
    Windows::Storage::Pickers::Provider::AddFileResult AddFile(hstring_ref id, const Windows::Storage::IStorageFile & file) const;
    void RemoveFile(hstring_ref id) const;
    bool ContainsFile(hstring_ref id) const;
    bool CanAddFile(const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::Collections::IVectorView<hstring> AllowedFileTypes() const;
    Windows::Storage::Pickers::Provider::FileSelectionMode SelectionMode() const;
    hstring SettingsIdentifier() const;
    hstring Title() const;
    void Title(hstring_ref value) const;
    event_token FileRemoved(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> & handler) const;
    using FileRemoved_revoker = event_revoker<IFileOpenPickerUI>;
    FileRemoved_revoker FileRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> & handler) const;
    void FileRemoved(event_token token) const;
    event_token Closing(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> & handler) const;
    using Closing_revoker = event_revoker<IFileOpenPickerUI>;
    Closing_revoker Closing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> & handler) const;
    void Closing(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IFileRemovedEventArgs
{
    hstring Id() const;
};

template <typename D>
struct WINRT_EBO impl_IFileSavePickerUI
{
    hstring Title() const;
    void Title(hstring_ref value) const;
    Windows::Foundation::Collections::IVectorView<hstring> AllowedFileTypes() const;
    hstring SettingsIdentifier() const;
    hstring FileName() const;
    Windows::Storage::Pickers::Provider::SetFileNameResult TrySetFileName(hstring_ref value) const;
    event_token FileNameChanged(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> & handler) const;
    using FileNameChanged_revoker = event_revoker<IFileSavePickerUI>;
    FileNameChanged_revoker FileNameChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> & handler) const;
    void FileNameChanged(event_token token) const;
    event_token TargetFileRequested(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> & handler) const;
    using TargetFileRequested_revoker = event_revoker<IFileSavePickerUI>;
    TargetFileRequested_revoker TargetFileRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> & handler) const;
    void TargetFileRequested(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IPickerClosingDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IPickerClosingEventArgs
{
    Windows::Storage::Pickers::Provider::PickerClosingOperation ClosingOperation() const;
    bool IsCanceled() const;
};

template <typename D>
struct WINRT_EBO impl_IPickerClosingOperation
{
    Windows::Storage::Pickers::Provider::PickerClosingDeferral GetDeferral() const;
    Windows::Foundation::DateTime Deadline() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetFileRequest
{
    Windows::Storage::IStorageFile TargetFile() const;
    void TargetFile(const Windows::Storage::IStorageFile & value) const;
    Windows::Storage::Pickers::Provider::TargetFileRequestDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetFileRequestDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_ITargetFileRequestedEventArgs
{
    Windows::Storage::Pickers::Provider::TargetFileRequest Request() const;
};

struct IFileOpenPickerUI :
    Windows::IInspectable,
    impl::consume<IFileOpenPickerUI>
{
    IFileOpenPickerUI(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileOpenPickerUI>(m_ptr); }
};

struct IFileRemovedEventArgs :
    Windows::IInspectable,
    impl::consume<IFileRemovedEventArgs>
{
    IFileRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileRemovedEventArgs>(m_ptr); }
};

struct IFileSavePickerUI :
    Windows::IInspectable,
    impl::consume<IFileSavePickerUI>
{
    IFileSavePickerUI(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileSavePickerUI>(m_ptr); }
};

struct IPickerClosingDeferral :
    Windows::IInspectable,
    impl::consume<IPickerClosingDeferral>
{
    IPickerClosingDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerClosingDeferral>(m_ptr); }
};

struct IPickerClosingEventArgs :
    Windows::IInspectable,
    impl::consume<IPickerClosingEventArgs>
{
    IPickerClosingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerClosingEventArgs>(m_ptr); }
};

struct IPickerClosingOperation :
    Windows::IInspectable,
    impl::consume<IPickerClosingOperation>
{
    IPickerClosingOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPickerClosingOperation>(m_ptr); }
};

struct ITargetFileRequest :
    Windows::IInspectable,
    impl::consume<ITargetFileRequest>
{
    ITargetFileRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITargetFileRequest>(m_ptr); }
};

struct ITargetFileRequestDeferral :
    Windows::IInspectable,
    impl::consume<ITargetFileRequestDeferral>
{
    ITargetFileRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITargetFileRequestDeferral>(m_ptr); }
};

struct ITargetFileRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<ITargetFileRequestedEventArgs>
{
    ITargetFileRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITargetFileRequestedEventArgs>(m_ptr); }
};

}

}
