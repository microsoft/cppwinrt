// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution::Foreground {

enum class ExtendedExecutionForegroundReason
{
    Unspecified = 0,
    SavingData = 1,
    BackgroundAudio = 2,
    Unconstrained = 3,
};

enum class ExtendedExecutionForegroundResult
{
    Allowed = 0,
    Denied = 1,
};

enum class ExtendedExecutionForegroundRevokedReason
{
    Resumed = 0,
    SystemPolicy = 1,
};

struct IExtendedExecutionForegroundRevokedEventArgs;
struct IExtendedExecutionForegroundSession;
struct ExtendedExecutionForegroundRevokedEventArgs;
struct ExtendedExecutionForegroundSession;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.Foreground.IExtendedExecutionForegroundRevokedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>{ static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.Foreground.IExtendedExecutionForegroundSession" }; };
template <> struct name<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundRevokedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession>{ static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundSession" }; };
template <> struct name<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason>{ static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundReason" }; };
template <> struct name<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundResult" }; };
template <> struct name<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason>{ static constexpr auto & value{ L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundRevokedReason" }; };
template <> struct guid<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs>{ static constexpr GUID value{ 0xB07CD940,0x9557,0xAEA4,{ 0x2C,0x99,0xBD,0xD5,0x6D,0x9B,0xE4,0x61 } }; };
template <> struct guid<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>{ static constexpr GUID value{ 0xFBF440E1,0x9D10,0x4201,{ 0xB0,0x1E,0xC8,0x32,0x75,0x29,0x6F,0x2E } }; };
template <> struct default_interface<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs>{ using type = Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession>{ using type = Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession; };

template <typename D>
struct consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundRevokedEventArgs
{
    Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason Reason() const;
};
template <> struct consume<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundRevokedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession
{
    hstring Description() const;
    void Description(param::hstring const& value) const;
    event_token Revoked(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const& handler) const;
    using Revoked_revoker = event_revoker<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>;
    Revoked_revoker Revoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs> const& handler) const;
    void Revoked(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> RequestExtensionAsync() const;
    Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason Reason() const;
    void Reason(Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason const& value) const;
};
template <> struct consume<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession> { template <typename D> using type = consume_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession<D>; };

template <> struct abi<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reason(abi_t<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
    virtual HRESULT __stdcall add_Revoked(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Revoked(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall RequestExtensionAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Reason(abi_t<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason>* value) = 0;
    virtual HRESULT __stdcall put_Reason(abi_t<Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason> value) = 0;
};};

}
