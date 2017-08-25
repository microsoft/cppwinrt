// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Playback.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media {

struct RateChangedRoutedEventHandler : Windows::Foundation::IUnknown
{
    RateChangedRoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RateChangedRoutedEventHandler(L lambda);
    template <typename F> RateChangedRoutedEventHandler(F* function);
    template <typename O, typename M> RateChangedRoutedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::RateChangedRoutedEventArgs const& e) const;
};

struct TimelineMarkerRoutedEventHandler : Windows::Foundation::IUnknown
{
    TimelineMarkerRoutedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> TimelineMarkerRoutedEventHandler(L lambda);
    template <typename F> TimelineMarkerRoutedEventHandler(F* function);
    template <typename O, typename M> TimelineMarkerRoutedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs const& e) const;
};

struct Matrix
{
    double M11;
    double M12;
    double M21;
    double M22;
    double OffsetX;
    double OffsetY;
};

struct WINRT_EBO ArcSegment :
    Windows::UI::Xaml::Media::IArcSegment,
    impl::base<ArcSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<ArcSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IPathSegment>
{
    ArcSegment(std::nullptr_t) noexcept {}
    ArcSegment();
    static Windows::UI::Xaml::DependencyProperty PointProperty();
    static Windows::UI::Xaml::DependencyProperty SizeProperty();
    static Windows::UI::Xaml::DependencyProperty RotationAngleProperty();
    static Windows::UI::Xaml::DependencyProperty IsLargeArcProperty();
    static Windows::UI::Xaml::DependencyProperty SweepDirectionProperty();
};

struct WINRT_EBO BezierSegment :
    Windows::UI::Xaml::Media::IBezierSegment,
    impl::base<BezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<BezierSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IPathSegment>
{
    BezierSegment(std::nullptr_t) noexcept {}
    BezierSegment();
    static Windows::UI::Xaml::DependencyProperty Point1Property();
    static Windows::UI::Xaml::DependencyProperty Point2Property();
    static Windows::UI::Xaml::DependencyProperty Point3Property();
};

struct WINRT_EBO BitmapCache :
    Windows::UI::Xaml::Media::IBitmapCache,
    impl::base<BitmapCache, Windows::UI::Xaml::Media::CacheMode, Windows::UI::Xaml::DependencyObject>,
    impl::require<BitmapCache, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::ICacheMode>
{
    BitmapCache(std::nullptr_t) noexcept {}
    BitmapCache();
};

struct WINRT_EBO Brush :
    Windows::UI::Xaml::Media::IBrush,
    impl::base<Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<Brush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Brush(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty OpacityProperty();
    static Windows::UI::Xaml::DependencyProperty TransformProperty();
    static Windows::UI::Xaml::DependencyProperty RelativeTransformProperty();
};

struct WINRT_EBO BrushCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Brush>
{
    BrushCollection(std::nullptr_t) noexcept {}
    BrushCollection();
};

struct WINRT_EBO CacheMode :
    Windows::UI::Xaml::Media::ICacheMode,
    impl::base<CacheMode, Windows::UI::Xaml::DependencyObject>,
    impl::require<CacheMode, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    CacheMode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CompositeTransform :
    Windows::UI::Xaml::Media::ICompositeTransform,
    impl::base<CompositeTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<CompositeTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::Media::ITransform>
{
    CompositeTransform(std::nullptr_t) noexcept {}
    CompositeTransform();
    static Windows::UI::Xaml::DependencyProperty CenterXProperty();
    static Windows::UI::Xaml::DependencyProperty CenterYProperty();
    static Windows::UI::Xaml::DependencyProperty ScaleXProperty();
    static Windows::UI::Xaml::DependencyProperty ScaleYProperty();
    static Windows::UI::Xaml::DependencyProperty SkewXProperty();
    static Windows::UI::Xaml::DependencyProperty SkewYProperty();
    static Windows::UI::Xaml::DependencyProperty RotationProperty();
    static Windows::UI::Xaml::DependencyProperty TranslateXProperty();
    static Windows::UI::Xaml::DependencyProperty TranslateYProperty();
};

