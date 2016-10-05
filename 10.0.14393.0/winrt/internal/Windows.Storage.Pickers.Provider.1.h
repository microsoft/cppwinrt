// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Storage.Pickers.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Pickers::Provider {

struct __declspec(uuid("dda45a10-f9d4-40c4-8af5-c5b6b5a61d1d")) __declspec(novtable) IFileOpenPickerUI : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddFile(hstring id, Windows::Storage::IStorageFile * file, winrt::Windows::Storage::Pickers::Provider::AddFileResult * addResult) = 0;
    virtual HRESULT __stdcall abi_RemoveFile(hstring id) = 0;
    virtual HRESULT __stdcall abi_ContainsFile(hstring id, bool * isContained) = 0;
    virtual HRESULT __stdcall abi_CanAddFile(Windows::Storage::IStorageFile * file, bool * canAdd) = 0;
    virtual HRESULT __stdcall get_AllowedFileTypes(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_SelectionMode(winrt::Windows::Storage::Pickers::Provider::FileSelectionMode * value) = 0;
    virtual HRESULT __stdcall get_SettingsIdentifier(hstring * value) = 0;
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall add_FileRemoved(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_FileRemoved(event_token token) = 0;
    virtual HRESULT __stdcall add_Closing(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Closing(event_token token) = 0;
};

struct __declspec(uuid("13043da7-7fca-4c2b-9eca-6890f9f00185")) __declspec(novtable) IFileRemovedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
};

struct __declspec(uuid("9656c1e7-3e56-43cc-8a39-33c73d9d542b")) __declspec(novtable) IFileSavePickerUI : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall get_AllowedFileTypes(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_SettingsIdentifier(hstring * value) = 0;
    virtual HRESULT __stdcall get_FileName(hstring * value) = 0;
    virtual HRESULT __stdcall abi_TrySetFileName(hstring value, winrt::Windows::Storage::Pickers::Provider::SetFileNameResult * result) = 0;
    virtual HRESULT __stdcall add_FileNameChanged(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_FileNameChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_TargetFileRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_TargetFileRequested(event_token token) = 0;
};

struct __declspec(uuid("7af7f71e-1a67-4a31-ae80-e907708a619b")) __declspec(novtable) IPickerClosingDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("7e59f224-b332-4f12-8b9f-a8c2f06b32cd")) __declspec(novtable) IPickerClosingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClosingOperation(Windows::Storage::Pickers::Provider::IPickerClosingOperation ** value) = 0;
    virtual HRESULT __stdcall get_IsCanceled(bool * value) = 0;
};

struct __declspec(uuid("4ce9fb84-beee-4e39-a773-fc5f0eae328d")) __declspec(novtable) IPickerClosingOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Storage::Pickers::Provider::IPickerClosingDeferral ** value) = 0;
    virtual HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime * value) = 0;
};

struct __declspec(uuid("42bd3355-7f88-478b-8e81-690b20340678")) __declspec(novtable) ITargetFileRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetFile(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall put_TargetFile(Windows::Storage::IStorageFile * value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral ** value) = 0;
};

struct __declspec(uuid("4aee9d91-bf15-4da9-95f6-f6b7d558225b")) __declspec(novtable) ITargetFileRequestDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("b163dbc1-1b51-4c89-a591-0fd40b3c57c9")) __declspec(novtable) ITargetFileRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::Storage::Pickers::Provider::ITargetFileRequest ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Storage::Pickers::Provider::FileOpenPickerUI> { using default_interface = Windows::Storage::Pickers::Provider::IFileOpenPickerUI; };
template <> struct traits<Windows::Storage::Pickers::Provider::FileRemovedEventArgs> { using default_interface = Windows::Storage::Pickers::Provider::IFileRemovedEventArgs; };
template <> struct traits<Windows::Storage::Pickers::Provider::FileSavePickerUI> { using default_interface = Windows::Storage::Pickers::Provider::IFileSavePickerUI; };
template <> struct traits<Windows::Storage::Pickers::Provider::PickerClosingDeferral> { using default_interface = Windows::Storage::Pickers::Provider::IPickerClosingDeferral; };
template <> struct traits<Windows::Storage::Pickers::Provider::PickerClosingEventArgs> { using default_interface = Windows::Storage::Pickers::Provider::IPickerClosingEventArgs; };
template <> struct traits<Windows::Storage::Pickers::Provider::PickerClosingOperation> { using default_interface = Windows::Storage::Pickers::Provider::IPickerClosingOperation; };
template <> struct traits<Windows::Storage::Pickers::Provider::TargetFileRequest> { using default_interface = Windows::Storage::Pickers::Provider::ITargetFileRequest; };
template <> struct traits<Windows::Storage::Pickers::Provider::TargetFileRequestDeferral> { using default_interface = Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral; };
template <> struct traits<Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> { using default_interface = Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs; };

}

namespace Windows::Storage::Pickers::Provider {

template <typename T> struct impl_IFileOpenPickerUI;
template <typename T> struct impl_IFileRemovedEventArgs;
template <typename T> struct impl_IFileSavePickerUI;
template <typename T> struct impl_IPickerClosingDeferral;
template <typename T> struct impl_IPickerClosingEventArgs;
template <typename T> struct impl_IPickerClosingOperation;
template <typename T> struct impl_ITargetFileRequest;
template <typename T> struct impl_ITargetFileRequestDeferral;
template <typename T> struct impl_ITargetFileRequestedEventArgs;

}

namespace impl {

template <> struct traits<Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_IFileOpenPickerUI<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_IFileRemovedEventArgs<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::IFileSavePickerUI>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_IFileSavePickerUI<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::IPickerClosingDeferral;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_IPickerClosingDeferral<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_IPickerClosingEventArgs<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::IPickerClosingOperation>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::IPickerClosingOperation;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_IPickerClosingOperation<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::ITargetFileRequest>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::ITargetFileRequest;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_ITargetFileRequest<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_ITargetFileRequestDeferral<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs;
    template <typename D> using consume = Windows::Storage::Pickers::Provider::impl_ITargetFileRequestedEventArgs<D>;
};

template <> struct traits<Windows::Storage::Pickers::Provider::FileOpenPickerUI>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::FileOpenPickerUI;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.FileOpenPickerUI"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::FileRemovedEventArgs>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::FileRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.FileRemovedEventArgs"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::FileSavePickerUI>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::FileSavePickerUI;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.FileSavePickerUI"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::PickerClosingDeferral>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::PickerClosingDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.PickerClosingDeferral"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::PickerClosingEventArgs>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::PickerClosingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.PickerClosingEventArgs"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::PickerClosingOperation>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::PickerClosingOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.PickerClosingOperation"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::TargetFileRequest>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::TargetFileRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.TargetFileRequest"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::TargetFileRequestDeferral>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::TargetFileRequestDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.TargetFileRequestDeferral"; }
};

template <> struct traits<Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs>
{
    using abi = ABI::Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.Provider.TargetFileRequestedEventArgs"; }
};

}

}
