// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.2.h"
#include "winrt/Windows.UI.Xaml.Media.h"

namespace winrt::impl {

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::CenterX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_CenterX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::CenterX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_CenterX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::CenterY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_CenterY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::CenterY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_CenterY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::CenterZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_CenterZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::CenterZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_CenterZ(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::RotationX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_RotationX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::RotationX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_RotationX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::RotationY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_RotationY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::RotationY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_RotationY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::RotationZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_RotationZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::RotationZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_RotationZ(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::ScaleX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_ScaleX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::ScaleX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_ScaleX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::ScaleY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_ScaleY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::ScaleY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_ScaleY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::ScaleZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_ScaleZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::ScaleZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_ScaleZ(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::TranslateX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_TranslateX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::TranslateX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_TranslateX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::TranslateY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_TranslateY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::TranslateY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_TranslateY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::TranslateZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->get_TranslateZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3D<D>::TranslateZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D)->put_TranslateZ(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::CenterXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_CenterXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::CenterYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_CenterYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::CenterZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_CenterZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::RotationXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_RotationXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::RotationYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_RotationYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::RotationZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_RotationZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::ScaleXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_ScaleXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::ScaleYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_ScaleYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::ScaleZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_ScaleZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::TranslateXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_TranslateXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::TranslateYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_TranslateYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_ICompositeTransform3DStatics<D>::TranslateZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics)->get_TranslateZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>::Identity() const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics)->get_Identity(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>::Multiply(Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix2) const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics)->Multiply(get_abi(matrix1), get_abi(matrix2), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>::FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44) const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics)->FromElements(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, offsetX, offsetY, offsetZ, m44, put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>::GetHasInverse(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics)->GetHasInverse(get_abi(target), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>::GetIsIdentity(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics)->GetIsIdentity(get_abi(target), &value));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D consume_Windows_UI_Xaml_Media_Media3D_IMatrix3DHelperStatics<D>::Invert(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target) const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics)->Invert(get_abi(target), put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>::Depth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D)->get_Depth(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>::Depth(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D)->put_Depth(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>::OffsetX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D)->get_OffsetX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>::OffsetX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D)->put_OffsetX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>::OffsetY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D)->get_OffsetY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3D<D>::OffsetY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D)->put_OffsetY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics<D>::DepthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics)->get_DepthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics<D>::OffsetXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics)->get_OffsetXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Media3D_IPerspectiveTransform3DStatics<D>::OffsetYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics)->get_OffsetYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Transform3D consume_Windows_UI_Xaml_Media_Media3D_ITransform3DFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Media3D::Transform3D instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Media3D::ITransform3DFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D> : produce_base<D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
{
    HRESULT __stdcall get_CenterX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterX(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterY(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterZ(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterZ());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterZ(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterZ(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationX(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationY(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationZ(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationZ());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationZ(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationZ(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleX(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleY(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleZ(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleZ());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleZ(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleZ(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TranslateX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TranslateX(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslateX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TranslateY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TranslateY(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslateY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateZ(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TranslateZ());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TranslateZ(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslateZ(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics> : produce_base<D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>
{
    HRESULT __stdcall get_CenterXProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterYProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterZProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterZProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationXProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationYProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationZProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationZProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleXProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleYProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleZProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScaleZProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateXProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TranslateXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateYProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TranslateYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateZProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TranslateZProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper> : produce_base<D, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics> : produce_base<D, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>
{
    HRESULT __stdcall get_Identity(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Multiply(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> matrix1, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> matrix2, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Multiply(*reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&matrix1), *reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&matrix2)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FromElements(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, offsetX, offsetY, offsetZ, m44));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHasInverse(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHasInverse(*reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIsIdentity(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIsIdentity(*reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Invert(abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, abi_t<Windows::UI::Xaml::Media::Media3D::Matrix3D>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Invert(*reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D> : produce_base<D, Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D>
{
    HRESULT __stdcall get_Depth(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Depth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Depth(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Depth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OffsetX(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OffsetX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OffsetY(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OffsetY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics> : produce_base<D, Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>
{
    HRESULT __stdcall get_DepthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DepthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetXProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetYProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OffsetYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::ITransform3D> : produce_base<D, Windows::UI::Xaml::Media::Media3D::ITransform3D>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::ITransform3DFactory> : produce_base<D, Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D {

inline CompositeTransform3D::CompositeTransform3D() :
    CompositeTransform3D(activate_instance<CompositeTransform3D>())
{}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::CenterXProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().CenterXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::CenterYProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().CenterYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::CenterZProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().CenterZProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::RotationXProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().RotationXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::RotationYProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().RotationYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::RotationZProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().RotationZProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::ScaleXProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().ScaleXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::ScaleYProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().ScaleYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::ScaleZProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().ScaleZProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::TranslateXProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().TranslateXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::TranslateYProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().TranslateYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::TranslateZProperty()
{
    return get_activation_factory<CompositeTransform3D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics>().TranslateZProperty();
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::Identity()
{
    return get_activation_factory<Matrix3DHelper, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>().Identity();
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::Multiply(Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix2)
{
    return get_activation_factory<Matrix3DHelper, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>().Multiply(matrix1, matrix2);
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44)
{
    return get_activation_factory<Matrix3DHelper, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>().FromElements(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, offsetX, offsetY, offsetZ, m44);
}

inline bool Matrix3DHelper::GetHasInverse(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target)
{
    return get_activation_factory<Matrix3DHelper, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>().GetHasInverse(target);
}

inline bool Matrix3DHelper::GetIsIdentity(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target)
{
    return get_activation_factory<Matrix3DHelper, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>().GetIsIdentity(target);
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::Invert(Windows::UI::Xaml::Media::Media3D::Matrix3D const& target)
{
    return get_activation_factory<Matrix3DHelper, Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics>().Invert(target);
}

inline PerspectiveTransform3D::PerspectiveTransform3D() :
    PerspectiveTransform3D(activate_instance<PerspectiveTransform3D>())
{}

inline Windows::UI::Xaml::DependencyProperty PerspectiveTransform3D::DepthProperty()
{
    return get_activation_factory<PerspectiveTransform3D, Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>().DepthProperty();
}

inline Windows::UI::Xaml::DependencyProperty PerspectiveTransform3D::OffsetXProperty()
{
    return get_activation_factory<PerspectiveTransform3D, Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>().OffsetXProperty();
}

inline Windows::UI::Xaml::DependencyProperty PerspectiveTransform3D::OffsetYProperty()
{
    return get_activation_factory<PerspectiveTransform3D, Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics>().OffsetYProperty();
}

template <typename D, typename ... Interfaces>
struct Transform3DT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Media3D::ITransform3D, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = Transform3D;

protected:
    Transform3DT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Media3D::Transform3D, Windows::UI::Xaml::Media::Media3D::ITransform3DFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3DStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelperStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3DStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::ITransform3D> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::ITransform3D> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::ITransform3DFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::ITransform3DFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::CompositeTransform3D> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::CompositeTransform3D> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::Matrix3DHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::Matrix3DHelper> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::PerspectiveTransform3D> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Media3D::Transform3D> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Media3D::Transform3D> {};

}

WINRT_WARNING_POP