struct WINRT_EBO CompositionTarget :
    Windows::UI::Xaml::Media::ICompositionTarget
{
    CompositionTarget(std::nullptr_t) noexcept {}
    static event_token Rendering(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value);
    using Rendering_revoker = factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics>;
    static Rendering_revoker Rendering(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value);
    static void Rendering(event_token const& token);
    static event_token SurfaceContentsLost(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value);
    using SurfaceContentsLost_revoker = factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics>;
    static SurfaceContentsLost_revoker SurfaceContentsLost(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value);
    static void SurfaceContentsLost(event_token const& token);
};

struct WINRT_EBO DoubleCollection :
    Windows::Foundation::Collections::IVector<double>
{
    DoubleCollection(std::nullptr_t) noexcept {}
    DoubleCollection();
};

struct WINRT_EBO EllipseGeometry :
    Windows::UI::Xaml::Media::IEllipseGeometry,
    impl::base<EllipseGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
    impl::require<EllipseGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeometry>
{
    EllipseGeometry(std::nullptr_t) noexcept {}
    EllipseGeometry();
    static Windows::UI::Xaml::DependencyProperty CenterProperty();
    static Windows::UI::Xaml::DependencyProperty RadiusXProperty();
    static Windows::UI::Xaml::DependencyProperty RadiusYProperty();
};

struct WINRT_EBO FontFamily :
    Windows::UI::Xaml::Media::IFontFamily
{
    FontFamily(std::nullptr_t) noexcept {}
    FontFamily(param::hstring const& familyName);
    static Windows::UI::Xaml::Media::FontFamily XamlAutoFontFamily();
};

