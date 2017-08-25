// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyProperty;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D {

struct ICompositeTransform3D;
struct ICompositeTransform3DStatics;
struct IMatrix3DHelper;
struct IMatrix3DHelperStatics;
struct IPerspectiveTransform3D;
struct IPerspectiveTransform3DStatics;
struct ITransform3D;
struct ITransform3DFactory;
struct CompositeTransform3D;
struct Matrix3DHelper;
struct PerspectiveTransform3D;
struct Transform3D;
struct Matrix3D;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::ITransform3D>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::Transform3D>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Media3D::Matrix3D>{ using type = struct_category<double,double,double,double,double,double,double,double,double,double,double,double,double,double,double,double>; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3D" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ICompositeTransform3DStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelper" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IMatrix3DHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3D" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.IPerspectiveTransform3DStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::ITransform3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ITransform3D" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.ITransform3DFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.CompositeTransform3D" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.Matrix3DHelper" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.PerspectiveTransform3D" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::Transform3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.Transform3D" }; };
template <> struct name<Windows::UI::Xaml::Media::Media3D::Matrix3D>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Media3D.Matrix3D" }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ static constexpr GUID value{ 0x8977CB01,0xAF8D,0x4AF5,{ 0xB0,0x84,0xC0,0x8E,0xB9,0x70,0x4A,0xBE } }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ static constexpr GUID value{ 0xDDBF4D67,0x2A25,0x48F3,{ 0x98,0x08,0xC5,0x1E,0xC3,0xD5,0x5B,0xEC } }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ static constexpr GUID value{ 0xE48C10EF,0x9927,0x4C9B,{ 0x82,0x13,0x07,0x77,0x55,0x12,0xBA,0x04 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ static constexpr GUID value{ 0x9264545E,0xE158,0x4E74,{ 0x88,0x99,0x68,0x91,0x60,0xBD,0x2F,0x8C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ static constexpr GUID value{ 0x9A7B532A,0x30F9,0x40A1,{ 0x96,0xC9,0xC5,0x9D,0x87,0xF9,0x5A,0xC3 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ static constexpr GUID value{ 0x8E6F6400,0x620C,0x48C7,{ 0x84,0x4D,0x3F,0x09,0x84,0xDA,0x5B,0x17 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::ITransform3D>{ static constexpr GUID value{ 0xAE3ED43A,0xA9FC,0x4C31,{ 0x86,0xCD,0x56,0xD9,0xCA,0x25,0x1A,0x69 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>{ static constexpr GUID value{ 0x052C1F7A,0x8D73,0x48CD,{ 0xBB,0xB8,0xD0,0x04,0x34,0xCA,0xAE,0x5D } }; };
template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::CompositeTransform3D>{ using type = Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D; };
template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::Matrix3DHelper>{ using type = Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper; };
template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D>{ using type = Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D; };
template <> struct default_interface<Windows::UI::Xaml::Media::Media3D::Transform3D>{ using type = Windows::UI::Xaml::Media::Media3D::ITransform3D; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D
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
template <> struct consume<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics
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
template <> struct consume<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper
{
};
template <> struct consume<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D Identity() const;
    Windows::UI::Xaml::Media::Media3D::Matrix3D Multiply(Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix2) const;
    Windows::UI::Xaml::Media::Media3D::Matrix3D FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44) const;
    bool GetHasInverse(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
    bool GetIsIdentity(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
    Windows::UI::Xaml::Media::Media3D::Matrix3D Invert(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D
{
    double Depth() const;
    void Depth(double value) const;
    double OffsetX() const;
    void OffsetX(double value) const;
    double OffsetY() const;
    void OffsetY(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics
{
    Windows::UI::Xaml::DependencyProperty DepthProperty() const;
    Windows::UI::Xaml::DependencyProperty OffsetXProperty() const;
    Windows::UI::Xaml::DependencyProperty OffsetYProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_ITransform3D
{
};
template <> struct consume<Windows::UI::Xaml::Media::Media3D::ITransform3D> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ITransform3D<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory
{
    Windows::UI::Xaml::Media::Media3D::Transform3D CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory<D>; };

template <> struct abi<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CenterX(double* value) = 0;
    virtual HRESULT __stdcall put_CenterX(double value) = 0;
    virtual HRESULT __stdcall get_CenterY(double* value) = 0;
    virtual HRESULT __stdcall put_CenterY(double value) = 0;
    virtual HRESULT __stdcall get_CenterZ(double* value) = 0;
    virtual HRESULT __stdcall put_CenterZ(double value) = 0;
    virtual HRESULT __stdcall get_RotationX(double* value) = 0;
    virtual HRESULT __stdcall put_RotationX(double value) = 0;
    virtual HRESULT __stdcall get_RotationY(double* value) = 0;
    virtual HRESULT __stdcall put_RotationY(double value) = 0;
    virtual HRESULT __stdcall get_RotationZ(double* value) = 0;
    virtual HRESULT __stdcall put_RotationZ(double value) = 0;
    virtual HRESULT __stdcall get_ScaleX(double* value) = 0;
    virtual HRESULT __stdcall put_ScaleX(double value) = 0;
    virtual HRESULT __stdcall get_ScaleY(double* value) = 0;
    virtual HRESULT __stdcall put_ScaleY(double value) = 0;
    virtual HRESULT __stdcall get_ScaleZ(double* value) = 0;
    virtual HRESULT __stdcall put_ScaleZ(double value) = 0;
    virtual HRESULT __stdcall get_TranslateX(double* value) = 0;
    virtual HRESULT __stdcall put_TranslateX(double value) = 0;
    virtual HRESULT __stdcall get_TranslateY(double* value) = 0;
    virtual HRESULT __stdcall put_TranslateY(double value) = 0;
    virtual HRESULT __stdcall get_TranslateZ(double* value) = 0;
    virtual HRESULT __stdcall put_TranslateZ(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CenterXProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CenterYProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CenterZProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RotationXProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RotationYProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RotationZProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ScaleXProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ScaleYProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ScaleZProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TranslateXProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TranslateYProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TranslateZProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Identity(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* value) = 0;
    virtual HRESULT __stdcall Multiply(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> matrix1, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> matrix2, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* returnValue) = 0;
    virtual HRESULT __stdcall FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* returnValue) = 0;
    virtual HRESULT __stdcall GetHasInverse(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, bool* value) = 0;
    virtual HRESULT __stdcall GetIsIdentity(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, bool* value) = 0;
    virtual HRESULT __stdcall Invert(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Depth(double* value) = 0;
    virtual HRESULT __stdcall put_Depth(double value) = 0;
    virtual HRESULT __stdcall get_OffsetX(double* value) = 0;
    virtual HRESULT __stdcall put_OffsetX(double value) = 0;
    virtual HRESULT __stdcall get_OffsetY(double* value) = 0;
    virtual HRESULT __stdcall put_OffsetY(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DepthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OffsetXProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OffsetYProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Media3D::ITransform3D>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

}
