// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

enum class PrintMediaSize;
enum class PrintOrientation;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;
struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Scanners {

enum class ImageScannerAutoCroppingMode
{
    Disabled = 0,
    SingleRegion = 1,
    MultipleRegion = 2,
};

enum class ImageScannerColorMode
{
    Color = 0,
    Grayscale = 1,
    Monochrome = 2,
    AutoColor = 3,
};

enum class ImageScannerFormat
{
    Jpeg = 0,
    Png = 1,
    DeviceIndependentBitmap = 2,
    Tiff = 3,
    Xps = 4,
    OpenXps = 5,
    Pdf = 6,
};

enum class ImageScannerScanSource
{
    Default = 0,
    Flatbed = 1,
    Feeder = 2,
    AutoConfigured = 3,
};

struct IImageScanner;
struct IImageScannerFeederConfiguration;
struct IImageScannerFormatConfiguration;
struct IImageScannerPreviewResult;
struct IImageScannerScanResult;
struct IImageScannerSourceConfiguration;
struct IImageScannerStatics;
struct ImageScanner;
struct ImageScannerAutoConfiguration;
struct ImageScannerFeederConfiguration;
struct ImageScannerFlatbedConfiguration;
struct ImageScannerPreviewResult;
struct ImageScannerScanResult;
struct ImageScannerResolution;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Scanners::IImageScanner>{ using type = interface_category; };
template <> struct category<Windows::Devices::Scanners::IImageScannerFeederConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Devices::Scanners::IImageScannerFormatConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Devices::Scanners::IImageScannerPreviewResult>{ using type = interface_category; };
template <> struct category<Windows::Devices::Scanners::IImageScannerScanResult>{ using type = interface_category; };
template <> struct category<Windows::Devices::Scanners::IImageScannerSourceConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Devices::Scanners::IImageScannerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Scanners::ImageScanner>{ using type = class_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerAutoConfiguration>{ using type = class_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerFeederConfiguration>{ using type = class_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerFlatbedConfiguration>{ using type = class_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerPreviewResult>{ using type = class_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerScanResult>{ using type = class_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerAutoCroppingMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerColorMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerFormat>{ using type = enum_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerScanSource>{ using type = enum_category; };
template <> struct category<Windows::Devices::Scanners::ImageScannerResolution>{ using type = struct_category<float,float>; };
template <> struct name<Windows::Devices::Scanners::IImageScanner>{ static constexpr auto & value{ L"Windows.Devices.Scanners.IImageScanner" }; };
template <> struct name<Windows::Devices::Scanners::IImageScannerFeederConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Scanners.IImageScannerFeederConfiguration" }; };
template <> struct name<Windows::Devices::Scanners::IImageScannerFormatConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Scanners.IImageScannerFormatConfiguration" }; };
template <> struct name<Windows::Devices::Scanners::IImageScannerPreviewResult>{ static constexpr auto & value{ L"Windows.Devices.Scanners.IImageScannerPreviewResult" }; };
template <> struct name<Windows::Devices::Scanners::IImageScannerScanResult>{ static constexpr auto & value{ L"Windows.Devices.Scanners.IImageScannerScanResult" }; };
template <> struct name<Windows::Devices::Scanners::IImageScannerSourceConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Scanners.IImageScannerSourceConfiguration" }; };
template <> struct name<Windows::Devices::Scanners::IImageScannerStatics>{ static constexpr auto & value{ L"Windows.Devices.Scanners.IImageScannerStatics" }; };
template <> struct name<Windows::Devices::Scanners::ImageScanner>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScanner" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerAutoConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerAutoConfiguration" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerFeederConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerFeederConfiguration" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerFlatbedConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerFlatbedConfiguration" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerPreviewResult>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerPreviewResult" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerScanResult>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerScanResult" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerAutoCroppingMode>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerAutoCroppingMode" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerColorMode>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerColorMode" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerFormat>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerFormat" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerScanSource>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerScanSource" }; };
template <> struct name<Windows::Devices::Scanners::ImageScannerResolution>{ static constexpr auto & value{ L"Windows.Devices.Scanners.ImageScannerResolution" }; };
template <> struct guid<Windows::Devices::Scanners::IImageScanner>{ static constexpr GUID value{ 0x53A88F78,0x5298,0x48A0,{ 0x8D,0xA3,0x80,0x87,0x51,0x96,0x65,0xE0 } }; };
template <> struct guid<Windows::Devices::Scanners::IImageScannerFeederConfiguration>{ static constexpr GUID value{ 0x74BDACEE,0xFA97,0x4C17,{ 0x82,0x80,0x40,0xE3,0x9C,0x6D,0xCC,0x67 } }; };
template <> struct guid<Windows::Devices::Scanners::IImageScannerFormatConfiguration>{ static constexpr GUID value{ 0xAE275D11,0xDADF,0x4010,{ 0xBF,0x10,0xCC,0xA5,0xC8,0x3D,0xCB,0xB0 } }; };
template <> struct guid<Windows::Devices::Scanners::IImageScannerPreviewResult>{ static constexpr GUID value{ 0x08B7FE8E,0x8891,0x441D,{ 0xBE,0x9C,0x17,0x6F,0xA1,0x09,0xC8,0xBB } }; };
template <> struct guid<Windows::Devices::Scanners::IImageScannerScanResult>{ static constexpr GUID value{ 0xC91624CD,0x9037,0x4E48,{ 0x84,0xC1,0xAC,0x09,0x75,0x07,0x6B,0xC5 } }; };
template <> struct guid<Windows::Devices::Scanners::IImageScannerSourceConfiguration>{ static constexpr GUID value{ 0xBFB50055,0x0B44,0x4C82,{ 0x9E,0x89,0x20,0x5F,0x9C,0x23,0x4E,0x59 } }; };
template <> struct guid<Windows::Devices::Scanners::IImageScannerStatics>{ static constexpr GUID value{ 0xBC57E70E,0xD804,0x4477,{ 0x9F,0xB5,0xB9,0x11,0xB5,0x47,0x38,0x97 } }; };
template <> struct default_interface<Windows::Devices::Scanners::ImageScanner>{ using type = Windows::Devices::Scanners::IImageScanner; };
template <> struct default_interface<Windows::Devices::Scanners::ImageScannerAutoConfiguration>{ using type = Windows::Devices::Scanners::IImageScannerFormatConfiguration; };
template <> struct default_interface<Windows::Devices::Scanners::ImageScannerFeederConfiguration>{ using type = Windows::Devices::Scanners::IImageScannerFormatConfiguration; };
template <> struct default_interface<Windows::Devices::Scanners::ImageScannerFlatbedConfiguration>{ using type = Windows::Devices::Scanners::IImageScannerFormatConfiguration; };
template <> struct default_interface<Windows::Devices::Scanners::ImageScannerPreviewResult>{ using type = Windows::Devices::Scanners::IImageScannerPreviewResult; };
template <> struct default_interface<Windows::Devices::Scanners::ImageScannerScanResult>{ using type = Windows::Devices::Scanners::IImageScannerScanResult; };

template <typename D>
struct consume_Windows_Devices_Scanners_IImageScanner
{
    hstring DeviceId() const;
    Windows::Devices::Scanners::ImageScannerScanSource DefaultScanSource() const;
    bool IsScanSourceSupported(Windows::Devices::Scanners::ImageScannerScanSource const& value) const;
    Windows::Devices::Scanners::ImageScannerFlatbedConfiguration FlatbedConfiguration() const;
    Windows::Devices::Scanners::ImageScannerFeederConfiguration FeederConfiguration() const;
    Windows::Devices::Scanners::ImageScannerAutoConfiguration AutoConfiguration() const;
    bool IsPreviewSupported(Windows::Devices::Scanners::ImageScannerScanSource const& scanSource) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScannerPreviewResult> ScanPreviewToStreamAsync(Windows::Devices::Scanners::ImageScannerScanSource const& scanSource, Windows::Storage::Streams::IRandomAccessStream const& targetStream) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Devices::Scanners::ImageScannerScanResult, uint32_t> ScanFilesToFolderAsync(Windows::Devices::Scanners::ImageScannerScanSource const& scanSource, Windows::Storage::StorageFolder const& storageFolder) const;
};
template <> struct consume<Windows::Devices::Scanners::IImageScanner> { template <typename D> using type = consume_Windows_Devices_Scanners_IImageScanner<D>; };

template <typename D>
struct consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration
{
    bool CanAutoDetectPageSize() const;
    bool AutoDetectPageSize() const;
    void AutoDetectPageSize(bool value) const;
    Windows::Graphics::Printing::PrintMediaSize PageSize() const;
    void PageSize(Windows::Graphics::Printing::PrintMediaSize const& value) const;
    Windows::Graphics::Printing::PrintOrientation PageOrientation() const;
    void PageOrientation(Windows::Graphics::Printing::PrintOrientation const& value) const;
    Windows::Foundation::Size PageSizeDimensions() const;
    bool IsPageSizeSupported(Windows::Graphics::Printing::PrintMediaSize const& pageSize, Windows::Graphics::Printing::PrintOrientation const& pageOrientation) const;
    uint32_t MaxNumberOfPages() const;
    void MaxNumberOfPages(uint32_t value) const;
    bool CanScanDuplex() const;
    bool Duplex() const;
    void Duplex(bool value) const;
    bool CanScanAhead() const;
    bool ScanAhead() const;
    void ScanAhead(bool value) const;
};
template <> struct consume<Windows::Devices::Scanners::IImageScannerFeederConfiguration> { template <typename D> using type = consume_Windows_Devices_Scanners_IImageScannerFeederConfiguration<D>; };

template <typename D>
struct consume_Windows_Devices_Scanners_IImageScannerFormatConfiguration
{
    Windows::Devices::Scanners::ImageScannerFormat DefaultFormat() const;
    Windows::Devices::Scanners::ImageScannerFormat Format() const;
    void Format(Windows::Devices::Scanners::ImageScannerFormat const& value) const;
    bool IsFormatSupported(Windows::Devices::Scanners::ImageScannerFormat const& value) const;
};
template <> struct consume<Windows::Devices::Scanners::IImageScannerFormatConfiguration> { template <typename D> using type = consume_Windows_Devices_Scanners_IImageScannerFormatConfiguration<D>; };

template <typename D>
struct consume_Windows_Devices_Scanners_IImageScannerPreviewResult
{
    bool Succeeded() const;
    Windows::Devices::Scanners::ImageScannerFormat Format() const;
};
template <> struct consume<Windows::Devices::Scanners::IImageScannerPreviewResult> { template <typename D> using type = consume_Windows_Devices_Scanners_IImageScannerPreviewResult<D>; };

template <typename D>
struct consume_Windows_Devices_Scanners_IImageScannerScanResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> ScannedFiles() const;
};
template <> struct consume<Windows::Devices::Scanners::IImageScannerScanResult> { template <typename D> using type = consume_Windows_Devices_Scanners_IImageScannerScanResult<D>; };

template <typename D>
struct consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration
{
    Windows::Foundation::Size MinScanArea() const;
    Windows::Foundation::Size MaxScanArea() const;
    Windows::Foundation::Rect SelectedScanRegion() const;
    void SelectedScanRegion(Windows::Foundation::Rect const& value) const;
    Windows::Devices::Scanners::ImageScannerAutoCroppingMode AutoCroppingMode() const;
    void AutoCroppingMode(Windows::Devices::Scanners::ImageScannerAutoCroppingMode const& value) const;
    bool IsAutoCroppingModeSupported(Windows::Devices::Scanners::ImageScannerAutoCroppingMode const& value) const;
    Windows::Devices::Scanners::ImageScannerResolution MinResolution() const;
    Windows::Devices::Scanners::ImageScannerResolution MaxResolution() const;
    Windows::Devices::Scanners::ImageScannerResolution OpticalResolution() const;
    Windows::Devices::Scanners::ImageScannerResolution DesiredResolution() const;
    void DesiredResolution(Windows::Devices::Scanners::ImageScannerResolution const& value) const;
    Windows::Devices::Scanners::ImageScannerResolution ActualResolution() const;
    Windows::Devices::Scanners::ImageScannerColorMode DefaultColorMode() const;
    Windows::Devices::Scanners::ImageScannerColorMode ColorMode() const;
    void ColorMode(Windows::Devices::Scanners::ImageScannerColorMode const& value) const;
    bool IsColorModeSupported(Windows::Devices::Scanners::ImageScannerColorMode const& value) const;
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
template <> struct consume<Windows::Devices::Scanners::IImageScannerSourceConfiguration> { template <typename D> using type = consume_Windows_Devices_Scanners_IImageScannerSourceConfiguration<D>; };

template <typename D>
struct consume_Windows_Devices_Scanners_IImageScannerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Scanners::ImageScanner> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Scanners::IImageScannerStatics> { template <typename D> using type = consume_Windows_Devices_Scanners_IImageScannerStatics<D>; };

template <> struct abi<Windows::Devices::Scanners::IImageScanner>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DefaultScanSource(abi_t<Windows::Devices::Scanners::ImageScannerScanSource>* value) = 0;
    virtual HRESULT __stdcall IsScanSourceSupported(abi_t<Windows::Devices::Scanners::ImageScannerScanSource> value, bool* result) = 0;
    virtual HRESULT __stdcall get_FlatbedConfiguration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FeederConfiguration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AutoConfiguration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall IsPreviewSupported(abi_t<Windows::Devices::Scanners::ImageScannerScanSource> scanSource, bool* result) = 0;
    virtual HRESULT __stdcall ScanPreviewToStreamAsync(abi_t<Windows::Devices::Scanners::ImageScannerScanSource> scanSource, ::IUnknown* targetStream, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ScanFilesToFolderAsync(abi_t<Windows::Devices::Scanners::ImageScannerScanSource> scanSource, ::IUnknown* storageFolder, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Scanners::IImageScannerFeederConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanAutoDetectPageSize(bool* value) = 0;
    virtual HRESULT __stdcall get_AutoDetectPageSize(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoDetectPageSize(bool value) = 0;
    virtual HRESULT __stdcall get_PageSize(abi_t<Windows::Graphics::Printing::PrintMediaSize>* value) = 0;
    virtual HRESULT __stdcall put_PageSize(abi_t<Windows::Graphics::Printing::PrintMediaSize> value) = 0;
    virtual HRESULT __stdcall get_PageOrientation(abi_t<Windows::Graphics::Printing::PrintOrientation>* value) = 0;
    virtual HRESULT __stdcall put_PageOrientation(abi_t<Windows::Graphics::Printing::PrintOrientation> value) = 0;
    virtual HRESULT __stdcall get_PageSizeDimensions(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall IsPageSizeSupported(abi_t<Windows::Graphics::Printing::PrintMediaSize> pageSize, abi_t<Windows::Graphics::Printing::PrintOrientation> pageOrientation, bool* result) = 0;
    virtual HRESULT __stdcall get_MaxNumberOfPages(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxNumberOfPages(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CanScanDuplex(bool* value) = 0;
    virtual HRESULT __stdcall get_Duplex(bool* value) = 0;
    virtual HRESULT __stdcall put_Duplex(bool value) = 0;
    virtual HRESULT __stdcall get_CanScanAhead(bool* value) = 0;
    virtual HRESULT __stdcall get_ScanAhead(bool* value) = 0;
    virtual HRESULT __stdcall put_ScanAhead(bool value) = 0;
};};

template <> struct abi<Windows::Devices::Scanners::IImageScannerFormatConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DefaultFormat(abi_t<Windows::Devices::Scanners::ImageScannerFormat>* value) = 0;
    virtual HRESULT __stdcall get_Format(abi_t<Windows::Devices::Scanners::ImageScannerFormat>* value) = 0;
    virtual HRESULT __stdcall put_Format(abi_t<Windows::Devices::Scanners::ImageScannerFormat> value) = 0;
    virtual HRESULT __stdcall IsFormatSupported(abi_t<Windows::Devices::Scanners::ImageScannerFormat> value, bool* result) = 0;
};};

template <> struct abi<Windows::Devices::Scanners::IImageScannerPreviewResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Succeeded(bool* value) = 0;
    virtual HRESULT __stdcall get_Format(abi_t<Windows::Devices::Scanners::ImageScannerFormat>* value) = 0;
};};

template <> struct abi<Windows::Devices::Scanners::IImageScannerScanResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ScannedFiles(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Scanners::IImageScannerSourceConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MinScanArea(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_MaxScanArea(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_SelectedScanRegion(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_SelectedScanRegion(abi_t<Windows::Foundation::Rect> value) = 0;
    virtual HRESULT __stdcall get_AutoCroppingMode(abi_t<Windows::Devices::Scanners::ImageScannerAutoCroppingMode>* value) = 0;
    virtual HRESULT __stdcall put_AutoCroppingMode(abi_t<Windows::Devices::Scanners::ImageScannerAutoCroppingMode> value) = 0;
    virtual HRESULT __stdcall IsAutoCroppingModeSupported(abi_t<Windows::Devices::Scanners::ImageScannerAutoCroppingMode> value, bool* result) = 0;
    virtual HRESULT __stdcall get_MinResolution(abi_t<Windows::Devices::Scanners::ImageScannerResolution>* value) = 0;
    virtual HRESULT __stdcall get_MaxResolution(abi_t<Windows::Devices::Scanners::ImageScannerResolution>* value) = 0;
    virtual HRESULT __stdcall get_OpticalResolution(abi_t<Windows::Devices::Scanners::ImageScannerResolution>* value) = 0;
    virtual HRESULT __stdcall get_DesiredResolution(abi_t<Windows::Devices::Scanners::ImageScannerResolution>* value) = 0;
    virtual HRESULT __stdcall put_DesiredResolution(abi_t<Windows::Devices::Scanners::ImageScannerResolution> value) = 0;
    virtual HRESULT __stdcall get_ActualResolution(abi_t<Windows::Devices::Scanners::ImageScannerResolution>* value) = 0;
    virtual HRESULT __stdcall get_DefaultColorMode(abi_t<Windows::Devices::Scanners::ImageScannerColorMode>* value) = 0;
    virtual HRESULT __stdcall get_ColorMode(abi_t<Windows::Devices::Scanners::ImageScannerColorMode>* value) = 0;
    virtual HRESULT __stdcall put_ColorMode(abi_t<Windows::Devices::Scanners::ImageScannerColorMode> value) = 0;
    virtual HRESULT __stdcall IsColorModeSupported(abi_t<Windows::Devices::Scanners::ImageScannerColorMode> value, bool* result) = 0;
    virtual HRESULT __stdcall get_MinBrightness(int32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxBrightness(int32_t* value) = 0;
    virtual HRESULT __stdcall get_BrightnessStep(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DefaultBrightness(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Brightness(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Brightness(int32_t value) = 0;
    virtual HRESULT __stdcall get_MinContrast(int32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxContrast(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ContrastStep(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DefaultContrast(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Contrast(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Contrast(int32_t value) = 0;
};};

template <> struct abi<Windows::Devices::Scanners::IImageScannerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* selector) = 0;
};};

}
