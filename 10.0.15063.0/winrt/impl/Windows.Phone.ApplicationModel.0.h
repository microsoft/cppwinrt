// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::ApplicationModel {

enum class ApplicationProfileModes : unsigned
{
    Default = 0x0,
    Alternate = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(ApplicationProfileModes)

struct IApplicationProfileStatics;
struct ApplicationProfile;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::ApplicationModel::IApplicationProfileStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::ApplicationModel::ApplicationProfile>{ using type = class_category; };
template <> struct category<Windows::Phone::ApplicationModel::ApplicationProfileModes>{ using type = enum_category; };
template <> struct name<Windows::Phone::ApplicationModel::IApplicationProfileStatics>{ static constexpr auto & value{ L"Windows.Phone.ApplicationModel.IApplicationProfileStatics" }; };
template <> struct name<Windows::Phone::ApplicationModel::ApplicationProfile>{ static constexpr auto & value{ L"Windows.Phone.ApplicationModel.ApplicationProfile" }; };
template <> struct name<Windows::Phone::ApplicationModel::ApplicationProfileModes>{ static constexpr auto & value{ L"Windows.Phone.ApplicationModel.ApplicationProfileModes" }; };
template <> struct guid<Windows::Phone::ApplicationModel::IApplicationProfileStatics>{ static constexpr GUID value{ 0xD5008AB4,0x7E7A,0x11E1,{ 0xA7,0xF2,0xB0,0xA1,0x48,0x24,0x01,0x9B } }; };

template <typename D>
struct consume_Windows_Phone_ApplicationModel_IApplicationProfileStatics
{
    Windows::Phone::ApplicationModel::ApplicationProfileModes Modes() const;
};
template <> struct consume<Windows::Phone::ApplicationModel::IApplicationProfileStatics> { template <typename D> using type = consume_Windows_Phone_ApplicationModel_IApplicationProfileStatics<D>; };

template <> struct abi<Windows::Phone::ApplicationModel::IApplicationProfileStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Modes(abi_t<Windows::Phone::ApplicationModel::ApplicationProfileModes>* value) = 0;
};};

}
