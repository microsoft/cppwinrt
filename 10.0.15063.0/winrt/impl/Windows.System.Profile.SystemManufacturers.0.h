// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

struct ISmbiosInformationStatics;
struct SmbiosInformation;

}

namespace winrt::impl {

template <> struct category<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::SystemManufacturers::SmbiosInformation>{ using type = class_category; };
template <> struct name<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.ISmbiosInformationStatics" }; };
template <> struct name<Windows::System::Profile::SystemManufacturers::SmbiosInformation>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.SmbiosInformation" }; };
template <> struct guid<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ static constexpr GUID value{ 0x080CCA7C,0x637C,0x48C4,{ 0xB7,0x28,0xF9,0x27,0x38,0x12,0xDB,0x8E } }; };

template <typename D>
struct consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics
{
    hstring SerialNumber() const;
};
template <> struct consume<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> { template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>; };

template <> struct abi<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SerialNumber(HSTRING* value) = 0;
};};

}
