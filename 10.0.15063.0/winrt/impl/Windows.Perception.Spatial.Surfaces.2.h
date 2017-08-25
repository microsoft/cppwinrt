// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.DirectX.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Perception.Spatial.Surfaces.1.h"

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Surfaces {

struct WINRT_EBO SpatialSurfaceInfo :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceInfo
{
    SpatialSurfaceInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialSurfaceMesh :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMesh
{
    SpatialSurfaceMesh(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialSurfaceMeshBuffer :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshBuffer
{
    SpatialSurfaceMeshBuffer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpatialSurfaceMeshOptions :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceMeshOptions
{
    SpatialSurfaceMeshOptions(std::nullptr_t) noexcept {}
    SpatialSurfaceMeshOptions();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SupportedVertexPositionFormats();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SupportedTriangleIndexFormats();
    static Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::DirectXPixelFormat> SupportedVertexNormalFormats();
};

struct WINRT_EBO SpatialSurfaceObserver :
    Windows::Perception::Spatial::Surfaces::ISpatialSurfaceObserver
{
    SpatialSurfaceObserver(std::nullptr_t) noexcept {}
    SpatialSurfaceObserver();
    static Windows::Foundation::IAsyncOperation<Windows::Perception::Spatial::SpatialPerceptionAccessStatus> RequestAccessAsync();
    static bool IsSupported();
};

}
