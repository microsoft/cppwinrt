// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Graphics.Display.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Graphics::Display {

struct __declspec(uuid("dbdd8b01-f1a1-46d1-9ee3-543bcc995980")) __declspec(novtable) DisplayPropertiesEventHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::IInspectable * sender) = 0;
};

struct __declspec(uuid("bed112ae-adc3-4dc9-ae65-851f4d7d4799")) __declspec(novtable) IDisplayInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CurrentOrientation(winrt::Windows::Graphics::Display::DisplayOrientations * value) = 0;
    virtual HRESULT __stdcall get_NativeOrientation(winrt::Windows::Graphics::Display::DisplayOrientations * value) = 0;
    virtual HRESULT __stdcall add_OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_OrientationChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_ResolutionScale(winrt::Windows::Graphics::Display::ResolutionScale * value) = 0;
    virtual HRESULT __stdcall get_LogicalDpi(float * value) = 0;
    virtual HRESULT __stdcall get_RawDpiX(float * value) = 0;
    virtual HRESULT __stdcall get_RawDpiY(float * value) = 0;
    virtual HRESULT __stdcall add_DpiChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DpiChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_StereoEnabled(bool * value) = 0;
    virtual HRESULT __stdcall add_StereoEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StereoEnabledChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetColorProfileAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ** asyncInfo) = 0;
    virtual HRESULT __stdcall add_ColorProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ColorProfileChanged(event_token token) = 0;
};

struct __declspec(uuid("4dcd0021-fad1-4b8e-8edf-775887b8bf19")) __declspec(novtable) IDisplayInformation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RawPixelsPerViewPixel(double * value) = 0;
};

struct __declspec(uuid("db15011d-0f09-4466-8ff3-11de9a3c929a")) __declspec(novtable) IDisplayInformation3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DiagonalSizeInInches(Windows::Foundation::IReference<double> ** value) = 0;
};

struct __declspec(uuid("c972ce2f-1242-46be-b536-e1aafe9e7acf")) __declspec(novtable) IDisplayInformation4 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ScreenWidthInRawPixels(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ScreenHeightInRawPixels(uint32_t * value) = 0;
};

struct __declspec(uuid("c6a02a6c-d452-44dc-ba07-96f3c6adf9d1")) __declspec(novtable) IDisplayInformationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::Graphics::Display::IDisplayInformation ** current) = 0;
    virtual HRESULT __stdcall get_AutoRotationPreferences(winrt::Windows::Graphics::Display::DisplayOrientations * value) = 0;
    virtual HRESULT __stdcall put_AutoRotationPreferences(winrt::Windows::Graphics::Display::DisplayOrientations value) = 0;
    virtual HRESULT __stdcall add_DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DisplayContentsInvalidated(event_token token) = 0;
};

struct __declspec(uuid("6937ed8d-30ea-4ded-8271-4553ff02f68a")) __declspec(novtable) IDisplayPropertiesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CurrentOrientation(winrt::Windows::Graphics::Display::DisplayOrientations * value) = 0;
    virtual HRESULT __stdcall get_NativeOrientation(winrt::Windows::Graphics::Display::DisplayOrientations * value) = 0;
    virtual HRESULT __stdcall get_AutoRotationPreferences(winrt::Windows::Graphics::Display::DisplayOrientations * value) = 0;
    virtual HRESULT __stdcall put_AutoRotationPreferences(winrt::Windows::Graphics::Display::DisplayOrientations value) = 0;
    virtual HRESULT __stdcall add_OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_OrientationChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_ResolutionScale(winrt::Windows::Graphics::Display::ResolutionScale * value) = 0;
    virtual HRESULT __stdcall get_LogicalDpi(float * value) = 0;
    virtual HRESULT __stdcall add_LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LogicalDpiChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_StereoEnabled(bool * value) = 0;
    virtual HRESULT __stdcall add_StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StereoEnabledChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_GetColorProfileAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> ** asyncInfo) = 0;
    virtual HRESULT __stdcall add_ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ColorProfileChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DisplayContentsInvalidated(event_token token) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Graphics::Display::DisplayInformation> { using default_interface = Windows::Graphics::Display::IDisplayInformation; };

}

namespace Windows::Graphics::Display {

template <typename T> struct impl_IDisplayInformation;
template <typename T> struct impl_IDisplayInformation2;
template <typename T> struct impl_IDisplayInformation3;
template <typename T> struct impl_IDisplayInformation4;
template <typename T> struct impl_IDisplayInformationStatics;
template <typename T> struct impl_IDisplayPropertiesStatics;
template <typename T> struct impl_DisplayPropertiesEventHandler;

}

namespace impl {

template <> struct traits<Windows::Graphics::Display::DisplayPropertiesEventHandler>
{
    using abi = ABI::Windows::Graphics::Display::DisplayPropertiesEventHandler;
};

template <> struct traits<Windows::Graphics::Display::IDisplayInformation>
{
    using abi = ABI::Windows::Graphics::Display::IDisplayInformation;
    template <typename D> using consume = Windows::Graphics::Display::impl_IDisplayInformation<D>;
};

template <> struct traits<Windows::Graphics::Display::IDisplayInformation2>
{
    using abi = ABI::Windows::Graphics::Display::IDisplayInformation2;
    template <typename D> using consume = Windows::Graphics::Display::impl_IDisplayInformation2<D>;
};

template <> struct traits<Windows::Graphics::Display::IDisplayInformation3>
{
    using abi = ABI::Windows::Graphics::Display::IDisplayInformation3;
    template <typename D> using consume = Windows::Graphics::Display::impl_IDisplayInformation3<D>;
};

template <> struct traits<Windows::Graphics::Display::IDisplayInformation4>
{
    using abi = ABI::Windows::Graphics::Display::IDisplayInformation4;
    template <typename D> using consume = Windows::Graphics::Display::impl_IDisplayInformation4<D>;
};

template <> struct traits<Windows::Graphics::Display::IDisplayInformationStatics>
{
    using abi = ABI::Windows::Graphics::Display::IDisplayInformationStatics;
    template <typename D> using consume = Windows::Graphics::Display::impl_IDisplayInformationStatics<D>;
};

template <> struct traits<Windows::Graphics::Display::IDisplayPropertiesStatics>
{
    using abi = ABI::Windows::Graphics::Display::IDisplayPropertiesStatics;
    template <typename D> using consume = Windows::Graphics::Display::impl_IDisplayPropertiesStatics<D>;
};

template <> struct traits<Windows::Graphics::Display::DisplayInformation>
{
    using abi = ABI::Windows::Graphics::Display::DisplayInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Display.DisplayInformation"; }
};

template <> struct traits<Windows::Graphics::Display::DisplayProperties>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Graphics.Display.DisplayProperties"; }
};

}

}
