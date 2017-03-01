// C++ for the Windows Runtime v1.0.private
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Store::LicenseManagement {

struct ILicenseManagerStatics;
struct ILicenseManagerStatics2;
struct ILicenseSatisfactionInfo;
struct ILicenseSatisfactionResult;
struct LicenseSatisfactionInfo;
struct LicenseSatisfactionResult;

}

namespace Windows::ApplicationModel::Store::LicenseManagement {

struct ILicenseManagerStatics;
struct ILicenseManagerStatics2;
struct ILicenseSatisfactionInfo;
struct ILicenseSatisfactionResult;
struct LicenseManager;
struct LicenseSatisfactionInfo;
struct LicenseSatisfactionResult;

}

namespace Windows::ApplicationModel::Store::LicenseManagement {

template <typename T> struct impl_ILicenseManagerStatics;
template <typename T> struct impl_ILicenseManagerStatics2;
template <typename T> struct impl_ILicenseSatisfactionInfo;
template <typename T> struct impl_ILicenseSatisfactionResult;

}

namespace Windows::ApplicationModel::Store::LicenseManagement {

enum class LicenseRefreshOption
{
    RunningLicenses = 0,
    AllLicenses = 1,
};

}

}
