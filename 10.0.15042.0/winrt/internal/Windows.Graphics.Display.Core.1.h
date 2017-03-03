// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Graphics.Display.Core.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Display::Core {

struct HdmiDisplayHdr2086Metadata
{
    uint16_t RedPrimaryX;
    uint16_t RedPrimaryY;
    uint16_t GreenPrimaryX;
    uint16_t GreenPrimaryY;
    uint16_t BluePrimaryX;
    uint16_t BluePrimaryY;
    uint16_t WhitePointX;
    uint16_t WhitePointY;
    uint16_t MaxMasteringLuminance;
    uint16_t MinMasteringLuminance;
    uint16_t MaxContentLightLevel;
    uint16_t MaxFrameAverageLightLevel;
};

}

namespace Windows::Graphics::Display::Core {

using HdmiDisplayHdr2086Metadata = ABI::Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata;

}

namespace ABI::Windows::Graphics::Display::Core {

struct __declspec(uuid("130b3c0a-f565-476e-abd5-ea05aee74c69")) __declspec(novtable) IHdmiDisplayInformation : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetSupportedDisplayModes(Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> ** result) = 0;
    virtual HRESULT __stdcall abi_GetCurrentDisplayMode(Windows::Graphics::Display::Core::IHdmiDisplayMode ** result) = 0;
    virtual HRESULT __stdcall abi_SetDefaultDisplayModeAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::IHdmiDisplayMode * mode, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestSetCurrentDisplayModeWithHdrAsync(Windows::Graphics::Display::Core::IHdmiDisplayMode * mode, winrt::Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(Windows::Graphics::Display::Core::IHdmiDisplayMode * mode, winrt::Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata hdrMetadata, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall add_DisplayModesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DisplayModesChanged(event_token token) = 0;
};

struct __declspec(uuid("6ce6b260-f42a-4a15-914c-7b8e2a5a65df")) __declspec(novtable) IHdmiDisplayInformationStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Graphics::Display::Core::IHdmiDisplayInformation ** result) = 0;
};

struct __declspec(uuid("0c06d5ad-1b90-4f51-9981-ef5a1c0ddf66")) __declspec(novtable) IHdmiDisplayMode : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ResolutionWidthInRawPixels(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ResolutionHeightInRawPixels(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_RefreshRate(double * value) = 0;
    virtual HRESULT __stdcall get_StereoEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_BitsPerPixel(uint16_t * value) = 0;
    virtual HRESULT __stdcall abi_IsEqual(Windows::Graphics::Display::Core::IHdmiDisplayMode * mode, bool * result) = 0;
    virtual HRESULT __stdcall get_ColorSpace(winrt::Windows::Graphics::Display::Core::HdmiDisplayColorSpace * value) = 0;
    virtual HRESULT __stdcall get_PixelEncoding(winrt::Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding * value) = 0;
    virtual HRESULT __stdcall get_IsSdrLuminanceSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_IsSmpte2084Supported(bool * value) = 0;
    virtual HRESULT __stdcall get_Is2086MetadataSupported(bool * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Graphics::Display::Core::HdmiDisplayInformation> { using default_interface = Windows::Graphics::Display::Core::IHdmiDisplayInformation; };
template <> struct traits<Windows::Graphics::Display::Core::HdmiDisplayMode> { using default_interface = Windows::Graphics::Display::Core::IHdmiDisplayMode; };

}

namespace Windows::Graphics::Display::Core {

template <typename D>
struct WINRT_EBO impl_IHdmiDisplayInformation
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> GetSupportedDisplayModes() const;
    Windows::Graphics::Display::Core::HdmiDisplayMode GetCurrentDisplayMode() const;
    Windows::Foundation::IAsyncAction SetDefaultDisplayModeAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestSetCurrentDisplayModeAsync(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode) const;
    Windows::Foundation::IAsyncOperation<bool> RequestSetCurrentDisplayModeAsync(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption) const;
    Windows::Foundation::IAsyncOperation<bool> RequestSetCurrentDisplayModeAsync(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, const Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata & hdrMetadata) const;
    event_token DisplayModesChanged(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> & value) const;
    using DisplayModesChanged_revoker = event_revoker<IHdmiDisplayInformation>;
    DisplayModesChanged_revoker DisplayModesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> & value) const;
    void DisplayModesChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IHdmiDisplayInformationStatics
{
    Windows::Graphics::Display::Core::HdmiDisplayInformation GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_IHdmiDisplayMode
{
    uint32_t ResolutionWidthInRawPixels() const;
    uint32_t ResolutionHeightInRawPixels() const;
    double RefreshRate() const;
    bool StereoEnabled() const;
    uint16_t BitsPerPixel() const;
    bool IsEqual(const Windows::Graphics::Display::Core::HdmiDisplayMode & mode) const;
    Windows::Graphics::Display::Core::HdmiDisplayColorSpace ColorSpace() const;
    Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding PixelEncoding() const;
    bool IsSdrLuminanceSupported() const;
    bool IsSmpte2084Supported() const;
    bool Is2086MetadataSupported() const;
};

}

namespace impl {

template <> struct traits<Windows::Graphics::Display::Core::IHdmiDisplayInformation>
{
    using abi = ABI::Windows::Graphics::Display::Core::IHdmiDisplayInformation;
    template <typename D> using consume = Windows::Graphics::Display::Core::impl_IHdmiDisplayInformation<D>;
};

template <> struct traits<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>
{
    using abi = ABI::Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics;
    template <typename D> using consume = Windows::Graphics::Display::Core::impl_IHdmiDisplayInformationStatics<D>;
};

template <> struct traits<Windows::Graphics::Display::Core::IHdmiDisplayMode>
{
    using abi = ABI::Windows::Graphics::Display::Core::IHdmiDisplayMode;
    template <typename D> using consume = Windows::Graphics::Display::Core::impl_IHdmiDisplayMode<D>;
};

template <> struct traits<Windows::Graphics::Display::Core::HdmiDisplayInformation>
{
    using abi = ABI::Windows::Graphics::Display::Core::HdmiDisplayInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Display.Core.HdmiDisplayInformation"; }
};

template <> struct traits<Windows::Graphics::Display::Core::HdmiDisplayMode>
{
    using abi = ABI::Windows::Graphics::Display::Core::HdmiDisplayMode;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Display.Core.HdmiDisplayMode"; }
};

}

}
