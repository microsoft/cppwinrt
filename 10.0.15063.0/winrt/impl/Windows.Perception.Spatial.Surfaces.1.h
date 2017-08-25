// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.DirectX.0.h"
#include "winrt/impl/Windows.Perception.Spatial.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Perception.Spatial.Surfaces.0.h"

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Surfaces {

struct WINRT_EBO ISpatialSurfaceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceInfo>
{
    ISpatialSurfaceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialSurfaceMesh :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMesh>
{
    ISpatialSurfaceMesh(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialSurfaceMeshBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMeshBuffer>
{
    ISpatialSurfaceMeshBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialSurfaceMeshOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMeshOptions>
{
    ISpatialSurfaceMeshOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialSurfaceMeshOptionsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceMeshOptionsStatics>
{
    ISpatialSurfaceMeshOptionsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialSurfaceObserver :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceObserver>
{
    ISpatialSurfaceObserver(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialSurfaceObserverStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceObserverStatics>
{
    ISpatialSurfaceObserverStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpatialSurfaceObserverStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialSurfaceObserverStatics2>,
    impl::require<ISpatialSurfaceObserverStatics2, Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserverStatics>
{
    ISpatialSurfaceObserverStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
