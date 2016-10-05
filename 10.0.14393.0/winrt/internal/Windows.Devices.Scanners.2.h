// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Scanners.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_80646519_5e2a_595d_a8cd_2a24b4067f1b
#define WINRT_GENERIC_80646519_5e2a_595d_a8cd_2a24b4067f1b
template <> struct __declspec(uuid("80646519-5e2a-595d-a8cd-2a24b4067f1b")) __declspec(novtable) IVectorView<Windows::Storage::StorageFile> : impl_IVectorView<Windows::Storage::StorageFile> {};
#endif

#ifndef WINRT_GENERIC_9ac00304_83ea_5688_87b6_ae38aab65d0b
#define WINRT_GENERIC_9ac00304_83ea_5688_87b6_ae38aab65d0b
template <> struct __declspec(uuid("9ac00304-83ea-5688-87b6-ae38aab65d0b")) __declspec(novtable) IIterable<Windows::Storage::StorageFile> : impl_IIterable<Windows::Storage::StorageFile> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2f74576f_0498_5348_bc3b_a70d1a771718
#define WINRT_GENERIC_2f74576f_0498_5348_bc3b_a70d1a771718
template <> struct __declspec(uuid("2f74576f-0498-5348-bc3b-a70d1a771718")) __declspec(novtable) IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult> : impl_IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult> {};
#endif

