// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.Xaml.Media.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.UI.Composition.3.h"
#include "internal/Windows.UI.Xaml.Shapes.3.h"
#include "Windows.UI.Xaml.h"
#include "internal/Windows.UI.Xaml.Shapes.5.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IEllipse> : produce_base<D, Windows::UI::Xaml::Shapes::IEllipse>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::ILine> : produce_base<D, Windows::UI::Xaml::Shapes::ILine>
{
    HRESULT __stdcall get_X1(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_X1(double value) noexcept override
    {
        try
        {
            this->shim().X1(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y1(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Y1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Y1(double value) noexcept override
    {
        try
        {
            this->shim().Y1(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X2(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_X2(double value) noexcept override
    {
        try
        {
            this->shim().X2(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y2(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Y2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Y2(double value) noexcept override
    {
        try
        {
            this->shim().Y2(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::ILineStatics> : produce_base<D, Windows::UI::Xaml::Shapes::ILineStatics>
{
    HRESULT __stdcall get_X1Property(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X1Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y1Property(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Y1Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_X2Property(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().X2Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Y2Property(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Y2Property());
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
struct produce<D, Windows::UI::Xaml::Shapes::IPath> : produce_base<D, Windows::UI::Xaml::Shapes::IPath>
{
    HRESULT __stdcall get_Data(abi_arg_out<Windows::UI::Xaml::Media::IGeometry> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(abi_arg_in<Windows::UI::Xaml::Media::IGeometry> value) noexcept override
    {
        try
        {
            this->shim().Data(*reinterpret_cast<const Windows::UI::Xaml::Media::Geometry *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IPathFactory> : produce_base<D, Windows::UI::Xaml::Shapes::IPathFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Shapes::IPath> instance) noexcept override
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

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IPathStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IPathStatics>
{
    HRESULT __stdcall get_DataProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataProperty());
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
struct produce<D, Windows::UI::Xaml::Shapes::IPolygon> : produce_base<D, Windows::UI::Xaml::Shapes::IPolygon>
{
    HRESULT __stdcall get_FillRule(Windows::UI::Xaml::Media::FillRule * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillRule());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FillRule(Windows::UI::Xaml::Media::FillRule value) noexcept override
    {
        try
        {
            this->shim().FillRule(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Points(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Points());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Points(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            this->shim().Points(*reinterpret_cast<const Windows::UI::Xaml::Media::PointCollection *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IPolygonStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IPolygonStatics>
{
    HRESULT __stdcall get_FillRuleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillRuleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointsProperty());
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
struct produce<D, Windows::UI::Xaml::Shapes::IPolyline> : produce_base<D, Windows::UI::Xaml::Shapes::IPolyline>
{
    HRESULT __stdcall get_FillRule(Windows::UI::Xaml::Media::FillRule * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillRule());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FillRule(Windows::UI::Xaml::Media::FillRule value) noexcept override
    {
        try
        {
            this->shim().FillRule(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Points(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Points());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Points(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::Foundation::Point>> value) noexcept override
    {
        try
        {
            this->shim().Points(*reinterpret_cast<const Windows::UI::Xaml::Media::PointCollection *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IPolylineStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IPolylineStatics>
{
    HRESULT __stdcall get_FillRuleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillRuleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointsProperty());
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
struct produce<D, Windows::UI::Xaml::Shapes::IRectangle> : produce_base<D, Windows::UI::Xaml::Shapes::IRectangle>
{
    HRESULT __stdcall get_RadiusX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RadiusX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RadiusX(double value) noexcept override
    {
        try
        {
            this->shim().RadiusX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RadiusY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RadiusY(double value) noexcept override
    {
        try
        {
            this->shim().RadiusY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IRectangleStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IRectangleStatics>
{
    HRESULT __stdcall get_RadiusXProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RadiusXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusYProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RadiusYProperty());
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
struct produce<D, Windows::UI::Xaml::Shapes::IShape> : produce_base<D, Windows::UI::Xaml::Shapes::IShape>
{
    HRESULT __stdcall get_Fill(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fill());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Fill(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().Fill(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stroke(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Stroke());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Stroke(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().Stroke(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeMiterLimit(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeMiterLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeMiterLimit(double value) noexcept override
    {
        try
        {
            this->shim().StrokeMiterLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThickness(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeThickness(double value) noexcept override
    {
        try
        {
            this->shim().StrokeThickness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeStartLineCap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap value) noexcept override
    {
        try
        {
            this->shim().StrokeStartLineCap(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeEndLineCap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap value) noexcept override
    {
        try
        {
            this->shim().StrokeEndLineCap(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeLineJoin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin value) noexcept override
    {
        try
        {
            this->shim().StrokeLineJoin(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashOffset(double value) noexcept override
    {
        try
        {
            this->shim().StrokeDashOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashCap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap value) noexcept override
    {
        try
        {
            this->shim().StrokeDashCap(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashArray(abi_arg_out<Windows::Foundation::Collections::IVector<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashArray());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashArray(abi_arg_in<Windows::Foundation::Collections::IVector<double>> value) noexcept override
    {
        try
        {
            this->shim().StrokeDashArray(*reinterpret_cast<const Windows::UI::Xaml::Media::DoubleCollection *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stretch(Windows::UI::Xaml::Media::Stretch * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Stretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Stretch(Windows::UI::Xaml::Media::Stretch value) noexcept override
    {
        try
        {
            this->shim().Stretch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeometryTransform(abi_arg_out<Windows::UI::Xaml::Media::ITransform> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeometryTransform());
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
struct produce<D, Windows::UI::Xaml::Shapes::IShape2> : produce_base<D, Windows::UI::Xaml::Shapes::IShape2>
{
    HRESULT __stdcall abi_GetAlphaMask(abi_arg_out<Windows::UI::Composition::ICompositionBrush> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAlphaMask());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IShapeFactory> : produce_base<D, Windows::UI::Xaml::Shapes::IShapeFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Shapes::IShape> instance) noexcept override
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

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IShapeStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IShapeStatics>
{
    HRESULT __stdcall get_FillProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeMiterLimitProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeMiterLimitProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThicknessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeStartLineCapProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeStartLineCapProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeEndLineCapProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeEndLineCapProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeLineJoinProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeLineJoinProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashCapProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashCapProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashArrayProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeDashArrayProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StretchProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StretchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Xaml::Shapes {

template <typename D> Windows::UI::Xaml::Media::Brush impl_IShape<D>::Fill() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_Fill(put(value)));
    return value;
}

template <typename D> void impl_IShape<D>::Fill(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_Fill(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IShape<D>::Stroke() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_Stroke(put(value)));
    return value;
}

template <typename D> void impl_IShape<D>::Stroke(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_Stroke(get(value)));
}

template <typename D> double impl_IShape<D>::StrokeMiterLimit() const
{
    double value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeMiterLimit(&value));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeMiterLimit(double value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeMiterLimit(value));
}

template <typename D> double impl_IShape<D>::StrokeThickness() const
{
    double value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeThickness(&value));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeThickness(double value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeThickness(value));
}

template <typename D> Windows::UI::Xaml::Media::PenLineCap impl_IShape<D>::StrokeStartLineCap() const
{
    Windows::UI::Xaml::Media::PenLineCap value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeStartLineCap(&value));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeStartLineCap(value));
}

template <typename D> Windows::UI::Xaml::Media::PenLineCap impl_IShape<D>::StrokeEndLineCap() const
{
    Windows::UI::Xaml::Media::PenLineCap value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeEndLineCap(&value));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeEndLineCap(value));
}

template <typename D> Windows::UI::Xaml::Media::PenLineJoin impl_IShape<D>::StrokeLineJoin() const
{
    Windows::UI::Xaml::Media::PenLineJoin value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeLineJoin(&value));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeLineJoin(value));
}

template <typename D> double impl_IShape<D>::StrokeDashOffset() const
{
    double value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeDashOffset(&value));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeDashOffset(double value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeDashOffset(value));
}

template <typename D> Windows::UI::Xaml::Media::PenLineCap impl_IShape<D>::StrokeDashCap() const
{
    Windows::UI::Xaml::Media::PenLineCap value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeDashCap(&value));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeDashCap(value));
}

template <typename D> Windows::UI::Xaml::Media::DoubleCollection impl_IShape<D>::StrokeDashArray() const
{
    Windows::UI::Xaml::Media::DoubleCollection value { nullptr };
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_StrokeDashArray(put(value)));
    return value;
}

template <typename D> void impl_IShape<D>::StrokeDashArray(const Windows::UI::Xaml::Media::DoubleCollection & value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_StrokeDashArray(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Stretch impl_IShape<D>::Stretch() const
{
    Windows::UI::Xaml::Media::Stretch value {};
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_Stretch(&value));
    return value;
}

template <typename D> void impl_IShape<D>::Stretch(Windows::UI::Xaml::Media::Stretch value) const
{
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->put_Stretch(value));
}

template <typename D> Windows::UI::Xaml::Media::Transform impl_IShape<D>::GeometryTransform() const
{
    Windows::UI::Xaml::Media::Transform value { nullptr };
    check_hresult(static_cast<const IShape &>(static_cast<const D &>(*this))->get_GeometryTransform(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::FillProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_FillProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeMiterLimitProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeMiterLimitProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeThicknessProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeStartLineCapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeStartLineCapProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeEndLineCapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeEndLineCapProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeLineJoinProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeLineJoinProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeDashOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeDashOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeDashCapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeDashCapProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StrokeDashArrayProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StrokeDashArrayProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IShapeStatics<D>::StretchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IShapeStatics &>(static_cast<const D &>(*this))->get_StretchProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Shapes::Shape impl_IShapeFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Shapes::Shape instance { nullptr };
    check_hresult(static_cast<const IShapeFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Composition::CompositionBrush impl_IShape2<D>::GetAlphaMask() const
{
    Windows::UI::Composition::CompositionBrush returnValue { nullptr };
    check_hresult(static_cast<const IShape2 &>(static_cast<const D &>(*this))->abi_GetAlphaMask(put(returnValue)));
    return returnValue;
}

template <typename D> double impl_ILine<D>::X1() const
{
    double value {};
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->get_X1(&value));
    return value;
}

template <typename D> void impl_ILine<D>::X1(double value) const
{
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->put_X1(value));
}

template <typename D> double impl_ILine<D>::Y1() const
{
    double value {};
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->get_Y1(&value));
    return value;
}

template <typename D> void impl_ILine<D>::Y1(double value) const
{
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->put_Y1(value));
}

template <typename D> double impl_ILine<D>::X2() const
{
    double value {};
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->get_X2(&value));
    return value;
}

template <typename D> void impl_ILine<D>::X2(double value) const
{
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->put_X2(value));
}

template <typename D> double impl_ILine<D>::Y2() const
{
    double value {};
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->get_Y2(&value));
    return value;
}

template <typename D> void impl_ILine<D>::Y2(double value) const
{
    check_hresult(static_cast<const ILine &>(static_cast<const D &>(*this))->put_Y2(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILineStatics<D>::X1Property() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILineStatics &>(static_cast<const D &>(*this))->get_X1Property(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILineStatics<D>::Y1Property() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILineStatics &>(static_cast<const D &>(*this))->get_Y1Property(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILineStatics<D>::X2Property() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILineStatics &>(static_cast<const D &>(*this))->get_X2Property(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILineStatics<D>::Y2Property() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILineStatics &>(static_cast<const D &>(*this))->get_Y2Property(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Geometry impl_IPath<D>::Data() const
{
    Windows::UI::Xaml::Media::Geometry value { nullptr };
    check_hresult(static_cast<const IPath &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IPath<D>::Data(const Windows::UI::Xaml::Media::Geometry & value) const
{
    check_hresult(static_cast<const IPath &>(static_cast<const D &>(*this))->put_Data(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPathStatics<D>::DataProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPathStatics &>(static_cast<const D &>(*this))->get_DataProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Shapes::Path impl_IPathFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Shapes::Path instance { nullptr };
    check_hresult(static_cast<const IPathFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::FillRule impl_IPolygon<D>::FillRule() const
{
    Windows::UI::Xaml::Media::FillRule value {};
    check_hresult(static_cast<const IPolygon &>(static_cast<const D &>(*this))->get_FillRule(&value));
    return value;
}

template <typename D> void impl_IPolygon<D>::FillRule(Windows::UI::Xaml::Media::FillRule value) const
{
    check_hresult(static_cast<const IPolygon &>(static_cast<const D &>(*this))->put_FillRule(value));
}

template <typename D> Windows::UI::Xaml::Media::PointCollection impl_IPolygon<D>::Points() const
{
    Windows::UI::Xaml::Media::PointCollection value { nullptr };
    check_hresult(static_cast<const IPolygon &>(static_cast<const D &>(*this))->get_Points(put(value)));
    return value;
}

template <typename D> void impl_IPolygon<D>::Points(const Windows::UI::Xaml::Media::PointCollection & value) const
{
    check_hresult(static_cast<const IPolygon &>(static_cast<const D &>(*this))->put_Points(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPolygonStatics<D>::FillRuleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPolygonStatics &>(static_cast<const D &>(*this))->get_FillRuleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPolygonStatics<D>::PointsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPolygonStatics &>(static_cast<const D &>(*this))->get_PointsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::FillRule impl_IPolyline<D>::FillRule() const
{
    Windows::UI::Xaml::Media::FillRule value {};
    check_hresult(static_cast<const IPolyline &>(static_cast<const D &>(*this))->get_FillRule(&value));
    return value;
}

template <typename D> void impl_IPolyline<D>::FillRule(Windows::UI::Xaml::Media::FillRule value) const
{
    check_hresult(static_cast<const IPolyline &>(static_cast<const D &>(*this))->put_FillRule(value));
}

template <typename D> Windows::UI::Xaml::Media::PointCollection impl_IPolyline<D>::Points() const
{
    Windows::UI::Xaml::Media::PointCollection value { nullptr };
    check_hresult(static_cast<const IPolyline &>(static_cast<const D &>(*this))->get_Points(put(value)));
    return value;
}

template <typename D> void impl_IPolyline<D>::Points(const Windows::UI::Xaml::Media::PointCollection & value) const
{
    check_hresult(static_cast<const IPolyline &>(static_cast<const D &>(*this))->put_Points(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPolylineStatics<D>::FillRuleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPolylineStatics &>(static_cast<const D &>(*this))->get_FillRuleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPolylineStatics<D>::PointsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPolylineStatics &>(static_cast<const D &>(*this))->get_PointsProperty(put(value)));
    return value;
}

template <typename D> double impl_IRectangle<D>::RadiusX() const
{
    double value {};
    check_hresult(static_cast<const IRectangle &>(static_cast<const D &>(*this))->get_RadiusX(&value));
    return value;
}

template <typename D> void impl_IRectangle<D>::RadiusX(double value) const
{
    check_hresult(static_cast<const IRectangle &>(static_cast<const D &>(*this))->put_RadiusX(value));
}

template <typename D> double impl_IRectangle<D>::RadiusY() const
{
    double value {};
    check_hresult(static_cast<const IRectangle &>(static_cast<const D &>(*this))->get_RadiusY(&value));
    return value;
}

template <typename D> void impl_IRectangle<D>::RadiusY(double value) const
{
    check_hresult(static_cast<const IRectangle &>(static_cast<const D &>(*this))->put_RadiusY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRectangleStatics<D>::RadiusXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRectangleStatics &>(static_cast<const D &>(*this))->get_RadiusXProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRectangleStatics<D>::RadiusYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRectangleStatics &>(static_cast<const D &>(*this))->get_RadiusYProperty(put(value)));
    return value;
}

inline Ellipse::Ellipse() :
    Ellipse(activate_instance<Ellipse>())
{}

inline Line::Line() :
    Line(activate_instance<Line>())
{}

inline Windows::UI::Xaml::DependencyProperty Line::X1Property()
{
    return get_activation_factory<Line, ILineStatics>().X1Property();
}

inline Windows::UI::Xaml::DependencyProperty Line::Y1Property()
{
    return get_activation_factory<Line, ILineStatics>().Y1Property();
}

inline Windows::UI::Xaml::DependencyProperty Line::X2Property()
{
    return get_activation_factory<Line, ILineStatics>().X2Property();
}

inline Windows::UI::Xaml::DependencyProperty Line::Y2Property()
{
    return get_activation_factory<Line, ILineStatics>().Y2Property();
}

inline Path::Path()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<Path, IPathFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty Path::DataProperty()
{
    return get_activation_factory<Path, IPathStatics>().DataProperty();
}

inline Polygon::Polygon() :
    Polygon(activate_instance<Polygon>())
{}

inline Windows::UI::Xaml::DependencyProperty Polygon::FillRuleProperty()
{
    return get_activation_factory<Polygon, IPolygonStatics>().FillRuleProperty();
}

inline Windows::UI::Xaml::DependencyProperty Polygon::PointsProperty()
{
    return get_activation_factory<Polygon, IPolygonStatics>().PointsProperty();
}

inline Polyline::Polyline() :
    Polyline(activate_instance<Polyline>())
{}

inline Windows::UI::Xaml::DependencyProperty Polyline::FillRuleProperty()
{
    return get_activation_factory<Polyline, IPolylineStatics>().FillRuleProperty();
}

inline Windows::UI::Xaml::DependencyProperty Polyline::PointsProperty()
{
    return get_activation_factory<Polyline, IPolylineStatics>().PointsProperty();
}

inline Rectangle::Rectangle() :
    Rectangle(activate_instance<Rectangle>())
{}

inline Windows::UI::Xaml::DependencyProperty Rectangle::RadiusXProperty()
{
    return get_activation_factory<Rectangle, IRectangleStatics>().RadiusXProperty();
}

inline Windows::UI::Xaml::DependencyProperty Rectangle::RadiusYProperty()
{
    return get_activation_factory<Rectangle, IRectangleStatics>().RadiusYProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::FillProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().FillProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeMiterLimitProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeMiterLimitProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeThicknessProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeStartLineCapProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeStartLineCapProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeEndLineCapProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeEndLineCapProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeLineJoinProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeLineJoinProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeDashOffsetProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeDashOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeDashCapProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeDashCapProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeDashArrayProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StrokeDashArrayProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StretchProperty()
{
    return get_activation_factory<Shape, IShapeStatics>().StretchProperty();
}

}

}
