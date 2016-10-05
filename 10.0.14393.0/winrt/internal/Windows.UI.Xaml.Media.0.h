// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Media {

struct Matrix;

}

namespace Windows::UI::Xaml::Media {

using Matrix = ABI::Windows::UI::Xaml::Media::Matrix;

}

namespace ABI::Windows::UI::Xaml::Media {

struct IArcSegment;
struct IArcSegmentStatics;
struct IBezierSegment;
struct IBezierSegmentStatics;
struct IBitmapCache;
struct IBrush;
struct IBrushFactory;
struct IBrushStatics;
struct ICacheMode;
struct ICacheModeFactory;
struct ICompositeTransform;
struct ICompositeTransformStatics;
struct ICompositionTarget;
struct ICompositionTargetStatics;
struct IEllipseGeometry;
struct IEllipseGeometryStatics;
struct IFontFamily;
struct IFontFamilyFactory;
struct IFontFamilyStatics2;
struct IGeneralTransform;
struct IGeneralTransformFactory;
struct IGeneralTransformOverrides;
struct IGeometry;
struct IGeometryFactory;
struct IGeometryGroup;
struct IGeometryGroupStatics;
struct IGeometryStatics;
struct IGradientBrush;
struct IGradientBrushFactory;
struct IGradientBrushStatics;
struct IGradientStop;
struct IGradientStopStatics;
struct IImageBrush;
struct IImageBrushStatics;
struct IImageSource;
struct IImageSourceFactory;
struct ILineGeometry;
struct ILineGeometryStatics;
struct ILineSegment;
struct ILineSegmentStatics;
struct ILinearGradientBrush;
struct ILinearGradientBrushFactory;
struct ILinearGradientBrushStatics;
struct IMatrix3DProjection;
struct IMatrix3DProjectionStatics;
struct IMatrixHelper;
struct IMatrixHelperStatics;
struct IMatrixTransform;
struct IMatrixTransformStatics;
struct IMediaTransportControlsThumbnailRequestedEventArgs;
struct IPartialMediaFailureDetectedEventArgs;
struct IPartialMediaFailureDetectedEventArgs2;
struct IPathFigure;
struct IPathFigureStatics;
struct IPathGeometry;
struct IPathGeometryStatics;
struct IPathSegment;
struct IPathSegmentFactory;
struct IPlaneProjection;
struct IPlaneProjectionStatics;
struct IPolyBezierSegment;
struct IPolyBezierSegmentStatics;
struct IPolyLineSegment;
struct IPolyLineSegmentStatics;
struct IPolyQuadraticBezierSegment;
struct IPolyQuadraticBezierSegmentStatics;
struct IProjection;
struct IProjectionFactory;
struct IQuadraticBezierSegment;
struct IQuadraticBezierSegmentStatics;
struct IRateChangedRoutedEventArgs;
struct IRectangleGeometry;
struct IRectangleGeometryStatics;
struct IRenderingEventArgs;
struct IRotateTransform;
struct IRotateTransformStatics;
struct IScaleTransform;
struct IScaleTransformStatics;
struct ISkewTransform;
struct ISkewTransformStatics;
struct ISolidColorBrush;
struct ISolidColorBrushFactory;
struct ISolidColorBrushStatics;
struct ITileBrush;
struct ITileBrushFactory;
struct ITileBrushStatics;
struct ITimelineMarker;
struct ITimelineMarkerRoutedEventArgs;
struct ITimelineMarkerStatics;
struct ITransform;
struct ITransformFactory;
struct ITransformGroup;
struct ITransformGroupStatics;
struct ITranslateTransform;
struct ITranslateTransformStatics;
struct IVisualTreeHelper;
struct IVisualTreeHelperStatics;
struct IVisualTreeHelperStatics2;
struct RateChangedRoutedEventHandler;
struct TimelineMarkerRoutedEventHandler;
struct ArcSegment;
struct BezierSegment;
struct BitmapCache;
struct Brush;
struct BrushCollection;
struct CacheMode;
struct CompositeTransform;
struct CompositionTarget;
struct DoubleCollection;
struct EllipseGeometry;
struct FontFamily;
struct GeneralTransform;
struct Geometry;
struct GeometryCollection;
struct GeometryGroup;
struct GradientBrush;
struct GradientStop;
struct GradientStopCollection;
struct ImageBrush;
struct ImageSource;
struct LineGeometry;
struct LineSegment;
struct LinearGradientBrush;
struct Matrix3DProjection;
struct MatrixHelper;
struct MatrixTransform;
struct MediaTransportControlsThumbnailRequestedEventArgs;
struct PartialMediaFailureDetectedEventArgs;
struct PathFigure;
struct PathFigureCollection;
struct PathGeometry;
struct PathSegment;
struct PathSegmentCollection;
struct PlaneProjection;
struct PointCollection;
struct PolyBezierSegment;
struct PolyLineSegment;
struct PolyQuadraticBezierSegment;
struct Projection;
struct QuadraticBezierSegment;
struct RateChangedRoutedEventArgs;
struct RectangleGeometry;
struct RenderingEventArgs;
struct RotateTransform;
struct ScaleTransform;
struct SkewTransform;
struct SolidColorBrush;
struct TileBrush;
struct TimelineMarker;
struct TimelineMarkerCollection;
struct TimelineMarkerRoutedEventArgs;
struct Transform;
struct TransformCollection;
struct TransformGroup;
struct TranslateTransform;
struct VisualTreeHelper;

}

