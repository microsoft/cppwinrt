// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::CommunicationBlocking {

struct ICommunicationBlockingAccessManagerStatics;
struct ICommunicationBlockingAppManagerStatics;
struct ICommunicationBlockingAppManagerStatics2;
struct CommunicationBlockingAccessManager;
struct CommunicationBlockingAppManager;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAccessManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAppManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.ICommunicationBlockingAppManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager" }; };
template <> struct name<Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAppManager" }; };
template <> struct guid<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>{ static constexpr GUID value{ 0x1C969998,0x9D2A,0x5DB7,{ 0xED,0xD5,0x0C,0xE4,0x07,0xFC,0x25,0x95 } }; };
template <> struct guid<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>{ static constexpr GUID value{ 0x77DB58EC,0x14A6,0x4BAA,{ 0x94,0x2A,0x6A,0x67,0x3D,0x99,0x9B,0xF2 } }; };
template <> struct guid<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>{ static constexpr GUID value{ 0x14A68EDD,0xED88,0x457A,{ 0xA3,0x64,0xA3,0x63,0x4D,0x6F,0x16,0x6D } }; };

template <typename D>
struct consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics
{
    bool IsBlockingActive() const;
    Windows::Foundation::IAsyncOperation<bool> IsBlockedNumberAsync(param::hstring const& number) const;
    bool ShowBlockNumbersUI(param::iterable<hstring> const& phoneNumbers) const;
    bool ShowUnblockNumbersUI(param::iterable<hstring> const& phoneNumbers) const;
    void ShowBlockedCallsUI() const;
    void ShowBlockedMessagesUI() const;
};
template <> struct consume<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics
{
    bool IsCurrentAppActiveBlockingApp() const;
    void ShowCommunicationBlockingSettingsUI() const;
};
template <> struct consume<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics2
{
    Windows::Foundation::IAsyncOperation<bool> RequestSetAsActiveBlockingAppAsync() const;
};
template <> struct consume<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics2<D>; };

template <> struct abi<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsBlockingActive(bool* value) = 0;
    virtual HRESULT __stdcall IsBlockedNumberAsync(HSTRING number, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowBlockNumbersUI(::IUnknown* phoneNumbers, bool* value) = 0;
    virtual HRESULT __stdcall ShowUnblockNumbersUI(::IUnknown* phoneNumbers, bool* value) = 0;
    virtual HRESULT __stdcall ShowBlockedCallsUI() = 0;
    virtual HRESULT __stdcall ShowBlockedMessagesUI() = 0;
};};

template <> struct abi<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsCurrentAppActiveBlockingApp(bool* value) = 0;
    virtual HRESULT __stdcall ShowCommunicationBlockingSettingsUI() = 0;
};};

template <> struct abi<Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestSetAsActiveBlockingAppAsync(::IUnknown** result) = 0;
};};

}
