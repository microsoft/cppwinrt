// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Input.Preview.Injection.3.h"
#include "Windows.UI.Input.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
{
    HRESULT __stdcall get_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value) noexcept override
    {
        try
        {
            this->shim().KeyOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScanCode(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScanCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScanCode(uint16_t value) noexcept override
    {
        try
        {
            this->shim().ScanCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualKey(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VirtualKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VirtualKey(uint16_t value) noexcept override
    {
        try
        {
            this->shim().VirtualKey(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
{
    HRESULT __stdcall get_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MouseOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value) noexcept override
    {
        try
        {
            this->shim().MouseOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MouseData(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MouseData());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MouseData(uint32_t value) noexcept override
    {
        try
        {
            this->shim().MouseData(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaY(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeltaY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeltaY(int32_t value) noexcept override
    {
        try
        {
            this->shim().DeltaY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaX(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeltaX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeltaX(int32_t value) noexcept override
    {
        try
        {
            this->shim().DeltaX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeOffsetInMilliseconds(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeOffsetInMilliseconds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TimeOffsetInMilliseconds(uint32_t value) noexcept override
    {
        try
        {
            this->shim().TimeOffsetInMilliseconds(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
{
    HRESULT __stdcall get_PointerInfo(abi_arg_out<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerInfo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerInfo(abi_arg_in<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> value) noexcept override
    {
        try
        {
            this->shim().PointerInfo(*reinterpret_cast<const Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PenButtons());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value) noexcept override
    {
        try
        {
            this->shim().PenButtons(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PenParameters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value) noexcept override
    {
        try
        {
            this->shim().PenParameters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Pressure(double value) noexcept override
    {
        try
        {
            this->shim().Pressure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rotation(double value) noexcept override
    {
        try
        {
            this->shim().Rotation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltX(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiltX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TiltX(int32_t value) noexcept override
    {
        try
        {
            this->shim().TiltX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltY(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiltY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TiltY(int32_t value) noexcept override
    {
        try
        {
            this->shim().TiltY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
{
    HRESULT __stdcall get_Contact(abi_arg_out<Windows::UI::Input::Preview::Injection::InjectedInputRectangle> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Contact(abi_arg_in<Windows::UI::Input::Preview::Injection::InjectedInputRectangle> value) noexcept override
    {
        try
        {
            this->shim().Contact(*reinterpret_cast<const Windows::UI::Input::Preview::Injection::InjectedInputRectangle *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(int32_t value) noexcept override
    {
        try
        {
            this->shim().Orientation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerInfo(abi_arg_out<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerInfo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerInfo(abi_arg_in<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> value) noexcept override
    {
        try
        {
            this->shim().PointerInfo(*reinterpret_cast<const Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Pressure(double value) noexcept override
    {
        try
        {
            this->shim().Pressure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TouchParameters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value) noexcept override
    {
        try
        {
            this->shim().TouchParameters(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjector> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjector>
{
    HRESULT __stdcall abi_InjectKeyboardInput(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>> input) noexcept override
    {
        try
        {
            this->shim().InjectKeyboardInput(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InjectMouseInput(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>> input) noexcept override
    {
        try
        {
            this->shim().InjectMouseInput(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) noexcept override
    {
        try
        {
            this->shim().InitializeTouchInjection(visualMode);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InjectTouchInput(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>> input) noexcept override
    {
        try
        {
            this->shim().InjectTouchInput(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UninitializeTouchInjection() noexcept override
    {
        try
        {
            this->shim().UninitializeTouchInjection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) noexcept override
    {
        try
        {
            this->shim().InitializePenInjection(visualMode);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InjectPenInput(abi_arg_in<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> input) noexcept override
    {
        try
        {
            this->shim().InjectPenInput(*reinterpret_cast<const Windows::UI::Input::Preview::Injection::InjectedInputPenInfo *>(&input));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UninitializePenInjection() noexcept override
    {
        try
        {
            this->shim().UninitializePenInjection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut shortcut) noexcept override
    {
        try
        {
            this->shim().InjectShortcut(shortcut);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
{
    HRESULT __stdcall abi_TryCreate(abi_arg_out<Windows::UI::Input::Preview::Injection::IInputInjector> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().TryCreate());
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Input::Preview::Injection {

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputRectangle impl_IInjectedInputTouchInfo<D>::Contact() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputRectangle value {};
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> void impl_IInjectedInputTouchInfo<D>::Contact(const Windows::UI::Input::Preview::Injection::InjectedInputRectangle & value) const
{
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->put_Contact(get(value)));
}

template <typename D> int32_t impl_IInjectedInputTouchInfo<D>::Orientation() const
{
    int32_t value {};
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->get_Orientation(&value));
    return value;
}

template <typename D> void impl_IInjectedInputTouchInfo<D>::Orientation(int32_t value) const
{
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->put_Orientation(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo impl_IInjectedInputTouchInfo<D>::PointerInfo() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value {};
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->get_PointerInfo(put(value)));
    return value;
}

template <typename D> void impl_IInjectedInputTouchInfo<D>::PointerInfo(const Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo & value) const
{
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->put_PointerInfo(get(value)));
}

template <typename D> double impl_IInjectedInputTouchInfo<D>::Pressure() const
{
    double value {};
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->get_Pressure(&value));
    return value;
}

template <typename D> void impl_IInjectedInputTouchInfo<D>::Pressure(double value) const
{
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->put_Pressure(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters impl_IInjectedInputTouchInfo<D>::TouchParameters() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value {};
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->get_TouchParameters(&value));
    return value;
}

template <typename D> void impl_IInjectedInputTouchInfo<D>::TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value) const
{
    check_hresult(static_cast<const IInjectedInputTouchInfo &>(static_cast<const D &>(*this))->put_TouchParameters(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo impl_IInjectedInputPenInfo<D>::PointerInfo() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value {};
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->get_PointerInfo(put(value)));
    return value;
}

template <typename D> void impl_IInjectedInputPenInfo<D>::PointerInfo(const Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo & value) const
{
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->put_PointerInfo(get(value)));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPenButtons impl_IInjectedInputPenInfo<D>::PenButtons() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value {};
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->get_PenButtons(&value));
    return value;
}

template <typename D> void impl_IInjectedInputPenInfo<D>::PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value) const
{
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->put_PenButtons(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPenParameters impl_IInjectedInputPenInfo<D>::PenParameters() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value {};
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->get_PenParameters(&value));
    return value;
}

template <typename D> void impl_IInjectedInputPenInfo<D>::PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value) const
{
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->put_PenParameters(value));
}

template <typename D> double impl_IInjectedInputPenInfo<D>::Pressure() const
{
    double value {};
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->get_Pressure(&value));
    return value;
}

template <typename D> void impl_IInjectedInputPenInfo<D>::Pressure(double value) const
{
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->put_Pressure(value));
}

template <typename D> double impl_IInjectedInputPenInfo<D>::Rotation() const
{
    double value {};
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->get_Rotation(&value));
    return value;
}

template <typename D> void impl_IInjectedInputPenInfo<D>::Rotation(double value) const
{
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->put_Rotation(value));
}

template <typename D> int32_t impl_IInjectedInputPenInfo<D>::TiltX() const
{
    int32_t value {};
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->get_TiltX(&value));
    return value;
}

template <typename D> void impl_IInjectedInputPenInfo<D>::TiltX(int32_t value) const
{
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->put_TiltX(value));
}

template <typename D> int32_t impl_IInjectedInputPenInfo<D>::TiltY() const
{
    int32_t value {};
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->get_TiltY(&value));
    return value;
}

template <typename D> void impl_IInjectedInputPenInfo<D>::TiltY(int32_t value) const
{
    check_hresult(static_cast<const IInjectedInputPenInfo &>(static_cast<const D &>(*this))->put_TiltY(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions impl_IInjectedInputMouseInfo<D>::MouseOptions() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value {};
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->get_MouseOptions(&value));
    return value;
}

template <typename D> void impl_IInjectedInputMouseInfo<D>::MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value) const
{
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->put_MouseOptions(value));
}

template <typename D> uint32_t impl_IInjectedInputMouseInfo<D>::MouseData() const
{
    uint32_t value {};
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->get_MouseData(&value));
    return value;
}

template <typename D> void impl_IInjectedInputMouseInfo<D>::MouseData(uint32_t value) const
{
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->put_MouseData(value));
}

template <typename D> int32_t impl_IInjectedInputMouseInfo<D>::DeltaY() const
{
    int32_t value {};
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->get_DeltaY(&value));
    return value;
}

template <typename D> void impl_IInjectedInputMouseInfo<D>::DeltaY(int32_t value) const
{
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->put_DeltaY(value));
}

template <typename D> int32_t impl_IInjectedInputMouseInfo<D>::DeltaX() const
{
    int32_t value {};
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->get_DeltaX(&value));
    return value;
}

template <typename D> void impl_IInjectedInputMouseInfo<D>::DeltaX(int32_t value) const
{
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->put_DeltaX(value));
}

template <typename D> uint32_t impl_IInjectedInputMouseInfo<D>::TimeOffsetInMilliseconds() const
{
    uint32_t value {};
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->get_TimeOffsetInMilliseconds(&value));
    return value;
}

template <typename D> void impl_IInjectedInputMouseInfo<D>::TimeOffsetInMilliseconds(uint32_t value) const
{
    check_hresult(static_cast<const IInjectedInputMouseInfo &>(static_cast<const D &>(*this))->put_TimeOffsetInMilliseconds(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions impl_IInjectedInputKeyboardInfo<D>::KeyOptions() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value {};
    check_hresult(static_cast<const IInjectedInputKeyboardInfo &>(static_cast<const D &>(*this))->get_KeyOptions(&value));
    return value;
}

template <typename D> void impl_IInjectedInputKeyboardInfo<D>::KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value) const
{
    check_hresult(static_cast<const IInjectedInputKeyboardInfo &>(static_cast<const D &>(*this))->put_KeyOptions(value));
}

template <typename D> uint16_t impl_IInjectedInputKeyboardInfo<D>::ScanCode() const
{
    uint16_t value {};
    check_hresult(static_cast<const IInjectedInputKeyboardInfo &>(static_cast<const D &>(*this))->get_ScanCode(&value));
    return value;
}

template <typename D> void impl_IInjectedInputKeyboardInfo<D>::ScanCode(uint16_t value) const
{
    check_hresult(static_cast<const IInjectedInputKeyboardInfo &>(static_cast<const D &>(*this))->put_ScanCode(value));
}

template <typename D> uint16_t impl_IInjectedInputKeyboardInfo<D>::VirtualKey() const
{
    uint16_t value {};
    check_hresult(static_cast<const IInjectedInputKeyboardInfo &>(static_cast<const D &>(*this))->get_VirtualKey(&value));
    return value;
}

template <typename D> void impl_IInjectedInputKeyboardInfo<D>::VirtualKey(uint16_t value) const
{
    check_hresult(static_cast<const IInjectedInputKeyboardInfo &>(static_cast<const D &>(*this))->put_VirtualKey(value));
}

template <typename D> void impl_IInputInjector<D>::InjectKeyboardInput(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> & input) const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_InjectKeyboardInput(get(input)));
}

template <typename D> void impl_IInputInjector<D>::InjectMouseInput(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> & input) const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_InjectMouseInput(get(input)));
}

template <typename D> void impl_IInputInjector<D>::InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_InitializeTouchInjection(visualMode));
}

template <typename D> void impl_IInputInjector<D>::InjectTouchInput(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> & input) const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_InjectTouchInput(get(input)));
}

template <typename D> void impl_IInputInjector<D>::UninitializeTouchInjection() const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_UninitializeTouchInjection());
}

template <typename D> void impl_IInputInjector<D>::InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_InitializePenInjection(visualMode));
}

template <typename D> void impl_IInputInjector<D>::InjectPenInput(const Windows::UI::Input::Preview::Injection::InjectedInputPenInfo & input) const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_InjectPenInput(get(input)));
}

template <typename D> void impl_IInputInjector<D>::UninitializePenInjection() const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_UninitializePenInjection());
}

template <typename D> void impl_IInputInjector<D>::InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut shortcut) const
{
    check_hresult(static_cast<const IInputInjector &>(static_cast<const D &>(*this))->abi_InjectShortcut(shortcut));
}

template <typename D> Windows::UI::Input::Preview::Injection::InputInjector impl_IInputInjectorStatics<D>::TryCreate() const
{
    Windows::UI::Input::Preview::Injection::InputInjector instance { nullptr };
    check_hresult(static_cast<const IInputInjectorStatics &>(static_cast<const D &>(*this))->abi_TryCreate(put(instance)));
    return instance;
}

inline InjectedInputKeyboardInfo::InjectedInputKeyboardInfo() :
    InjectedInputKeyboardInfo(activate_instance<InjectedInputKeyboardInfo>())
{}

inline InjectedInputMouseInfo::InjectedInputMouseInfo() :
    InjectedInputMouseInfo(activate_instance<InjectedInputMouseInfo>())
{}

inline InjectedInputPenInfo::InjectedInputPenInfo() :
    InjectedInputPenInfo(activate_instance<InjectedInputPenInfo>())
{}

inline InjectedInputTouchInfo::InjectedInputTouchInfo() :
    InjectedInputTouchInfo(activate_instance<InjectedInputTouchInfo>())
{}

inline Windows::UI::Input::Preview::Injection::InputInjector InputInjector::TryCreate()
{
    return get_activation_factory<InputInjector, IInputInjectorStatics>().TryCreate();
}

}

}
