// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Imaging.2.h"
#include "winrt/Windows.UI.Xaml.Media.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::CreateOptions() const
{
    Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->get_CreateOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::CreateOptions(Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->put_CreateOptions(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::UriSource() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->get_UriSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::UriSource(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->put_UriSource(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::DecodePixelWidth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->get_DecodePixelWidth(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::DecodePixelWidth(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->put_DecodePixelWidth(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::DecodePixelHeight() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->get_DecodePixelHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::DecodePixelHeight(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->put_DecodePixelHeight(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::DownloadProgress(Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->add_DownloadProgress(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage> consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::DownloadProgress(auto_revoke_t, Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage>(this, &abi_t<Windows::UI::Xaml::Media::Imaging::IBitmapImage>::remove_DownloadProgress, DownloadProgress(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::DownloadProgress(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->remove_DownloadProgress(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::ImageOpened(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->add_ImageOpened(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage> consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::ImageOpened(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage>(this, &abi_t<Windows::UI::Xaml::Media::Imaging::IBitmapImage>::remove_ImageOpened, ImageOpened(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::ImageOpened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->remove_ImageOpened(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::ImageFailed(Windows::UI::Xaml::ExceptionRoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->add_ImageFailed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::Imaging::IBitmapImage> consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::ImageFailed(auto_revoke_t, Windows::UI::Xaml::ExceptionRoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage>(this, &abi_t<Windows::UI::Xaml::Media::Imaging::IBitmapImage>::remove_ImageFailed, ImageFailed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage<D>::ImageFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage)->remove_ImageFailed(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Media::Imaging::DecodePixelType consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage2<D>::DecodePixelType() const
{
    Windows::UI::Xaml::Media::Imaging::DecodePixelType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage2)->get_DecodePixelType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage2<D>::DecodePixelType(Windows::UI::Xaml::Media::Imaging::DecodePixelType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage2)->put_DecodePixelType(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>::IsAnimatedBitmap() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage3)->get_IsAnimatedBitmap(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>::IsPlaying() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage3)->get_IsPlaying(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>::AutoPlay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage3)->get_AutoPlay(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>::AutoPlay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage3)->put_AutoPlay(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>::Play() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage3)->Play());
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapImage3<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImage3)->Stop());
}

template <typename D> Windows::UI::Xaml::Media::Imaging::BitmapImage consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory<D>::CreateInstanceWithUriSource(Windows::Foundation::Uri const& uriSource) const
{
    Windows::UI::Xaml::Media::Imaging::BitmapImage instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory)->CreateInstanceWithUriSource(get_abi(uriSource), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics<D>::CreateOptionsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics)->get_CreateOptionsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics<D>::UriSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics)->get_UriSourceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics<D>::DecodePixelWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics)->get_DecodePixelWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics<D>::DecodePixelHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics)->get_DecodePixelHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2<D>::DecodePixelTypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2)->get_DecodePixelTypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3<D>::IsAnimatedBitmapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3)->get_IsAnimatedBitmapProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3<D>::IsPlayingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3)->get_IsPlayingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3<D>::AutoPlayProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3)->get_AutoPlayProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource<D>::PixelWidth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapSource)->get_PixelWidth(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource<D>::PixelHeight() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapSource)->get_PixelHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource<D>::SetSource(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapSource)->SetSource(get_abi(streamSource)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Xaml_Media_Imaging_IBitmapSource<D>::SetSourceAsync(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapSource)->SetSourceAsync(get_abi(streamSource), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::BitmapSource consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Imaging::BitmapSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics<D>::PixelWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics)->get_PixelWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics<D>::PixelHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics)->get_PixelHeightProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs<D>::Progress() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs)->get_Progress(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs<D>::Progress(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs)->put_Progress(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap<D>::PixelWidth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap)->get_PixelWidth(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap<D>::PixelHeight() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap)->get_PixelHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap<D>::RenderAsync(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap)->RenderAsync(get_abi(element), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap<D>::RenderAsync(Windows::UI::Xaml::UIElement const& element, int32_t scaledWidth, int32_t scaledHeight) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap)->RenderToSizeAsync(get_abi(element), scaledWidth, scaledHeight, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap<D>::GetPixelsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap)->GetPixelsAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics<D>::PixelWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics)->get_PixelWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics<D>::PixelHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics)->get_PixelHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource<D>::SetBitmapAsync(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource)->SetBitmapAsync(get_abi(softwareBitmap), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::SurfaceImageSource consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory<D>::CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory)->CreateInstanceWithDimensions(pixelWidth, pixelHeight, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::SurfaceImageSource consume_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory<D>::CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Imaging::SurfaceImageSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory)->CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::UriSource() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->get_UriSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::UriSource(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->put_UriSource(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::RasterizePixelWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->get_RasterizePixelWidth(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::RasterizePixelWidth(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->put_RasterizePixelWidth(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::RasterizePixelHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->get_RasterizePixelHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::RasterizePixelHeight(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->put_RasterizePixelHeight(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::Opened(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->add_Opened(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::Imaging::ISvgImageSource> consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::Opened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSource>(this, &abi_t<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>::remove_Opened, Opened(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::Opened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->remove_Opened(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::OpenFailed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->add_OpenFailed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::Imaging::ISvgImageSource> consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSource>(this, &abi_t<Windows::UI::Xaml::Media::Imaging::ISvgImageSource>::remove_OpenFailed, OpenFailed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::OpenFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->remove_OpenFailed(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSource<D>::SetSourceAsync(Windows::Storage::Streams::IRandomAccessStream const& streamSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSource)->SetSourceAsync(get_abi(streamSource), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::SvgImageSource consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Imaging::SvgImageSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::SvgImageSource consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory<D>::CreateInstanceWithUriSource(Windows::Foundation::Uri const& uriSource, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Imaging::SvgImageSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory)->CreateInstanceWithUriSource(get_abi(uriSource), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs<D>::Status() const
{
    Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics<D>::UriSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics)->get_UriSourceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics<D>::RasterizePixelWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics)->get_RasterizePixelWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics<D>::RasterizePixelHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics)->get_RasterizePixelHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory<D>::CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const
{
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory)->CreateInstanceWithDimensions(pixelWidth, pixelHeight, put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource consume_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory<D>::CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque) const
{
    Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory)->CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, put_abi(instance)));
    return instance;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap<D>::PixelBuffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IWriteableBitmap)->get_PixelBuffer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap<D>::Invalidate() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IWriteableBitmap)->Invalidate());
}

template <typename D> Windows::UI::Xaml::Media::Imaging::WriteableBitmap consume_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory<D>::CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight) const
{
    Windows::UI::Xaml::Media::Imaging::WriteableBitmap instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory)->CreateInstanceWithDimensions(pixelWidth, pixelHeight, put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides<D>::OnRun(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides)->OnRun(get_abi(taskInstance)));
}

template <> struct delegate<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage>
{
    HRESULT __stdcall get_CreateOptions(abi_t<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CreateOptions(abi_t<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateOptions(*reinterpret_cast<Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UriSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UriSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UriSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriSource(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelWidth(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodePixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodePixelWidth(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecodePixelWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelHeight(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodePixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodePixelHeight(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecodePixelHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadProgress(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DownloadProgress(*reinterpret_cast<Windows::UI::Xaml::Media::Imaging::DownloadProgressEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadProgress(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadProgress(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ImageOpened(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ImageOpened(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ImageOpened(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageOpened(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ImageFailed(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ImageFailed(*reinterpret_cast<Windows::UI::Xaml::ExceptionRoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ImageFailed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage2> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage2>
{
    HRESULT __stdcall get_DecodePixelType(abi_t<Windows::UI::Xaml::Media::Imaging::DecodePixelType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodePixelType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecodePixelType(abi_t<Windows::UI::Xaml::Media::Imaging::DecodePixelType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecodePixelType(*reinterpret_cast<Windows::UI::Xaml::Media::Imaging::DecodePixelType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage3> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImage3>
{
    HRESULT __stdcall get_IsAnimatedBitmap(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAnimatedBitmap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlaying(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPlaying());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoPlay(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoPlay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoPlay(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoPlay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Play() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Play();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>
{
    HRESULT __stdcall CreateInstanceWithUriSource(::IUnknown* uriSource, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithUriSource(*reinterpret_cast<Windows::Foundation::Uri const*>(&uriSource)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>
{
    HRESULT __stdcall get_CreateOptionsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateOptionsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UriSourceProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UriSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelWidthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodePixelWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecodePixelHeightProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodePixelHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>
{
    HRESULT __stdcall get_DecodePixelTypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecodePixelTypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>
{
    HRESULT __stdcall get_IsAnimatedBitmapProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAnimatedBitmapProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlayingProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPlayingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoPlayProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoPlayProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapSource>
{
    HRESULT __stdcall get_PixelWidth(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSource(::IUnknown* streamSource) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&streamSource));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSourceAsync(::IUnknown* streamSource, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().SetSourceAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&streamSource)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>
{
    HRESULT __stdcall get_PixelWidthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeightProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs>
{
    HRESULT __stdcall get_Progress(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Progress(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progress(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap>
{
    HRESULT __stdcall get_PixelWidth(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenderAsync(::IUnknown* element, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RenderAsync(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenderToSizeAsync(::IUnknown* element, int32_t scaledWidth, int32_t scaledHeight, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().RenderAsync(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), scaledWidth, scaledHeight));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPixelsAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPixelsAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>
{
    HRESULT __stdcall get_PixelWidthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeightProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource>
{
    HRESULT __stdcall SetBitmapAsync(::IUnknown* softwareBitmap, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().SetBitmapAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&softwareBitmap)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>
{
    HRESULT __stdcall CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithDimensions(pixelWidth, pixelHeight, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSource>
{
    HRESULT __stdcall get_UriSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UriSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UriSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UriSource(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RasterizePixelWidth(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RasterizePixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RasterizePixelWidth(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RasterizePixelWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RasterizePixelHeight(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RasterizePixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RasterizePixelHeight(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RasterizePixelHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Opened(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Opened(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Opened(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opened(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OpenFailed(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OpenFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OpenFailed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSourceAsync(::IUnknown* streamSource, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().SetSourceAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&streamSource)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithUriSource(::IUnknown* uriSource, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithUriSource(*reinterpret_cast<Windows::Foundation::Uri const*>(&uriSource), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs>
{
    HRESULT __stdcall get_Status(abi_t<Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics> : produce_base<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>
{
    HRESULT __stdcall get_UriSourceProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UriSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RasterizePixelWidthProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RasterizePixelWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RasterizePixelHeightProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RasterizePixelHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>
{
    HRESULT __stdcall CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithDimensions(pixelWidth, pixelHeight));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceWithDimensionsAndOpacity(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmap> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmap>
{
    HRESULT __stdcall get_PixelBuffer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelBuffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Invalidate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invalidate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>
{
    HRESULT __stdcall CreateInstanceWithDimensions(int32_t pixelWidth, int32_t pixelHeight, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithDimensions(pixelWidth, pixelHeight));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides> : produce_base<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides>
{
    HRESULT __stdcall OnRun(::IUnknown* taskInstance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnRun(*reinterpret_cast<Windows::ApplicationModel::Background::IBackgroundTaskInstance const*>(&taskInstance));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Imaging {

inline BitmapImage::BitmapImage() :
    BitmapImage(activate_instance<BitmapImage>())
{}

inline BitmapImage::BitmapImage(Windows::Foundation::Uri const& uriSource) :
    BitmapImage(get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory>().CreateInstanceWithUriSource(uriSource))
{}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::CreateOptionsProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>().CreateOptionsProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::UriSourceProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>().UriSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::DecodePixelWidthProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>().DecodePixelWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::DecodePixelHeightProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics>().DecodePixelHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::DecodePixelTypeProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2>().DecodePixelTypeProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::IsAnimatedBitmapProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>().IsAnimatedBitmapProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::IsPlayingProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>().IsPlayingProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapImage::AutoPlayProperty()
{
    return get_activation_factory<BitmapImage, Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3>().AutoPlayProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapSource::PixelWidthProperty()
{
    return get_activation_factory<BitmapSource, Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>().PixelWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty BitmapSource::PixelHeightProperty()
{
    return get_activation_factory<BitmapSource, Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics>().PixelHeightProperty();
}

inline RenderTargetBitmap::RenderTargetBitmap() :
    RenderTargetBitmap(activate_instance<RenderTargetBitmap>())
{}

inline Windows::UI::Xaml::DependencyProperty RenderTargetBitmap::PixelWidthProperty()
{
    return get_activation_factory<RenderTargetBitmap, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>().PixelWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty RenderTargetBitmap::PixelHeightProperty()
{
    return get_activation_factory<RenderTargetBitmap, Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics>().PixelHeightProperty();
}

inline SoftwareBitmapSource::SoftwareBitmapSource() :
    SoftwareBitmapSource(activate_instance<SoftwareBitmapSource>())
{}

inline SurfaceImageSource::SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SurfaceImageSource, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>().CreateInstanceWithDimensions(pixelWidth, pixelHeight, outer, inner));
}

inline SurfaceImageSource::SurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SurfaceImageSource, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, outer, inner));
}

inline SvgImageSource::SvgImageSource()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SvgImageSource, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>().CreateInstance(outer, inner));
}

inline SvgImageSource::SvgImageSource(Windows::Foundation::Uri const& uriSource)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SvgImageSource, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>().CreateInstanceWithUriSource(uriSource, outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty SvgImageSource::UriSourceProperty()
{
    return get_activation_factory<SvgImageSource, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>().UriSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty SvgImageSource::RasterizePixelWidthProperty()
{
    return get_activation_factory<SvgImageSource, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>().RasterizePixelWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty SvgImageSource::RasterizePixelHeightProperty()
{
    return get_activation_factory<SvgImageSource, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics>().RasterizePixelHeightProperty();
}

inline VirtualSurfaceImageSource::VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight) :
    VirtualSurfaceImageSource(get_activation_factory<VirtualSurfaceImageSource, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>().CreateInstanceWithDimensions(pixelWidth, pixelHeight))
{}

inline VirtualSurfaceImageSource::VirtualSurfaceImageSource(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque) :
    VirtualSurfaceImageSource(get_activation_factory<VirtualSurfaceImageSource, Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory>().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque))
{}

inline WriteableBitmap::WriteableBitmap(int32_t pixelWidth, int32_t pixelHeight) :
    WriteableBitmap(get_activation_factory<WriteableBitmap, Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory>().CreateInstanceWithDimensions(pixelWidth, pixelHeight))
{}

template <typename L> DownloadProgressEventHandler::DownloadProgressEventHandler(L handler) :
    DownloadProgressEventHandler(impl::make_delegate<DownloadProgressEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DownloadProgressEventHandler::DownloadProgressEventHandler(F* handler) :
    DownloadProgressEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DownloadProgressEventHandler::DownloadProgressEventHandler(O* object, M method) :
    DownloadProgressEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DownloadProgressEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs const& e) const
{
    check_hresult((*(abi_t<DownloadProgressEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D> void IXamlRenderingBackgroundTaskOverridesT<D>::OnRun(Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const
{
    return shim().template as<IXamlRenderingBackgroundTaskOverrides>().OnRun(taskInstance);
}

template <typename D, typename ... Interfaces>
struct BitmapSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Imaging::IBitmapSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    using composable = BitmapSource;

protected:
    BitmapSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Imaging::BitmapSource, Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SurfaceImageSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    using composable = SurfaceImageSource;

protected:
    SurfaceImageSourceT(int32_t pixelWidth, int32_t pixelHeight)
    {
        get_activation_factory<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>().CreateInstanceWithDimensions(pixelWidth, pixelHeight, *this, this->m_inner);
    }
    SurfaceImageSourceT(int32_t pixelWidth, int32_t pixelHeight, bool isOpaque)
    {
        get_activation_factory<Windows::UI::Xaml::Media::Imaging::SurfaceImageSource, Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory>().CreateInstanceWithDimensionsAndOpacity(pixelWidth, pixelHeight, isOpaque, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SvgImageSourceT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Imaging::ISvgImageSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IImageSource>
{
    using composable = SvgImageSource;

protected:
    SvgImageSourceT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>().CreateInstance(*this, this->m_inner);
    }
    SvgImageSourceT(Windows::Foundation::Uri const& uriSource)
    {
        get_activation_factory<Windows::UI::Xaml::Media::Imaging::SvgImageSource, Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory>().CreateInstanceWithUriSource(uriSource, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct XamlRenderingBackgroundTaskT :
    implements<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask>,
    Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverridesT<D>
{
    using composable = XamlRenderingBackgroundTask;

protected:
    XamlRenderingBackgroundTaskT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask, Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImage> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImage2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImage2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImage3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImage3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::BitmapImage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::BitmapImage> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::BitmapSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::BitmapSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::DownloadProgressEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::RenderTargetBitmap> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::SoftwareBitmapSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::SurfaceImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::SurfaceImageSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::SvgImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::SvgImageSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::VirtualSurfaceImageSource> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::WriteableBitmap> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::WriteableBitmap> {};

template<> struct hash<winrt::Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Media::Imaging::XamlRenderingBackgroundTask> {};

}

WINRT_WARNING_POP
