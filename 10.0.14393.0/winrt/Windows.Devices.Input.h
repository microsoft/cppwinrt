// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Input.3.h"
#include "Windows.Devices.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Input::IKeyboardCapabilities> : produce_base<D, Windows::Devices::Input::IKeyboardCapabilities>
{
    HRESULT __stdcall get_KeyboardPresent(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyboardPresent());
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
    HRESULT __stdcall get_MousePresent(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MousePresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalWheelPresent(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalWheelPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalWheelPresent(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalWheelPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SwapButtons(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SwapButtons());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfButtons(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfButtons());
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
    HRESULT __stdcall add_MouseMoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().MouseMoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MouseMoved(event_token cookie) noexcept override
    {
        try
        {
            this->shim().MouseMoved(cookie);
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
    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Devices::Input::IMouseDevice> mouseDevice) noexcept override
    {
        try
        {
            *mouseDevice = detach(this->shim().GetForCurrentView());
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
    HRESULT __stdcall get_MouseDelta(abi_arg_out<Windows::Devices::Input::MouseDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MouseDelta());
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
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIntegrated(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsIntegrated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxContacts(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxContacts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhysicalDeviceRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScreenRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedUsages(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedUsages());
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
    HRESULT __stdcall get_MaxPointersWithZDistance(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPointersWithZDistance());
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
    HRESULT __stdcall abi_GetPointerDevice(uint32_t pointerId, abi_arg_out<Windows::Devices::Input::IPointerDevice> pointerDevice) noexcept override
    {
        try
        {
            *pointerDevice = detach(this->shim().GetPointerDevice(pointerId));
            return S_OK;
        }
        catch (...)
        {
            *pointerDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPointerDevices(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice>> pointerDevices) noexcept override
    {
        try
        {
            *pointerDevices = detach(this->shim().GetPointerDevices());
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
    HRESULT __stdcall get_TouchPresent(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TouchPresent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contacts(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contacts());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Input {

template <typename D> int32_t impl_IMouseCapabilities<D>::MousePresent() const
{
    int32_t value {};
    check_hresult(static_cast<const IMouseCapabilities &>(static_cast<const D &>(*this))->get_MousePresent(&value));
    return value;
}

template <typename D> int32_t impl_IMouseCapabilities<D>::VerticalWheelPresent() const
{
    int32_t value {};
    check_hresult(static_cast<const IMouseCapabilities &>(static_cast<const D &>(*this))->get_VerticalWheelPresent(&value));
    return value;
}

template <typename D> int32_t impl_IMouseCapabilities<D>::HorizontalWheelPresent() const
{
    int32_t value {};
    check_hresult(static_cast<const IMouseCapabilities &>(static_cast<const D &>(*this))->get_HorizontalWheelPresent(&value));
    return value;
}

template <typename D> int32_t impl_IMouseCapabilities<D>::SwapButtons() const
{
    int32_t value {};
    check_hresult(static_cast<const IMouseCapabilities &>(static_cast<const D &>(*this))->get_SwapButtons(&value));
    return value;
}

template <typename D> uint32_t impl_IMouseCapabilities<D>::NumberOfButtons() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMouseCapabilities &>(static_cast<const D &>(*this))->get_NumberOfButtons(&value));
    return value;
}

template <typename D> int32_t impl_IKeyboardCapabilities<D>::KeyboardPresent() const
{
    int32_t value {};
    check_hresult(static_cast<const IKeyboardCapabilities &>(static_cast<const D &>(*this))->get_KeyboardPresent(&value));
    return value;
}

template <typename D> int32_t impl_ITouchCapabilities<D>::TouchPresent() const
{
    int32_t value {};
    check_hresult(static_cast<const ITouchCapabilities &>(static_cast<const D &>(*this))->get_TouchPresent(&value));
    return value;
}

template <typename D> uint32_t impl_ITouchCapabilities<D>::Contacts() const
{
    uint32_t value {};
    check_hresult(static_cast<const ITouchCapabilities &>(static_cast<const D &>(*this))->get_Contacts(&value));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDevice impl_IPointerDeviceStatics<D>::GetPointerDevice(uint32_t pointerId) const
{
    Windows::Devices::Input::PointerDevice pointerDevice { nullptr };
    check_hresult(static_cast<const IPointerDeviceStatics &>(static_cast<const D &>(*this))->abi_GetPointerDevice(pointerId, put(pointerDevice)));
    return pointerDevice;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> impl_IPointerDeviceStatics<D>::GetPointerDevices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> pointerDevices;
    check_hresult(static_cast<const IPointerDeviceStatics &>(static_cast<const D &>(*this))->abi_GetPointerDevices(put(pointerDevices)));
    return pointerDevices;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IPointerDevice<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IPointerDevice &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> bool impl_IPointerDevice<D>::IsIntegrated() const
{
    bool value {};
    check_hresult(static_cast<const IPointerDevice &>(static_cast<const D &>(*this))->get_IsIntegrated(&value));
    return value;
}

template <typename D> uint32_t impl_IPointerDevice<D>::MaxContacts() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPointerDevice &>(static_cast<const D &>(*this))->get_MaxContacts(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPointerDevice<D>::PhysicalDeviceRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPointerDevice &>(static_cast<const D &>(*this))->get_PhysicalDeviceRect(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPointerDevice<D>::ScreenRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPointerDevice &>(static_cast<const D &>(*this))->get_ScreenRect(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage> impl_IPointerDevice<D>::SupportedUsages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage> value;
    check_hresult(static_cast<const IPointerDevice &>(static_cast<const D &>(*this))->get_SupportedUsages(put(value)));
    return value;
}

template <typename D> uint32_t impl_IPointerDevice2<D>::MaxPointersWithZDistance() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPointerDevice2 &>(static_cast<const D &>(*this))->get_MaxPointersWithZDistance(&value));
    return value;
}

template <typename D> Windows::Devices::Input::MouseDelta impl_IMouseEventArgs<D>::MouseDelta() const
{
    Windows::Devices::Input::MouseDelta value {};
    check_hresult(static_cast<const IMouseEventArgs &>(static_cast<const D &>(*this))->get_MouseDelta(put(value)));
    return value;
}

template <typename D> event_token impl_IMouseDevice<D>::MouseMoved(const Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMouseDevice &>(static_cast<const D &>(*this))->add_MouseMoved(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMouseDevice> impl_IMouseDevice<D>::MouseMoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMouseDevice>(this, &ABI::Windows::Devices::Input::IMouseDevice::remove_MouseMoved, MouseMoved(handler));
}

template <typename D> void impl_IMouseDevice<D>::MouseMoved(event_token cookie) const
{
    check_hresult(static_cast<const IMouseDevice &>(static_cast<const D &>(*this))->remove_MouseMoved(cookie));
}

template <typename D> Windows::Devices::Input::MouseDevice impl_IMouseDeviceStatics<D>::GetForCurrentView() const
{
    Windows::Devices::Input::MouseDevice mouseDevice { nullptr };
    check_hresult(static_cast<const IMouseDeviceStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(mouseDevice)));
    return mouseDevice;
}

inline KeyboardCapabilities::KeyboardCapabilities() :
    KeyboardCapabilities(activate_instance<KeyboardCapabilities>())
{}

inline MouseCapabilities::MouseCapabilities() :
    MouseCapabilities(activate_instance<MouseCapabilities>())
{}

inline Windows::Devices::Input::MouseDevice MouseDevice::GetForCurrentView()
{
    return get_activation_factory<MouseDevice, IMouseDeviceStatics>().GetForCurrentView();
}

inline Windows::Devices::Input::PointerDevice PointerDevice::GetPointerDevice(uint32_t pointerId)
{
    return get_activation_factory<PointerDevice, IPointerDeviceStatics>().GetPointerDevice(pointerId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> PointerDevice::GetPointerDevices()
{
    return get_activation_factory<PointerDevice, IPointerDeviceStatics>().GetPointerDevices();
}

inline TouchCapabilities::TouchCapabilities() :
    TouchCapabilities(activate_instance<TouchCapabilities>())
{}

}

}