namespace Windows::UI::Xaml::Media {

struct RateChangedRoutedEventHandler;
struct TimelineMarkerRoutedEventHandler;
struct IArcSegment;
struct IArcSegmentStatics;
struct IBezierSegment;
struct IBezierSegmentStatics;
struct IBitmapCache;
struct IBrush;
struct IBrushFactory;
struct IBrushStatics;
struct ICacheMode;
struct ICacheModeFactory;
struct ICompositeTransform;
struct ICompositeTransformStatics;
struct ICompositionTarget;
struct ICompositionTargetStatics;
struct IEllipseGeometry;
struct IEllipseGeometryStatics;
struct IFontFamily;
struct IFontFamilyFactory;
struct IFontFamilyStatics2;
struct IGeneralTransform;
struct IGeneralTransformFactory;
struct IGeneralTransformOverrides;
struct IGeometry;
struct IGeometryFactory;
struct IGeometryGroup;
struct IGeometryGroupStatics;
struct IGeometryStatics;
struct IGradientBrush;
struct IGradientBrushFactory;
struct IGradientBrushStatics;
struct IGradientStop;
struct IGradientStopStatics;
struct IImageBrush;
struct IImageBrushStatics;
struct IImageSource;
struct IImageSourceFactory;
struct ILineGeometry;
struct ILineGeometryStatics;
struct ILineSegment;
struct ILineSegmentStatics;
struct ILinearGradientBrush;
struct ILinearGradientBrushFactory;
struct ILinearGradientBrushStatics;
struct IMatrix3DProjection;
struct IMatrix3DProjectionStatics;
struct IMatrixHelper;
struct IMatrixHelperStatics;
struct IMatrixTransform;
struct IMatrixTransformStatics;
struct IMediaTransportControlsThumbnailRequestedEventArgs;
struct IPartialMediaFailureDetectedEventArgs;
struct IPartialMediaFailureDetectedEventArgs2;
struct IPathFigure;
struct IPathFigureStatics;
struct IPathGeometry;
struct IPathGeometryStatics;
struct IPathSegment;
struct IPathSegmentFactory;
struct IPlaneProjection;
struct IPlaneProjectionStatics;
struct IPolyBezierSegment;
struct IPolyBezierSegmentStatics;
struct IPolyLineSegment;
struct IPolyLineSegmentStatics;
struct IPolyQuadraticBezierSegment;
struct IPolyQuadraticBezierSegmentStatics;
struct IProjection;
struct IProjectionFactory;
struct IQuadraticBezierSegment;
struct IQuadraticBezierSegmentStatics;
struct IRateChangedRoutedEventArgs;
struct IRectangleGeometry;
struct IRectangleGeometryStatics;
struct IRenderingEventArgs;
struct IRotateTransform;
struct IRotateTransformStatics;
struct IScaleTransform;
struct IScaleTransformStatics;
struct ISkewTransform;
struct ISkewTransformStatics;
struct ISolidColorBrush;
struct ISolidColorBrushFactory;
struct ISolidColorBrushStatics;
struct ITileBrush;
struct ITileBrushFactory;
struct ITileBrushStatics;
struct ITimelineMarker;
struct ITimelineMarkerRoutedEventArgs;
struct ITimelineMarkerStatics;
struct ITransform;
struct ITransformFactory;
struct ITransformGroup;
struct ITransformGroupStatics;
struct ITranslateTransform;
struct ITranslateTransformStatics;
struct IVisualTreeHelper;
struct IVisualTreeHelperStatics;
struct IVisualTreeHelperStatics2;
struct ArcSegment;
struct BezierSegment;
struct BitmapCache;
struct Brush;
struct BrushCollection;
struct CacheMode;
struct CompositeTransform;
struct CompositionTarget;
struct DoubleCollection;
struct EllipseGeometry;
struct FontFamily;
struct GeneralTransform;
struct Geometry;
struct GeometryCollection;
struct GeometryGroup;
struct GradientBrush;
struct GradientStop;
struct GradientStopCollection;
struct ImageBrush;
struct ImageSource;
struct LineGeometry;
struct LineSegment;
struct LinearGradientBrush;
struct Matrix3DProjection;
struct MatrixHelper;
struct MatrixTransform;
struct MediaTransportControlsThumbnailRequestedEventArgs;
struct PartialMediaFailureDetectedEventArgs;
struct PathFigure;
struct PathFigureCollection;
struct PathGeometry;
struct PathSegment;
struct PathSegmentCollection;
struct PlaneProjection;
struct PointCollection;
struct PolyBezierSegment;
struct PolyLineSegment;
struct PolyQuadraticBezierSegment;
struct Projection;
struct QuadraticBezierSegment;
struct RateChangedRoutedEventArgs;
struct RectangleGeometry;
struct RenderingEventArgs;
struct RotateTransform;
struct ScaleTransform;
struct SkewTransform;
struct SolidColorBrush;
struct TileBrush;
struct TimelineMarker;
struct TimelineMarkerCollection;
struct TimelineMarkerRoutedEventArgs;
struct Transform;
struct TransformCollection;
struct TransformGroup;
struct TranslateTransform;
struct VisualTreeHelper;

}

