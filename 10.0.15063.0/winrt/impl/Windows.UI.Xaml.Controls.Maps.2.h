// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Services.Maps.1.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.1.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Maps.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Maps {

struct MapZoomLevelRange
{
    double Min;
    double Max;
};

struct WINRT_EBO CustomMapTileDataSource :
    Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource,
    impl::base<CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    CustomMapTileDataSource(std::nullptr_t) noexcept {}
    CustomMapTileDataSource();
};

struct WINRT_EBO HttpMapTileDataSource :
    Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource,
    impl::base<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    HttpMapTileDataSource(std::nullptr_t) noexcept {}
    HttpMapTileDataSource();
    HttpMapTileDataSource(param::hstring const& uriFormatString);
};

struct WINRT_EBO LocalMapTileDataSource :
    Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource,
    impl::base<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::IMapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    LocalMapTileDataSource(std::nullptr_t) noexcept {}
    LocalMapTileDataSource();
    LocalMapTileDataSource(param::hstring const& uriFormatString);
};

struct WINRT_EBO MapActualCameraChangedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs,
    impl::require<MapActualCameraChangedEventArgs, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
{
    MapActualCameraChangedEventArgs(std::nullptr_t) noexcept {}
    MapActualCameraChangedEventArgs();
};

struct WINRT_EBO MapActualCameraChangingEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs,
    impl::require<MapActualCameraChangingEventArgs, Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
{
    MapActualCameraChangingEventArgs(std::nullptr_t) noexcept {}
    MapActualCameraChangingEventArgs();
};

struct WINRT_EBO MapBillboard :
    Windows::UI::Xaml::Controls::Maps::IMapBillboard,
    impl::base<MapBillboard, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapBillboard, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapBillboard(std::nullptr_t) noexcept {}
    MapBillboard(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera);
    static Windows::UI::Xaml::DependencyProperty LocationProperty();
    static Windows::UI::Xaml::DependencyProperty NormalizedAnchorPointProperty();
    static Windows::UI::Xaml::DependencyProperty CollisionBehaviorDesiredProperty();
};

struct WINRT_EBO MapCamera :
    Windows::UI::Xaml::Controls::Maps::IMapCamera,
    impl::base<MapCamera, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapCamera, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapCamera(std::nullptr_t) noexcept {}
    MapCamera(Windows::Devices::Geolocation::Geopoint const& location);
    MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees);
    MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees);
    MapCamera(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees);
};

struct WINRT_EBO MapContextRequestedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs
{
    MapContextRequestedEventArgs(std::nullptr_t) noexcept {}
    MapContextRequestedEventArgs();
};

