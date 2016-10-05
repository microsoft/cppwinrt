// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Cryptography.DataProtection.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
#define WINRT_GENERIC_3bee8834_b9a7_5a80_a746_5ef097227878
template <> struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878")) __declspec(novtable) IAsyncOperation<Windows::Storage::Streams::IBuffer> : impl_IAsyncOperation<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
#define WINRT_GENERIC_51c3d2fd_b8a1_5620_b746_7ee6d533aca3
template <> struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> : impl_AsyncOperationCompletedHandler<Windows::Storage::Streams::IBuffer> {};
#endif


}

namespace Windows::Security::Cryptography::DataProtection {

template <typename D>
struct WINRT_EBO impl_IDataProtectionProvider
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ProtectAsync(const Windows::Storage::Streams::IBuffer & data) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> UnprotectAsync(const Windows::Storage::Streams::IBuffer & data) const;
    Windows::Foundation::IAsyncAction ProtectStreamAsync(const Windows::Storage::Streams::IInputStream & src, const Windows::Storage::Streams::IOutputStream & dest) const;
    Windows::Foundation::IAsyncAction UnprotectStreamAsync(const Windows::Storage::Streams::IInputStream & src, const Windows::Storage::Streams::IOutputStream & dest) const;
};

template <typename D>
struct WINRT_EBO impl_IDataProtectionProviderFactory
{
    Windows::Security::Cryptography::DataProtection::DataProtectionProvider CreateOverloadExplicit(hstring_ref protectionDescriptor) const;
};

struct IDataProtectionProvider :
    Windows::IInspectable,
    impl::consume<IDataProtectionProvider>
{
    IDataProtectionProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataProtectionProvider>(m_ptr); }
};

struct IDataProtectionProviderFactory :
    Windows::IInspectable,
    impl::consume<IDataProtectionProviderFactory>
{
    IDataProtectionProviderFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDataProtectionProviderFactory>(m_ptr); }
};

}

}
