// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::Management::Policies {

enum class NamedPolicyKind
{
    Invalid = 0,
    Binary = 1,
    Boolean = 2,
    Int32 = 3,
    Int64 = 4,
    String = 5,
};

struct INamedPolicyData;
struct INamedPolicyStatics;
struct NamedPolicy;
struct NamedPolicyData;

}

namespace winrt::impl {

template <> struct category<Windows::Management::Policies::INamedPolicyData>{ using type = interface_category; };
template <> struct category<Windows::Management::Policies::INamedPolicyStatics>{ using type = interface_category; };
template <> struct category<Windows::Management::Policies::NamedPolicy>{ using type = class_category; };
template <> struct category<Windows::Management::Policies::NamedPolicyData>{ using type = class_category; };
template <> struct category<Windows::Management::Policies::NamedPolicyKind>{ using type = enum_category; };
template <> struct name<Windows::Management::Policies::INamedPolicyData>{ static constexpr auto & value{ L"Windows.Management.Policies.INamedPolicyData" }; };
template <> struct name<Windows::Management::Policies::INamedPolicyStatics>{ static constexpr auto & value{ L"Windows.Management.Policies.INamedPolicyStatics" }; };
template <> struct name<Windows::Management::Policies::NamedPolicy>{ static constexpr auto & value{ L"Windows.Management.Policies.NamedPolicy" }; };
template <> struct name<Windows::Management::Policies::NamedPolicyData>{ static constexpr auto & value{ L"Windows.Management.Policies.NamedPolicyData" }; };
template <> struct name<Windows::Management::Policies::NamedPolicyKind>{ static constexpr auto & value{ L"Windows.Management.Policies.NamedPolicyKind" }; };
template <> struct guid<Windows::Management::Policies::INamedPolicyData>{ static constexpr GUID value{ 0x38DCB198,0x95AC,0x4077,{ 0xA6,0x43,0x80,0x78,0xCA,0xE2,0x64,0x00 } }; };
template <> struct guid<Windows::Management::Policies::INamedPolicyStatics>{ static constexpr GUID value{ 0x7F793BE7,0x76C4,0x4058,{ 0x8C,0xAD,0x67,0x66,0x2C,0xD0,0x5F,0x0D } }; };
template <> struct default_interface<Windows::Management::Policies::NamedPolicyData>{ using type = Windows::Management::Policies::INamedPolicyData; };

template <typename D>
struct consume_Windows_Management_Policies_INamedPolicyData
{
    hstring Area() const;
    hstring Name() const;
    Windows::Management::Policies::NamedPolicyKind Kind() const;
    bool IsManaged() const;
    bool IsUserPolicy() const;
    Windows::System::User User() const;
    bool GetBoolean() const;
    Windows::Storage::Streams::IBuffer GetBinary() const;
    int32_t GetInt32() const;
    int64_t GetInt64() const;
    hstring GetString() const;
    event_token Changed(Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> const& changedHandler) const;
    using Changed_revoker = event_revoker<Windows::Management::Policies::INamedPolicyData>;
    Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> const& changedHandler) const;
    void Changed(event_token const& cookie) const;
};
template <> struct consume<Windows::Management::Policies::INamedPolicyData> { template <typename D> using type = consume_Windows_Management_Policies_INamedPolicyData<D>; };

template <typename D>
struct consume_Windows_Management_Policies_INamedPolicyStatics
{
    Windows::Management::Policies::NamedPolicyData GetPolicyFromPath(param::hstring const& area, param::hstring const& name) const;
    Windows::Management::Policies::NamedPolicyData GetPolicyFromPathForUser(Windows::System::User const& user, param::hstring const& area, param::hstring const& name) const;
};
template <> struct consume<Windows::Management::Policies::INamedPolicyStatics> { template <typename D> using type = consume_Windows_Management_Policies_INamedPolicyStatics<D>; };

template <> struct abi<Windows::Management::Policies::INamedPolicyData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Area(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Management::Policies::NamedPolicyKind>* value) = 0;
    virtual HRESULT __stdcall get_IsManaged(bool* value) = 0;
    virtual HRESULT __stdcall get_IsUserPolicy(bool* value) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetBoolean(bool* result) = 0;
    virtual HRESULT __stdcall GetBinary(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetInt32(int32_t* result) = 0;
    virtual HRESULT __stdcall GetInt64(int64_t* result) = 0;
    virtual HRESULT __stdcall GetString(HSTRING* result) = 0;
    virtual HRESULT __stdcall add_Changed(::IUnknown* changedHandler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Changed(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Management::Policies::INamedPolicyStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPolicyFromPath(HSTRING area, HSTRING name, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetPolicyFromPathForUser(::IUnknown* user, HSTRING area, HSTRING name, ::IUnknown** result) = 0;
};};

}
