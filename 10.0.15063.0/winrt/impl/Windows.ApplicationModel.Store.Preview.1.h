// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Authentication.Web.Core.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.ApplicationModel.Store.Preview.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview {

struct WINRT_EBO IStoreConfigurationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreConfigurationStatics>
{
    IStoreConfigurationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreConfigurationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreConfigurationStatics2>
{
    IStoreConfigurationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreConfigurationStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreConfigurationStatics3>
{
    IStoreConfigurationStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreConfigurationStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreConfigurationStatics4>
{
    IStoreConfigurationStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStoreHardwareManufacturerInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStoreHardwareManufacturerInfo>
{
    IStoreHardwareManufacturerInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePreview>
{
    IStorePreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePreviewProductInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePreviewProductInfo>
{
    IStorePreviewProductInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePreviewPurchaseResults :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePreviewPurchaseResults>
{
    IStorePreviewPurchaseResults(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorePreviewSkuInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorePreviewSkuInfo>
{
    IStorePreviewSkuInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAuthenticationCoreManagerHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAuthenticationCoreManagerHelper>
{
    IWebAuthenticationCoreManagerHelper(std::nullptr_t = nullptr) noexcept {}
};

}
