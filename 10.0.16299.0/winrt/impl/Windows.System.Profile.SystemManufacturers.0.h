// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

struct IOemSupportInfo;
struct ISmbiosInformationStatics;
struct ISystemSupportInfoStatics;
struct OemSupportInfo;
struct SmbiosInformation;
struct SystemSupportInfo;

}

namespace winrt::impl {

template <> struct category<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Profile::SystemManufacturers::OemSupportInfo>{ using type = class_category; };
template <> struct category<Windows::System::Profile::SystemManufacturers::SmbiosInformation>{ using type = class_category; };
template <> struct category<Windows::System::Profile::SystemManufacturers::SystemSupportInfo>{ using type = class_category; };
template <> struct name<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.IOemSupportInfo" }; };
template <> struct name<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.ISmbiosInformationStatics" }; };
template <> struct name<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.ISystemSupportInfoStatics" }; };
template <> struct name<Windows::System::Profile::SystemManufacturers::OemSupportInfo>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.OemSupportInfo" }; };
template <> struct name<Windows::System::Profile::SystemManufacturers::SmbiosInformation>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.SmbiosInformation" }; };
template <> struct name<Windows::System::Profile::SystemManufacturers::SystemSupportInfo>{ static constexpr auto & value{ L"Windows.System.Profile.SystemManufacturers.SystemSupportInfo" }; };
template <> struct guid<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>{ static constexpr GUID value{ 0x8D2EAE55,0x87EF,0x4266,{ 0x86,0xD0,0xC4,0xAF,0xBE,0xB2,0x9B,0xB9 } }; };
template <> struct guid<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ static constexpr GUID value{ 0x080CCA7C,0x637C,0x48C4,{ 0xB7,0x28,0xF9,0x27,0x38,0x12,0xDB,0x8E } }; };
template <> struct guid<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>{ static constexpr GUID value{ 0xEF750974,0xC422,0x45D7,{ 0xA4,0x4D,0x5C,0x1C,0x00,0x43,0xA2,0xB3 } }; };
template <> struct default_interface<Windows::System::Profile::SystemManufacturers::OemSupportInfo>{ using type = Windows::System::Profile::SystemManufacturers::IOemSupportInfo; };

template <typename D>
struct consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo
{
    Windows::Foundation::Uri SupportLink() const noexcept;
    Windows::Foundation::Uri SupportAppLink() const noexcept;
    hstring SupportProvider() const noexcept;
};
template <> struct consume<Windows::System::Profile::SystemManufacturers::IOemSupportInfo> { template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>; };

template <typename D>
struct consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics
{
    hstring SerialNumber() const noexcept;
};
template <> struct consume<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> { template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>; };

template <typename D>
struct consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics
{
    hstring LocalSystemEdition() const noexcept;
    Windows::System::Profile::SystemManufacturers::OemSupportInfo OemSupportInfo() const noexcept;
};
template <> struct consume<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> { template <typename D> using type = consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>; };

template <> struct abi<Windows::System::Profile::SystemManufacturers::IOemSupportInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SupportLink(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportAppLink(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportProvider(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SerialNumber(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalSystemEdition(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OemSupportInfo(::IUnknown** value) = 0;
};};

}
