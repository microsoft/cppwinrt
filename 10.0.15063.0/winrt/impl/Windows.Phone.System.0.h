// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::System {

struct ISystemProtectionStatics;
struct ISystemProtectionUnlockStatics;
struct SystemProtection;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::System::ISystemProtectionStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::ISystemProtectionUnlockStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::SystemProtection>{ using type = class_category; };
template <> struct name<Windows::Phone::System::ISystemProtectionStatics>{ static constexpr auto & value{ L"Windows.Phone.System.ISystemProtectionStatics" }; };
template <> struct name<Windows::Phone::System::ISystemProtectionUnlockStatics>{ static constexpr auto & value{ L"Windows.Phone.System.ISystemProtectionUnlockStatics" }; };
template <> struct name<Windows::Phone::System::SystemProtection>{ static constexpr auto & value{ L"Windows.Phone.System.SystemProtection" }; };
template <> struct guid<Windows::Phone::System::ISystemProtectionStatics>{ static constexpr GUID value{ 0x49C36560,0x97E1,0x4D99,{ 0x8B,0xFB,0xBE,0xFE,0xAA,0x6A,0xCE,0x6D } }; };
template <> struct guid<Windows::Phone::System::ISystemProtectionUnlockStatics>{ static constexpr GUID value{ 0x0692FA3F,0x8F11,0x4C4B,{ 0xAA,0x0D,0x87,0xD7,0xAF,0x7B,0x17,0x79 } }; };

template <typename D>
struct consume_Windows_Phone_System_ISystemProtectionStatics
{
    bool ScreenLocked() const;
};
template <> struct consume<Windows::Phone::System::ISystemProtectionStatics> { template <typename D> using type = consume_Windows_Phone_System_ISystemProtectionStatics<D>; };

template <typename D>
struct consume_Windows_Phone_System_ISystemProtectionUnlockStatics
{
    void RequestScreenUnlock() const;
};
template <> struct consume<Windows::Phone::System::ISystemProtectionUnlockStatics> { template <typename D> using type = consume_Windows_Phone_System_ISystemProtectionUnlockStatics<D>; };

template <> struct abi<Windows::Phone::System::ISystemProtectionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ScreenLocked(bool* value) = 0;
};};

template <> struct abi<Windows::Phone::System::ISystemProtectionUnlockStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestScreenUnlock() = 0;
};};

}
