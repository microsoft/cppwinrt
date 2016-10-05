// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Scanners.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Graphics.Printing.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Storage.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Scanners {

struct ImageScannerResolution
{
    float DpiX;
    float DpiY;
};

}

namespace Windows::Devices::Scanners {

using ImageScannerResolution = ABI::Windows::Devices::Scanners::ImageScannerResolution;

}

namespace ABI::Windows::Devices::Scanners {

struct __declspec(uuid("53a88f78-5298-48a0-8da3-8087519665e0")) __declspec(novtable) IImageScanner : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_DefaultScanSource(winrt::Windows::Devices::Scanners::ImageScannerScanSource * value) = 0;
    virtual HRESULT __stdcall abi_IsScanSourceSupported(winrt::Windows::Devices::Scanners::ImageScannerScanSource value, bool * result) = 0;
    virtual HRESULT __stdcall get_FlatbedConfiguration(Windows::Devices::Scanners::IImageScannerFormatConfiguration ** value) = 0;
    virtual HRESULT __stdcall get_FeederConfiguration(Windows::Devices::Scanners::IImageScannerFormatConfiguration ** value) = 0;
    virtual HRESULT __stdcall get_AutoConfiguration(Windows::Devices::Scanners::IImageScannerFormatConfiguration ** value) = 0;
    virtual HRESULT __stdcall abi_IsPreviewSupported(winrt::Windows::Devices::Scanners::ImageScannerScanSource scanSource, bool * result) = 0;
    virtual HRESULT __stdcall abi_ScanPreviewToStreamAsync(winrt::Windows::Devices::Scanners::ImageScannerScanSource scanSource, Windows::Storage::Streams::IRandomAccessStream * targetStream, Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_ScanFilesToFolderAsync(winrt::Windows::Devices::Scanners::ImageScannerScanSource scanSource, Windows::Storage::IStorageFolder * storageFolder, Windows::Foundation::IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> ** operation) = 0;
};

struct __declspec(uuid("74bdacee-fa97-4c17-8280-40e39c6dcc67")) __declspec(novtable) IImageScannerFeederConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CanAutoDetectPageSize(bool * value) = 0;
    virtual HRESULT __stdcall get_AutoDetectPageSize(bool * value) = 0;
    virtual HRESULT __stdcall put_AutoDetectPageSize(bool value) = 0;
    virtual HRESULT __stdcall get_PageSize(winrt::Windows::Graphics::Printing::PrintMediaSize * value) = 0;
    virtual HRESULT __stdcall put_PageSize(winrt::Windows::Graphics::Printing::PrintMediaSize value) = 0;
    virtual HRESULT __stdcall get_PageOrientation(winrt::Windows::Graphics::Printing::PrintOrientation * value) = 0;
    virtual HRESULT __stdcall put_PageOrientation(winrt::Windows::Graphics::Printing::PrintOrientation value) = 0;
    virtual HRESULT __stdcall get_PageSizeDimensions(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall abi_IsPageSizeSupported(winrt::Windows::Graphics::Printing::PrintMediaSize pageSize, winrt::Windows::Graphics::Printing::PrintOrientation pageOrientation, bool * result) = 0;
    virtual HRESULT __stdcall get_MaxNumberOfPages(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_MaxNumberOfPages(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CanScanDuplex(bool * value) = 0;
    virtual HRESULT __stdcall get_Duplex(bool * value) = 0;
    virtual HRESULT __stdcall put_Duplex(bool value) = 0;
    virtual HRESULT __stdcall get_CanScanAhead(bool * value) = 0;
    virtual HRESULT __stdcall get_ScanAhead(bool * value) = 0;
    virtual HRESULT __stdcall put_ScanAhead(bool value) = 0;
};

struct __declspec(uuid("ae275d11-dadf-4010-bf10-cca5c83dcbb0")) __declspec(novtable) IImageScannerFormatConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DefaultFormat(winrt::Windows::Devices::Scanners::ImageScannerFormat * value) = 0;
    virtual HRESULT __stdcall get_Format(winrt::Windows::Devices::Scanners::ImageScannerFormat * value) = 0;
    virtual HRESULT __stdcall put_Format(winrt::Windows::Devices::Scanners::ImageScannerFormat value) = 0;
    virtual HRESULT __stdcall abi_IsFormatSupported(winrt::Windows::Devices::Scanners::ImageScannerFormat value, bool * result) = 0;
};

struct __declspec(uuid("08b7fe8e-8891-441d-be9c-176fa109c8bb")) __declspec(novtable) IImageScannerPreviewResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Succeeded(bool * value) = 0;
    virtual HRESULT __stdcall get_Format(winrt::Windows::Devices::Scanners::ImageScannerFormat * value) = 0;
};

struct __declspec(uuid("c91624cd-9037-4e48-84c1-ac0975076bc5")) __declspec(novtable) IImageScannerScanResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ScannedFiles(Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> ** value) = 0;
};

