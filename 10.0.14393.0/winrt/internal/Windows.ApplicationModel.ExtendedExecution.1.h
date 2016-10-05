// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.ExtendedExecution.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::ExtendedExecution {

struct __declspec(uuid("bfbc9f16-63b5-4c0b-aad6-828af5373ec3")) __declspec(novtable) IExtendedExecutionRevokedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Reason(winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason * value) = 0;
};

struct __declspec(uuid("af908a2d-118b-48f1-9308-0c4fc41e200f")) __declspec(novtable) IExtendedExecutionSession : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Reason(winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason * value) = 0;
    virtual HRESULT __stdcall put_Reason(winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall put_Description(hstring value) = 0;
    virtual HRESULT __stdcall get_PercentProgress(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_PercentProgress(uint32_t value) = 0;
    virtual HRESULT __stdcall add_Revoked(Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Revoked(event_token token) = 0;
    virtual HRESULT __stdcall abi_RequestExtensionAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs> { using default_interface = Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs; };
template <> struct traits<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession> { using default_interface = Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession; };

}

namespace Windows::ApplicationModel::ExtendedExecution {

template <typename T> struct impl_IExtendedExecutionRevokedEventArgs;
template <typename T> struct impl_IExtendedExecutionSession;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::ExtendedExecution::impl_IExtendedExecutionRevokedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession>
{
    using abi = ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession;
    template <typename D> using consume = Windows::ApplicationModel::ExtendedExecution::impl_IExtendedExecutionSession<D>;
};

template <> struct traits<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession>
{
    using abi = ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession"; }
};

}

}
