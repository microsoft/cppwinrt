// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Shapes.1.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Shapes {

template <typename D>
struct WINRT_EBO impl_IEllipse
{
};

template <typename D>
struct WINRT_EBO impl_ILine
{
    double X1() const;
    void X1(double value) const;
    double Y1() const;
    void Y1(double value) const;
    double X2() const;
    void X2(double value) const;
    double Y2() const;
    void Y2(double value) const;
};

template <typename D>
struct WINRT_EBO impl_ILineStatics
{
    Windows::UI::Xaml::DependencyProperty X1Property() const;
    Windows::UI::Xaml::DependencyProperty Y1Property() const;
    Windows::UI::Xaml::DependencyProperty X2Property() const;
    Windows::UI::Xaml::DependencyProperty Y2Property() const;
};

template <typename D>
struct WINRT_EBO impl_IPath
{
    Windows::UI::Xaml::Media::Geometry Data() const;
    void Data(const Windows::UI::Xaml::Media::Geometry & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPathFactory
{
    Windows::UI::Xaml::Shapes::Path CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IPathStatics
{
    Windows::UI::Xaml::DependencyProperty DataProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IPolygon
{
    Windows::UI::Xaml::Media::FillRule FillRule() const;
    void FillRule(Windows::UI::Xaml::Media::FillRule value) const;
    Windows::UI::Xaml::Media::PointCollection Points() const;
    void Points(const Windows::UI::Xaml::Media::PointCollection & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPolygonStatics
{
    Windows::UI::Xaml::DependencyProperty FillRuleProperty() const;
    Windows::UI::Xaml::DependencyProperty PointsProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IPolyline
{
    Windows::UI::Xaml::Media::FillRule FillRule() const;
    void FillRule(Windows::UI::Xaml::Media::FillRule value) const;
    Windows::UI::Xaml::Media::PointCollection Points() const;
    void Points(const Windows::UI::Xaml::Media::PointCollection & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPolylineStatics
{
    Windows::UI::Xaml::DependencyProperty FillRuleProperty() const;
    Windows::UI::Xaml::DependencyProperty PointsProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IRectangle
{
    double RadiusX() const;
    void RadiusX(double value) const;
    double RadiusY() const;
    void RadiusY(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IRectangleStatics
{
    Windows::UI::Xaml::DependencyProperty RadiusXProperty() const;
    Windows::UI::Xaml::DependencyProperty RadiusYProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IShape
{
    Windows::UI::Xaml::Media::Brush Fill() const;
    void Fill(const Windows::UI::Xaml::Media::Brush & value) const;
    Windows::UI::Xaml::Media::Brush Stroke() const;
    void Stroke(const Windows::UI::Xaml::Media::Brush & value) const;
    double StrokeMiterLimit() const;
    void StrokeMiterLimit(double value) const;
    double StrokeThickness() const;
    void StrokeThickness(double value) const;
    Windows::UI::Xaml::Media::PenLineCap StrokeStartLineCap() const;
    void StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap value) const;
    Windows::UI::Xaml::Media::PenLineCap StrokeEndLineCap() const;
    void StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap value) const;
    Windows::UI::Xaml::Media::PenLineJoin StrokeLineJoin() const;
    void StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin value) const;
    double StrokeDashOffset() const;
    void StrokeDashOffset(double value) const;
    Windows::UI::Xaml::Media::PenLineCap StrokeDashCap() const;
    void StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap value) const;
    Windows::UI::Xaml::Media::DoubleCollection StrokeDashArray() const;
    void StrokeDashArray(const Windows::UI::Xaml::Media::DoubleCollection & value) const;
    Windows::UI::Xaml::Media::Stretch Stretch() const;
    void Stretch(Windows::UI::Xaml::Media::Stretch value) const;
    Windows::UI::Xaml::Media::Transform GeometryTransform() const;
};

template <typename D>
struct WINRT_EBO impl_IShape2
{
    Windows::UI::Composition::CompositionBrush GetAlphaMask() const;
};

template <typename D>
struct WINRT_EBO impl_IShapeFactory
{
    Windows::UI::Xaml::Shapes::Shape CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IShapeStatics
{
    Windows::UI::Xaml::DependencyProperty FillProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeMiterLimitProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeThicknessProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeStartLineCapProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeEndLineCapProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeLineJoinProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeDashOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeDashCapProperty() const;
    Windows::UI::Xaml::DependencyProperty StrokeDashArrayProperty() const;
    Windows::UI::Xaml::DependencyProperty StretchProperty() const;
};

struct IEllipse :
    Windows::IInspectable,
    impl::consume<IEllipse>
{
    IEllipse(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEllipse>(m_ptr); }
};

struct ILine :
    Windows::IInspectable,
    impl::consume<ILine>
{
    ILine(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILine>(m_ptr); }
};

struct ILineStatics :
    Windows::IInspectable,
    impl::consume<ILineStatics>
{
    ILineStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILineStatics>(m_ptr); }
};

struct IPath :
    Windows::IInspectable,
    impl::consume<IPath>
{
    IPath(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPath>(m_ptr); }
};

struct IPathFactory :
    Windows::IInspectable,
    impl::consume<IPathFactory>
{
    IPathFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPathFactory>(m_ptr); }
};

struct IPathStatics :
    Windows::IInspectable,
    impl::consume<IPathStatics>
{
    IPathStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPathStatics>(m_ptr); }
};

struct IPolygon :
    Windows::IInspectable,
    impl::consume<IPolygon>
{
    IPolygon(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPolygon>(m_ptr); }
};

struct IPolygonStatics :
    Windows::IInspectable,
    impl::consume<IPolygonStatics>
{
    IPolygonStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPolygonStatics>(m_ptr); }
};

struct IPolyline :
    Windows::IInspectable,
    impl::consume<IPolyline>
{
    IPolyline(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPolyline>(m_ptr); }
};

struct IPolylineStatics :
    Windows::IInspectable,
    impl::consume<IPolylineStatics>
{
    IPolylineStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPolylineStatics>(m_ptr); }
};

struct IRectangle :
    Windows::IInspectable,
    impl::consume<IRectangle>
{
    IRectangle(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRectangle>(m_ptr); }
};

struct IRectangleStatics :
    Windows::IInspectable,
    impl::consume<IRectangleStatics>
{
    IRectangleStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRectangleStatics>(m_ptr); }
};

struct IShape :
    Windows::IInspectable,
    impl::consume<IShape>
{
    IShape(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IShape>(m_ptr); }
};

struct IShape2 :
    Windows::IInspectable,
    impl::consume<IShape2>
{
    IShape2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IShape2>(m_ptr); }
};

struct IShapeFactory :
    Windows::IInspectable,
    impl::consume<IShapeFactory>
{
    IShapeFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IShapeFactory>(m_ptr); }
};

struct IShapeStatics :
    Windows::IInspectable,
    impl::consume<IShapeStatics>
{
    IShapeStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IShapeStatics>(m_ptr); }
};

}

}
