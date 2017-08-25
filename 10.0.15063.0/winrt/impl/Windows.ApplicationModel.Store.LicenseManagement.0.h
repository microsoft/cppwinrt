// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::LicenseManagement {

enum class LicenseRefreshOption
{
    RunningLicenses = 0,
    AllLicenses = 1,
};

struct ILicenseManagerStatics;
struct ILicenseManagerStatics2;
struct ILicenseSatisfactionInfo;
struct ILicenseSatisfactionResult;
struct LicenseManager;
struct LicenseSatisfactionInfo;
struct LicenseSatisfactionResult;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.ILicenseSatisfactionResult" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseManager" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionInfo" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseSatisfactionResult" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseManagement.LicenseRefreshOption" }; };
template <> struct guid<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>{ static constexpr GUID value{ 0xB5AC3AE0,0xDA47,0x4F20,{ 0x9A,0x23,0x09,0x18,0x2C,0x94,0x76,0xFF } }; };
template <> struct guid<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>{ static constexpr GUID value{ 0xAB2EC47B,0x1F79,0x4480,{ 0xB8,0x7E,0x2C,0x49,0x9E,0x60,0x1B,0xA3 } }; };
template <> struct guid<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>{ static constexpr GUID value{ 0x3CCBB08F,0xDB31,0x48D5,{ 0x83,0x84,0xFA,0x17,0xC8,0x14,0x74,0xE2 } }; };
template <> struct guid<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>{ static constexpr GUID value{ 0x3C674F73,0x3C87,0x4EE1,{ 0x82,0x01,0xF4,0x28,0x35,0x9B,0xD3,0xAF } }; };
template <> struct default_interface<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>{ using type = Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo; };
template <> struct default_interface<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>{ using type = Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics
{
    Windows::Foundation::IAsyncAction AddLicenseAsync(Windows::Storage::Streams::IBuffer const& license) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult> GetSatisfactionInfosAsync(param::async_iterable<hstring> const& contentIds, param::async_iterable<hstring> const& keyIds) const;
};
template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2
{
    Windows::Foundation::IAsyncAction RefreshLicensesAsync(Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const& refreshOption) const;
};
template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo
{
    bool SatisfiedByDevice() const;
    bool SatisfiedByOpenLicense() const;
    bool SatisfiedByTrial() const;
    bool SatisfiedByPass() const;
    bool SatisfiedByInstallMedia() const;
    bool SatisfiedBySignedInUser() const;
    bool IsSatisfied() const;
};
template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo> LicenseSatisfactionInfos() const;
    HRESULT ExtendedError() const;
};
template <> struct consume<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult> { template <typename D> using type = consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult<D>; };

template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddLicenseAsync(::IUnknown* license, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall GetSatisfactionInfosAsync(::IUnknown* contentIds, ::IUnknown* keyIds, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RefreshLicensesAsync(abi_t<Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption> refreshOption, ::IUnknown** action) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SatisfiedByDevice(bool* value) = 0;
    virtual HRESULT __stdcall get_SatisfiedByOpenLicense(bool* value) = 0;
    virtual HRESULT __stdcall get_SatisfiedByTrial(bool* value) = 0;
    virtual HRESULT __stdcall get_SatisfiedByPass(bool* value) = 0;
    virtual HRESULT __stdcall get_SatisfiedByInstallMedia(bool* value) = 0;
    virtual HRESULT __stdcall get_SatisfiedBySignedInUser(bool* value) = 0;
    virtual HRESULT __stdcall get_IsSatisfied(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LicenseSatisfactionInfos(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
};};

}
