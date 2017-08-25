// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

enum class CachedFileOptions : unsigned
{
    None = 0x0,
    RequireUpdateOnAccess = 0x1,
    UseCachedFileWhenOffline = 0x2,
    DenyAccessWhenOffline = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(CachedFileOptions)

enum class CachedFileTarget
{
    Local = 0,
    Remote = 1,
};

enum class FileUpdateStatus
{
    Incomplete = 0,
    Complete = 1,
    UserInputNeeded = 2,
    CurrentlyUnavailable = 3,
    Failed = 4,
    CompleteAndRenamed = 5,
};

enum class ReadActivationMode
{
    NotNeeded = 0,
    BeforeAccess = 1,
};

enum class UIStatus
{
    Unavailable = 0,
    Hidden = 1,
    Visible = 2,
    Complete = 3,
};

enum class WriteActivationMode
{
    ReadOnly = 0,
    NotNeeded = 1,
    AfterWrite = 2,
};

struct ICachedFileUpdaterStatics;
struct ICachedFileUpdaterUI;
struct ICachedFileUpdaterUI2;
struct IFileUpdateRequest;
struct IFileUpdateRequest2;
struct IFileUpdateRequestDeferral;
struct IFileUpdateRequestedEventArgs;
struct CachedFileUpdater;
struct CachedFileUpdaterUI;
struct FileUpdateRequest;
struct FileUpdateRequestDeferral;
struct FileUpdateRequestedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequest>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequest2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Storage::Provider::CachedFileUpdater>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::CachedFileUpdaterUI>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateRequest>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Storage::Provider::CachedFileOptions>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::CachedFileTarget>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::FileUpdateStatus>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::ReadActivationMode>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::UIStatus>{ using type = enum_category; };
template <> struct category<Windows::Storage::Provider::WriteActivationMode>{ using type = enum_category; };
template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterStatics" }; };
template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterUI>{ static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterUI" }; };
template <> struct name<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ static constexpr auto & value{ L"Windows.Storage.Provider.ICachedFileUpdaterUI2" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequest>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequest" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequest2>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequest2" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequestDeferral" }; };
template <> struct name<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Storage.Provider.IFileUpdateRequestedEventArgs" }; };
template <> struct name<Windows::Storage::Provider::CachedFileUpdater>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileUpdater" }; };
template <> struct name<Windows::Storage::Provider::CachedFileUpdaterUI>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileUpdaterUI" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateRequest>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequest" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateRequestDeferral>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequestDeferral" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateRequestedEventArgs" }; };
template <> struct name<Windows::Storage::Provider::CachedFileOptions>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileOptions" }; };
template <> struct name<Windows::Storage::Provider::CachedFileTarget>{ static constexpr auto & value{ L"Windows.Storage.Provider.CachedFileTarget" }; };
template <> struct name<Windows::Storage::Provider::FileUpdateStatus>{ static constexpr auto & value{ L"Windows.Storage.Provider.FileUpdateStatus" }; };
template <> struct name<Windows::Storage::Provider::ReadActivationMode>{ static constexpr auto & value{ L"Windows.Storage.Provider.ReadActivationMode" }; };
template <> struct name<Windows::Storage::Provider::UIStatus>{ static constexpr auto & value{ L"Windows.Storage.Provider.UIStatus" }; };
template <> struct name<Windows::Storage::Provider::WriteActivationMode>{ static constexpr auto & value{ L"Windows.Storage.Provider.WriteActivationMode" }; };
template <> struct guid<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ static constexpr GUID value{ 0x9FC90920,0x7BCF,0x4888,{ 0xA8,0x1E,0x10,0x2D,0x70,0x34,0xD7,0xCE } }; };
template <> struct guid<Windows::Storage::Provider::ICachedFileUpdaterUI>{ static constexpr GUID value{ 0x9E6F41E6,0xBAF2,0x4A97,{ 0xB6,0x00,0x93,0x33,0xF5,0xDF,0x80,0xFD } }; };
template <> struct guid<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ static constexpr GUID value{ 0x8856A21C,0x8699,0x4340,{ 0x9F,0x49,0xF7,0xCA,0xD7,0xFE,0x89,0x91 } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequest>{ static constexpr GUID value{ 0x40C82536,0xC1FE,0x4D93,{ 0xA7,0x92,0x1E,0x73,0x6B,0xC7,0x08,0x37 } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequest2>{ static constexpr GUID value{ 0x82484648,0xBDBE,0x447B,{ 0xA2,0xEE,0x7A,0xFE,0x6A,0x03,0x2A,0x94 } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ static constexpr GUID value{ 0xFFCEDB2B,0x8ADE,0x44A5,{ 0xBB,0x00,0x16,0x4C,0x4E,0x72,0xF1,0x3A } }; };
template <> struct guid<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ static constexpr GUID value{ 0x7B0A9342,0x3905,0x438D,{ 0xAA,0xEF,0x78,0xAE,0x26,0x5F,0x8D,0xD2 } }; };
template <> struct default_interface<Windows::Storage::Provider::CachedFileUpdaterUI>{ using type = Windows::Storage::Provider::ICachedFileUpdaterUI; };
template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequest>{ using type = Windows::Storage::Provider::IFileUpdateRequest; };
template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestDeferral>{ using type = Windows::Storage::Provider::IFileUpdateRequestDeferral; };
template <> struct default_interface<Windows::Storage::Provider::FileUpdateRequestedEventArgs>{ using type = Windows::Storage::Provider::IFileUpdateRequestedEventArgs; };

template <typename D>
struct consume_Windows_Storage_Provider_ICachedFileUpdaterStatics
{
    void SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options) const;
};
template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterStatics> { template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
    Windows::Storage::Provider::CachedFileTarget UpdateTarget() const;
    event_token FileUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
    using FileUpdateRequested_revoker = event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI>;
    FileUpdateRequested_revoker FileUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const;
    void FileUpdateRequested(event_token const& token) const;
    event_token UIRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
    using UIRequested_revoker = event_revoker<Windows::Storage::Provider::ICachedFileUpdaterUI>;
    UIRequested_revoker UIRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const;
    void UIRequested(event_token const& token) const;
    Windows::Storage::Provider::UIStatus UIStatus() const;
};
template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI> { template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_ICachedFileUpdaterUI2
{
    Windows::Storage::Provider::FileUpdateRequest UpdateRequest() const;
    Windows::Storage::Provider::FileUpdateRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::Storage::Provider::ICachedFileUpdaterUI2> { template <typename D> using type = consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequest
{
    hstring ContentId() const;
    Windows::Storage::StorageFile File() const;
    Windows::Storage::Provider::FileUpdateStatus Status() const;
    void Status(Windows::Storage::Provider::FileUpdateStatus const& value) const;
    Windows::Storage::Provider::FileUpdateRequestDeferral GetDeferral() const;
    void UpdateLocalFile(Windows::Storage::IStorageFile const& value) const;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequest2
{
    hstring UserInputNeededMessage() const;
    void UserInputNeededMessage(param::hstring const& value) const;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequest2> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequest2<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestDeferral> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>; };

template <typename D>
struct consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs
{
    Windows::Storage::Provider::FileUpdateRequest Request() const;
};
template <> struct consume<Windows::Storage::Provider::IFileUpdateRequestedEventArgs> { template <typename D> using type = consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>; };

template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetUpdateInformation(::IUnknown* file, HSTRING contentId, abi_t<Windows::Storage::Provider::ReadActivationMode> readMode, abi_t<Windows::Storage::Provider::WriteActivationMode> writeMode, abi_t<Windows::Storage::Provider::CachedFileOptions> options) = 0;
};};

template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UpdateTarget(abi_t<Windows::Storage::Provider::CachedFileTarget>* value) = 0;
    virtual HRESULT __stdcall add_FileUpdateRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FileUpdateRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_UIRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_UIRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_UIStatus(abi_t<Windows::Storage::Provider::UIStatus>* value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::ICachedFileUpdaterUI2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UpdateRequest(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContentId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_File(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Storage::Provider::FileUpdateStatus>* value) = 0;
    virtual HRESULT __stdcall put_Status(abi_t<Windows::Storage::Provider::FileUpdateStatus> value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
    virtual HRESULT __stdcall UpdateLocalFile(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequest2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UserInputNeededMessage(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UserInputNeededMessage(HSTRING value) = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::Storage::Provider::IFileUpdateRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

}