struct __declspec(uuid("bfb50055-0b44-4c82-9e89-205f9c234e59")) __declspec(novtable) IImageScannerSourceConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MinScanArea(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_MaxScanArea(Windows::Foundation::Size * value) = 0;
    virtual HRESULT __stdcall get_SelectedScanRegion(Windows::Foundation::Rect * value) = 0;
    virtual HRESULT __stdcall put_SelectedScanRegion(Windows::Foundation::Rect value) = 0;
    virtual HRESULT __stdcall get_AutoCroppingMode(winrt::Windows::Devices::Scanners::ImageScannerAutoCroppingMode * value) = 0;
    virtual HRESULT __stdcall put_AutoCroppingMode(winrt::Windows::Devices::Scanners::ImageScannerAutoCroppingMode value) = 0;
    virtual HRESULT __stdcall abi_IsAutoCroppingModeSupported(winrt::Windows::Devices::Scanners::ImageScannerAutoCroppingMode value, bool * result) = 0;
    virtual HRESULT __stdcall get_MinResolution(Windows::Devices::Scanners::ImageScannerResolution * value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(Windows::Devices::Scanners::ImageScannerResolution * value) = 0;
    virtual HRESULT __stdcall get_OpticalResolution(Windows::Devices::Scanners::ImageScannerResolution * value) = 0;
    virtual HRESULT __stdcall get_DesiredResolution(Windows::Devices::Scanners::ImageScannerResolution * value) = 0;
    virtual HRESULT __stdcall put_DesiredResolution(Windows::Devices::Scanners::ImageScannerResolution value) = 0;
    virtual HRESULT __stdcall get_ActualResolution(Windows::Devices::Scanners::ImageScannerResolution * value) = 0;
    virtual HRESULT __stdcall get_DefaultColorMode(winrt::Windows::Devices::Scanners::ImageScannerColorMode * value) = 0;
    virtual HRESULT __stdcall get_ColorMode(winrt::Windows::Devices::Scanners::ImageScannerColorMode * value) = 0;
    virtual HRESULT __stdcall put_ColorMode(winrt::Windows::Devices::Scanners::ImageScannerColorMode value) = 0;
    virtual HRESULT __stdcall abi_IsColorModeSupported(winrt::Windows::Devices::Scanners::ImageScannerColorMode value, bool * result) = 0;
    virtual HRESULT __stdcall get_MinBrightness(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxBrightness(int32_t * value) = 0;
    virtual HRESULT __stdcall get_BrightnessStep(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DefaultBrightness(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Brightness(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Brightness(int32_t value) = 0;
    virtual HRESULT __stdcall get_MinContrast(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxContrast(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ContrastStep(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_DefaultContrast(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Contrast(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Contrast(int32_t value) = 0;
};

struct __declspec(uuid("bc57e70e-d804-4477-9fb5-b911b5473897")) __declspec(novtable) IImageScannerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelector(hstring * selector) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Scanners::ImageScanner> { using default_interface = Windows::Devices::Scanners::IImageScanner; };
template <> struct traits<Windows::Devices::Scanners::ImageScannerAutoConfiguration> { using default_interface = Windows::Devices::Scanners::IImageScannerFormatConfiguration; };
template <> struct traits<Windows::Devices::Scanners::ImageScannerFeederConfiguration> { using default_interface = Windows::Devices::Scanners::IImageScannerFormatConfiguration; };
template <> struct traits<Windows::Devices::Scanners::ImageScannerFlatbedConfiguration> { using default_interface = Windows::Devices::Scanners::IImageScannerFormatConfiguration; };
template <> struct traits<Windows::Devices::Scanners::ImageScannerPreviewResult> { using default_interface = Windows::Devices::Scanners::IImageScannerPreviewResult; };
template <> struct traits<Windows::Devices::Scanners::ImageScannerScanResult> { using default_interface = Windows::Devices::Scanners::IImageScannerScanResult; };

}

namespace Windows::Devices::Scanners {

template <typename T> struct impl_IImageScanner;
template <typename T> struct impl_IImageScannerFeederConfiguration;
template <typename T> struct impl_IImageScannerFormatConfiguration;
template <typename T> struct impl_IImageScannerPreviewResult;
template <typename T> struct impl_IImageScannerScanResult;
template <typename T> struct impl_IImageScannerSourceConfiguration;
template <typename T> struct impl_IImageScannerStatics;

}

namespace impl {

template <> struct traits<Windows::Devices::Scanners::IImageScanner>
{
    using abi = ABI::Windows::Devices::Scanners::IImageScanner;
    template <typename D> using consume = Windows::Devices::Scanners::impl_IImageScanner<D>;
};

template <> struct traits<Windows::Devices::Scanners::IImageScannerFeederConfiguration>
{
    using abi = ABI::Windows::Devices::Scanners::IImageScannerFeederConfiguration;
    template <typename D> using consume = Windows::Devices::Scanners::impl_IImageScannerFeederConfiguration<D>;
};

template <> struct traits<Windows::Devices::Scanners::IImageScannerFormatConfiguration>
{
    using abi = ABI::Windows::Devices::Scanners::IImageScannerFormatConfiguration;
    template <typename D> using consume = Windows::Devices::Scanners::impl_IImageScannerFormatConfiguration<D>;
};

template <> struct traits<Windows::Devices::Scanners::IImageScannerPreviewResult>
{
    using abi = ABI::Windows::Devices::Scanners::IImageScannerPreviewResult;
    template <typename D> using consume = Windows::Devices::Scanners::impl_IImageScannerPreviewResult<D>;
};

template <> struct traits<Windows::Devices::Scanners::IImageScannerScanResult>
{
    using abi = ABI::Windows::Devices::Scanners::IImageScannerScanResult;
    template <typename D> using consume = Windows::Devices::Scanners::impl_IImageScannerScanResult<D>;
};

template <> struct traits<Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    using abi = ABI::Windows::Devices::Scanners::IImageScannerSourceConfiguration;
    template <typename D> using consume = Windows::Devices::Scanners::impl_IImageScannerSourceConfiguration<D>;
};

template <> struct traits<Windows::Devices::Scanners::IImageScannerStatics>
{
    using abi = ABI::Windows::Devices::Scanners::IImageScannerStatics;
    template <typename D> using consume = Windows::Devices::Scanners::impl_IImageScannerStatics<D>;
};

template <> struct traits<Windows::Devices::Scanners::ImageScanner>
{
    using abi = ABI::Windows::Devices::Scanners::ImageScanner;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Scanners.ImageScanner"; }
};

template <> struct traits<Windows::Devices::Scanners::ImageScannerAutoConfiguration>
{
    using abi = ABI::Windows::Devices::Scanners::ImageScannerAutoConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Scanners.ImageScannerAutoConfiguration"; }
};

template <> struct traits<Windows::Devices::Scanners::ImageScannerFeederConfiguration>
{
    using abi = ABI::Windows::Devices::Scanners::ImageScannerFeederConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Scanners.ImageScannerFeederConfiguration"; }
};

template <> struct traits<Windows::Devices::Scanners::ImageScannerFlatbedConfiguration>
{
    using abi = ABI::Windows::Devices::Scanners::ImageScannerFlatbedConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Scanners.ImageScannerFlatbedConfiguration"; }
};

template <> struct traits<Windows::Devices::Scanners::ImageScannerPreviewResult>
{
    using abi = ABI::Windows::Devices::Scanners::ImageScannerPreviewResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Scanners.ImageScannerPreviewResult"; }
};

template <> struct traits<Windows::Devices::Scanners::ImageScannerScanResult>
{
    using abi = ABI::Windows::Devices::Scanners::ImageScannerScanResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Scanners.ImageScannerScanResult"; }
};

}

}