struct WINRT_EBO GeneralTransform :
    Windows::UI::Xaml::Media::IGeneralTransform,
    impl::base<GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<GeneralTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransformOverrides>
{
    GeneralTransform(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Geometry :
    Windows::UI::Xaml::Media::IGeometry,
    impl::base<Geometry, Windows::UI::Xaml::DependencyObject>,
    impl::require<Geometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Geometry(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Media::Geometry Empty();
    static double StandardFlatteningTolerance();
    static Windows::UI::Xaml::DependencyProperty TransformProperty();
};

struct WINRT_EBO GeometryCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Geometry>
{
    GeometryCollection(std::nullptr_t) noexcept {}
    GeometryCollection();
};

struct WINRT_EBO GeometryGroup :
    Windows::UI::Xaml::Media::IGeometryGroup,
    impl::base<GeometryGroup, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
    impl::require<GeometryGroup, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeometry>
{
    GeometryGroup(std::nullptr_t) noexcept {}
    GeometryGroup();
    static Windows::UI::Xaml::DependencyProperty FillRuleProperty();
    static Windows::UI::Xaml::DependencyProperty ChildrenProperty();
};

struct WINRT_EBO GradientBrush :
    Windows::UI::Xaml::Media::IGradientBrush,
    impl::base<GradientBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<GradientBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush>
{
    GradientBrush(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty SpreadMethodProperty();
    static Windows::UI::Xaml::DependencyProperty MappingModeProperty();
    static Windows::UI::Xaml::DependencyProperty ColorInterpolationModeProperty();
    static Windows::UI::Xaml::DependencyProperty GradientStopsProperty();
};

struct WINRT_EBO GradientStop :
    Windows::UI::Xaml::Media::IGradientStop,
    impl::base<GradientStop, Windows::UI::Xaml::DependencyObject>,
    impl::require<GradientStop, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    GradientStop(std::nullptr_t) noexcept {}
    GradientStop();
    static Windows::UI::Xaml::DependencyProperty ColorProperty();
    static Windows::UI::Xaml::DependencyProperty OffsetProperty();
};

struct WINRT_EBO GradientStopCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::GradientStop>
{
    GradientStopCollection(std::nullptr_t) noexcept {}
    GradientStopCollection();
};

struct WINRT_EBO ImageBrush :
    Windows::UI::Xaml::Media::IImageBrush,
    impl::base<ImageBrush, Windows::UI::Xaml::Media::TileBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<ImageBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::ITileBrush>
{
    ImageBrush(std::nullptr_t) noexcept {}
    ImageBrush();
    static Windows::UI::Xaml::DependencyProperty ImageSourceProperty();
};

struct WINRT_EBO ImageSource :
    Windows::UI::Xaml::Media::IImageSource,
    impl::base<ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<ImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    ImageSource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LineGeometry :
    Windows::UI::Xaml::Media::ILineGeometry,
    impl::base<LineGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
    impl::require<LineGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeometry>
{
    LineGeometry(std::nullptr_t) noexcept {}
    LineGeometry();
    static Windows::UI::Xaml::DependencyProperty StartPointProperty();
    static Windows::UI::Xaml::DependencyProperty EndPointProperty();
};

struct WINRT_EBO LineSegment :
    Windows::UI::Xaml::Media::ILineSegment,
    impl::base<LineSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<LineSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IPathSegment>
{
    LineSegment(std::nullptr_t) noexcept {}
    LineSegment();
    static Windows::UI::Xaml::DependencyProperty PointProperty();
};

struct WINRT_EBO LinearGradientBrush :
    Windows::UI::Xaml::Media::ILinearGradientBrush,
    impl::base<LinearGradientBrush, Windows::UI::Xaml::Media::GradientBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<LinearGradientBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IGradientBrush>
{
    LinearGradientBrush(std::nullptr_t) noexcept {}
    LinearGradientBrush();
    LinearGradientBrush(Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle);
    static Windows::UI::Xaml::DependencyProperty StartPointProperty();
    static Windows::UI::Xaml::DependencyProperty EndPointProperty();
};

struct WINRT_EBO LoadedImageSourceLoadCompletedEventArgs :
    Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs
{
    LoadedImageSourceLoadCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LoadedImageSurface :
    Windows::UI::Xaml::Media::ILoadedImageSurface,
    impl::require<LoadedImageSurface, Windows::Foundation::IClosable, Windows::UI::Composition::ICompositionSurface>
{
    LoadedImageSurface(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Media::LoadedImageSurface StartLoadFromUri(Windows::Foundation::Uri const& uri, Windows::Foundation::Size const& desiredMaxSize);
    static Windows::UI::Xaml::Media::LoadedImageSurface StartLoadFromUri(Windows::Foundation::Uri const& uri);
    static Windows::UI::Xaml::Media::LoadedImageSurface StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Foundation::Size const& desiredMaxSize);
    static Windows::UI::Xaml::Media::LoadedImageSurface StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream);
};

struct WINRT_EBO Matrix3DProjection :
    Windows::UI::Xaml::Media::IMatrix3DProjection,
    impl::base<Matrix3DProjection, Windows::UI::Xaml::Media::Projection, Windows::UI::Xaml::DependencyObject>,
    impl::require<Matrix3DProjection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IProjection>
{
    Matrix3DProjection(std::nullptr_t) noexcept {}
    Matrix3DProjection();
    static Windows::UI::Xaml::DependencyProperty ProjectionMatrixProperty();
};

struct WINRT_EBO MatrixHelper :
    Windows::UI::Xaml::Media::IMatrixHelper
{
    MatrixHelper(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Media::Matrix Identity();
    static Windows::UI::Xaml::Media::Matrix FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY);
    static bool GetIsIdentity(Windows::UI::Xaml::Media::Matrix const& target);
    static Windows::Foundation::Point Transform(Windows::UI::Xaml::Media::Matrix const& target, Windows::Foundation::Point const& point);
};

struct WINRT_EBO MatrixTransform :
    Windows::UI::Xaml::Media::IMatrixTransform,
    impl::base<MatrixTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<MatrixTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::Media::ITransform>
{
    MatrixTransform(std::nullptr_t) noexcept {}
    MatrixTransform();
    static Windows::UI::Xaml::DependencyProperty MatrixProperty();
};

struct WINRT_EBO MediaTransportControlsThumbnailRequestedEventArgs :
    Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs
{
    MediaTransportControlsThumbnailRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PartialMediaFailureDetectedEventArgs :
    Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs,
    impl::require<PartialMediaFailureDetectedEventArgs, Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
{
    PartialMediaFailureDetectedEventArgs(std::nullptr_t) noexcept {}
    PartialMediaFailureDetectedEventArgs();
};

struct WINRT_EBO PathFigure :
    Windows::UI::Xaml::Media::IPathFigure,
    impl::base<PathFigure, Windows::UI::Xaml::DependencyObject>,
    impl::require<PathFigure, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PathFigure(std::nullptr_t) noexcept {}
    PathFigure();
    static Windows::UI::Xaml::DependencyProperty SegmentsProperty();
    static Windows::UI::Xaml::DependencyProperty StartPointProperty();
    static Windows::UI::Xaml::DependencyProperty IsClosedProperty();
    static Windows::UI::Xaml::DependencyProperty IsFilledProperty();
};

struct WINRT_EBO PathFigureCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathFigure>
{
    PathFigureCollection(std::nullptr_t) noexcept {}
    PathFigureCollection();
};

struct WINRT_EBO PathGeometry :
    Windows::UI::Xaml::Media::IPathGeometry,
    impl::base<PathGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
    impl::require<PathGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeometry>
{
    PathGeometry(std::nullptr_t) noexcept {}
    PathGeometry();
    static Windows::UI::Xaml::DependencyProperty FillRuleProperty();
    static Windows::UI::Xaml::DependencyProperty FiguresProperty();
};

struct WINRT_EBO PathSegment :
    Windows::UI::Xaml::Media::IPathSegment,
    impl::base<PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<PathSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    PathSegment(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PathSegmentCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::PathSegment>
{
    PathSegmentCollection(std::nullptr_t) noexcept {}
    PathSegmentCollection();
};

struct WINRT_EBO PlaneProjection :
    Windows::UI::Xaml::Media::IPlaneProjection,
    impl::base<PlaneProjection, Windows::UI::Xaml::Media::Projection, Windows::UI::Xaml::DependencyObject>,
    impl::require<PlaneProjection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IProjection>
{
    PlaneProjection(std::nullptr_t) noexcept {}
    PlaneProjection();
    static Windows::UI::Xaml::DependencyProperty LocalOffsetXProperty();
    static Windows::UI::Xaml::DependencyProperty LocalOffsetYProperty();
    static Windows::UI::Xaml::DependencyProperty LocalOffsetZProperty();
    static Windows::UI::Xaml::DependencyProperty RotationXProperty();
    static Windows::UI::Xaml::DependencyProperty RotationYProperty();
    static Windows::UI::Xaml::DependencyProperty RotationZProperty();
    static Windows::UI::Xaml::DependencyProperty CenterOfRotationXProperty();
    static Windows::UI::Xaml::DependencyProperty CenterOfRotationYProperty();
    static Windows::UI::Xaml::DependencyProperty CenterOfRotationZProperty();
    static Windows::UI::Xaml::DependencyProperty GlobalOffsetXProperty();
    static Windows::UI::Xaml::DependencyProperty GlobalOffsetYProperty();
    static Windows::UI::Xaml::DependencyProperty GlobalOffsetZProperty();
    static Windows::UI::Xaml::DependencyProperty ProjectionMatrixProperty();
};

struct WINRT_EBO PointCollection :
    Windows::Foundation::Collections::IVector<Windows::Foundation::Point>
{
    PointCollection(std::nullptr_t) noexcept {}
    PointCollection();
};

struct WINRT_EBO PolyBezierSegment :
    Windows::UI::Xaml::Media::IPolyBezierSegment,
    impl::base<PolyBezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<PolyBezierSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IPathSegment>
{
    PolyBezierSegment(std::nullptr_t) noexcept {}
    PolyBezierSegment();
    static Windows::UI::Xaml::DependencyProperty PointsProperty();
};

struct WINRT_EBO PolyLineSegment :
    Windows::UI::Xaml::Media::IPolyLineSegment,
    impl::base<PolyLineSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<PolyLineSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IPathSegment>
{
    PolyLineSegment(std::nullptr_t) noexcept {}
    PolyLineSegment();
    static Windows::UI::Xaml::DependencyProperty PointsProperty();
};

struct WINRT_EBO PolyQuadraticBezierSegment :
    Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment,
    impl::base<PolyQuadraticBezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<PolyQuadraticBezierSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IPathSegment>
{
    PolyQuadraticBezierSegment(std::nullptr_t) noexcept {}
    PolyQuadraticBezierSegment();
    static Windows::UI::Xaml::DependencyProperty PointsProperty();
};

struct WINRT_EBO Projection :
    Windows::UI::Xaml::Media::IProjection,
    impl::base<Projection, Windows::UI::Xaml::DependencyObject>,
    impl::require<Projection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Projection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO QuadraticBezierSegment :
    Windows::UI::Xaml::Media::IQuadraticBezierSegment,
    impl::base<QuadraticBezierSegment, Windows::UI::Xaml::Media::PathSegment, Windows::UI::Xaml::DependencyObject>,
    impl::require<QuadraticBezierSegment, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IPathSegment>
{
    QuadraticBezierSegment(std::nullptr_t) noexcept {}
    QuadraticBezierSegment();
    static Windows::UI::Xaml::DependencyProperty Point1Property();
    static Windows::UI::Xaml::DependencyProperty Point2Property();
};

struct WINRT_EBO RateChangedRoutedEventArgs :
    Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs,
    impl::base<RateChangedRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<RateChangedRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    RateChangedRoutedEventArgs(std::nullptr_t) noexcept {}
    RateChangedRoutedEventArgs();
};

struct WINRT_EBO RectangleGeometry :
    Windows::UI::Xaml::Media::IRectangleGeometry,
    impl::base<RectangleGeometry, Windows::UI::Xaml::Media::Geometry, Windows::UI::Xaml::DependencyObject>,
    impl::require<RectangleGeometry, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeometry>
{
    RectangleGeometry(std::nullptr_t) noexcept {}
    RectangleGeometry();
    static Windows::UI::Xaml::DependencyProperty RectProperty();
};

struct WINRT_EBO RenderingEventArgs :
    Windows::UI::Xaml::Media::IRenderingEventArgs
{
    RenderingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RotateTransform :
    Windows::UI::Xaml::Media::IRotateTransform,
    impl::base<RotateTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<RotateTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::Media::ITransform>
{
    RotateTransform(std::nullptr_t) noexcept {}
    RotateTransform();
    static Windows::UI::Xaml::DependencyProperty CenterXProperty();
    static Windows::UI::Xaml::DependencyProperty CenterYProperty();
    static Windows::UI::Xaml::DependencyProperty AngleProperty();
};

struct WINRT_EBO ScaleTransform :
    Windows::UI::Xaml::Media::IScaleTransform,
    impl::base<ScaleTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<ScaleTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::Media::ITransform>
{
    ScaleTransform(std::nullptr_t) noexcept {}
    ScaleTransform();
    static Windows::UI::Xaml::DependencyProperty CenterXProperty();
    static Windows::UI::Xaml::DependencyProperty CenterYProperty();
    static Windows::UI::Xaml::DependencyProperty ScaleXProperty();
    static Windows::UI::Xaml::DependencyProperty ScaleYProperty();
};

struct WINRT_EBO SkewTransform :
    Windows::UI::Xaml::Media::ISkewTransform,
    impl::base<SkewTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<SkewTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::Media::ITransform>
{
    SkewTransform(std::nullptr_t) noexcept {}
    SkewTransform();
    static Windows::UI::Xaml::DependencyProperty CenterXProperty();
    static Windows::UI::Xaml::DependencyProperty CenterYProperty();
    static Windows::UI::Xaml::DependencyProperty AngleXProperty();
    static Windows::UI::Xaml::DependencyProperty AngleYProperty();
};

struct WINRT_EBO SolidColorBrush :
    Windows::UI::Xaml::Media::ISolidColorBrush,
    impl::base<SolidColorBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<SolidColorBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush>
{
    SolidColorBrush(std::nullptr_t) noexcept {}
    SolidColorBrush();
    SolidColorBrush(Windows::UI::Color const& color);
    static Windows::UI::Xaml::DependencyProperty ColorProperty();
};

struct WINRT_EBO TileBrush :
    Windows::UI::Xaml::Media::ITileBrush,
    impl::base<TileBrush, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<TileBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush>
{
    TileBrush(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty AlignmentXProperty();
    static Windows::UI::Xaml::DependencyProperty AlignmentYProperty();
    static Windows::UI::Xaml::DependencyProperty StretchProperty();
};

struct WINRT_EBO TimelineMarker :
    Windows::UI::Xaml::Media::ITimelineMarker,
    impl::base<TimelineMarker, Windows::UI::Xaml::DependencyObject>,
    impl::require<TimelineMarker, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    TimelineMarker(std::nullptr_t) noexcept {}
    TimelineMarker();
    static Windows::UI::Xaml::DependencyProperty TimeProperty();
    static Windows::UI::Xaml::DependencyProperty TypeProperty();
    static Windows::UI::Xaml::DependencyProperty TextProperty();
};

struct WINRT_EBO TimelineMarkerCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::TimelineMarker>
{
    TimelineMarkerCollection(std::nullptr_t) noexcept {}
    TimelineMarkerCollection();
};

struct WINRT_EBO TimelineMarkerRoutedEventArgs :
    Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs,
    impl::base<TimelineMarkerRoutedEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<TimelineMarkerRoutedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    TimelineMarkerRoutedEventArgs(std::nullptr_t) noexcept {}
    TimelineMarkerRoutedEventArgs();
};

struct WINRT_EBO Transform :
    Windows::UI::Xaml::Media::ITransform,
    impl::base<Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<Transform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides>
{
    Transform(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TransformCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Transform>
{
    TransformCollection(std::nullptr_t) noexcept {}
    TransformCollection();
};

struct WINRT_EBO TransformGroup :
    Windows::UI::Xaml::Media::ITransformGroup,
    impl::base<TransformGroup, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<TransformGroup, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::Media::ITransform>
{
    TransformGroup(std::nullptr_t) noexcept {}
    TransformGroup();
    static Windows::UI::Xaml::DependencyProperty ChildrenProperty();
};

struct WINRT_EBO TranslateTransform :
    Windows::UI::Xaml::Media::ITranslateTransform,
    impl::base<TranslateTransform, Windows::UI::Xaml::Media::Transform, Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::DependencyObject>,
    impl::require<TranslateTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformOverrides, Windows::UI::Xaml::Media::ITransform>
{
    TranslateTransform(std::nullptr_t) noexcept {}
    TranslateTransform();
    static Windows::UI::Xaml::DependencyProperty XProperty();
    static Windows::UI::Xaml::DependencyProperty YProperty();
};

struct WINRT_EBO VisualTreeHelper :
    Windows::UI::Xaml::Media::IVisualTreeHelper
{
    VisualTreeHelper(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree);
    static Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree);
    static Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements);
    static Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements);
    static Windows::UI::Xaml::DependencyObject GetChild(Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex);
    static int32_t GetChildrenCount(Windows::UI::Xaml::DependencyObject const& reference);
    static Windows::UI::Xaml::DependencyObject GetParent(Windows::UI::Xaml::DependencyObject const& reference);
    static void DisconnectChildrenRecursive(Windows::UI::Xaml::UIElement const& element);
    static Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Primitives::Popup> GetOpenPopups(Windows::UI::Xaml::Window const& window);
};

struct WINRT_EBO XamlCompositionBrushBase :
    Windows::UI::Xaml::Media::IXamlCompositionBrushBase,
    impl::base<XamlCompositionBrushBase, Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::DependencyObject>,
    impl::require<XamlCompositionBrushBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
{
    XamlCompositionBrushBase(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty FallbackColorProperty();
};

struct WINRT_EBO XamlLight :
    Windows::UI::Xaml::Media::IXamlLight,
    impl::base<XamlLight, Windows::UI::Xaml::DependencyObject>,
    impl::require<XamlLight, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IXamlLightOverrides, Windows::UI::Xaml::Media::IXamlLightProtected>
{
    XamlLight(std::nullptr_t) noexcept {}
    XamlLight();
    static void AddTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element);
    static void RemoveTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element);
    static void AddTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush);
    static void RemoveTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush);
};

template <typename D>
class IGeneralTransformOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IGeneralTransformOverrides = winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides;

    Windows::UI::Xaml::Media::GeneralTransform InverseCore() const;
    bool TryTransformCore(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
    Windows::Foundation::Rect TransformBoundsCore(Windows::Foundation::Rect const& rect) const;
};

template <typename D>
class IXamlCompositionBrushBaseOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IXamlCompositionBrushBaseOverrides = winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides;

    void OnConnected() const;
    void OnDisconnected() const;
};

template <typename D>
class IXamlLightOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IXamlLightOverrides = winrt::Windows::UI::Xaml::Media::IXamlLightOverrides;

    hstring GetId() const;
    void OnConnected(Windows::UI::Xaml::UIElement const& newElement) const;
    void OnDisconnected(Windows::UI::Xaml::UIElement const& oldElement) const;
};

}
