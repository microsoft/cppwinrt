// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Playback.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Composition.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.0.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.0.h"
#include "winrt/impl/Windows.UI.Xaml.Media.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media {

struct WINRT_EBO IArcSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcSegment>
{
    IArcSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IArcSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IArcSegmentStatics>
{
    IArcSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBezierSegment>
{
    IBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBezierSegmentStatics>
{
    IBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBitmapCache :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBitmapCache>
{
    IBitmapCache(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrush>
{
    IBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrushFactory>
{
    IBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrushStatics>
{
    IBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICacheMode :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICacheMode>
{
    ICacheMode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICacheModeFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICacheModeFactory>
{
    ICacheModeFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositeTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransform>
{
    ICompositeTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositeTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeTransformStatics>
{
    ICompositeTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionTarget>
{
    ICompositionTarget(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionTargetStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionTargetStatics>
{
    ICompositionTargetStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEllipseGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEllipseGeometry>
{
    IEllipseGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEllipseGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEllipseGeometryStatics>
{
    IEllipseGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFontFamily :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontFamily>
{
    IFontFamily(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFontFamilyFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontFamilyFactory>
{
    IFontFamilyFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFontFamilyStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFontFamilyStatics2>
{
    IFontFamilyStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeneralTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeneralTransform>
{
    IGeneralTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeneralTransformFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeneralTransformFactory>
{
    IGeneralTransformFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeneralTransformOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeneralTransformOverrides>
{
    IGeneralTransformOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometry>
{
    IGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeometryFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryFactory>
{
    IGeometryFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeometryGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryGroup>
{
    IGeometryGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeometryGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryGroupStatics>
{
    IGeometryGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeometryStatics>
{
    IGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGradientBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientBrush>
{
    IGradientBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGradientBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientBrushFactory>
{
    IGradientBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGradientBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientBrushStatics>
{
    IGradientBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGradientStop :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientStop>
{
    IGradientStop(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGradientStopStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGradientStopStatics>
{
    IGradientStopStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageBrush>
{
    IImageBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageBrushStatics>
{
    IImageBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageSource>
{
    IImageSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageSourceFactory>
{
    IImageSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineGeometry>
{
    ILineGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineGeometryStatics>
{
    ILineGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineSegment>
{
    ILineSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILineSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILineSegmentStatics>
{
    ILineSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILinearGradientBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearGradientBrush>
{
    ILinearGradientBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILinearGradientBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearGradientBrushFactory>
{
    ILinearGradientBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILinearGradientBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearGradientBrushStatics>
{
    ILinearGradientBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILoadedImageSourceLoadCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoadedImageSourceLoadCompletedEventArgs>
{
    ILoadedImageSourceLoadCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILoadedImageSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoadedImageSurface>
{
    ILoadedImageSurface(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILoadedImageSurfaceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILoadedImageSurfaceStatics>
{
    ILoadedImageSurfaceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrix3DProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DProjection>
{
    IMatrix3DProjection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrix3DProjectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrix3DProjectionStatics>
{
    IMatrix3DProjectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrixHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixHelper>
{
    IMatrixHelper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrixHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixHelperStatics>
{
    IMatrixHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrixTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixTransform>
{
    IMatrixTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMatrixTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMatrixTransformStatics>
{
    IMatrixTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTransportControlsThumbnailRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTransportControlsThumbnailRequestedEventArgs>
{
    IMediaTransportControlsThumbnailRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPartialMediaFailureDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPartialMediaFailureDetectedEventArgs>
{
    IPartialMediaFailureDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPartialMediaFailureDetectedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPartialMediaFailureDetectedEventArgs2>
{
    IPartialMediaFailureDetectedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathFigure :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathFigure>
{
    IPathFigure(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathFigureStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathFigureStatics>
{
    IPathFigureStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathGeometry>
{
    IPathGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathGeometryStatics>
{
    IPathGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathSegment>
{
    IPathSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPathSegmentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPathSegmentFactory>
{
    IPathSegmentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaneProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaneProjection>
{
    IPlaneProjection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaneProjectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaneProjectionStatics>
{
    IPlaneProjectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolyBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyBezierSegment>
{
    IPolyBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolyBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyBezierSegmentStatics>
{
    IPolyBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolyLineSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyLineSegment>
{
    IPolyLineSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolyLineSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyLineSegmentStatics>
{
    IPolyLineSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolyQuadraticBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyQuadraticBezierSegment>
{
    IPolyQuadraticBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPolyQuadraticBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPolyQuadraticBezierSegmentStatics>
{
    IPolyQuadraticBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProjection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProjection>
{
    IProjection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProjectionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProjectionFactory>
{
    IProjectionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IQuadraticBezierSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuadraticBezierSegment>
{
    IQuadraticBezierSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IQuadraticBezierSegmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuadraticBezierSegmentStatics>
{
    IQuadraticBezierSegmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRateChangedRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRateChangedRoutedEventArgs>
{
    IRateChangedRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRectangleGeometry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRectangleGeometry>
{
    IRectangleGeometry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRectangleGeometryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRectangleGeometryStatics>
{
    IRectangleGeometryStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRenderingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRenderingEventArgs>
{
    IRenderingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRotateTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRotateTransform>
{
    IRotateTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRotateTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRotateTransformStatics>
{
    IRotateTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScaleTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScaleTransform>
{
    IScaleTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScaleTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScaleTransformStatics>
{
    IScaleTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISkewTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISkewTransform>
{
    ISkewTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISkewTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISkewTransformStatics>
{
    ISkewTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISolidColorBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISolidColorBrush>
{
    ISolidColorBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISolidColorBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISolidColorBrushFactory>
{
    ISolidColorBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISolidColorBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISolidColorBrushStatics>
{
    ISolidColorBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileBrush>
{
    ITileBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileBrushFactory>
{
    ITileBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITileBrushStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITileBrushStatics>
{
    ITileBrushStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimelineMarker :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimelineMarker>
{
    ITimelineMarker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimelineMarkerRoutedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimelineMarkerRoutedEventArgs>
{
    ITimelineMarkerRoutedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimelineMarkerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimelineMarkerStatics>
{
    ITimelineMarkerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransform>
{
    ITransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransformFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformFactory>
{
    ITransformFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransformGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformGroup>
{
    ITransformGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITransformGroupStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITransformGroupStatics>
{
    ITransformGroupStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITranslateTransform :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITranslateTransform>
{
    ITranslateTransform(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITranslateTransformStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITranslateTransformStatics>
{
    ITranslateTransformStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualTreeHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualTreeHelper>
{
    IVisualTreeHelper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualTreeHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualTreeHelperStatics>
{
    IVisualTreeHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualTreeHelperStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualTreeHelperStatics2>
{
    IVisualTreeHelperStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlCompositionBrushBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBase>
{
    IXamlCompositionBrushBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlCompositionBrushBaseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseFactory>
{
    IXamlCompositionBrushBaseFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlCompositionBrushBaseOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseOverrides>
{
    IXamlCompositionBrushBaseOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlCompositionBrushBaseProtected :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseProtected>
{
    IXamlCompositionBrushBaseProtected(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlCompositionBrushBaseStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlCompositionBrushBaseStatics>
{
    IXamlCompositionBrushBaseStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLight>
{
    IXamlLight(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlLightFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightFactory>
{
    IXamlLightFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlLightOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightOverrides>
{
    IXamlLightOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlLightProtected :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightProtected>
{
    IXamlLightProtected(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXamlLightStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXamlLightStatics>
{
    IXamlLightStatics(std::nullptr_t = nullptr) noexcept {}
};

}