struct WINRT_EBO MapControl :
    Windows::UI::Xaml::Controls::Maps::IMapControl,
    impl::base<MapControl, Windows::UI::Xaml::Controls::Control, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapControl, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Maps::IMapControl2, Windows::UI::Xaml::Controls::Maps::IMapControl3, Windows::UI::Xaml::Controls::Maps::IMapControl4, Windows::UI::Xaml::Controls::Maps::IMapControl5, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    MapControl(std::nullptr_t) noexcept {}
    MapControl();
    using impl::consume_t<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControl5>::FindMapElementsAtOffset;
    using Windows::UI::Xaml::Controls::Maps::IMapControl::FindMapElementsAtOffset;
    using impl::consume_t<MapControl, Windows::UI::Xaml::Controls::Maps::IMapControl5>::GetLocationFromOffset;
    using Windows::UI::Xaml::Controls::Maps::IMapControl::GetLocationFromOffset;
    using impl::consume_t<MapControl, Windows::UI::Xaml::IFrameworkElement>::Style;
    using Windows::UI::Xaml::Controls::Maps::IMapControl::Style;
    static Windows::UI::Xaml::DependencyProperty CenterProperty();
    static Windows::UI::Xaml::DependencyProperty ChildrenProperty();
    static Windows::UI::Xaml::DependencyProperty ColorSchemeProperty();
    static Windows::UI::Xaml::DependencyProperty DesiredPitchProperty();
    static Windows::UI::Xaml::DependencyProperty HeadingProperty();
    static Windows::UI::Xaml::DependencyProperty LandmarksVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty LoadingStatusProperty();
    static Windows::UI::Xaml::DependencyProperty MapServiceTokenProperty();
    static Windows::UI::Xaml::DependencyProperty PedestrianFeaturesVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty PitchProperty();
    static Windows::UI::Xaml::DependencyProperty StyleProperty();
    static Windows::UI::Xaml::DependencyProperty TrafficFlowVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty TransformOriginProperty();
    static Windows::UI::Xaml::DependencyProperty WatermarkModeProperty();
    static Windows::UI::Xaml::DependencyProperty ZoomLevelProperty();
    static Windows::UI::Xaml::DependencyProperty MapElementsProperty();
    static Windows::UI::Xaml::DependencyProperty RoutesProperty();
    static Windows::UI::Xaml::DependencyProperty TileSourcesProperty();
    static Windows::UI::Xaml::DependencyProperty LocationProperty();
    static Windows::Devices::Geolocation::Geopoint GetLocation(Windows::UI::Xaml::DependencyObject const& element);
    static void SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value);
    static Windows::UI::Xaml::DependencyProperty NormalizedAnchorPointProperty();
    static Windows::Foundation::Point GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element);
    static void SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value);
    static Windows::UI::Xaml::DependencyProperty BusinessLandmarksVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty TransitFeaturesVisibleProperty();
    static Windows::UI::Xaml::DependencyProperty PanInteractionModeProperty();
    static Windows::UI::Xaml::DependencyProperty RotateInteractionModeProperty();
    static Windows::UI::Xaml::DependencyProperty TiltInteractionModeProperty();
    static Windows::UI::Xaml::DependencyProperty ZoomInteractionModeProperty();
    static Windows::UI::Xaml::DependencyProperty Is3DSupportedProperty();
    static Windows::UI::Xaml::DependencyProperty IsStreetsideSupportedProperty();
    static Windows::UI::Xaml::DependencyProperty SceneProperty();
    static Windows::UI::Xaml::DependencyProperty BusinessLandmarksEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty TransitFeaturesEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty MapProjectionProperty();
    static Windows::UI::Xaml::DependencyProperty StyleSheetProperty();
    static Windows::UI::Xaml::DependencyProperty ViewPaddingProperty();
};

struct WINRT_EBO MapControlBusinessLandmarkClickEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs
{
    MapControlBusinessLandmarkClickEventArgs(std::nullptr_t) noexcept {}
    MapControlBusinessLandmarkClickEventArgs();
};

struct WINRT_EBO MapControlBusinessLandmarkPointerEnteredEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs
{
    MapControlBusinessLandmarkPointerEnteredEventArgs(std::nullptr_t) noexcept {}
    MapControlBusinessLandmarkPointerEnteredEventArgs();
};

struct WINRT_EBO MapControlBusinessLandmarkPointerExitedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs
{
    MapControlBusinessLandmarkPointerExitedEventArgs(std::nullptr_t) noexcept {}
    MapControlBusinessLandmarkPointerExitedEventArgs();
};

struct WINRT_EBO MapControlBusinessLandmarkRightTappedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs
{
    MapControlBusinessLandmarkRightTappedEventArgs(std::nullptr_t) noexcept {}
    MapControlBusinessLandmarkRightTappedEventArgs();
};

struct WINRT_EBO MapControlDataHelper :
    Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper,
    impl::base<MapControlDataHelper, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapControlDataHelper, Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapControlDataHelper(std::nullptr_t) noexcept {}
    MapControlDataHelper(Windows::UI::Xaml::Controls::Maps::MapControl const& map);
};

struct WINRT_EBO MapControlTransitFeatureClickEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs
{
    MapControlTransitFeatureClickEventArgs(std::nullptr_t) noexcept {}
    MapControlTransitFeatureClickEventArgs();
};

struct WINRT_EBO MapControlTransitFeaturePointerEnteredEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs
{
    MapControlTransitFeaturePointerEnteredEventArgs(std::nullptr_t) noexcept {}
    MapControlTransitFeaturePointerEnteredEventArgs();
};

struct WINRT_EBO MapControlTransitFeaturePointerExitedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs
{
    MapControlTransitFeaturePointerExitedEventArgs(std::nullptr_t) noexcept {}
    MapControlTransitFeaturePointerExitedEventArgs();
};

struct WINRT_EBO MapControlTransitFeatureRightTappedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs
{
    MapControlTransitFeatureRightTappedEventArgs(std::nullptr_t) noexcept {}
    MapControlTransitFeatureRightTappedEventArgs();
};

