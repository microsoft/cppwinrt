// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Provider {

struct IPhoneCallOrigin;
struct IPhoneCallOrigin2;
struct IPhoneCallOrigin3;
struct IPhoneCallOriginManagerStatics;
struct IPhoneCallOriginManagerStatics2;
struct PhoneCallOrigin;
struct PhoneCallOriginManager;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin" }; };
template <> struct name<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin2" }; };
template <> struct name<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOrigin3" }; };
template <> struct name<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Provider.IPhoneCallOriginManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Provider.PhoneCallOrigin" }; };
template <> struct name<Windows::ApplicationModel::Calls::Provider::PhoneCallOriginManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Provider.PhoneCallOriginManager" }; };
template <> struct guid<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ static constexpr GUID value{ 0x20613479,0x0EF9,0x4454,{ 0x87,0x1C,0xAF,0xB6,0x6A,0x14,0xB6,0xA5 } }; };
template <> struct guid<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ static constexpr GUID value{ 0x04C7E980,0x9AC2,0x4768,{ 0xB5,0x36,0xB6,0x8D,0xA4,0x95,0x7D,0x02 } }; };
template <> struct guid<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ static constexpr GUID value{ 0x49330FB4,0xD1A7,0x43A2,{ 0xAE,0xEE,0xC0,0x7B,0x6D,0xBA,0xF0,0x68 } }; };
template <> struct guid<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ static constexpr GUID value{ 0xCCFC5A0A,0x9AF7,0x6149,{ 0x39,0xD0,0xE0,0x76,0xFC,0xCE,0x13,0x95 } }; };
template <> struct guid<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ static constexpr GUID value{ 0x8BF3EE3F,0x40F4,0x4380,{ 0x8C,0x7C,0xAE,0xA2,0xC9,0xB8,0xDD,0x7A } }; };
template <> struct default_interface<Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin>{ using type = Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin
{
    hstring Category() const;
    void Category(param::hstring const& value) const;
    hstring CategoryDescription() const;
    void CategoryDescription(param::hstring const& value) const;
    hstring Location() const;
    void Location(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2
{
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3
{
    Windows::Storage::StorageFile DisplayPicture() const;
    void DisplayPicture(Windows::Storage::StorageFile const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOrigin3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics
{
    bool IsCurrentAppActiveCallOriginApp() const;
    void ShowPhoneCallOriginSettingsUI() const;
    void SetCallOrigin(GUID const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2
{
    Windows::Foundation::IAsyncOperation<bool> RequestSetAsActiveCallOriginAppAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Provider_IPhoneCallOriginManagerStatics2<D>; };

template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Category(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Category(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CategoryDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CategoryDescription(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Location(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Location(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayPicture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DisplayPicture(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCurrentAppActiveCallOriginApp(bool* value) = 0;
    virtual HRESULT __stdcall ShowPhoneCallOriginSettingsUI() = 0;
    virtual HRESULT __stdcall SetCallOrigin(abi_t<GUID> requestId, ::IUnknown* callOrigin) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestSetAsActiveCallOriginAppAsync(::IUnknown** result) = 0;
};};

}
