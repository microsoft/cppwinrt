// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview {

struct IClassicAppManagerStatics;
struct IInstalledClassicAppInfo;
struct ClassicAppManager;
struct InstalledClassicAppInfo;

}

namespace winrt::impl {

template <> struct category<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>{ using type = interface_category; };
template <> struct category<Windows::Management::Deployment::Preview::ClassicAppManager>{ using type = class_category; };
template <> struct category<Windows::Management::Deployment::Preview::InstalledClassicAppInfo>{ using type = class_category; };
template <> struct name<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>{ static constexpr auto & value{ L"Windows.Management.Deployment.Preview.IClassicAppManagerStatics" }; };
template <> struct name<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>{ static constexpr auto & value{ L"Windows.Management.Deployment.Preview.IInstalledClassicAppInfo" }; };
template <> struct name<Windows::Management::Deployment::Preview::ClassicAppManager>{ static constexpr auto & value{ L"Windows.Management.Deployment.Preview.ClassicAppManager" }; };
template <> struct name<Windows::Management::Deployment::Preview::InstalledClassicAppInfo>{ static constexpr auto & value{ L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo" }; };
template <> struct guid<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>{ static constexpr GUID value{ 0xE2FAD668,0x882C,0x4F33,{ 0xB0,0x35,0x0D,0xF7,0xB9,0x0D,0x67,0xE6 } }; };
template <> struct guid<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>{ static constexpr GUID value{ 0x0A7D3DA3,0x65D0,0x4086,{ 0x80,0xD6,0x06,0x10,0xD7,0x60,0x20,0x7D } }; };
template <> struct default_interface<Windows::Management::Deployment::Preview::InstalledClassicAppInfo>{ using type = Windows::Management::Deployment::Preview::IInstalledClassicAppInfo; };

template <typename D>
struct consume_Windows_Management_Deployment_Preview_IClassicAppManagerStatics
{
    Windows::Management::Deployment::Preview::InstalledClassicAppInfo FindInstalledApp(param::hstring const& appUninstallKey) const;
};
template <> struct consume<Windows::Management::Deployment::Preview::IClassicAppManagerStatics> { template <typename D> using type = consume_Windows_Management_Deployment_Preview_IClassicAppManagerStatics<D>; };

template <typename D>
struct consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo
{
    hstring DisplayName() const;
    hstring DisplayVersion() const;
};
template <> struct consume<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> { template <typename D> using type = consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>; };

template <> struct abi<Windows::Management::Deployment::Preview::IClassicAppManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindInstalledApp(HSTRING appUninstallKey, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayVersion(HSTRING* value) = 0;
};};

}
