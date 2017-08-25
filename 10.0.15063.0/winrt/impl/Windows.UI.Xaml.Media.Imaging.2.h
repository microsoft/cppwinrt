// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Imaging {

struct DownloadProgressEventHandler : Windows::Foundation::IUnknown
{
    DownloadProgressEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DownloadProgressEventHandler(L lambda);
    template <typename F> DownloadProgressEventHandler(F* function);
    template <typename O, typename M> DownloadProgressEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs const& e) const;
};

struct WINRT_EBO BitmapImage :
    Windows::UI::Xaml::Media::Imaging::IBitmapImage,
    impl::base<BitmapImage, Windows::UI::Xaml::Media::Imaging::BitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<BitmapImage, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::Media::Imaging::IBitmapImage2, Windows::UI::Xaml::Media::Imaging::IBitmapImage3, Windows::UI::Xaml::Media::Imaging::IBitmapSource>
{
    BitmapImage(std::nullptr_t) noexcept {}
    BitmapImage();
    BitmapImage(Windows::Foundation::Uri const& uriSource);
    static Windows::UI::Xaml::DependencyProperty CreateOptionsProperty();
    static Windows::UI::Xaml::DependencyProperty UriSourceProperty();
    static Windows::UI::Xaml::DependencyProperty DecodePixelWidthProperty();
    static Windows::UI::Xaml::DependencyProperty DecodePixelHeightProperty();
    static Windows::UI::Xaml::DependencyProperty DecodePixelTypeProperty();
    static Windows::UI::Xaml::DependencyProperty IsAnimatedBitmapProperty();
    static Windows::UI::Xaml::DependencyProperty IsPlayingProperty();
    static Windows::UI::Xaml::DependencyProperty AutoPlayProperty();
};

struct WINRT_EBO BitmapSource :
    Windows::UI::Xaml::Media::Imaging::IBitmapSource,
    impl::base<BitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<BitmapSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    BitmapSource(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty PixelWidthProperty();
    static Windows::UI::Xaml::DependencyProperty PixelHeightProperty();
};

struct WINRT_EBO DownloadProgressEventArgs :
    Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs
{
    DownloadProgressEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RenderTargetBitmap :
    Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap,
    impl::base<RenderTargetBitmap, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<RenderTargetBitmap, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    RenderTargetBitmap(std::nullptr_t) noexcept {}
    RenderTargetBitmap();
    static Windows::UI::Xaml::DependencyProperty PixelWidthProperty();
    static Windows::UI::Xaml::DependencyProperty PixelHeightProperty();
};

struct WINRT_EBO SoftwareBitmapSource :
    Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource,
    impl::base<SoftwareBitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<SoftwareBitmapSource, Windows::Foundation::IClosable, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    SoftwareBitmapSource(std::nullptr_t) noexcept {}
    SoftwareBitmapSource();
};

struct WINRT_EBO SurfaceImageSource :
    Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource,
    impl::base<SurfaceImageSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<SurfaceImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    SurfaceImageSource(std::nullptr_t) noexcept {}
    SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight);
    SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque);
};

struct WINRT_EBO SvgImageSource :
    Windows::UI::Xaml::Media::Imaging::ISvgImageSource,
    impl::base<SvgImageSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<SvgImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    SvgImageSource(std::nullptr_t) noexcept {}
    SvgImageSource();
    SvgImageSource(Windows::Foundation::Uri const& uriSource);
    static Windows::UI::Xaml::DependencyProperty UriSourceProperty();
    static Windows::UI::Xaml::DependencyProperty RasterizePixelWidthProperty();
    static Windows::UI::Xaml::DependencyProperty RasterizePixelHeightProperty();
};

struct WINRT_EBO SvgImageSourceFailedEventArgs :
    Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs
{
    SvgImageSourceFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SvgImageSourceOpenedEventArgs :
    Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs
{
    SvgImageSourceOpenedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VirtualSurfaceImageSource :
    Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource,
    impl::base<VirtualSurfaceImageSource, Windows::UI::Xaml::Media::Imaging::SurfaceImageSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<VirtualSurfaceImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>
{
    VirtualSurfaceImageSource(std::nullptr_t) noexcept {}
    VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight);
    VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque);
};

struct WINRT_EBO WriteableBitmap :
    Windows::UI::Xaml::Media::Imaging::IWriteableBitmap,
    impl::base<WriteableBitmap, Windows::UI::Xaml::Media::Imaging::BitmapSource, Windows::UI::Xaml::Media::ImageSource, Windows::UI::Xaml::DependencyObject>,
    impl::require<WriteableBitmap, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource, Windows::UI::Xaml::Media::Imaging::IBitmapSource>
{
    WriteableBitmap(std::nullptr_t) noexcept {}
    WriteableBitmap(int32_t pixelWidth, int32_t pixelHeight);
};

struct WINRT_EBO XamlRenderingBackgroundTask :
    Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask,
    impl::require<XamlRenderingBackgroundTask, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>
{
    XamlRenderingBackgroundTask(std::nullptr_t) noexcept {}
};

template <typename D>
class IXamlRenderingBackgroundTaskOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using IXamlRenderingBackgroundTaskOverrides = winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides;

    void OnRun(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const;
};

}
