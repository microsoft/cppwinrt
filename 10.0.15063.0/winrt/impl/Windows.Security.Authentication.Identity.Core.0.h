// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Core {

enum class MicrosoftAccountMultiFactorAuthenticationType
{
    User = 0,
    Device = 1,
};

enum class MicrosoftAccountMultiFactorServiceResponse
{
    Success = 0,
    Error = 1,
    NoNetworkConnection = 2,
    ServiceUnavailable = 3,
    TotpSetupDenied = 4,
    NgcNotSetup = 5,
    SessionAlreadyDenied = 6,
    SessionAlreadyApproved = 7,
    SessionExpired = 8,
    NgcNonceExpired = 9,
    InvalidSessionId = 10,
    InvalidSessionType = 11,
    InvalidOperation = 12,
    InvalidStateTransition = 13,
    DeviceNotFound = 14,
    FlowDisabled = 15,
    SessionNotApproved = 16,
    OperationCanceledByUser = 17,
    NgcDisabledByServer = 18,
    NgcKeyNotFoundOnServer = 19,
    UIRequired = 20,
    DeviceIdChanged = 21,
};

enum class MicrosoftAccountMultiFactorSessionApprovalStatus
{
    Pending = 0,
    Approved = 1,
    Denied = 2,
};

enum class MicrosoftAccountMultiFactorSessionAuthenticationStatus
{
    Authenticated = 0,
    Unauthenticated = 1,
};

struct IMicrosoftAccountMultiFactorAuthenticationManager;
struct IMicrosoftAccountMultiFactorAuthenticatorStatics;
struct IMicrosoftAccountMultiFactorGetSessionsResult;
struct IMicrosoftAccountMultiFactorOneTimeCodedInfo;
struct IMicrosoftAccountMultiFactorSessionInfo;
struct IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
struct MicrosoftAccountMultiFactorAuthenticationManager;
struct MicrosoftAccountMultiFactorGetSessionsResult;
struct MicrosoftAccountMultiFactorOneTimeCodedInfo;
struct MicrosoftAccountMultiFactorSessionInfo;
struct MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus>{ using type = enum_category; };
template <> struct name<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationType" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorServiceResponse" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionApprovalStatus" }; };
template <> struct name<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionAuthenticationStatus" }; };
template <> struct guid<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager>{ static constexpr GUID value{ 0x0FD340A5,0xF574,0x4320,{ 0xA0,0x8E,0x0A,0x19,0xA8,0x23,0x22,0xAA } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>{ static constexpr GUID value{ 0xD964C2E6,0xF446,0x4C71,{ 0x8B,0x79,0x6E,0xA4,0x02,0x4A,0xA9,0xB8 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult>{ static constexpr GUID value{ 0x4E23A9A0,0xE9FA,0x497A,{ 0x95,0xDE,0x6D,0x57,0x47,0xBF,0x97,0x4C } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo>{ static constexpr GUID value{ 0x82BA264B,0xD87C,0x4668,{ 0xA9,0x76,0x40,0xCF,0xAE,0x54,0x7D,0x08 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo>{ static constexpr GUID value{ 0x5F7EABB4,0xA278,0x4635,{ 0xB7,0x65,0xB4,0x94,0xEB,0x26,0x0A,0xF4 } }; };
template <> struct guid<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>{ static constexpr GUID value{ 0xAA7EC5FB,0xDA3F,0x4088,{ 0xA2,0x0D,0x56,0x18,0xAF,0xAD,0xB2,0xE5 } }; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager>{ using type = Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>{ using type = Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>{ using type = Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>{ using type = Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo; };
template <> struct default_interface<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>{ using type = Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> GetOneTimePassCodeAsync(param::hstring const& userAccountId, uint32_t codeLength) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> AddDeviceAsync(param::hstring const& userAccountId, param::hstring const& authenticationToken, param::hstring const& wnsChannelId) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> RemoveDeviceAsync(param::hstring const& userAccountId) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> UpdateWnsChannelAsync(param::hstring const& userAccountId, param::hstring const& channelUri) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> GetSessionsAsync(param::async_iterable<hstring> const& userAccountIdList) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> GetSessionsAndUnregisteredAccountsAsync(param::async_iterable<hstring> const& userAccountIdList) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const& sessionAuthentictionStatus, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const& authenticationSessionInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const& sessionAuthentictionStatus, param::hstring const& userAccountId, param::hstring const& sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const& sessionAuthenticationType) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> DenySessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const& authenticationSessionInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> DenySessionAsync(param::hstring const& userAccountId, param::hstring const& sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const& sessionAuthenticationType) const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticatorStatics
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager Current() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticatorStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> Sessions() const;
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse ServiceResponse() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    hstring Code() const;
    Windows::Foundation::TimeSpan TimeInterval() const;
    Windows::Foundation::TimeSpan TimeToLive() const;
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse ServiceResponse() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo
{
    hstring UserAccountId() const;
    hstring SessionId() const;
    hstring DisplaySessionId() const;
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus ApprovalStatus() const;
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType AuthenticationType() const;
    Windows::Foundation::DateTime RequestTime() const;
    Windows::Foundation::DateTime ExpirationTime() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> Sessions() const;
    Windows::Foundation::Collections::IVectorView<hstring> UnregisteredAccounts() const;
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse ServiceResponse() const;
};
template <> struct consume<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> { template <typename D> using type = consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>; };

template <> struct abi<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetOneTimePassCodeAsync(HSTRING userAccountId, uint32_t codeLength, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall AddDeviceAsync(HSTRING userAccountId, HSTRING authenticationToken, HSTRING wnsChannelId, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall RemoveDeviceAsync(HSTRING userAccountId, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall UpdateWnsChannelAsync(HSTRING userAccountId, HSTRING channelUri, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall GetSessionsAsync(::IUnknown* userAccountIdList, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall GetSessionsAndUnregisteredAccountsAsync(::IUnknown* userAccountIdList, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall ApproveSessionUsingAuthSessionInfoAsync(abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus> sessionAuthentictionStatus, ::IUnknown* authenticationSessionInfo, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall ApproveSessionAsync(abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus> sessionAuthentictionStatus, HSTRING userAccountId, HSTRING sessionId, abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType> sessionAuthenticationType, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall DenySessionUsingAuthSessionInfoAsync(::IUnknown* authenticationSessionInfo, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall DenySessionAsync(HSTRING userAccountId, HSTRING sessionId, abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType> sessionAuthenticationType, ::IUnknown** asyncOperation) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Sessions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServiceResponse(abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Code(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TimeInterval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_TimeToLive(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_ServiceResponse(abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UserAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SessionId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplaySessionId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ApprovalStatus(abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus>* value) = 0;
    virtual HRESULT __stdcall get_AuthenticationType(abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType>* value) = 0;
    virtual HRESULT __stdcall get_RequestTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_ExpirationTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Sessions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UnregisteredAccounts(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServiceResponse(abi_t<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>* value) = 0;
};};

}