#ifndef WINRT_GENERIC_6e6e228a_f618_5d33_8523_02d16672665b
#define WINRT_GENERIC_6e6e228a_f618_5d33_8523_02d16672665b
template <> struct __declspec(uuid("6e6e228a-f618-5d33-8523-02d16672665b")) __declspec(novtable) IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> : impl_IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_75d78736_6c52_551e_ab5f_50674f323431
#define WINRT_GENERIC_75d78736_6c52_551e_ab5f_50674f323431
template <> struct __declspec(uuid("75d78736-6c52-551e-ab5f-50674f323431")) __declspec(novtable) IAsyncOperation<Windows::Devices::Scanners::ImageScanner> : impl_IAsyncOperation<Windows::Devices::Scanners::ImageScanner> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_43e29f53_0298_55aa_a6c8_4edd323d9598
#define WINRT_GENERIC_43e29f53_0298_55aa_a6c8_4edd323d9598
template <> struct __declspec(uuid("43e29f53-0298-55aa-a6c8-4edd323d9598")) __declspec(novtable) IIterator<Windows::Storage::StorageFile> : impl_IIterator<Windows::Storage::StorageFile> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c054a410_ac3c_5353_b1ee_e85e78faf3f1
#define WINRT_GENERIC_c054a410_ac3c_5353_b1ee_e85e78faf3f1
template <> struct __declspec(uuid("c054a410-ac3c-5353-b1ee-e85e78faf3f1")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Scanners::ImageScannerPreviewResult> : impl_AsyncOperationCompletedHandler<Windows::Devices::Scanners::ImageScannerPreviewResult> {};
#endif

#ifndef WINRT_GENERIC_d1662baa_4f20_5d18_97f1_a01a6d0dd980
#define WINRT_GENERIC_d1662baa_4f20_5d18_97f1_a01a6d0dd980
template <> struct __declspec(uuid("d1662baa-4f20-5d18-97f1-a01a6d0dd980")) __declspec(novtable) AsyncOperationProgressHandler<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> : impl_AsyncOperationProgressHandler<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_bd8bdbd8_459a_52dc_b101_75b398a61aef
#define WINRT_GENERIC_bd8bdbd8_459a_52dc_b101_75b398a61aef
template <> struct __declspec(uuid("bd8bdbd8-459a-52dc-b101-75b398a61aef")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> : impl_AsyncOperationWithProgressCompletedHandler<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> {};
#endif

#ifndef WINRT_GENERIC_b35ad6b4_0da0_5241_87ff_eef3a1883243
#define WINRT_GENERIC_b35ad6b4_0da0_5241_87ff_eef3a1883243
template <> struct __declspec(uuid("b35ad6b4-0da0-5241-87ff-eef3a1883243")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Scanners::ImageScanner> : impl_AsyncOperationCompletedHandler<Windows::Devices::Scanners::ImageScanner> {};
#endif


}

namespace Windows::Devices::Scanners {

template <typename D>
struct WINRT_EBO impl_IImageScanner
{
    hstring DeviceId() const;
    Windows::Devices::Scanners::ImageScannerScanSource DefaultScanSource() const;
    bool IsScanSourceSupported(Windows::Devices::Scanners::ImageScannerScanSource value) const;
    Windows::Devices::Scanners::ImageScannerFlatbedConfiguration FlatbedConfiguration() const;
    Windows::Devices::Scanners::ImageScannerFeederConfiguration FeederConfiguration() const;
    Windows::Devices::Scanners::ImageScannerAutoConfiguration AutoConfiguration() const;
    bool IsPreviewSupported(Windows::Devices::Scanners::ImageScannerScanSource scanSource) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult> ScanPreviewToStreamAsync(Windows::Devices::Scanners::ImageScannerScanSource scanSource, const Windows::Storage::Streams::IRandomAccessStream & targetStream) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> ScanFilesToFolderAsync(Windows::Devices::Scanners::ImageScannerScanSource scanSource, const Windows::Storage::StorageFolder & storageFolder) const;
};

template <typename D>
struct WINRT_EBO impl_IImageScannerFeederConfiguration
{
    bool CanAutoDetectPageSize() const;
    bool AutoDetectPageSize() const;
    void AutoDetectPageSize(bool value) const;
    Windows::Graphics::Printing::PrintMediaSize PageSize() const;
    void PageSize(Windows::Graphics::Printing::PrintMediaSize value) const;
    Windows::Graphics::Printing::PrintOrientation PageOrientation() const;
    void PageOrientation(Windows::Graphics::Printing::PrintOrientation value) const;
    Windows::Foundation::Size PageSizeDimensions() const;
    bool IsPageSizeSupported(Windows::Graphics::Printing::PrintMediaSize pageSize, Windows::Graphics::Printing::PrintOrientation pageOrientation) const;
    uint32_t MaxNumberOfPages() const;
    void MaxNumberOfPages(uint32_t value) const;
    bool CanScanDuplex() const;
    bool Duplex() const;
    void Duplex(bool value) const;
    bool CanScanAhead() const;
    bool ScanAhead() const;
    void ScanAhead(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IImageScannerFormatConfiguration
{
    Windows::Devices::Scanners::ImageScannerFormat DefaultFormat() const;
    Windows::Devices::Scanners::ImageScannerFormat Format() const;
    void Format(Windows::Devices::Scanners::ImageScannerFormat value) const;
    bool IsFormatSupported(Windows::Devices::Scanners::ImageScannerFormat value) const;
};

template <typename D>
struct WINRT_EBO impl_IImageScannerPreviewResult
{
    bool Succeeded() const;
    Windows::Devices::Scanners::ImageScannerFormat Format() const;
};

template <typename D>
struct WINRT_EBO impl_IImageScannerScanResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> ScannedFiles() const;
};

template <typename D>
struct WINRT_EBO impl_IImageScannerSourceConfiguration
{
    Windows::Foundation::Size MinScanArea() const;
    Windows::Foundation::Size MaxScanArea() const;
    Windows::Foundation::Rect SelectedScanRegion() const;
    void SelectedScanRegion(const Windows::Foundation::Rect & value) const;
    Windows::Devices::Scanners::ImageScannerAutoCroppingMode AutoCroppingMode() const;
    void AutoCroppingMode(Windows::Devices::Scanners::ImageScannerAutoCroppingMode value) const;
    bool IsAutoCroppingModeSupported(Windows::Devices::Scanners::ImageScannerAutoCroppingMode value) const;
    Windows::Devices::Scanners::ImageScannerResolution MinResolution() const;
    Windows::Devices::Scanners::ImageScannerResolution MaxResolution() const;
    Windows::Devices::Scanners::ImageScannerResolution OpticalResolution() const;
    Windows::Devices::Scanners::ImageScannerResolution DesiredResolution() const;
    void DesiredResolution(const Windows::Devices::Scanners::ImageScannerResolution & value) const;
    Windows::Devices::Scanners::ImageScannerResolution ActualResolution() const;
    Windows::Devices::Scanners::ImageScannerColorMode DefaultColorMode() const;
    Windows::Devices::Scanners::ImageScannerColorMode ColorMode() const;
    void ColorMode(Windows::Devices::Scanners::ImageScannerColorMode value) const;
    bool IsColorModeSupported(Windows::Devices::Scanners::ImageScannerColorMode value) const;
    int32_t MinBrightness() const;
    int32_t MaxBrightness() const;
    uint32_t BrightnessStep() const;
    int32_t DefaultBrightness() const;
    int32_t Brightness() const;
    void Brightness(int32_t value) const;
    int32_t MinContrast() const;
    int32_t MaxContrast() const;
    uint32_t ContrastStep() const;
    int32_t DefaultContrast() const;
    int32_t Contrast() const;
    void Contrast(int32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IImageScannerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> FromIdAsync(hstring_ref deviceId) const;
    hstring GetDeviceSelector() const;
};

struct IImageScanner :
    Windows::IInspectable,
    impl::consume<IImageScanner>
{
    IImageScanner(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageScanner>(m_ptr); }
};

struct IImageScannerFeederConfiguration :
    Windows::IInspectable,
    impl::consume<IImageScannerFeederConfiguration>,
    impl::require<IImageScannerFeederConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration, Windows::Devices::Scanners::IImageScannerSourceConfiguration>
{
    IImageScannerFeederConfiguration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageScannerFeederConfiguration>(m_ptr); }
};

struct IImageScannerFormatConfiguration :
    Windows::IInspectable,
    impl::consume<IImageScannerFormatConfiguration>
{
    IImageScannerFormatConfiguration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageScannerFormatConfiguration>(m_ptr); }
};

struct IImageScannerPreviewResult :
    Windows::IInspectable,
    impl::consume<IImageScannerPreviewResult>
{
    IImageScannerPreviewResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageScannerPreviewResult>(m_ptr); }
};

struct IImageScannerScanResult :
    Windows::IInspectable,
    impl::consume<IImageScannerScanResult>
{
    IImageScannerScanResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageScannerScanResult>(m_ptr); }
};

struct IImageScannerSourceConfiguration :
    Windows::IInspectable,
    impl::consume<IImageScannerSourceConfiguration>,
    impl::require<IImageScannerSourceConfiguration, Windows::Devices::Scanners::IImageScannerFormatConfiguration>
{
    IImageScannerSourceConfiguration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageScannerSourceConfiguration>(m_ptr); }
};

struct IImageScannerStatics :
    Windows::IInspectable,
    impl::consume<IImageScannerStatics>
{
    IImageScannerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageScannerStatics>(m_ptr); }
};

}

}
