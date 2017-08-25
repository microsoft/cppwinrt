// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D {

struct Matrix3D
{
    double M11;
    double M12;
    double M13;
    double M14;
    double M21;
    double M22;
    double M23;
    double M24;
    double M31;
    double M32;
    double M33;
    double M34;
    double OffsetX;
    double OffsetY;
    double OffsetZ;
    double M44;
};

struct WINRT_EBO CompositeTransform3D :
    Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D,
    impl::base<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::Transform3D, Windows::UI::Xaml::DependencyObject>,
    impl::require<CompositeTransform3D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::Media3D::ITransform3D>
{
    CompositeTransform3D(std::nullptr_t) noexcept {}
    CompositeTransform3D();
    static Windows::UI::Xaml::DependencyProperty CenterXProperty();
    static Windows::UI::Xaml::DependencyProperty CenterYProperty();
    static Windows::UI::Xaml::DependencyProperty CenterZProperty();
    static Windows::UI::Xaml::DependencyProperty RotationXProperty();
    static Windows::UI::Xaml::DependencyProperty RotationYProperty();
    static Windows::UI::Xaml::DependencyProperty RotationZProperty();
    static Windows::UI::Xaml::DependencyProperty ScaleXProperty();
    static Windows::UI::Xaml::DependencyProperty ScaleYProperty();
    static Windows::UI::Xaml::DependencyProperty ScaleZProperty();
    static Windows::UI::Xaml::DependencyProperty TranslateXProperty();
    static Windows::UI::Xaml::DependencyProperty TranslateYProperty();
    static Windows::UI::Xaml::DependencyProperty TranslateZProperty();
};

struct WINRT_EBO Matrix3DHelper :
    Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper
{
    Matrix3DHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Media::Media3D::Matrix3D Identity();
    static Windows::UI::Xaml::Media::Media3D::Matrix3D Multiply(Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix2);
    static Windows::UI::Xaml::Media::Media3D::Matrix3D FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44);
    static bool GetHasInverse(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target);
    static bool GetIsIdentity(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target);
    static Windows::UI::Xaml::Media::Media3D::Matrix3D Invert(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target);
};

struct WINRT_EBO PerspectiveTransform3D :
    Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D,
    impl::base<PerspectiveTransform3D, Windows::UI::Xaml::Media::Media3D::Transform3D, Windows::UI::Xaml::DependencyObject>,
    impl::require<PerspectiveTransform3D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::Media3D::ITransform3D>
{
    PerspectiveTransform3D(std::nullptr_t) noexcept {}
    PerspectiveTransform3D();
    static Windows::UI::Xaml::DependencyProperty DepthProperty();
    static Windows::UI::Xaml::DependencyProperty OffsetXProperty();
    static Windows::UI::Xaml::DependencyProperty OffsetYProperty();
};

struct WINRT_EBO Transform3D :
    Windows::UI::Xaml::Media::Media3D::ITransform3D,
    impl::base<Transform3D, Windows::UI::Xaml::DependencyObject>,
    impl::require<Transform3D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Transform3D(std::nullptr_t) noexcept {}
};

}
