// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Input.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_Input_IKeyboardCapabilities<D>::KeyboardPresent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IKeyboardCapabilities)->get_KeyboardPresent(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Input_IMouseCapabilities<D>::MousePresent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_MousePresent(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Input_IMouseCapabilities<D>::VerticalWheelPresent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_VerticalWheelPresent(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Input_IMouseCapabilities<D>::HorizontalWheelPresent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_HorizontalWheelPresent(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Input_IMouseCapabilities<D>::SwapButtons() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_SwapButtons(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Input_IMouseCapabilities<D>::NumberOfButtons() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseCapabilities)->get_NumberOfButtons(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Input_IMouseDevice<D>::MouseMoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseDevice)->add_MouseMoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Devices::Input::IMouseDevice> consume_Windows_Devices_Input_IMouseDevice<D>::MouseMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Input::IMouseDevice>(this, &abi_t<Windows::Devices::Input::IMouseDevice>::remove_MouseMoved, MouseMoved(handler));
}

template <typename D> void consume_Windows_Devices_Input_IMouseDevice<D>::MouseMoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseDevice)->remove_MouseMoved(get_abi(cookie)));
}

template <typename D> Windows::Devices::Input::MouseDevice consume_Windows_Devices_Input_IMouseDeviceStatics<D>::GetForCurrentView() const
{
    Windows::Devices::Input::MouseDevice mouseDevice{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseDeviceStatics)->GetForCurrentView(put_abi(mouseDevice)));
    return mouseDevice;
}

template <typename D> Windows::Devices::Input::MouseDelta consume_Windows_Devices_Input_IMouseEventArgs<D>::MouseDelta() const
{
    Windows::Devices::Input::MouseDelta value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IMouseEventArgs)->get_MouseDelta(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType consume_Windows_Devices_Input_IPointerDevice<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDevice)->get_PointerDeviceType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Input_IPointerDevice<D>::IsIntegrated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDevice)->get_IsIntegrated(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Input_IPointerDevice<D>::MaxContacts() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDevice)->get_MaxContacts(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Devices_Input_IPointerDevice<D>::PhysicalDeviceRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDevice)->get_PhysicalDeviceRect(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Devices_Input_IPointerDevice<D>::ScreenRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDevice)->get_ScreenRect(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage> consume_Windows_Devices_Input_IPointerDevice<D>::SupportedUsages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDevice)->get_SupportedUsages(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Input_IPointerDevice2<D>::MaxPointersWithZDistance() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDevice2)->get_MaxPointersWithZDistance(&value));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDevice consume_Windows_Devices_Input_IPointerDeviceStatics<D>::GetPointerDevice(uint32_t pointerId) const
{
    Windows::Devices::Input::PointerDevice pointerDevice{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDeviceStatics)->GetPointerDevice(pointerId, put_abi(pointerDevice)));
    return pointerDevice;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> consume_Windows_Devices_Input_IPointerDeviceStatics<D>::GetPointerDevices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> pointerDevices{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Input::IPointerDeviceStatics)->GetPointerDevices(put_abi(pointerDevices)));
    return pointerDevices;
}

