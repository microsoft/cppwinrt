// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.UI.Xaml.Media.Media3D.3.h"
#include "Windows.UI.Xaml.Media.h"
#include "internal/Windows.UI.Xaml.Media.Media3D.5.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D> : produce_base<D, Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D>
{
    HRESULT __stdcall get_CenterX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterX());
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
            this->shim().CenterX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterY());
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
            this->shim().CenterY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterZ(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterZ());
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
            this->shim().CenterZ(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationX());
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
            this->shim().RotationX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationY());
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
            this->shim().RotationY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationZ(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationZ());
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
            this->shim().RotationZ(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaleX());
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
            this->shim().ScaleX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaleY());
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
            this->shim().ScaleY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleZ(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaleZ());
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
            this->shim().ScaleZ(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TranslateX());
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
            this->shim().TranslateX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TranslateY());
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
            this->shim().TranslateY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateZ(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TranslateZ());
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
    HRESULT __stdcall get_CenterXProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterYProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterZProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterZProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationXProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationYProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationZProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationZProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleXProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaleXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleYProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaleYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleZProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScaleZProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateXProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TranslateXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateYProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TranslateYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateZProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TranslateZProperty());
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
    HRESULT __stdcall get_Identity(abi_arg_out<Windows::UI::Xaml::Media::Media3D::Matrix3D> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Multiply(abi_arg_in<Windows::UI::Xaml::Media::Media3D::Matrix3D> matrix1, abi_arg_in<Windows::UI::Xaml::Media::Media3D::Matrix3D> matrix2, abi_arg_out<Windows::UI::Xaml::Media::Media3D::Matrix3D> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Multiply(*reinterpret_cast<const Windows::UI::Xaml::Media::Media3D::Matrix3D *>(&matrix1), *reinterpret_cast<const Windows::UI::Xaml::Media::Media3D::Matrix3D *>(&matrix2)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44, abi_arg_out<Windows::UI::Xaml::Media::Media3D::Matrix3D> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromElements(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, offsetX, offsetY, offsetZ, m44));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHasInverse(abi_arg_in<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetHasInverse(*reinterpret_cast<const Windows::UI::Xaml::Media::Media3D::Matrix3D *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsIdentity(abi_arg_in<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsIdentity(*reinterpret_cast<const Windows::UI::Xaml::Media::Media3D::Matrix3D *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Invert(abi_arg_in<Windows::UI::Xaml::Media::Media3D::Matrix3D> target, abi_arg_out<Windows::UI::Xaml::Media::Media3D::Matrix3D> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Invert(*reinterpret_cast<const Windows::UI::Xaml::Media::Media3D::Matrix3D *>(&target)));
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
    HRESULT __stdcall get_Depth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Depth());
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
            this->shim().Depth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetX());
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
            this->shim().OffsetX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetY());
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
    HRESULT __stdcall get_DepthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DepthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetXProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetYProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OffsetYProperty());
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
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Media::Media3D::ITransform3D> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Xaml::Media::Media3D {

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D impl_IMatrix3DHelperStatics<D>::Identity() const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D value {};
    check_hresult(static_cast<const IMatrix3DHelperStatics &>(static_cast<const D &>(*this))->get_Identity(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D impl_IMatrix3DHelperStatics<D>::Multiply(const Windows::UI::Xaml::Media::Media3D::Matrix3D & matrix1, const Windows::UI::Xaml::Media::Media3D::Matrix3D & matrix2) const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D returnValue {};
    check_hresult(static_cast<const IMatrix3DHelperStatics &>(static_cast<const D &>(*this))->abi_Multiply(get(matrix1), get(matrix2), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D impl_IMatrix3DHelperStatics<D>::FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44) const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D returnValue {};
    check_hresult(static_cast<const IMatrix3DHelperStatics &>(static_cast<const D &>(*this))->abi_FromElements(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, offsetX, offsetY, offsetZ, m44, put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IMatrix3DHelperStatics<D>::GetHasInverse(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target) const
{
    bool value {};
    check_hresult(static_cast<const IMatrix3DHelperStatics &>(static_cast<const D &>(*this))->abi_GetHasInverse(get(target), &value));
    return value;
}

template <typename D> bool impl_IMatrix3DHelperStatics<D>::GetIsIdentity(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target) const
{
    bool value {};
    check_hresult(static_cast<const IMatrix3DHelperStatics &>(static_cast<const D &>(*this))->abi_GetIsIdentity(get(target), &value));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D impl_IMatrix3DHelperStatics<D>::Invert(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target) const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D returnValue {};
    check_hresult(static_cast<const IMatrix3DHelperStatics &>(static_cast<const D &>(*this))->abi_Invert(get(target), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Transform3D impl_ITransform3DFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Media::Media3D::Transform3D instance { nullptr };
    check_hresult(static_cast<const ITransform3DFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> double impl_ICompositeTransform3D<D>::CenterX() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_CenterX(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::CenterX(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_CenterX(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::CenterY() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_CenterY(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::CenterY(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_CenterY(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::CenterZ() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_CenterZ(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::CenterZ(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_CenterZ(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::RotationX() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_RotationX(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::RotationX(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_RotationX(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::RotationY() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_RotationY(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::RotationY(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_RotationY(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::RotationZ() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_RotationZ(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::RotationZ(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_RotationZ(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::ScaleX() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_ScaleX(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::ScaleX(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_ScaleX(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::ScaleY() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_ScaleY(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::ScaleY(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_ScaleY(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::ScaleZ() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_ScaleZ(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::ScaleZ(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_ScaleZ(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::TranslateX() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_TranslateX(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::TranslateX(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_TranslateX(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::TranslateY() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_TranslateY(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::TranslateY(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_TranslateY(value));
}

template <typename D> double impl_ICompositeTransform3D<D>::TranslateZ() const
{
    double value {};
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->get_TranslateZ(&value));
    return value;
}

template <typename D> void impl_ICompositeTransform3D<D>::TranslateZ(double value) const
{
    check_hresult(static_cast<const ICompositeTransform3D &>(static_cast<const D &>(*this))->put_TranslateZ(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::CenterXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_CenterXProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::CenterYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_CenterYProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::CenterZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_CenterZProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::RotationXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_RotationXProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::RotationYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_RotationYProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::RotationZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_RotationZProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::ScaleXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_ScaleXProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::ScaleYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_ScaleYProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::ScaleZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_ScaleZProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::TranslateXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_TranslateXProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::TranslateYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_TranslateYProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ICompositeTransform3DStatics<D>::TranslateZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ICompositeTransform3DStatics &>(static_cast<const D &>(*this))->get_TranslateZProperty(put(value)));
    return value;
}

template <typename D> double impl_IPerspectiveTransform3D<D>::Depth() const
{
    double value {};
    check_hresult(static_cast<const IPerspectiveTransform3D &>(static_cast<const D &>(*this))->get_Depth(&value));
    return value;
}

template <typename D> void impl_IPerspectiveTransform3D<D>::Depth(double value) const
{
    check_hresult(static_cast<const IPerspectiveTransform3D &>(static_cast<const D &>(*this))->put_Depth(value));
}

template <typename D> double impl_IPerspectiveTransform3D<D>::OffsetX() const
{
    double value {};
    check_hresult(static_cast<const IPerspectiveTransform3D &>(static_cast<const D &>(*this))->get_OffsetX(&value));
    return value;
}

template <typename D> void impl_IPerspectiveTransform3D<D>::OffsetX(double value) const
{
    check_hresult(static_cast<const IPerspectiveTransform3D &>(static_cast<const D &>(*this))->put_OffsetX(value));
}

template <typename D> double impl_IPerspectiveTransform3D<D>::OffsetY() const
{
    double value {};
    check_hresult(static_cast<const IPerspectiveTransform3D &>(static_cast<const D &>(*this))->get_OffsetY(&value));
    return value;
}

template <typename D> void impl_IPerspectiveTransform3D<D>::OffsetY(double value) const
{
    check_hresult(static_cast<const IPerspectiveTransform3D &>(static_cast<const D &>(*this))->put_OffsetY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPerspectiveTransform3DStatics<D>::DepthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPerspectiveTransform3DStatics &>(static_cast<const D &>(*this))->get_DepthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPerspectiveTransform3DStatics<D>::OffsetXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPerspectiveTransform3DStatics &>(static_cast<const D &>(*this))->get_OffsetXProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPerspectiveTransform3DStatics<D>::OffsetYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPerspectiveTransform3DStatics &>(static_cast<const D &>(*this))->get_OffsetYProperty(put(value)));
    return value;
}

inline CompositeTransform3D::CompositeTransform3D() :
    CompositeTransform3D(activate_instance<CompositeTransform3D>())
{}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::CenterXProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().CenterXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::CenterYProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().CenterYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::CenterZProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().CenterZProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::RotationXProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().RotationXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::RotationYProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().RotationYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::RotationZProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().RotationZProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::ScaleXProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().ScaleXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::ScaleYProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().ScaleYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::ScaleZProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().ScaleZProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::TranslateXProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().TranslateXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::TranslateYProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().TranslateYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform3D::TranslateZProperty()
{
    return get_activation_factory<CompositeTransform3D, ICompositeTransform3DStatics>().TranslateZProperty();
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::Identity()
{
    return get_activation_factory<Matrix3DHelper, IMatrix3DHelperStatics>().Identity();
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::Multiply(const Windows::UI::Xaml::Media::Media3D::Matrix3D & matrix1, const Windows::UI::Xaml::Media::Media3D::Matrix3D & matrix2)
{
    return get_activation_factory<Matrix3DHelper, IMatrix3DHelperStatics>().Multiply(matrix1, matrix2);
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44)
{
    return get_activation_factory<Matrix3DHelper, IMatrix3DHelperStatics>().FromElements(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, offsetX, offsetY, offsetZ, m44);
}

inline bool Matrix3DHelper::GetHasInverse(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target)
{
    return get_activation_factory<Matrix3DHelper, IMatrix3DHelperStatics>().GetHasInverse(target);
}

inline bool Matrix3DHelper::GetIsIdentity(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target)
{
    return get_activation_factory<Matrix3DHelper, IMatrix3DHelperStatics>().GetIsIdentity(target);
}

inline Windows::UI::Xaml::Media::Media3D::Matrix3D Matrix3DHelper::Invert(const Windows::UI::Xaml::Media::Media3D::Matrix3D & target)
{
    return get_activation_factory<Matrix3DHelper, IMatrix3DHelperStatics>().Invert(target);
}

inline PerspectiveTransform3D::PerspectiveTransform3D() :
    PerspectiveTransform3D(activate_instance<PerspectiveTransform3D>())
{}

inline Windows::UI::Xaml::DependencyProperty PerspectiveTransform3D::DepthProperty()
{
    return get_activation_factory<PerspectiveTransform3D, IPerspectiveTransform3DStatics>().DepthProperty();
}

inline Windows::UI::Xaml::DependencyProperty PerspectiveTransform3D::OffsetXProperty()
{
    return get_activation_factory<PerspectiveTransform3D, IPerspectiveTransform3DStatics>().OffsetXProperty();
}

inline Windows::UI::Xaml::DependencyProperty PerspectiveTransform3D::OffsetYProperty()
{
    return get_activation_factory<PerspectiveTransform3D, IPerspectiveTransform3DStatics>().OffsetYProperty();
}

}

}
