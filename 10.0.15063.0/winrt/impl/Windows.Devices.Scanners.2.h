// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Printing.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Scanners.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Scanners {

struct ImageScannerResolution
{
    float DpiX;
    float DpiY;
};

struct WINRT_EBO ImageScanner :
    Windows::Devices::Scanners::IImageScanner
{
    ImageScanner(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector();
};

struct WINRT_EBO ImageScannerAutoConfiguration :
    Windows::Devices::Scanners::IImageScannerFormatConfiguration
{
    ImageScannerAutoConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ImageScannerFeederConfiguration :
    Windows::Devices::Scanners::IImageScannerFormatConfiguration,
    impl::require<ImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    ImageScannerFeederConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ImageScannerFlatbedConfiguration :
    Windows::Devices::Scanners::IImageScannerFormatConfiguration,
    impl::require<ImageScannerFlatbedConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    ImageScannerFlatbedConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ImageScannerPreviewResult :
    Windows::Devices::Scanners::IImageScannerPreviewResult
{
    ImageScannerPreviewResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ImageScannerScanResult :
    Windows::Devices::Scanners::IImageScannerScanResult
{
    ImageScannerScanResult(std::nullptr_t) noexcept {}
};

}
