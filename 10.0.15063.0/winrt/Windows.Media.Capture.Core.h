// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Capture.Core.2.h"
#include "winrt/Windows.Media.Capture.h"

namespace winrt::impl {

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::UsedFrameControllerIndex() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_UsedFrameControllerIndex(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrameControlValues consume_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs<D>::CapturedFrameControlValues() const
{
    Windows::Media::Capture::CapturedFrameControlValues value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs)->get_CapturedFrameControlValues(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->StopAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->add_PhotoCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>(this, &abi_t<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>::remove_PhotoCaptured, PhotoCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::PhotoCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->remove_PhotoCaptured(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>(this, &abi_t<Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2<D>::UpdateSettingsAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2)->UpdateSettingsAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsedFrameControllerIndex(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsedFrameControllerIndex());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapturedFrameControlValues(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CapturedFrameControlValues());
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
struct produce<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture>
{
    HRESULT __stdcall StartAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoCaptured(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PhotoCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoCaptured(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Core::VariablePhotoSequenceCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> : produce_base<D, Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2>
{
    HRESULT __stdcall UpdateSettingsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateSettingsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Core {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Core::IVariablePhotoCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture> {};

template<> struct hash<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Core::IVariablePhotoSequenceCapture2> {};

template<> struct hash<winrt::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::Core::VariablePhotoSequenceCapture> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Core::VariablePhotoSequenceCapture> {};

}

WINRT_WARNING_POP
