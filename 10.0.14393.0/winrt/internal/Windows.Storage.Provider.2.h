// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Storage.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ed56ab72_ebd3_52c8_b0ac_987d30090351
#define WINRT_GENERIC_ed56ab72_ebd3_52c8_b0ac_987d30090351
template <> struct __declspec(uuid("ed56ab72-ebd3-52c8-b0ac-987d30090351")) __declspec(novtable) TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> : impl_TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_45fdd443_c0b9_57b0_a84f_7d876edc3149
#define WINRT_GENERIC_45fdd443_c0b9_57b0_a84f_7d876edc3149
template <> struct __declspec(uuid("45fdd443-c0b9-57b0-a84f-7d876edc3149")) __declspec(novtable) TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::IInspectable> : impl_TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::IInspectable> {};
#endif


}

namespace Windows::Storage::Provider {

template <typename D>
struct WINRT_EBO impl_ICachedFileUpdaterStatics
{
    void SetUpdateInformation(const Windows::Storage::IStorageFile & file, hstring_ref contentId, Windows::Storage::Provider::ReadActivationMode readMode, Windows::Storage::Provider::WriteActivationMode writeMode, Windows::Storage::Provider::CachedFileOptions options) const;
};

template <typename D>
struct WINRT_EBO impl_ICachedFileUpdaterUI
{
    hstring Title() const;
    void Title(hstring_ref value) const;
    Windows::Storage::Provider::CachedFileTarget UpdateTarget() const;
    event_token FileUpdateRequested(const Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> & handler) const;
    using FileUpdateRequested_revoker = event_revoker<ICachedFileUpdaterUI>;
    FileUpdateRequested_revoker FileUpdateRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> & handler) const;
    void FileUpdateRequested(event_token token) const;
    event_token UIRequested(const Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::IInspectable> & handler) const;
    using UIRequested_revoker = event_revoker<ICachedFileUpdaterUI>;
    UIRequested_revoker UIRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::IInspectable> & handler) const;
    void UIRequested(event_token token) const;
    Windows::Storage::Provider::UIStatus UIStatus() const;
};

template <typename D>
struct WINRT_EBO impl_ICachedFileUpdaterUI2
{
    Windows::Storage::Provider::FileUpdateRequest UpdateRequest() const;
    Windows::Storage::Provider::FileUpdateRequestDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IFileUpdateRequest
{
    hstring ContentId() const;
    Windows::Storage::StorageFile File() const;
    Windows::Storage::Provider::FileUpdateStatus Status() const;
    void Status(Windows::Storage::Provider::FileUpdateStatus value) const;
    Windows::Storage::Provider::FileUpdateRequestDeferral GetDeferral() const;
    void UpdateLocalFile(const Windows::Storage::IStorageFile & value) const;
};

template <typename D>
struct WINRT_EBO impl_IFileUpdateRequest2
{
    hstring UserInputNeededMessage() const;
    void UserInputNeededMessage(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IFileUpdateRequestDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IFileUpdateRequestedEventArgs
{
    Windows::Storage::Provider::FileUpdateRequest Request() const;
};

struct ICachedFileUpdaterStatics :
    Windows::IInspectable,
    impl::consume<ICachedFileUpdaterStatics>
{
    ICachedFileUpdaterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICachedFileUpdaterStatics>(m_ptr); }
};

struct ICachedFileUpdaterUI :
    Windows::IInspectable,
    impl::consume<ICachedFileUpdaterUI>
{
    ICachedFileUpdaterUI(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICachedFileUpdaterUI>(m_ptr); }
};

struct ICachedFileUpdaterUI2 :
    Windows::IInspectable,
    impl::consume<ICachedFileUpdaterUI2>,
    impl::require<ICachedFileUpdaterUI2, Windows::Storage::Provider::ICachedFileUpdaterUI>
{
    ICachedFileUpdaterUI2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICachedFileUpdaterUI2>(m_ptr); }
};

struct IFileUpdateRequest :
    Windows::IInspectable,
    impl::consume<IFileUpdateRequest>
{
    IFileUpdateRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileUpdateRequest>(m_ptr); }
};

struct IFileUpdateRequest2 :
    Windows::IInspectable,
    impl::consume<IFileUpdateRequest2>,
    impl::require<IFileUpdateRequest2, Windows::Storage::Provider::IFileUpdateRequest>
{
    IFileUpdateRequest2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileUpdateRequest2>(m_ptr); }
};

struct IFileUpdateRequestDeferral :
    Windows::IInspectable,
    impl::consume<IFileUpdateRequestDeferral>
{
    IFileUpdateRequestDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileUpdateRequestDeferral>(m_ptr); }
};

struct IFileUpdateRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IFileUpdateRequestedEventArgs>
{
    IFileUpdateRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFileUpdateRequestedEventArgs>(m_ptr); }
};

}

}