template <typename D> int32_t consume_Windows_Devices_Input_ITouchCapabilities<D>::TouchPresent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::ITouchCapabilities)->get_TouchPresent(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Input_ITouchCapabilities<D>::Contacts() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Input::ITouchCapabilities)->get_Contacts(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Input::IKeyboardCapabilities> : produce_base<D, Windows::Devices::Input::IKeyboardCapabilities>
{
    HRESULT __stdcall get_KeyboardPresent(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyboardPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Input::IMouseCapabilities> : produce_base<D, Windows::Devices::Input::IMouseCapabilities>
{
    HRESULT __stdcall get_MousePresent(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MousePresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalWheelPresent(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalWheelPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalWheelPresent(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalWheelPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SwapButtons(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SwapButtons());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfButtons(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfButtons());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Input::IMouseDevice> : produce_base<D, Windows::Devices::Input::IMouseDevice>
{
    HRESULT __stdcall add_MouseMoved(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().MouseMoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MouseMoved(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseMoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Input::IMouseDeviceStatics> : produce_base<D, Windows::Devices::Input::IMouseDeviceStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** mouseDevice) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mouseDevice = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *mouseDevice = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Input::IMouseEventArgs> : produce_base<D, Windows::Devices::Input::IMouseEventArgs>
{
    HRESULT __stdcall get_MouseDelta(abi_t<Windows::Devices::Input::MouseDelta>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MouseDelta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Input::IPointerDevice> : produce_base<D, Windows::Devices::Input::IPointerDevice>
{
    HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIntegrated(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsIntegrated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxContacts(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxContacts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhysicalDeviceRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScreenRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedUsages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedUsages());
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
struct produce<D, Windows::Devices::Input::IPointerDevice2> : produce_base<D, Windows::Devices::Input::IPointerDevice2>
{
    HRESULT __stdcall get_MaxPointersWithZDistance(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPointersWithZDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Input::IPointerDeviceStatics> : produce_base<D, Windows::Devices::Input::IPointerDeviceStatics>
{
    HRESULT __stdcall GetPointerDevice(uint32_t pointerId, ::IUnknown** pointerDevice) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pointerDevice = detach_abi(this->shim().GetPointerDevice(pointerId));
            return S_OK;
        }
        catch (...)
        {
            *pointerDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPointerDevices(::IUnknown** pointerDevices) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pointerDevices = detach_abi(this->shim().GetPointerDevices());
            return S_OK;
        }
        catch (...)
        {
            *pointerDevices = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Input::ITouchCapabilities> : produce_base<D, Windows::Devices::Input::ITouchCapabilities>
{
    HRESULT __stdcall get_TouchPresent(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TouchPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contacts(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contacts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Input {

inline KeyboardCapabilities::KeyboardCapabilities() :
    KeyboardCapabilities(activate_instance<KeyboardCapabilities>())
{}

inline MouseCapabilities::MouseCapabilities() :
    MouseCapabilities(activate_instance<MouseCapabilities>())
{}

inline Windows::Devices::Input::MouseDevice MouseDevice::GetForCurrentView()
{
    return get_activation_factory<MouseDevice, Windows::Devices::Input::IMouseDeviceStatics>().GetForCurrentView();
}

inline Windows::Devices::Input::PointerDevice PointerDevice::GetPointerDevice(uint32_t pointerId)
{
    return get_activation_factory<PointerDevice, Windows::Devices::Input::IPointerDeviceStatics>().GetPointerDevice(pointerId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> PointerDevice::GetPointerDevices()
{
    return get_activation_factory<PointerDevice, Windows::Devices::Input::IPointerDeviceStatics>().GetPointerDevices();
}

inline TouchCapabilities::TouchCapabilities() :
    TouchCapabilities(activate_instance<TouchCapabilities>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Input::IKeyboardCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IKeyboardCapabilities> {};

template<> struct hash<winrt::Windows::Devices::Input::IMouseCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IMouseCapabilities> {};

template<> struct hash<winrt::Windows::Devices::Input::IMouseDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IMouseDevice> {};

template<> struct hash<winrt::Windows::Devices::Input::IMouseDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IMouseDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Input::IMouseEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IMouseEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Input::IPointerDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IPointerDevice> {};

template<> struct hash<winrt::Windows::Devices::Input::IPointerDevice2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IPointerDevice2> {};

template<> struct hash<winrt::Windows::Devices::Input::IPointerDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::IPointerDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Input::ITouchCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::ITouchCapabilities> {};

template<> struct hash<winrt::Windows::Devices::Input::KeyboardCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::KeyboardCapabilities> {};

template<> struct hash<winrt::Windows::Devices::Input::MouseCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::MouseCapabilities> {};

template<> struct hash<winrt::Windows::Devices::Input::MouseDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::MouseDevice> {};

template<> struct hash<winrt::Windows::Devices::Input::MouseEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::MouseEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Input::PointerDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::PointerDevice> {};

template<> struct hash<winrt::Windows::Devices::Input::TouchCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Input::TouchCapabilities> {};

}

WINRT_WARNING_POP
