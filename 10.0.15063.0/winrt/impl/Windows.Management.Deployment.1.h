// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Management.Deployment.0.h"

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

struct WINRT_EBO IDeploymentResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeploymentResult>
{
    IDeploymentResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeploymentResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeploymentResult2>
{
    IDeploymentResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager>
{
    IPackageManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager2>
{
    IPackageManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageManager3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager3>
{
    IPackageManager3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageManager4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager4>
{
    IPackageManager4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageManager5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManager5>
{
    IPackageManager5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageManagerDebugSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageManagerDebugSettings>
{
    IPackageManagerDebugSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageUserInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageUserInformation>
{
    IPackageUserInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageVolume :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageVolume>
{
    IPackageVolume(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPackageVolume2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPackageVolume2>
{
    IPackageVolume2(std::nullptr_t = nullptr) noexcept {}
};

}