namespace Windows::UI::Xaml::Media {

enum class AlignmentX
{
    Left = 0,
    Center = 1,
    Right = 2,
};

enum class AlignmentY
{
    Top = 0,
    Center = 1,
    Bottom = 2,
};

enum class AudioCategory
{
    Other = 0,
    ForegroundOnlyMedia = 1,
    BackgroundCapableMedia = 2,
    Communications = 3,
    Alerts = 4,
    SoundEffects = 5,
    GameEffects = 6,
    GameMedia = 7,
    GameChat = 8,
    Speech = 9,
    Movie = 10,
    Media = 11,
};

enum class AudioDeviceType
{
    Console = 0,
    Multimedia = 1,
    Communications = 2,
};

enum class BrushMappingMode
{
    Absolute = 0,
    RelativeToBoundingBox = 1,
};

enum class ColorInterpolationMode
{
    ScRgbLinearInterpolation = 0,
    SRgbLinearInterpolation = 1,
};

enum class ElementCompositeMode
{
    Inherit = 0,
    SourceOver = 1,
    MinBlend = 2,
};

enum class FastPlayFallbackBehaviour
{
    Skip = 0,
    Hide = 1,
    Disable = 2,
};

enum class FillRule
{
    EvenOdd = 0,
    Nonzero = 1,
};

enum class GradientSpreadMethod
{
    Pad = 0,
    Reflect = 1,
    Repeat = 2,
};

enum class MediaCanPlayResponse
{
    NotSupported = 0,
    Maybe = 1,
    Probably = 2,
};

enum class MediaElementState
{
    Closed = 0,
    Opening = 1,
    Buffering = 2,
    Playing = 3,
    Paused = 4,
    Stopped = 5,
};

enum class PenLineCap
{
    Flat = 0,
    Square = 1,
    Round = 2,
    Triangle = 3,
};

enum class PenLineJoin
{
    Miter = 0,
    Bevel = 1,
    Round = 2,
};

enum class Stereo3DVideoPackingMode
{
    None = 0,
    SideBySide = 1,
    TopBottom = 2,
};

enum class Stereo3DVideoRenderMode
{
    Mono = 0,
    Stereo = 1,
};

enum class Stretch
{
    None = 0,
    Fill = 1,
    Uniform = 2,
    UniformToFill = 3,
};

enum class StyleSimulations
{
    None = 0,
    BoldSimulation = 1,
    ItalicSimulation = 2,
    BoldItalicSimulation = 3,
};

enum class SweepDirection
{
    Counterclockwise = 0,
    Clockwise = 1,
};

}

}
