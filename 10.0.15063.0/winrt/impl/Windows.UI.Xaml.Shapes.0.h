// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct CompositionBrush;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyProperty;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media {

enum class FillRule;
enum class PenLineCap;
enum class PenLineJoin;
enum class Stretch;
struct Brush;
struct DoubleCollection;
struct Geometry;
struct PointCollection;
struct Transform;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Shapes {

struct IEllipse;
struct ILine;
struct ILineStatics;
struct IPath;
struct IPathFactory;
struct IPathStatics;
struct IPolygon;
struct IPolygonStatics;
struct IPolyline;
struct IPolylineStatics;
struct IRectangle;
struct IRectangleStatics;
struct IShape;
struct IShape2;
struct IShapeFactory;
struct IShapeStatics;
struct Ellipse;
struct Line;
struct Path;
struct Polygon;
struct Polyline;
struct Rectangle;
struct Shape;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Shapes::IEllipse>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::ILine>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::ILineStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IPath>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IPathFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IPathStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IPolygon>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IPolygonStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IPolyline>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IPolylineStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IRectangle>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IRectangleStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IShape>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IShape2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IShapeFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::IShapeStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Shapes::Ellipse>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Shapes::Line>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Shapes::Path>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Shapes::Polygon>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Shapes::Polyline>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Shapes::Rectangle>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Shapes::Shape>{ using type = class_category; };
template <> struct name<Windows::UI::Xaml::Shapes::IEllipse>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IEllipse" }; };
template <> struct name<Windows::UI::Xaml::Shapes::ILine>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.ILine" }; };
template <> struct name<Windows::UI::Xaml::Shapes::ILineStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.ILineStatics" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IPath>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPath" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IPathFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPathFactory" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IPathStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPathStatics" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IPolygon>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolygon" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IPolygonStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolygonStatics" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IPolyline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolyline" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IPolylineStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IPolylineStatics" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IRectangle>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IRectangle" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IRectangleStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IRectangleStatics" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IShape>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShape" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IShape2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShape2" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IShapeFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShapeFactory" }; };
template <> struct name<Windows::UI::Xaml::Shapes::IShapeStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.IShapeStatics" }; };
template <> struct name<Windows::UI::Xaml::Shapes::Ellipse>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Ellipse" }; };
template <> struct name<Windows::UI::Xaml::Shapes::Line>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Line" }; };
template <> struct name<Windows::UI::Xaml::Shapes::Path>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Path" }; };
template <> struct name<Windows::UI::Xaml::Shapes::Polygon>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Polygon" }; };
template <> struct name<Windows::UI::Xaml::Shapes::Polyline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Polyline" }; };
template <> struct name<Windows::UI::Xaml::Shapes::Rectangle>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Rectangle" }; };
template <> struct name<Windows::UI::Xaml::Shapes::Shape>{ static constexpr auto & value{ L"Windows.UI.Xaml.Shapes.Shape" }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IEllipse>{ static constexpr GUID value{ 0x70E05AC4,0xD38D,0x4BAB,{ 0x83,0x1F,0x4A,0x22,0xEF,0x52,0xAC,0x86 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::ILine>{ static constexpr GUID value{ 0x46A5433D,0x4FFB,0x48DF,{ 0x87,0x32,0x4E,0x15,0xC8,0x34,0x81,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::ILineStatics>{ static constexpr GUID value{ 0x267C123D,0x6EA4,0x4C50,{ 0x8B,0x1D,0x50,0x20,0x7A,0xFF,0x1E,0x8A } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IPath>{ static constexpr GUID value{ 0x78883609,0x3D57,0x4F3C,{ 0xB8,0xA5,0x6C,0xAB,0xCA,0xC9,0x71,0x1F } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IPathFactory>{ static constexpr GUID value{ 0x2340A4E3,0x5A86,0x4FC6,{ 0x9A,0x50,0xCB,0xB9,0x3B,0x82,0x87,0x66 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IPathStatics>{ static constexpr GUID value{ 0xF627E59D,0x87DC,0x4142,{ 0x81,0xF1,0x97,0xFC,0x7F,0xF8,0x64,0x1C } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IPolygon>{ static constexpr GUID value{ 0xE3755C19,0x2E4D,0x4BCC,{ 0x8D,0x34,0x86,0x87,0x19,0x57,0xFA,0x01 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IPolygonStatics>{ static constexpr GUID value{ 0x362A8AAB,0xD463,0x4366,{ 0x9E,0x1A,0xBE,0xBA,0x72,0x81,0x0F,0xB7 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IPolyline>{ static constexpr GUID value{ 0x91DC62F8,0x42B3,0x47F3,{ 0x84,0x76,0xC5,0x51,0x24,0xA7,0xC4,0xC6 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IPolylineStatics>{ static constexpr GUID value{ 0xC7AA2CD1,0xA26C,0x43B0,{ 0xAA,0xA5,0x82,0x2F,0xA6,0x4A,0x11,0xB9 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IRectangle>{ static constexpr GUID value{ 0x855BC230,0x8A11,0x4E18,{ 0xA1,0x36,0x4B,0xC2,0x1C,0x78,0x27,0xB0 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IRectangleStatics>{ static constexpr GUID value{ 0x9F25AA53,0xBB3A,0x4C3C,{ 0x89,0xDB,0x6F,0xBC,0x0D,0x1F,0xA0,0xCC } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IShape>{ static constexpr GUID value{ 0x786F2B75,0x9AA0,0x454D,{ 0xAE,0x06,0xA2,0x46,0x6E,0x37,0xC8,0x32 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IShape2>{ static constexpr GUID value{ 0x97248DBA,0x49F2,0x49A4,{ 0xA5,0xDD,0x16,0x4D,0xF8,0x24,0xDB,0x14 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IShapeFactory>{ static constexpr GUID value{ 0x4B717613,0xF6AA,0x48D5,{ 0x95,0x88,0xE1,0xD1,0x88,0xEA,0xCB,0xC9 } }; };
template <> struct guid<Windows::UI::Xaml::Shapes::IShapeStatics>{ static constexpr GUID value{ 0x1D7B4C55,0x9DF3,0x48DC,{ 0x91,0x94,0x9D,0x30,0x6F,0xAA,0x60,0x89 } }; };
template <> struct default_interface<Windows::UI::Xaml::Shapes::Ellipse>{ using type = Windows::UI::Xaml::Shapes::IEllipse; };
template <> struct default_interface<Windows::UI::Xaml::Shapes::Line>{ using type = Windows::UI::Xaml::Shapes::ILine; };
template <> struct default_interface<Windows::UI::Xaml::Shapes::Path>{ using type = Windows::UI::Xaml::Shapes::IPath; };
template <> struct default_interface<Windows::UI::Xaml::Shapes::Polygon>{ using type = Windows::UI::Xaml::Shapes::IPolygon; };
template <> struct default_interface<Windows::UI::Xaml::Shapes::Polyline>{ using type = Windows::UI::Xaml::Shapes::IPolyline; };
template <> struct default_interface<Windows::UI::Xaml::Shapes::Rectangle>{ using type = Windows::UI::Xaml::Shapes::IRectangle; };
template <> struct default_interface<Windows::UI::Xaml::Shapes::Shape>{ using type = Windows::UI::Xaml::Shapes::IShape; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IEllipse
{
};
template <> struct consume<Windows::UI::Xaml::Shapes::IEllipse> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IEllipse<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_ILine
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
template <> struct consume<Windows::UI::Xaml::Shapes::ILine> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_ILine<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_ILineStatics
{
    Windows::UI::Xaml::DependencyProperty X1Property() const;
    Windows::UI::Xaml::DependencyProperty Y1Property() const;
    Windows::UI::Xaml::DependencyProperty X2Property() const;
    Windows::UI::Xaml::DependencyProperty Y2Property() const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::ILineStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_ILineStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IPath
{
    Windows::UI::Xaml::Media::Geometry Data() const;
    void Data(Windows::UI::Xaml::Media::Geometry const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IPath> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPath<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IPathFactory
{
    Windows::UI::Xaml::Shapes::Path CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IPathFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPathFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IPathStatics
{
    Windows::UI::Xaml::DependencyProperty DataProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IPathStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPathStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IPolygon
{
    Windows::UI::Xaml::Media::FillRule FillRule() const;
    void FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
    Windows::UI::Xaml::Media::PointCollection Points() const;
    void Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IPolygon> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolygon<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IPolygonStatics
{
    Windows::UI::Xaml::DependencyProperty FillRuleProperty() const;
    Windows::UI::Xaml::DependencyProperty PointsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IPolygonStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolygonStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IPolyline
{
    Windows::UI::Xaml::Media::FillRule FillRule() const;
    void FillRule(Windows::UI::Xaml::Media::FillRule const& value) const;
    Windows::UI::Xaml::Media::PointCollection Points() const;
    void Points(Windows::UI::Xaml::Media::PointCollection const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IPolyline> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolyline<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IPolylineStatics
{
    Windows::UI::Xaml::DependencyProperty FillRuleProperty() const;
    Windows::UI::Xaml::DependencyProperty PointsProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IPolylineStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IPolylineStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IRectangle
{
    double RadiusX() const;
    void RadiusX(double value) const;
    double RadiusY() const;
    void RadiusY(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IRectangle> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IRectangle<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IRectangleStatics
{
    Windows::UI::Xaml::DependencyProperty RadiusXProperty() const;
    Windows::UI::Xaml::DependencyProperty RadiusYProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IRectangleStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IRectangleStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IShape
{
    Windows::UI::Xaml::Media::Brush Fill() const;
    void Fill(Windows::UI::Xaml::Media::Brush const& value) const;
    Windows::UI::Xaml::Media::Brush Stroke() const;
    void Stroke(Windows::UI::Xaml::Media::Brush const& value) const;
    double StrokeMiterLimit() const;
    void StrokeMiterLimit(double value) const;
    double StrokeThickness() const;
    void StrokeThickness(double value) const;
    Windows::UI::Xaml::Media::PenLineCap StrokeStartLineCap() const;
    void StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap const& value) const;
    Windows::UI::Xaml::Media::PenLineCap StrokeEndLineCap() const;
    void StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap const& value) const;
    Windows::UI::Xaml::Media::PenLineJoin StrokeLineJoin() const;
    void StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin const& value) const;
    double StrokeDashOffset() const;
    void StrokeDashOffset(double value) const;
    Windows::UI::Xaml::Media::PenLineCap StrokeDashCap() const;
    void StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap const& value) const;
    Windows::UI::Xaml::Media::DoubleCollection StrokeDashArray() const;
    void StrokeDashArray(Windows::UI::Xaml::Media::DoubleCollection const& value) const;
    Windows::UI::Xaml::Media::Stretch Stretch() const;
    void Stretch(Windows::UI::Xaml::Media::Stretch const& value) const;
    Windows::UI::Xaml::Media::Transform GeometryTransform() const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IShape> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShape<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IShape2
{
    Windows::UI::Composition::CompositionBrush GetAlphaMask() const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IShape2> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShape2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IShapeFactory
{
    Windows::UI::Xaml::Shapes::Shape CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Shapes::IShapeFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShapeFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Shapes_IShapeStatics
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
template <> struct consume<Windows::UI::Xaml::Shapes::IShapeStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>; };

template <> struct abi<Windows::UI::Xaml::Shapes::IEllipse>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Shapes::ILine>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_X1(double* value) = 0;
    virtual HRESULT __stdcall put_X1(double value) = 0;
    virtual HRESULT __stdcall get_Y1(double* value) = 0;
    virtual HRESULT __stdcall put_Y1(double value) = 0;
    virtual HRESULT __stdcall get_X2(double* value) = 0;
    virtual HRESULT __stdcall put_X2(double value) = 0;
    virtual HRESULT __stdcall get_Y2(double* value) = 0;
    virtual HRESULT __stdcall put_Y2(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::ILineStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_X1Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Y1Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_X2Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Y2Property(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IPath>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IPathFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IPathStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IPolygon>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FillRule(abi_t<Windows::UI::Xaml::Media::FillRule>* value) = 0;
    virtual HRESULT __stdcall put_FillRule(abi_t<Windows::UI::Xaml::Media::FillRule> value) = 0;
    virtual HRESULT __stdcall get_Points(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Points(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IPolygonStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FillRuleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointsProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IPolyline>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FillRule(abi_t<Windows::UI::Xaml::Media::FillRule>* value) = 0;
    virtual HRESULT __stdcall put_FillRule(abi_t<Windows::UI::Xaml::Media::FillRule> value) = 0;
    virtual HRESULT __stdcall get_Points(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Points(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IPolylineStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FillRuleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PointsProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IRectangle>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RadiusX(double* value) = 0;
    virtual HRESULT __stdcall put_RadiusX(double value) = 0;
    virtual HRESULT __stdcall get_RadiusY(double* value) = 0;
    virtual HRESULT __stdcall put_RadiusY(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IRectangleStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RadiusXProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RadiusYProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IShape>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Fill(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Fill(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Stroke(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Stroke(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StrokeMiterLimit(double* value) = 0;
    virtual HRESULT __stdcall put_StrokeMiterLimit(double value) = 0;
    virtual HRESULT __stdcall get_StrokeThickness(double* value) = 0;
    virtual HRESULT __stdcall put_StrokeThickness(double value) = 0;
    virtual HRESULT __stdcall get_StrokeStartLineCap(abi_t<Windows::UI::Xaml::Media::PenLineCap>* value) = 0;
    virtual HRESULT __stdcall put_StrokeStartLineCap(abi_t<Windows::UI::Xaml::Media::PenLineCap> value) = 0;
    virtual HRESULT __stdcall get_StrokeEndLineCap(abi_t<Windows::UI::Xaml::Media::PenLineCap>* value) = 0;
    virtual HRESULT __stdcall put_StrokeEndLineCap(abi_t<Windows::UI::Xaml::Media::PenLineCap> value) = 0;
    virtual HRESULT __stdcall get_StrokeLineJoin(abi_t<Windows::UI::Xaml::Media::PenLineJoin>* value) = 0;
    virtual HRESULT __stdcall put_StrokeLineJoin(abi_t<Windows::UI::Xaml::Media::PenLineJoin> value) = 0;
    virtual HRESULT __stdcall get_StrokeDashOffset(double* value) = 0;
    virtual HRESULT __stdcall put_StrokeDashOffset(double value) = 0;
    virtual HRESULT __stdcall get_StrokeDashCap(abi_t<Windows::UI::Xaml::Media::PenLineCap>* value) = 0;
    virtual HRESULT __stdcall put_StrokeDashCap(abi_t<Windows::UI::Xaml::Media::PenLineCap> value) = 0;
    virtual HRESULT __stdcall get_StrokeDashArray(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StrokeDashArray(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Stretch(abi_t<Windows::UI::Xaml::Media::Stretch>* value) = 0;
    virtual HRESULT __stdcall put_Stretch(abi_t<Windows::UI::Xaml::Media::Stretch> value) = 0;
    virtual HRESULT __stdcall get_GeometryTransform(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IShape2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAlphaMask(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IShapeFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Shapes::IShapeStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FillProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeMiterLimitProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeThicknessProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeStartLineCapProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeEndLineCapProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeLineJoinProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashCapProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashArrayProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StretchProperty(::IUnknown** value) = 0;
};};

}