struct WINRT_EBO MapCustomExperience :
    Windows::UI::Xaml::Controls::Maps::IMapCustomExperience,
    impl::base<MapCustomExperience, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapCustomExperience, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapCustomExperience(std::nullptr_t) noexcept {}
    MapCustomExperience();
};

struct WINRT_EBO MapCustomExperienceChangedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs
{
    MapCustomExperienceChangedEventArgs(std::nullptr_t) noexcept {}
    MapCustomExperienceChangedEventArgs();
};

struct WINRT_EBO MapElement :
    Windows::UI::Xaml::Controls::Maps::IMapElement,
    impl::base<MapElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapElement(std::nullptr_t) noexcept {}
    MapElement();
    static Windows::UI::Xaml::DependencyProperty ZIndexProperty();
    static Windows::UI::Xaml::DependencyProperty VisibleProperty();
    static Windows::UI::Xaml::DependencyProperty MapTabIndexProperty();
};

struct WINRT_EBO MapElementClickEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs
{
    MapElementClickEventArgs(std::nullptr_t) noexcept {}
    MapElementClickEventArgs();
};

struct WINRT_EBO MapElementPointerEnteredEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs
{
    MapElementPointerEnteredEventArgs(std::nullptr_t) noexcept {}
    MapElementPointerEnteredEventArgs();
};

struct WINRT_EBO MapElementPointerExitedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs
{
    MapElementPointerExitedEventArgs(std::nullptr_t) noexcept {}
    MapElementPointerExitedEventArgs();
};

struct WINRT_EBO MapIcon :
    Windows::UI::Xaml::Controls::Maps::IMapIcon,
    impl::base<MapIcon, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapIcon, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapIcon2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapIcon(std::nullptr_t) noexcept {}
    MapIcon();
    static Windows::UI::Xaml::DependencyProperty LocationProperty();
    static Windows::UI::Xaml::DependencyProperty TitleProperty();
    static Windows::UI::Xaml::DependencyProperty NormalizedAnchorPointProperty();
    static Windows::UI::Xaml::DependencyProperty CollisionBehaviorDesiredProperty();
};

struct WINRT_EBO MapInputEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs,
    impl::base<MapInputEventArgs, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapInputEventArgs, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapInputEventArgs(std::nullptr_t) noexcept {}
    MapInputEventArgs();
};

struct WINRT_EBO MapItemsControl :
    Windows::UI::Xaml::Controls::Maps::IMapItemsControl,
    impl::base<MapItemsControl, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapItemsControl, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapItemsControl(std::nullptr_t) noexcept {}
    MapItemsControl();
    static Windows::UI::Xaml::DependencyProperty ItemsSourceProperty();
    static Windows::UI::Xaml::DependencyProperty ItemsProperty();
    static Windows::UI::Xaml::DependencyProperty ItemTemplateProperty();
};

struct WINRT_EBO MapPolygon :
    Windows::UI::Xaml::Controls::Maps::IMapPolygon,
    impl::base<MapPolygon, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapPolygon, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::Controls::Maps::IMapPolygon2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapPolygon(std::nullptr_t) noexcept {}
    MapPolygon();
    static Windows::UI::Xaml::DependencyProperty PathProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeThicknessProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeDashedProperty();
};

struct WINRT_EBO MapPolyline :
    Windows::UI::Xaml::Controls::Maps::IMapPolyline,
    impl::base<MapPolyline, Windows::UI::Xaml::Controls::Maps::MapElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapPolyline, Windows::UI::Xaml::Controls::Maps::IMapElement, Windows::UI::Xaml::Controls::Maps::IMapElement2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapPolyline(std::nullptr_t) noexcept {}
    MapPolyline();
    static Windows::UI::Xaml::DependencyProperty PathProperty();
    static Windows::UI::Xaml::DependencyProperty StrokeDashedProperty();
};

struct WINRT_EBO MapRightTappedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs
{
    MapRightTappedEventArgs(std::nullptr_t) noexcept {}
    MapRightTappedEventArgs();
};

struct WINRT_EBO MapRouteView :
    Windows::UI::Xaml::Controls::Maps::IMapRouteView,
    impl::base<MapRouteView, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapRouteView, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapRouteView(std::nullptr_t) noexcept {}
    MapRouteView(Windows::Services::Maps::MapRoute const& route);
};

