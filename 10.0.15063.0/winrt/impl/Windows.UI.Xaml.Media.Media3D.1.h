// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D {

struct WINRT_EBO ICompositeTransform3D :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransform3D>
{
    ICompositeTransform3D(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositeTransform3DStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransform3DStatics>
{
    ICompositeTransform3DStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrix3DHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DHelper>
{
    IMatrix3DHelper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrix3DHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DHelperStatics>
{
    IMatrix3DHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPerspectiveTransform3D :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerspectiveTransform3D>
{
    IPerspectiveTransform3D(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPerspectiveTransform3DStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPerspectiveTransform3DStatics>
{
    IPerspectiveTransform3DStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransform3D :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform3D>
{
    ITransform3D(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransform3DFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform3DFactory>
{
    ITransform3DFactory(std::nullptr_t = nullptr) noexcept {}
};

}
