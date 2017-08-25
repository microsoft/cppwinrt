// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Store.LicenseManagement.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::LicenseManagement {

struct LicenseManager
{
    LicenseManager() = delete;
    static Windows::Foundation::IAsyncAction AddLicenseAsync(Windows::Storage::Streams::IBuffer const& license);
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult> GetSatisfactionInfosAsync(param::async_iterable<hstring> const& contentIds, param::async_iterable<hstring> const& keyIds);
    static Windows::Foundation::IAsyncAction RefreshLicensesAsync(Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const& refreshOption);
};

struct WINRT_EBO LicenseSatisfactionInfo :
    Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo
{
    LicenseSatisfactionInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LicenseSatisfactionResult :
    Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult
{
    LicenseSatisfactionResult(std::nullptr_t) noexcept {}
};

}
