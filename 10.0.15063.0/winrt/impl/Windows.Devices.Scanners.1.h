// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Printing.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Devices.Scanners.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Scanners {

struct WINRT_EBO IImageScanner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScanner>
{
    IImageScanner(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageScannerFeederConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerFeederConfiguration>,
    impl::require<IImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    IImageScannerFeederConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageScannerFormatConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerFormatConfiguration>
{
    IImageScannerFormatConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageScannerPreviewResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerPreviewResult>
{
    IImageScannerPreviewResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageScannerScanResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerScanResult>
{
    IImageScannerScanResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageScannerSourceConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerSourceConfiguration>,
    impl::require<IImageScannerSourceConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration>
{
    IImageScannerSourceConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageScannerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageScannerStatics>
{
    IImageScannerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
