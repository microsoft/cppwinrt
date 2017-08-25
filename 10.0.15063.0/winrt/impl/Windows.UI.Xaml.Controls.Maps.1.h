// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Services.Maps.0.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Xaml.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.0.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Maps.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Maps {

struct WINRT_EBO ICustomMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomMapTileDataSource>
{
    ICustomMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomMapTileDataSourceFactory>
{
    ICustomMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMapTileDataSource>
{
    IHttpMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMapTileDataSourceFactory>
{
    IHttpMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalMapTileDataSource>
{
    ILocalMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalMapTileDataSourceFactory>
{
    ILocalMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapActualCameraChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangedEventArgs>
{
    IMapActualCameraChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapActualCameraChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangedEventArgs2>
{
    IMapActualCameraChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapActualCameraChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangingEventArgs>
{
    IMapActualCameraChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapActualCameraChangingEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapActualCameraChangingEventArgs2>
{
    IMapActualCameraChangingEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapBillboard :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapBillboard>
{
    IMapBillboard(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapBillboardFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapBillboardFactory>
{
    IMapBillboardFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapBillboardStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapBillboardStatics>
{
    IMapBillboardStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapCamera :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCamera>
{
    IMapCamera(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapCameraFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCameraFactory>
{
    IMapCameraFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapContextRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapContextRequestedEventArgs>
{
    IMapContextRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl>
{
    IMapControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl2>
{
    IMapControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControl3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl3>
{
    IMapControl3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControl4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl4>
{
    IMapControl4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControl5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControl5>
{
    IMapControl5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlBusinessLandmarkClickEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkClickEventArgs>
{
    IMapControlBusinessLandmarkClickEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlBusinessLandmarkPointerEnteredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkPointerEnteredEventArgs>
{
    IMapControlBusinessLandmarkPointerEnteredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlBusinessLandmarkPointerExitedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkPointerExitedEventArgs>
{
    IMapControlBusinessLandmarkPointerExitedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlBusinessLandmarkRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlBusinessLandmarkRightTappedEventArgs>
{
    IMapControlBusinessLandmarkRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlDataHelper :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlDataHelper>
{
    IMapControlDataHelper(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlDataHelper2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlDataHelper2>
{
    IMapControlDataHelper2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlDataHelperFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlDataHelperFactory>
{
    IMapControlDataHelperFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics>
{
    IMapControlStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics2>
{
    IMapControlStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics4>
{
    IMapControlStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlStatics5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlStatics5>
{
    IMapControlStatics5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlTransitFeatureClickEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeatureClickEventArgs>
{
    IMapControlTransitFeatureClickEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlTransitFeaturePointerEnteredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeaturePointerEnteredEventArgs>
{
    IMapControlTransitFeaturePointerEnteredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlTransitFeaturePointerExitedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeaturePointerExitedEventArgs>
{
    IMapControlTransitFeaturePointerExitedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapControlTransitFeatureRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapControlTransitFeatureRightTappedEventArgs>
{
    IMapControlTransitFeatureRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapCustomExperience :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCustomExperience>
{
    IMapCustomExperience(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapCustomExperienceChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCustomExperienceChangedEventArgs>
{
    IMapCustomExperienceChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapCustomExperienceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapCustomExperienceFactory>
{
    IMapCustomExperienceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElement>
{
    IMapElement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElement2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElement2>
{
    IMapElement2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElementClickEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementClickEventArgs>
{
    IMapElementClickEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElementFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementFactory>
{
    IMapElementFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElementPointerEnteredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementPointerEnteredEventArgs>
{
    IMapElementPointerEnteredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElementPointerExitedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementPointerExitedEventArgs>
{
    IMapElementPointerExitedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElementStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementStatics>
{
    IMapElementStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapElementStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapElementStatics2>
{
    IMapElementStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapIcon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIcon>
{
    IMapIcon(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapIcon2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIcon2>
{
    IMapIcon2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapIconStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIconStatics>
{
    IMapIconStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapIconStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapIconStatics2>
{
    IMapIconStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapInputEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapInputEventArgs>
{
    IMapInputEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapItemsControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapItemsControl>
{
    IMapItemsControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapItemsControlStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapItemsControlStatics>
{
    IMapItemsControlStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapPolygon :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolygon>
{
    IMapPolygon(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapPolygon2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolygon2>
{
    IMapPolygon2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapPolygonStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolygonStatics>
{
    IMapPolygonStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapPolyline :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolyline>
{
    IMapPolyline(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapPolylineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapPolylineStatics>
{
    IMapPolylineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRightTappedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRightTappedEventArgs>
{
    IMapRightTappedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteView>
{
    IMapRouteView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapRouteViewFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapRouteViewFactory>
{
    IMapRouteViewFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapScene :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapScene>
{
    IMapScene(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapSceneStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapSceneStatics>
{
    IMapSceneStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapStyleSheet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapStyleSheet>
{
    IMapStyleSheet(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapStyleSheetStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapStyleSheetStatics>
{
    IMapStyleSheetStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTargetCameraChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTargetCameraChangedEventArgs>
{
    IMapTargetCameraChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTargetCameraChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTargetCameraChangedEventArgs2>
{
    IMapTargetCameraChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileBitmapRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileBitmapRequest>
{
    IMapTileBitmapRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileBitmapRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileBitmapRequestDeferral>
{
    IMapTileBitmapRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileBitmapRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileBitmapRequestedEventArgs>
{
    IMapTileBitmapRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileDataSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileDataSource>
{
    IMapTileDataSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileDataSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileDataSourceFactory>
{
    IMapTileDataSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileSource>
{
    IMapTileSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileSourceFactory>
{
    IMapTileSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileSourceStatics>
{
    IMapTileSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileUriRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileUriRequest>
{
    IMapTileUriRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileUriRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileUriRequestDeferral>
{
    IMapTileUriRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMapTileUriRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMapTileUriRequestedEventArgs>
{
    IMapTileUriRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreetsideExperience :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsideExperience>
{
    IStreetsideExperience(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreetsideExperienceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsideExperienceFactory>
{
    IStreetsideExperienceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreetsidePanorama :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsidePanorama>
{
    IStreetsidePanorama(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStreetsidePanoramaStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStreetsidePanoramaStatics>
{
    IStreetsidePanoramaStatics(std::nullptr_t = nullptr) noexcept {}
};

}
