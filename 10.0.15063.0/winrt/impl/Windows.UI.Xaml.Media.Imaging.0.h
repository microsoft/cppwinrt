// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background {

struct IBackgroundTaskInstance;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyProperty;
struct ExceptionRoutedEventHandler;
struct RoutedEventHandler;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Imaging {

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

enum class SvgImageSourceLoadStatus
{
    Success = 0,
    NetworkError = 1,
    InvalidFormat = 2,
    Other = 3,
};

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
struct ISvgImageSource;
struct ISvgImageSourceFactory;
struct ISvgImageSourceFailedEventArgs;
struct ISvgImageSourceOpenedEventArgs;
struct ISvgImageSourceStatics;
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
struct SvgImageSource;
struct SvgImageSourceFailedEventArgs;
struct SvgImageSourceOpenedEventArgs;
struct VirtualSurfaceImageSource;
struct WriteableBitmap;
struct XamlRenderingBackgroundTask;
struct DownloadProgressEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImage>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::BitmapImage>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::BitmapSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::WriteableBitmap>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::DecodePixelType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapImage>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImage" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImage2" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImage3" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmap" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::BitmapImage>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.BitmapImage" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::BitmapSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.BitmapSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.SurfaceImageSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::SvgImageSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::WriteableBitmap>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.BitmapCreateOptions" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::DecodePixelType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.DecodePixelType" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceLoadStatus" }; };
template <> struct name<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Imaging.DownloadProgressEventHandler" }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapImage>{ static constexpr GUID value{ 0x31AF3271,0xE3B4,0x442D,{ 0xA3,0x41,0x4C,0x02,0x26,0xB2,0x72,0x5B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>{ static constexpr GUID value{ 0x1069C1B6,0x8C9B,0x4762,{ 0xBE,0x3D,0x75,0x9F,0x56,0x98,0xF2,0xB3 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>{ static constexpr GUID value{ 0xF1DE6F26,0x3C73,0x453F,{ 0xA7,0xBA,0x9B,0x85,0xC1,0x8B,0x37,0x33 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>{ static constexpr GUID value{ 0xC9132978,0x4810,0x4E5E,{ 0x80,0x87,0x03,0x67,0x1E,0xE6,0x0D,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>{ static constexpr GUID value{ 0x9E282143,0x70E8,0x437C,{ 0x9F,0xA4,0x2C,0xBF,0x29,0x5C,0xFF,0x84 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>{ static constexpr GUID value{ 0xC5F5576A,0x75AF,0x41A4,{ 0xB8,0x93,0x8F,0xE9,0x1F,0xEE,0x28,0x82 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>{ static constexpr GUID value{ 0x2B44E30D,0xF6D5,0x4411,{ 0xA8,0xCD,0xBF,0x76,0x03,0xC4,0xFA,0xA0 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapSource>{ static constexpr GUID value{ 0x23D86411,0x202F,0x41B2,{ 0x8C,0x5B,0xA8,0xA3,0xB3,0x33,0x80,0x0B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>{ static constexpr GUID value{ 0xE240420E,0xD4A7,0x49A4,{ 0xA0,0xB4,0xA5,0x9F,0xDD,0x77,0xE5,0x08 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>{ static constexpr GUID value{ 0x9A9C9981,0x827B,0x4E51,{ 0x89,0x1B,0x8A,0x15,0xB5,0x11,0x84,0x2D } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>{ static constexpr GUID value{ 0x7311E0D4,0xFE94,0x4E70,{ 0x9B,0x90,0xCD,0xD4,0x7A,0xC2,0x3A,0xFB } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>{ static constexpr GUID value{ 0x500DEE81,0x893C,0x4C0A,{ 0x8F,0xEC,0x46,0x78,0xAC,0x71,0x75,0x89 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>{ static constexpr GUID value{ 0xF0A1EFEE,0xC131,0x4D40,{ 0x9C,0x47,0xF7,0xD7,0xCF,0x2B,0x07,0x7F } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>{ static constexpr GUID value{ 0xD2DD9ED0,0xD3C5,0x4056,{ 0x91,0xB5,0xB7,0xC1,0xD1,0xE8,0x13,0x0E } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>{ static constexpr GUID value{ 0x62F7D416,0xC714,0x4C4C,{ 0x82,0x73,0xF8,0x39,0xBC,0x58,0x13,0x5C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>{ static constexpr GUID value{ 0x3AB2212A,0xEF65,0x4A5F,{ 0xBF,0xAC,0x73,0x99,0x3E,0x8C,0x12,0xC9 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>{ static constexpr GUID value{ 0x03E1CEC3,0x0CA8,0x4A4E,{ 0x8D,0x7C,0xC8,0x08,0xA0,0x83,0x85,0x86 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>{ static constexpr GUID value{ 0xC794E9E7,0xCF23,0x4D72,{ 0xBF,0x1A,0xDF,0xAA,0x16,0xD8,0xEA,0x52 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>{ static constexpr GUID value{ 0x68BB3170,0x3CCC,0x4035,{ 0xAC,0x01,0x98,0x34,0x54,0x3D,0x74,0x4E } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>{ static constexpr GUID value{ 0x85EF4C16,0x748E,0x4008,{ 0x95,0xC7,0x6A,0x23,0xDD,0x73,0x16,0xDB } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>{ static constexpr GUID value{ 0x9C6638CE,0xBED1,0x4AAB,{ 0xAC,0xBB,0xD3,0xE2,0x18,0x5D,0x31,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>{ static constexpr GUID value{ 0x4A711FEA,0xBFAC,0x11E0,{ 0xA0,0x6A,0x9D,0xE4,0x47,0x24,0x01,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>{ static constexpr GUID value{ 0x3AB2212A,0xBFAC,0x11E0,{ 0x8A,0x92,0x69,0xE4,0x47,0x24,0x01,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>{ static constexpr GUID value{ 0xBF0B7E6F,0xDF7C,0x4A85,{ 0x84,0x13,0xA1,0x21,0x62,0x85,0x83,0x5C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>{ static constexpr GUID value{ 0x5563EBB1,0x3EF2,0x42C5,{ 0x9C,0x6D,0x1C,0xF5,0xDC,0xC0,0x41,0xFF } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>{ static constexpr GUID value{ 0x5D5FE9AA,0x533E,0x44B8,{ 0xA9,0x75,0xFC,0x5F,0x1E,0x3B,0xFF,0x52 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>{ static constexpr GUID value{ 0xA3D1BB63,0x38F8,0x4DA3,{ 0x9F,0xCA,0xFD,0x81,0x28,0xA2,0xCB,0xF9 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>{ static constexpr GUID value{ 0x9C2A6997,0xA908,0x4711,{ 0xB4,0xB2,0xA9,0x60,0xDB,0x3D,0x8E,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>{ static constexpr GUID value{ 0x1ABAEE23,0x74EE,0x4CC7,{ 0x99,0xBA,0xB1,0x71,0xE3,0xCD,0xA6,0x1E } }; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::BitmapImage>{ using type = Windows::UI::Xaml::Media::Imaging::IBitmapImage; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::BitmapSource>{ using type = Windows::UI::Xaml::Media::Imaging::IBitmapSource; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs>{ using type = Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap>{ using type = Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource>{ using type = Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource>{ using type = Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SvgImageSource>{ using type = Windows::UI::Xaml::Media::Imaging::ISvgImageSource; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs>{ using type = Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs>{ using type = Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource>{ using type = Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::WriteableBitmap>{ using type = Windows::UI::Xaml::Media::Imaging::IWriteableBitmap; };
template <> struct default_interface<Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask>{ using type = Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage
{
    Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions CreateOptions() const;
    void CreateOptions(Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions const& value) const;
    Windows::Foundation::Uri UriSource() const;
    void UriSource(Windows::Foundation::Uri const& value) const;
    int32_t DecodePixelWidth() const;
    void DecodePixelWidth(int32_t value) const;
    int32_t DecodePixelHeight() const;
    void DecodePixelHeight(int32_t value) const;
    event_token DownloadProgress(Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler const& value) const;
    using DownloadProgress_revoker = event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage>;
    DownloadProgress_revoker DownloadProgress(auto_revoke_t, Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler const& value) const;
    void DownloadProgress(event_token const& token) const;
    event_token ImageOpened(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using ImageOpened_revoker = event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage>;
    ImageOpened_revoker ImageOpened(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void ImageOpened(event_token const& token) const;
    event_token ImageFailed(Windows::UI::Xaml::ExceptionRoutedEventHandler const& value) const;
    using ImageFailed_revoker = event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage>;
    ImageFailed_revoker ImageFailed(auto_revoke_t, Windows::UI::Xaml::ExceptionRoutedEventHandler const& value) const;
    void ImageFailed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImage> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage2
{
    Windows::UI::Xaml::Media::Imaging::DecodePixelType DecodePixelType() const;
    void DecodePixelType(Windows::UI::Xaml::Media::Imaging::DecodePixelType const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImage2> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3
{
    bool IsAnimatedBitmap() const;
    bool IsPlaying() const;
    bool AutoPlay() const;
    void AutoPlay(bool value) const;
    void Play() const;
    void Stop() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImage3> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory
{
    Windows::UI::Xaml::Media::Imaging::BitmapImage CreateInstanceWithUriSource(Windows::Foundation::Uri const& uriSource) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics
{
    Windows::UI::Xaml::DependencyProperty CreateOptionsProperty() const;
    Windows::UI::Xaml::DependencyProperty UriSourceProperty() const;
    Windows::UI::Xaml::DependencyProperty DecodePixelWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty DecodePixelHeightProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2
{
    Windows::UI::Xaml::DependencyProperty DecodePixelTypeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3
{
    Windows::UI::Xaml::DependencyProperty IsAnimatedBitmapProperty() const;
    Windows::UI::Xaml::DependencyProperty IsPlayingProperty() const;
    Windows::UI::Xaml::DependencyProperty AutoPlayProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource
{
    int32_t PixelWidth() const;
    int32_t PixelHeight() const;
    void SetSource(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const;
    Windows::Foundation::IAsyncAction SetSourceAsync(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapSource> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory
{
    Windows::UI::Xaml::Media::Imaging::BitmapSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics
{
    Windows::UI::Xaml::DependencyProperty PixelWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty PixelHeightProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs
{
    int32_t Progress() const;
    void Progress(int32_t value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap
{
    int32_t PixelWidth() const;
    int32_t PixelHeight() const;
    Windows::Foundation::IAsyncAction RenderAsync(Windows::UI::Xaml::UIElement const& element) const;
    Windows::Foundation::IAsyncAction RenderAsync(Windows::UI::Xaml::UIElement const& element, int32_t scaledWidth, int32_t scaledHeight) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> GetPixelsAsync() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics
{
    Windows::UI::Xaml::DependencyProperty PixelWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty PixelHeightProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource
{
    Windows::Foundation::IAsyncAction SetBitmapAsync(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSource
{
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory
{
    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource
{
    Windows::Foundation::Uri UriSource() const;
    void UriSource(Windows::Foundation::Uri const& value) const;
    double RasterizePixelWidth() const;
    void RasterizePixelWidth(double value) const;
    double RasterizePixelHeight() const;
    void RasterizePixelHeight(double value) const;
    event_token Opened(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> const& value) const;
    using Opened_revoker = event_revoker<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>;
    Opened_revoker Opened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> const& value) const;
    void Opened(event_token const& token) const;
    event_token OpenFailed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> const& value) const;
    using OpenFailed_revoker = event_revoker<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>;
    OpenFailed_revoker OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> const& value) const;
    void OpenFailed(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> SetSourceAsync(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSource> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory
{
    Windows::UI::Xaml::Media::Imaging::SvgImageSource CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
    Windows::UI::Xaml::Media::Imaging::SvgImageSource CreateInstanceWithUriSource(Windows::Foundation::Uri const& uriSource, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs
{
    Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus Status() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceOpenedEventArgs
{
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceOpenedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics
{
    Windows::UI::Xaml::DependencyProperty UriSourceProperty() const;
    Windows::UI::Xaml::DependencyProperty RasterizePixelWidthProperty() const;
    Windows::UI::Xaml::DependencyProperty RasterizePixelHeightProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSource
{
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSource<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory
{
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const;
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap
{
    Windows::Storage::Streams::IBuffer PixelBuffer() const;
    void Invalidate() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory
{
    Windows::UI::Xaml::Media::Imaging::WriteableBitmap CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTask
{
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTask<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory
{
    Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides
{
    void OnRun(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides<D>; };

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CreateOptions(abi_t<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions>* value) = 0;
    virtual HRESULT __stdcall put_CreateOptions(abi_t<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions> value) = 0;
    virtual HRESULT __stdcall get_UriSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_UriSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DecodePixelWidth(int32_t* value) = 0;
    virtual HRESULT __stdcall put_DecodePixelWidth(int32_t value) = 0;
    virtual HRESULT __stdcall get_DecodePixelHeight(int32_t* value) = 0;
    virtual HRESULT __stdcall put_DecodePixelHeight(int32_t value) = 0;
    virtual HRESULT __stdcall add_DownloadProgress(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DownloadProgress(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ImageOpened(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ImageOpened(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ImageFailed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ImageFailed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImage2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DecodePixelType(abi_t<Windows::UI::Xaml::Media::Imaging::DecodePixelType>* value) = 0;
    virtual HRESULT __stdcall put_DecodePixelType(abi_t<Windows::UI::Xaml::Media::Imaging::DecodePixelType> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImage3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAnimatedBitmap(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPlaying(bool* value) = 0;
    virtual HRESULT __stdcall get_AutoPlay(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoPlay(bool value) = 0;
    virtual HRESULT __stdcall Play() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithUriSource(::IUnknown* uriSource, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CreateOptionsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_UriSourceProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DecodePixelWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DecodePixelHeightProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DecodePixelTypeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAnimatedBitmapProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsPlayingProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AutoPlayProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PixelWidth(int32_t* value) = 0;
    virtual HRESULT __stdcall get_PixelHeight(int32_t* value) = 0;
    virtual HRESULT __stdcall SetSource(::IUnknown* streamSource) = 0;
    virtual HRESULT __stdcall SetSourceAsync(::IUnknown* streamSource, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PixelWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PixelHeightProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Progress(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Progress(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PixelWidth(int32_t* value) = 0;
    virtual HRESULT __stdcall get_PixelHeight(int32_t* value) = 0;
    virtual HRESULT __stdcall RenderAsync(::IUnknown* element, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall RenderToSizeAsync(::IUnknown* element, int32_t scaledWidth, int32_t scaledHeight, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetPixelsAsync(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PixelWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PixelHeightProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetBitmapAsync(::IUnknown* softwareBitmap, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UriSource(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_UriSource(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RasterizePixelWidth(double* value) = 0;
    virtual HRESULT __stdcall put_RasterizePixelWidth(double value) = 0;
    virtual HRESULT __stdcall get_RasterizePixelHeight(double* value) = 0;
    virtual HRESULT __stdcall put_RasterizePixelHeight(double value) = 0;
    virtual HRESULT __stdcall add_Opened(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Opened(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_OpenFailed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_OpenFailed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall SetSourceAsync(::IUnknown* streamSource, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithUriSource(::IUnknown* uriSource, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UriSourceProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RasterizePixelWidthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RasterizePixelHeightProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PixelBuffer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Invalidate() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnRun(::IUnknown* taskInstance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) = 0;
};};

}
