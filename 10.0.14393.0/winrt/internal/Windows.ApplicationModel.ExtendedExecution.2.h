// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.ExtendedExecution.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b6d68d9c_9546_50b3_8af6_9c985a372ba8
#define WINRT_GENERIC_b6d68d9c_9546_50b3_8af6_9c985a372ba8
template <> struct __declspec(uuid("b6d68d9c-9546-50b3-8af6-9c985a372ba8")) __declspec(novtable) TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> : impl_TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_1dbb1bc9_6cd7_5947_8cd1_29632b5aa950
#define WINRT_GENERIC_1dbb1bc9_6cd7_5947_8cd1_29632b5aa950
template <> struct __declspec(uuid("1dbb1bc9-6cd7-5947-8cd1-29632b5aa950")) __declspec(novtable) IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> : impl_IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> {};
#endif

#ifndef WINRT_GENERIC_873c5c7a_c638_5a33_9b03_215c72471663
#define WINRT_GENERIC_873c5c7a_c638_5a33_9b03_215c72471663
template <> struct __declspec(uuid("873c5c7a-c638-5a33-9b03-215c72471663")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> : impl_AsyncOperationCompletedHandler<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> {};
#endif


}

namespace Windows::ApplicationModel::ExtendedExecution {

template <typename D>
struct WINRT_EBO impl_IExtendedExecutionRevokedEventArgs
{
    Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason Reason() const;
};

template <typename D>
struct WINRT_EBO impl_IExtendedExecutionSession
{
    Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason Reason() const;
    void Reason(Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason value) const;
    hstring Description() const;
    void Description(hstring_ref value) const;
    uint32_t PercentProgress() const;
    void PercentProgress(uint32_t value) const;
    event_token Revoked(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> & handler) const;
    using Revoked_revoker = event_revoker<IExtendedExecutionSession>;
    Revoked_revoker Revoked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> & handler) const;
    void Revoked(event_token token) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> RequestExtensionAsync() const;
};

struct IExtendedExecutionRevokedEventArgs :
    Windows::IInspectable,
    impl::consume<IExtendedExecutionRevokedEventArgs>
{
    IExtendedExecutionRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IExtendedExecutionRevokedEventArgs>(m_ptr); }
};

struct IExtendedExecutionSession :
    Windows::IInspectable,
    impl::consume<IExtendedExecutionSession>,
    impl::require<IExtendedExecutionSession, Windows::Foundation::IClosable>
{
    IExtendedExecutionSession(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IExtendedExecutionSession>(m_ptr); }
};

}

}