struct WINRT_EBO MapScene :
    Windows::UI::Xaml::Controls::Maps::IMapScene,
    impl::base<MapScene, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapScene, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapScene(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations);
    static Windows::UI::Xaml::Controls::Maps::MapScene CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees);
};

struct WINRT_EBO MapStyleSheet :
    Windows::UI::Xaml::Controls::Maps::IMapStyleSheet,
    impl::base<MapStyleSheet, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapStyleSheet, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapStyleSheet(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet Aerial();
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet AerialWithOverlay();
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadLight();
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadDark();
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadHighContrastLight();
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet RoadHighContrastDark();
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets);
    static Windows::UI::Xaml::Controls::Maps::MapStyleSheet ParseFromJson(param::hstring const& styleAsJson);
    static bool TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet);
};

struct WINRT_EBO MapTargetCameraChangedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs,
    impl::require<MapTargetCameraChangedEventArgs, Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
{
    MapTargetCameraChangedEventArgs(std::nullptr_t) noexcept {}
    MapTargetCameraChangedEventArgs();
};

struct WINRT_EBO MapTileBitmapRequest :
    Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest
{
    MapTileBitmapRequest(std::nullptr_t) noexcept {}
    MapTileBitmapRequest();
};

struct WINRT_EBO MapTileBitmapRequestDeferral :
    Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral
{
    MapTileBitmapRequestDeferral(std::nullptr_t) noexcept {}
    MapTileBitmapRequestDeferral();
};

struct WINRT_EBO MapTileBitmapRequestedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs
{
    MapTileBitmapRequestedEventArgs(std::nullptr_t) noexcept {}
    MapTileBitmapRequestedEventArgs();
};

struct WINRT_EBO MapTileDataSource :
    Windows::UI::Xaml::Controls::Maps::IMapTileDataSource,
    impl::base<MapTileDataSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapTileDataSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapTileDataSource(std::nullptr_t) noexcept {}
    MapTileDataSource();
};

struct WINRT_EBO MapTileSource :
    Windows::UI::Xaml::Controls::Maps::IMapTileSource,
    impl::base<MapTileSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<MapTileSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    MapTileSource(std::nullptr_t) noexcept {}
    MapTileSource();
    MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource);
    MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange);
    MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds);
    MapTileSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels);
    static Windows::UI::Xaml::DependencyProperty DataSourceProperty();
    static Windows::UI::Xaml::DependencyProperty LayerProperty();
    static Windows::UI::Xaml::DependencyProperty ZoomLevelRangeProperty();
    static Windows::UI::Xaml::DependencyProperty BoundsProperty();
    static Windows::UI::Xaml::DependencyProperty AllowOverstretchProperty();
    static Windows::UI::Xaml::DependencyProperty IsFadingEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsTransparencyEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty IsRetryEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty ZIndexProperty();
    static Windows::UI::Xaml::DependencyProperty TilePixelSizeProperty();
    static Windows::UI::Xaml::DependencyProperty VisibleProperty();
};

struct WINRT_EBO MapTileUriRequest :
    Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest
{
    MapTileUriRequest(std::nullptr_t) noexcept {}
    MapTileUriRequest();
};

struct WINRT_EBO MapTileUriRequestDeferral :
    Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral
{
    MapTileUriRequestDeferral(std::nullptr_t) noexcept {}
    MapTileUriRequestDeferral();
};

struct WINRT_EBO MapTileUriRequestedEventArgs :
    Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs
{
    MapTileUriRequestedEventArgs(std::nullptr_t) noexcept {}
    MapTileUriRequestedEventArgs();
};

struct WINRT_EBO StreetsideExperience :
    Windows::UI::Xaml::Controls::Maps::IStreetsideExperience,
    impl::base<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::MapCustomExperience, Windows::UI::Xaml::DependencyObject>,
    impl::require<StreetsideExperience, Windows::UI::Xaml::Controls::Maps::IMapCustomExperience, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    StreetsideExperience(std::nullptr_t) noexcept {}
    StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama);
    StreetsideExperience(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees);
};

struct WINRT_EBO StreetsidePanorama :
    Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama,
    impl::base<StreetsidePanorama, Windows::UI::Xaml::DependencyObject>,
    impl::require<StreetsidePanorama, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    StreetsidePanorama(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location);
    static Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters);
};

}
