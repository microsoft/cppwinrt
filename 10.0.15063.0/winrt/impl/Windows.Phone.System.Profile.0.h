// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::System::Profile {

struct IRetailModeStatics;
struct RetailMode;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::System::Profile::IRetailModeStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::System::Profile::RetailMode>{ using type = class_category; };
template <> struct name<Windows::Phone::System::Profile::IRetailModeStatics>{ static constexpr auto & value{ L"Windows.Phone.System.Profile.IRetailModeStatics" }; };
template <> struct name<Windows::Phone::System::Profile::RetailMode>{ static constexpr auto & value{ L"Windows.Phone.System.Profile.RetailMode" }; };
template <> struct guid<Windows::Phone::System::Profile::IRetailModeStatics>{ static constexpr GUID value{ 0xD7DED029,0xFDDA,0x43E7,{ 0x93,0xFB,0xE5,0x3A,0xB6,0xE8,0x9E,0xC3 } }; };

template <typename D>
struct consume_Windows_Phone_System_Profile_IRetailModeStatics
{
    [[deprecated("Use Windows.System.Profile.IRetailInfoStatics instead.")]] bool RetailModeEnabled() const;
};
template <> struct consume<Windows::Phone::System::Profile::IRetailModeStatics> { template <typename D> using type = consume_Windows_Phone_System_Profile_IRetailModeStatics<D>; };

template <> struct abi<Windows::Phone::System::Profile::IRetailModeStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RetailModeEnabled(bool* value) = 0;
};};

}
