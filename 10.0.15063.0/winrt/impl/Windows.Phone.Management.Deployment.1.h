// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Management.Deployment.0.h"
#include "winrt/impl/Windows.Phone.Management.Deployment.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Management::Deployment {

struct WINRT_EBO IEnterprise :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterprise>
{
    IEnterprise(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnterpriseEnrollmentManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseEnrollmentManager>
{
    IEnterpriseEnrollmentManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnterpriseEnrollmentResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnterpriseEnrollmentResult>
{
    IEnterpriseEnrollmentResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInstallationManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstallationManagerStatics>
{
    IInstallationManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInstallationManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInstallationManagerStatics2>
{
    IInstallationManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageInstallResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageInstallResult>
{
    IPackageInstallResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageInstallResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageInstallResult2>
{
    IPackageInstallResult2(std::nullptr_t = nullptr) noexcept {}
};

}
