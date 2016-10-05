// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Media::Imaging {

struct DownloadProgressEventHandler;
struct IBitmapImage;
struct IBitmapImage2;
struct IBitmapImage3;
struct IBitmapImageFactory;
struct IBitmapImageStatics;
struct IBitmapImageStatics2;
struct IBitmapImageStatics3;
struct IBitmapSource;
struct IBitmapSourceFactory;
struct IBitmapSourceStatics;
struct IDownloadProgressEventArgs;
struct IRenderTargetBitmap;
struct IRenderTargetBitmapStatics;
struct ISoftwareBitmapSource;
struct ISurfaceImageSource;
struct ISurfaceImageSourceFactory;
struct IVirtualSurfaceImageSource;
struct IVirtualSurfaceImageSourceFactory;
struct IWriteableBitmap;
struct IWriteableBitmapFactory;
struct IXamlRenderingBackgroundTask;
struct IXamlRenderingBackgroundTaskFactory;
struct IXamlRenderingBackgroundTaskOverrides;
struct BitmapImage;
struct BitmapSource;
struct DownloadProgressEventArgs;
struct RenderTargetBitmap;
struct SoftwareBitmapSource;
struct SurfaceImageSource;
struct VirtualSurfaceImageSource;
struct WriteableBitmap;
struct XamlRenderingBackgroundTask;

}

namespace Windows::UI::Xaml::Media::Imaging {

struct DownloadProgressEventHandler;
struct IBitmapImage;
struct IBitmapImage2;
struct IBitmapImage3;
struct IBitmapImageFactory;
struct IBitmapImageStatics;
struct IBitmapImageStatics2;
struct IBitmapImageStatics3;
struct IBitmapSource;
struct IBitmapSourceFactory;
struct IBitmapSourceStatics;
struct IDownloadProgressEventArgs;
struct IRenderTargetBitmap;
struct IRenderTargetBitmapStatics;
struct ISoftwareBitmapSource;
struct ISurfaceImageSource;
struct ISurfaceImageSourceFactory;
struct IVirtualSurfaceImageSource;
struct IVirtualSurfaceImageSourceFactory;
struct IWriteableBitmap;
struct IWriteableBitmapFactory;
struct IXamlRenderingBackgroundTask;
struct IXamlRenderingBackgroundTaskFactory;
struct IXamlRenderingBackgroundTaskOverrides;
struct BitmapImage;
struct BitmapSource;
struct DownloadProgressEventArgs;
struct RenderTargetBitmap;
struct SoftwareBitmapSource;
struct SurfaceImageSource;
struct VirtualSurfaceImageSource;
struct WriteableBitmap;
struct XamlRenderingBackgroundTask;

}

namespace Windows::UI::Xaml::Media::Imaging {

enum class BitmapCreateOptions : unsigned
{
    None = 0x0,
    IgnoreImageCache = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(BitmapCreateOptions)

enum class DecodePixelType
{
    Physical = 0,
    Logical = 1,
};

}

}
