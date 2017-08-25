// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Gpio.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Gpio.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->put_Polarity(get_abi(value)));
}

template <typename D> Windows::Devices::Gpio::GpioChangePolarity consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Polarity() const
{
    Windows::Devices::Gpio::GpioChangePolarity value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->get_Polarity(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::IsStarted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->get_IsStarted(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Start());
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Stop());
}

template <typename D> Windows::Devices::Gpio::GpioChangeCount consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Read() const
{
    Windows::Devices::Gpio::GpioChangeCount value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Read(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioChangeCount consume_Windows_Devices_Gpio_IGpioChangeCounter<D>::Reset() const
{
    Windows::Devices::Gpio::GpioChangeCount value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounter)->Reset(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioChangeCounter consume_Windows_Devices_Gpio_IGpioChangeCounterFactory<D>::Create(Windows::Devices::Gpio::GpioPin const& pin) const
{
    Windows::Devices::Gpio::GpioChangeCounter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeCounterFactory)->Create(get_abi(pin), put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Capacity() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_Capacity(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Length() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_Length(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Gpio_IGpioChangeReader<D>::IsEmpty() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_IsEmpty(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Gpio_IGpioChangeReader<D>::IsOverflowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_IsOverflowed(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->put_Polarity(get_abi(value)));
}

template <typename D> Windows::Devices::Gpio::GpioChangePolarity consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Polarity() const
{
    Windows::Devices::Gpio::GpioChangePolarity value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_Polarity(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Gpio_IGpioChangeReader<D>::IsStarted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->get_IsStarted(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->Start());
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->Stop());
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioChangeReader<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->Clear());
}

template <typename D> Windows::Devices::Gpio::GpioChangeRecord consume_Windows_Devices_Gpio_IGpioChangeReader<D>::GetNextItem() const
{
    Windows::Devices::Gpio::GpioChangeRecord value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->GetNextItem(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioChangeRecord consume_Windows_Devices_Gpio_IGpioChangeReader<D>::PeekNextItem() const
{
    Windows::Devices::Gpio::GpioChangeRecord value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->PeekNextItem(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Gpio::GpioChangeRecord> consume_Windows_Devices_Gpio_IGpioChangeReader<D>::GetAllItems() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Gpio::GpioChangeRecord> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->GetAllItems(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Gpio_IGpioChangeReader<D>::WaitForItemsAsync(int32_t count) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReader)->WaitForItemsAsync(count, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Gpio::GpioChangeReader consume_Windows_Devices_Gpio_IGpioChangeReaderFactory<D>::Create(Windows::Devices::Gpio::GpioPin const& pin) const
{
    Windows::Devices::Gpio::GpioChangeReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReaderFactory)->Create(get_abi(pin), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioChangeReader consume_Windows_Devices_Gpio_IGpioChangeReaderFactory<D>::CreateWithCapacity(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity) const
{
    Windows::Devices::Gpio::GpioChangeReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioChangeReaderFactory)->CreateWithCapacity(get_abi(pin), minCapacity, put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Gpio_IGpioController<D>::PinCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioController)->get_PinCount(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioPin consume_Windows_Devices_Gpio_IGpioController<D>::OpenPin(int32_t pinNumber) const
{
    Windows::Devices::Gpio::GpioPin pin{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioController)->OpenPin(pinNumber, put_abi(pin)));
    return pin;
}

template <typename D> Windows::Devices::Gpio::GpioPin consume_Windows_Devices_Gpio_IGpioController<D>::OpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode) const
{
    Windows::Devices::Gpio::GpioPin pin{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioController)->OpenPinWithSharingMode(pinNumber, get_abi(sharingMode), put_abi(pin)));
    return pin;
}

template <typename D> bool consume_Windows_Devices_Gpio_IGpioController<D>::TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode, Windows::Devices::Gpio::GpioPin& pin, Windows::Devices::Gpio::GpioOpenStatus& openStatus) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioController)->TryOpenPin(pinNumber, get_abi(sharingMode), put_abi(pin), put_abi(openStatus), &succeeded));
    return succeeded;
}

template <typename D> Windows::Devices::Gpio::GpioController consume_Windows_Devices_Gpio_IGpioControllerStatics<D>::GetDefault() const
{
    Windows::Devices::Gpio::GpioController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioControllerStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> consume_Windows_Devices_Gpio_IGpioControllerStatics2<D>::GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioControllerStatics2)->GetControllersAsync(get_abi(provider), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> consume_Windows_Devices_Gpio_IGpioControllerStatics2<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioControllerStatics2)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Devices_Gpio_IGpioPin<D>::ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->add_ValueChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Gpio::IGpioPin> consume_Windows_Devices_Gpio_IGpioPin<D>::ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Gpio::IGpioPin>(this, &abi_t<Windows::Devices::Gpio::IGpioPin>::remove_ValueChanged, ValueChanged(handler));
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioPin<D>::ValueChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->remove_ValueChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Gpio_IGpioPin<D>::DebounceTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->get_DebounceTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioPin<D>::DebounceTimeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->put_DebounceTimeout(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Devices_Gpio_IGpioPin<D>::PinNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->get_PinNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioSharingMode consume_Windows_Devices_Gpio_IGpioPin<D>::SharingMode() const
{
    Windows::Devices::Gpio::GpioSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Gpio_IGpioPin<D>::IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode const& driveMode) const
{
    bool supported{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->IsDriveModeSupported(get_abi(driveMode), &supported));
    return supported;
}

template <typename D> Windows::Devices::Gpio::GpioPinDriveMode consume_Windows_Devices_Gpio_IGpioPin<D>::GetDriveMode() const
{
    Windows::Devices::Gpio::GpioPinDriveMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->GetDriveMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioPin<D>::SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->SetDriveMode(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_Gpio_IGpioPin<D>::Write(Windows::Devices::Gpio::GpioPinValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->Write(get_abi(value)));
}

template <typename D> Windows::Devices::Gpio::GpioPinValue consume_Windows_Devices_Gpio_IGpioPin<D>::Read() const
{
    Windows::Devices::Gpio::GpioPinValue value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPin)->Read(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Gpio::GpioPinEdge consume_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs<D>::Edge() const
{
    Windows::Devices::Gpio::GpioPinEdge value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Gpio::IGpioPinValueChangedEventArgs)->get_Edge(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioChangeCounter> : produce_base<D, Windows::Devices::Gpio::IGpioChangeCounter>
{
    HRESULT __stdcall put_Polarity(abi_t<Windows::Devices::Gpio::GpioChangePolarity> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Polarity(*reinterpret_cast<Windows::Devices::Gpio::GpioChangePolarity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Polarity(abi_t<Windows::Devices::Gpio::GpioChangePolarity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Polarity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStarted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStarted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Read(abi_t<Windows::Devices::Gpio::GpioChangeCount>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Read());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Reset(abi_t<Windows::Devices::Gpio::GpioChangeCount>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioChangeCounterFactory> : produce_base<D, Windows::Devices::Gpio::IGpioChangeCounterFactory>
{
    HRESULT __stdcall Create(::IUnknown* pin, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Gpio::GpioPin const*>(&pin)));
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
struct produce<D, Windows::Devices::Gpio::IGpioChangeReader> : produce_base<D, Windows::Devices::Gpio::IGpioChangeReader>
{
    HRESULT __stdcall get_Capacity(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEmpty(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEmpty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverflowed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOverflowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Polarity(abi_t<Windows::Devices::Gpio::GpioChangePolarity> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Polarity(*reinterpret_cast<Windows::Devices::Gpio::GpioChangePolarity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Polarity(abi_t<Windows::Devices::Gpio::GpioChangePolarity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Polarity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsStarted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsStarted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNextItem(abi_t<Windows::Devices::Gpio::GpioChangeRecord>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNextItem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PeekNextItem(abi_t<Windows::Devices::Gpio::GpioChangeRecord>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeekNextItem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAllItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAllItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WaitForItemsAsync(int32_t count, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WaitForItemsAsync(count));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioChangeReaderFactory> : produce_base<D, Windows::Devices::Gpio::IGpioChangeReaderFactory>
{
    HRESULT __stdcall Create(::IUnknown* pin, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Gpio::GpioPin const*>(&pin)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithCapacity(::IUnknown* pin, int32_t minCapacity, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithCapacity(*reinterpret_cast<Windows::Devices::Gpio::GpioPin const*>(&pin), minCapacity));
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
struct produce<D, Windows::Devices::Gpio::IGpioController> : produce_base<D, Windows::Devices::Gpio::IGpioController>
{
    HRESULT __stdcall get_PinCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PinCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenPin(int32_t pinNumber, ::IUnknown** pin) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pin = detach_abi(this->shim().OpenPin(pinNumber));
            return S_OK;
        }
        catch (...)
        {
            *pin = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenPinWithSharingMode(int32_t pinNumber, abi_t<Windows::Devices::Gpio::GpioSharingMode> sharingMode, ::IUnknown** pin) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pin = detach_abi(this->shim().OpenPin(pinNumber, *reinterpret_cast<Windows::Devices::Gpio::GpioSharingMode const*>(&sharingMode)));
            return S_OK;
        }
        catch (...)
        {
            *pin = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryOpenPin(int32_t pinNumber, abi_t<Windows::Devices::Gpio::GpioSharingMode> sharingMode, ::IUnknown** pin, abi_t<Windows::Devices::Gpio::GpioOpenStatus>* openStatus, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryOpenPin(pinNumber, *reinterpret_cast<Windows::Devices::Gpio::GpioSharingMode const*>(&sharingMode), *reinterpret_cast<Windows::Devices::Gpio::GpioPin*>(pin), *reinterpret_cast<Windows::Devices::Gpio::GpioOpenStatus*>(openStatus)));
            return S_OK;
        }
        catch (...)
        {
            *pin = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioControllerStatics> : produce_base<D, Windows::Devices::Gpio::IGpioControllerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
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
struct produce<D, Windows::Devices::Gpio::IGpioControllerStatics2> : produce_base<D, Windows::Devices::Gpio::IGpioControllerStatics2>
{
    HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetControllersAsync(*reinterpret_cast<Windows::Devices::Gpio::Provider::IGpioProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioPin> : produce_base<D, Windows::Devices::Gpio::IGpioPin>
{
    HRESULT __stdcall add_ValueChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ValueChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DebounceTimeout(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DebounceTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DebounceTimeout(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DebounceTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PinNumber(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PinNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::Gpio::GpioSharingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsDriveModeSupported(abi_t<Windows::Devices::Gpio::GpioPinDriveMode> driveMode, bool* supported) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *supported = detach_abi(this->shim().IsDriveModeSupported(*reinterpret_cast<Windows::Devices::Gpio::GpioPinDriveMode const*>(&driveMode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDriveMode(abi_t<Windows::Devices::Gpio::GpioPinDriveMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDriveMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDriveMode(abi_t<Windows::Devices::Gpio::GpioPinDriveMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDriveMode(*reinterpret_cast<Windows::Devices::Gpio::GpioPinDriveMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Write(abi_t<Windows::Devices::Gpio::GpioPinValue> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Write(*reinterpret_cast<Windows::Devices::Gpio::GpioPinValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Read(abi_t<Windows::Devices::Gpio::GpioPinValue>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Read());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> : produce_base<D, Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
{
    HRESULT __stdcall get_Edge(abi_t<Windows::Devices::Gpio::GpioPinEdge>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio {

inline GpioChangeCounter::GpioChangeCounter(Windows::Devices::Gpio::GpioPin const& pin) :
    GpioChangeCounter(get_activation_factory<GpioChangeCounter, Windows::Devices::Gpio::IGpioChangeCounterFactory>().Create(pin))
{}

inline GpioChangeReader::GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin) :
    GpioChangeReader(get_activation_factory<GpioChangeReader, Windows::Devices::Gpio::IGpioChangeReaderFactory>().Create(pin))
{}

inline GpioChangeReader::GpioChangeReader(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity) :
    GpioChangeReader(get_activation_factory<GpioChangeReader, Windows::Devices::Gpio::IGpioChangeReaderFactory>().CreateWithCapacity(pin, minCapacity))
{}

inline Windows::Devices::Gpio::GpioController GpioController::GetDefault()
{
    return get_activation_factory<GpioController, Windows::Devices::Gpio::IGpioControllerStatics>().GetDefault();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> GpioController::GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider)
{
    return get_activation_factory<GpioController, Windows::Devices::Gpio::IGpioControllerStatics2>().GetControllersAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> GpioController::GetDefaultAsync()
{
    return get_activation_factory<GpioController, Windows::Devices::Gpio::IGpioControllerStatics2>().GetDefaultAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeCounter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioChangeCounter> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeCounterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioChangeCounterFactory> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioChangeReader> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioChangeReaderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioChangeReaderFactory> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioController> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioControllerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioControllerStatics> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioControllerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioControllerStatics2> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioPin> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioPin> {};

template<> struct hash<winrt::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Gpio::GpioChangeCounter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::GpioChangeCounter> {};

template<> struct hash<winrt::Windows::Devices::Gpio::GpioChangeReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::GpioChangeReader> {};

template<> struct hash<winrt::Windows::Devices::Gpio::GpioController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::GpioController> {};

template<> struct hash<winrt::Windows::Devices::Gpio::GpioPin> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::GpioPin> {};

template<> struct hash<winrt::Windows::Devices::Gpio::GpioPinValueChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Gpio::GpioPinValueChangedEventArgs> {};

}

WINRT_WARNING_POP
