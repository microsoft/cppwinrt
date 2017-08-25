// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

struct CapturedFrame;
struct CapturedFrameControlValues;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core {

struct IVariablePhotoCapturedEventArgs;
struct IVariablePhotoSequenceCapture;
struct IVariablePhotoSequenceCapture2;
struct VariablePhotoCapturedEventArgs;
struct VariablePhotoSequenceCapture;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>{ using type = interface_category; };
template <> struct category<Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>{ using type = class_category; };
template <> struct name<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture" }; };
template <> struct name<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>{ static constexpr auto & value{ L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2" }; };
template <> struct name<Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs" }; };
template <> struct name<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>{ static constexpr auto & value{ L"Windows.Media.Capture.Core.VariablePhotoSequenceCapture" }; };
template <> struct guid<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>{ static constexpr GUID value{ 0xD1EB4C5C,0x1B53,0x4E4A,{ 0x8B,0x5C,0xDB,0x78,0x87,0xAC,0x94,0x9B } }; };
template <> struct guid<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>{ static constexpr GUID value{ 0xD0112D1D,0x031E,0x4041,{ 0xA6,0xD6,0xBD,0x74,0x24,0x76,0xA8,0xEE } }; };
template <> struct guid<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>{ static constexpr GUID value{ 0xFE2C62BC,0x50B0,0x43E3,{ 0x91,0x7C,0xE3,0xB9,0x27,0x98,0x94,0x2F } }; };
template <> struct default_interface<Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>{ using type = Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs; };
template <> struct default_interface<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>{ using type = Windows::Media::Capture::Core::IVariablePhotoSequenceCapture; };

template <typename D>
struct consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
    Windows::Foundation::IReference<uint32_t> UsedFrameControllerIndex() const;
    Windows::Media::Capture::CapturedFrameControlValues CapturedFrameControlValues() const;
};
template <> struct consume<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> { template <typename D> using type = consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
    event_token PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const;
    using PhotoCaptured_revoker = event_revoker<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>;
    PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const;
    void PhotoCaptured(event_token const& token) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(event_token const& token) const;
};
template <> struct consume<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> { template <typename D> using type = consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>; };

template <typename D>
struct consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2
{
    Windows::Foundation::IAsyncAction UpdateSettingsAsync() const;
};
template <> struct consume<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> { template <typename D> using type = consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2<D>; };

template <> struct abi<Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Frame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CaptureTimeOffset(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_UsedFrameControllerIndex(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CapturedFrameControlValues(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FinishAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_PhotoCaptured(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PhotoCaptured(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall UpdateSettingsAsync(::IUnknown** operation) = 0;
};};

}
