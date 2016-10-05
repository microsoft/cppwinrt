// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Capture.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_bab30230_3dcd_58e2_aac5_a45f3e6f8097
#define WINRT_GENERIC_bab30230_3dcd_58e2_aac5_a45f3e6f8097
template <> struct __declspec(uuid("bab30230-3dcd-58e2-aac5-a45f3e6f8097")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> : impl_TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_2210a640_0e7b_5e8f_a617_2cbb10314a5a
#define WINRT_GENERIC_2210a640_0e7b_5e8f_a617_2cbb10314a5a
template <> struct __declspec(uuid("2210a640-0e7b-5e8f-a617-2cbb10314a5a")) __declspec(novtable) TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable> {};
#endif


}

namespace Windows::Media::Capture::Core {

template <typename D>
struct WINRT_EBO impl_IVariablePhotoCapturedEventArgs
{
    Windows::Media::Capture::CapturedFrame Frame() const;
    Windows::Foundation::TimeSpan CaptureTimeOffset() const;
    Windows::Foundation::IReference<uint32_t> UsedFrameControllerIndex() const;
    Windows::Media::Capture::CapturedFrameControlValues CapturedFrameControlValues() const;
};

template <typename D>
struct WINRT_EBO impl_IVariablePhotoSequenceCapture
{
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
    Windows::Foundation::IAsyncAction FinishAsync() const;
    event_token PhotoCaptured(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> & handler) const;
    using PhotoCaptured_revoker = event_revoker<IVariablePhotoSequenceCapture>;
    PhotoCaptured_revoker PhotoCaptured(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> & handler) const;
    void PhotoCaptured(event_token token) const;
    event_token Stopped(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable> & handler) const;
    using Stopped_revoker = event_revoker<IVariablePhotoSequenceCapture>;
    Stopped_revoker Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::IInspectable> & handler) const;
    void Stopped(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IVariablePhotoSequenceCapture2
{
    Windows::Foundation::IAsyncAction UpdateSettingsAsync() const;
};

struct IVariablePhotoCapturedEventArgs :
    Windows::IInspectable,
    impl::consume<IVariablePhotoCapturedEventArgs>
{
    IVariablePhotoCapturedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVariablePhotoCapturedEventArgs>(m_ptr); }
};

struct IVariablePhotoSequenceCapture :
    Windows::IInspectable,
    impl::consume<IVariablePhotoSequenceCapture>
{
    IVariablePhotoSequenceCapture(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVariablePhotoSequenceCapture>(m_ptr); }
};

struct IVariablePhotoSequenceCapture2 :
    Windows::IInspectable,
    impl::consume<IVariablePhotoSequenceCapture2>
{
    IVariablePhotoSequenceCapture2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVariablePhotoSequenceCapture2>(m_ptr); }
};

}

}
