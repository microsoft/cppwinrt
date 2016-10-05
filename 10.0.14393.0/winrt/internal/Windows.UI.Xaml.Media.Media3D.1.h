// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Xaml.Media.Media3D.0.h"
#include "Windows.UI.Xaml.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Media::Media3D {

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

}

namespace Windows::UI::Xaml::Media::Media3D {

using Matrix3D = ABI::Windows::UI::Xaml::Media::Media3D::Matrix3D;

}

namespace ABI::Windows::UI::Xaml::Media::Media3D {

struct __declspec(uuid("8977cb01-af8d-4af5-b084-c08eb9704abe")) __declspec(novtable) ICompositeTransform3D : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CenterX(double * value) = 0;
    virtual HRESULT __stdcall put_CenterX(double value) = 0;
    virtual HRESULT __stdcall get_CenterY(double * value) = 0;
    virtual HRESULT __stdcall put_CenterY(double value) = 0;
    virtual HRESULT __stdcall get_CenterZ(double * value) = 0;
    virtual HRESULT __stdcall put_CenterZ(double value) = 0;
    virtual HRESULT __stdcall get_RotationX(double * value) = 0;
    virtual HRESULT __stdcall put_RotationX(double value) = 0;
    virtual HRESULT __stdcall get_RotationY(double * value) = 0;
    virtual HRESULT __stdcall put_RotationY(double value) = 0;
    virtual HRESULT __stdcall get_RotationZ(double * value) = 0;
    virtual HRESULT __stdcall put_RotationZ(double value) = 0;
    virtual HRESULT __stdcall get_ScaleX(double * value) = 0;
    virtual HRESULT __stdcall put_ScaleX(double value) = 0;
    virtual HRESULT __stdcall get_ScaleY(double * value) = 0;
    virtual HRESULT __stdcall put_ScaleY(double value) = 0;
    virtual HRESULT __stdcall get_ScaleZ(double * value) = 0;
    virtual HRESULT __stdcall put_ScaleZ(double value) = 0;
    virtual HRESULT __stdcall get_TranslateX(double * value) = 0;
    virtual HRESULT __stdcall put_TranslateX(double value) = 0;
    virtual HRESULT __stdcall get_TranslateY(double * value) = 0;
    virtual HRESULT __stdcall put_TranslateY(double value) = 0;
    virtual HRESULT __stdcall get_TranslateZ(double * value) = 0;
    virtual HRESULT __stdcall put_TranslateZ(double value) = 0;
};

struct __declspec(uuid("ddbf4d67-2a25-48f3-9808-c51ec3d55bec")) __declspec(novtable) ICompositeTransform3DStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CenterXProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CenterYProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CenterZProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_RotationXProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_RotationYProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_RotationZProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ScaleXProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ScaleYProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ScaleZProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_TranslateXProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_TranslateYProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_TranslateZProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("e48c10ef-9927-4c9b-8213-07775512ba04")) __declspec(novtable) IMatrix3DHelper : Windows::IInspectable
{
};

struct __declspec(uuid("9264545e-e158-4e74-8899-689160bd2f8c")) __declspec(novtable) IMatrix3DHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Identity(Windows::UI::Xaml::Media::Media3D::Matrix3D * value) = 0;
    virtual HRESULT __stdcall abi_Multiply(Windows::UI::Xaml::Media::Media3D::Matrix3D matrix1, Windows::UI::Xaml::Media::Media3D::Matrix3D matrix2, Windows::UI::Xaml::Media::Media3D::Matrix3D * returnValue) = 0;
    virtual HRESULT __stdcall abi_FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44, Windows::UI::Xaml::Media::Media3D::Matrix3D * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetHasInverse(Windows::UI::Xaml::Media::Media3D::Matrix3D target, bool * value) = 0;
    virtual HRESULT __stdcall abi_GetIsIdentity(Windows::UI::Xaml::Media::Media3D::Matrix3D target, bool * value) = 0;
    virtual HRESULT __stdcall abi_Invert(Windows::UI::Xaml::Media::Media3D::Matrix3D target, Windows::UI::Xaml::Media::Media3D::Matrix3D * returnValue) = 0;
};

struct __declspec(uuid("9a7b532a-30f9-40a1-96c9-c59d87f95ac3")) __declspec(novtable) IPerspectiveTransform3D : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Depth(double * value) = 0;
    virtual HRESULT __stdcall put_Depth(double value) = 0;
    virtual HRESULT __stdcall get_OffsetX(double * value) = 0;
    virtual HRESULT __stdcall put_OffsetX(double value) = 0;
    virtual HRESULT __stdcall get_OffsetY(double * value) = 0;
    virtual HRESULT __stdcall put_OffsetY(double value) = 0;
};

struct __declspec(uuid("8e6f6400-620c-48c7-844d-3f0984da5b17")) __declspec(novtable) IPerspectiveTransform3DStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DepthProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OffsetXProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OffsetYProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("ae3ed43a-a9fc-4c31-86cd-56d9ca251a69")) __declspec(novtable) ITransform3D : Windows::IInspectable
{
};

struct __declspec(uuid("052c1f7a-8d73-48cd-bbb8-d00434caae5d")) __declspec(novtable) ITransform3DFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Media::Media3D::ITransform3D ** instance) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D> { using default_interface = Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D; };
template <> struct traits<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper> { using default_interface = Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper; };
template <> struct traits<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D> { using default_interface = Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D; };
template <> struct traits<Windows::UI::Xaml::Media::Media3D::Transform3D> { using default_interface = Windows::UI::Xaml::Media::Media3D::ITransform3D; };

}

namespace Windows::UI::Xaml::Media::Media3D {

template <typename T> struct impl_ICompositeTransform3D;
template <typename T> struct impl_ICompositeTransform3DStatics;
template <typename T> struct impl_IMatrix3DHelper;
template <typename T> struct impl_IMatrix3DHelperStatics;
template <typename T> struct impl_IPerspectiveTransform3D;
template <typename T> struct impl_IPerspectiveTransform3DStatics;
template <typename T> struct impl_ITransform3D;
template <typename T> struct impl_ITransform3DFactory;

}

namespace impl {

template <> struct traits<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_ICompositeTransform3D<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_ICompositeTransform3DStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_IMatrix3DHelper<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_IMatrix3DHelperStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_IPerspectiveTransform3D<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_IPerspectiveTransform3DStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::ITransform3D>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::ITransform3D;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_ITransform3D<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::ITransform3DFactory;
    template <typename D> using consume = Windows::UI::Xaml::Media::Media3D::impl_ITransform3DFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::CompositeTransform3D;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Media3D.CompositeTransform3D"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::Matrix3DHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Media3D.Matrix3DHelper"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Media3D.PerspectiveTransform3D"; }
};

template <> struct traits<Windows::UI::Xaml::Media::Media3D::Transform3D>
{
    using abi = ABI::Windows::UI::Xaml::Media::Media3D::Transform3D;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Media.Media3D.Transform3D"; }
};

}

}
