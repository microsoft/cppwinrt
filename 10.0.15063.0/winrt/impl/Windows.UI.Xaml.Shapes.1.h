// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Media.0.h"
#include "winrt/impl/Windows.UI.Xaml.Shapes.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Shapes {

struct WINRT_EBO IEllipse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEllipse>
{
    IEllipse(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILine :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILine>
{
    ILine(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineStatics>
{
    ILineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPath :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPath>
{
    IPath(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathFactory>
{
    IPathFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathStatics>
{
    IPathStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolygon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolygon>
{
    IPolygon(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolygonStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolygonStatics>
{
    IPolygonStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolyline :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyline>
{
    IPolyline(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolylineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolylineStatics>
{
    IPolylineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRectangle :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRectangle>
{
    IRectangle(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRectangleStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRectangleStatics>
{
    IRectangleStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShape :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShape>
{
    IShape(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShape2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShape2>
{
    IShape2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShapeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShapeFactory>
{
    IShapeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShapeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShapeStatics>
{
    IShapeStatics(std::nullptr_t = nullptr) noexcept {}
};

}
