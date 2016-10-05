// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Media.Media3D.1.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Media::Media3D {

template <typename D>
struct WINRT_EBO impl_ICompositeTransform3D
{
    double CenterX() const;
    void CenterX(double value) const;
    double CenterY() const;
    void CenterY(double value) const;
    double CenterZ() const;
    void CenterZ(double value) const;
    double RotationX() const;
    void RotationX(double value) const;
    double RotationY() const;
    void RotationY(double value) const;
    double RotationZ() const;
    void RotationZ(double value) const;
    double ScaleX() const;
    void ScaleX(double value) const;
    double ScaleY() const;
    void ScaleY(double value) const;
    double ScaleZ() const;
    void ScaleZ(double value) const;
    double TranslateX() const;
    void TranslateX(double value) const;
    double TranslateY() const;
    void TranslateY(double value) const;
    double TranslateZ() const;
    void TranslateZ(double value) const;
};

template <typename D>
struct WINRT_EBO impl_ICompositeTransform3DStatics
{
    Windows::UI::Xaml::DependencyProperty CenterXProperty() const;
    Windows::UI::Xaml::DependencyProperty CenterYProperty() const;
    Windows::UI::Xaml::DependencyProperty CenterZProperty() const;
    Windows::UI::Xaml::DependencyProperty RotationXProperty() const;
    Windows::UI::Xaml::DependencyProperty RotationYProperty() const;
    Windows::UI::Xaml::DependencyProperty RotationZProperty() const;
    Windows::UI::Xaml::DependencyProperty ScaleXProperty() const;
    Windows::UI::Xaml::DependencyProperty ScaleYProperty() const;
    Windows::UI::Xaml::DependencyProperty ScaleZProperty() const;
    Windows::UI::Xaml::DependencyProperty TranslateXProperty() const;
    Windows::UI::Xaml::DependencyProperty TranslateYProperty() const;
    Windows::UI::Xaml::DependencyProperty TranslateZProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IMatrix3DHelper
{
};

template <typename D>
struct WINRT_EBO impl_IMatrix3DHelperStatics
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D Identity() const;
    Windows::UI::Xaml::Media::Media3D::Matrix3D Multiply(const Windows::UI::Xaml::Media::Media3D::Matrix3D & matrix1, const Windows::UI::Xaml::Media::Media3D::Matrix3D & matrix2) const;
    Windows::UI::Xaml::Media::Media3D::Matrix3D FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44) const;
    bool GetHasInverse(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target) const;
    bool GetIsIdentity(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target) const;
    Windows::UI::Xaml::Media::Media3D::Matrix3D Invert(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target) const;
};

template <typename D>
struct WINRT_EBO impl_IPerspectiveTransform3D
{
    double Depth() const;
    void Depth(double value) const;
    double OffsetX() const;
    void OffsetX(double value) const;
    double OffsetY() const;
    void OffsetY(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IPerspectiveTransform3DStatics
{
    Windows::UI::Xaml::DependencyProperty DepthProperty() const;
    Windows::UI::Xaml::DependencyProperty OffsetXProperty() const;
    Windows::UI::Xaml::DependencyProperty OffsetYProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITransform3D
{
};

template <typename D>
struct WINRT_EBO impl_ITransform3DFactory
{
    Windows::UI::Xaml::Media::Media3D::Transform3D CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

struct ICompositeTransform3D :
    Windows::IInspectable,
    impl::consume<ICompositeTransform3D>
{
    ICompositeTransform3D(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICompositeTransform3D>(m_ptr); }
};

struct ICompositeTransform3DStatics :
    Windows::IInspectable,
    impl::consume<ICompositeTransform3DStatics>
{
    ICompositeTransform3DStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICompositeTransform3DStatics>(m_ptr); }
};

struct IMatrix3DHelper :
    Windows::IInspectable,
    impl::consume<IMatrix3DHelper>
{
    IMatrix3DHelper(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMatrix3DHelper>(m_ptr); }
};

struct IMatrix3DHelperStatics :
    Windows::IInspectable,
    impl::consume<IMatrix3DHelperStatics>
{
    IMatrix3DHelperStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMatrix3DHelperStatics>(m_ptr); }
};

struct IPerspectiveTransform3D :
    Windows::IInspectable,
    impl::consume<IPerspectiveTransform3D>
{
    IPerspectiveTransform3D(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerspectiveTransform3D>(m_ptr); }
};

struct IPerspectiveTransform3DStatics :
    Windows::IInspectable,
    impl::consume<IPerspectiveTransform3DStatics>
{
    IPerspectiveTransform3DStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPerspectiveTransform3DStatics>(m_ptr); }
};

struct ITransform3D :
    Windows::IInspectable,
    impl::consume<ITransform3D>
{
    ITransform3D(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransform3D>(m_ptr); }
};

struct ITransform3DFactory :
    Windows::IInspectable,
    impl::consume<ITransform3DFactory>
{
    ITransform3DFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITransform3DFactory>(m_ptr); }
};

}

}
