// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown {

struct IDeviceLockdownProfileInformation;
struct IDeviceLockdownProfileStatics;
struct DeviceLockdownProfile;
struct DeviceLockdownProfileInformation;

}

namespace winrt::impl {

template <> struct category<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>{ using type = interface_category; };
template <> struct category<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>{ using type = interface_category; };
template <> struct category<Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>{ using type = class_category; };
template <> struct category<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>{ using type = class_category; };
template <> struct name<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>{ static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.IDeviceLockdownProfileInformation" }; };
template <> struct name<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>{ static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.IDeviceLockdownProfileStatics" }; };
template <> struct name<Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>{ static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile" }; };
template <> struct name<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>{ static constexpr auto & value{ L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfileInformation" }; };
template <> struct guid<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>{ static constexpr GUID value{ 0x7980E14E,0x45B1,0x4A96,{ 0x92,0xFC,0x62,0x75,0x6B,0x73,0x96,0x78 } }; };
template <> struct guid<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>{ static constexpr GUID value{ 0x622F6965,0xF9A8,0x41A1,{ 0xA6,0x91,0x88,0xCD,0x80,0xC7,0xA0,0x69 } }; };
template <> struct default_interface<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>{ using type = Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation; };

template <typename D>
struct consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation
{
    hstring Name() const;
};
template <> struct consume<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> { template <typename D> using type = consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation<D>; };

template <typename D>
struct consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics
{
    Windows::Foundation::Collections::IVectorView<GUID> GetSupportedLockdownProfiles() const;
    GUID GetCurrentLockdownProfile() const;
    Windows::Foundation::IAsyncAction ApplyLockdownProfileAsync(GUID const& profileID) const;
    Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation GetLockdownProfileInformation(GUID const& profileID) const;
};
template <> struct consume<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> { template <typename D> using type = consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>; };

template <> struct abi<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* phProfileName) = 0;
};};

template <> struct abi<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSupportedLockdownProfiles(::IUnknown** ppProfileIDs) = 0;
    virtual HRESULT __stdcall GetCurrentLockdownProfile(abi_t<GUID>* pProfileID) = 0;
    virtual HRESULT __stdcall ApplyLockdownProfileAsync(abi_t<GUID> profileID, ::IUnknown** ppWaitableOperation) = 0;
    virtual HRESULT __stdcall GetLockdownProfileInformation(abi_t<GUID> profileID, ::IUnknown** ppInformation) = 0;
};};

}
