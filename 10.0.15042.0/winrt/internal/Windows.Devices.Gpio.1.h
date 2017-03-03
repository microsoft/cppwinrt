// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Gpio.0.h"
#include "Windows.Devices.Gpio.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Gpio {

struct GpioChangeRecord
{
    Windows::Foundation::TimeSpan RelativeTime;
    winrt::Windows::Devices::Gpio::GpioPinEdge Edge;
};

struct GpioChangeCount
{
    uint64_t Count;
    Windows::Foundation::TimeSpan RelativeTime;
};

}

namespace Windows::Devices::Gpio {

using GpioChangeRecord = ABI::Windows::Devices::Gpio::GpioChangeRecord;
using GpioChangeCount = ABI::Windows::Devices::Gpio::GpioChangeCount;

}

namespace ABI::Windows::Devices::Gpio {

struct __declspec(uuid("cb5ec0de-6801-43ff-803d-4576628a8b26")) __declspec(novtable) IGpioChangeCounter : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_Polarity(winrt::Windows::Devices::Gpio::GpioChangePolarity value) = 0;
    virtual HRESULT __stdcall get_Polarity(winrt::Windows::Devices::Gpio::GpioChangePolarity * value) = 0;
    virtual HRESULT __stdcall get_IsStarted(bool * value) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall abi_Read(Windows::Devices::Gpio::GpioChangeCount * value) = 0;
    virtual HRESULT __stdcall abi_Reset(Windows::Devices::Gpio::GpioChangeCount * value) = 0;
};

struct __declspec(uuid("147d94b6-0a9e-410c-b4fa-f89f4052084d")) __declspec(novtable) IGpioChangeCounterFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Devices::Gpio::IGpioPin * pin, Windows::Devices::Gpio::IGpioChangeCounter ** value) = 0;
};

struct __declspec(uuid("0abc885f-e031-48e8-8590-70de78363c6d")) __declspec(novtable) IGpioChangeReader : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Capacity(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Length(int32_t * value) = 0;
    virtual HRESULT __stdcall get_IsEmpty(bool * value) = 0;
    virtual HRESULT __stdcall get_IsOverflowed(bool * value) = 0;
    virtual HRESULT __stdcall put_Polarity(winrt::Windows::Devices::Gpio::GpioChangePolarity value) = 0;
    virtual HRESULT __stdcall get_Polarity(winrt::Windows::Devices::Gpio::GpioChangePolarity * value) = 0;
    virtual HRESULT __stdcall get_IsStarted(bool * value) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall abi_Clear() = 0;
    virtual HRESULT __stdcall abi_GetNextItem(Windows::Devices::Gpio::GpioChangeRecord * value) = 0;
    virtual HRESULT __stdcall abi_PeekNextItem(Windows::Devices::Gpio::GpioChangeRecord * value) = 0;
    virtual HRESULT __stdcall abi_GetAllItems(Windows::Foundation::Collections::IVector<Windows::Devices::Gpio::GpioChangeRecord> ** value) = 0;
    virtual HRESULT __stdcall abi_WaitForItemsAsync(int32_t count, Windows::Foundation::IAsyncAction ** operation) = 0;
};

struct __declspec(uuid("a9598ef3-390e-441a-9d1c-e8de0b2df0df")) __declspec(novtable) IGpioChangeReaderFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Devices::Gpio::IGpioPin * pin, Windows::Devices::Gpio::IGpioChangeReader ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWithCapacity(Windows::Devices::Gpio::IGpioPin * pin, int32_t minCapacity, Windows::Devices::Gpio::IGpioChangeReader ** value) = 0;
};

struct __declspec(uuid("284012e3-7461-469c-a8bc-61d69d08a53c")) __declspec(novtable) IGpioController : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_PinCount(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_OpenPin(int32_t pinNumber, Windows::Devices::Gpio::IGpioPin ** pin) = 0;
    virtual HRESULT __stdcall abi_OpenPinWithSharingMode(int32_t pinNumber, winrt::Windows::Devices::Gpio::GpioSharingMode sharingMode, Windows::Devices::Gpio::IGpioPin ** pin) = 0;
    virtual HRESULT __stdcall abi_TryOpenPin(int32_t pinNumber, winrt::Windows::Devices::Gpio::GpioSharingMode sharingMode, Windows::Devices::Gpio::IGpioPin ** pin, winrt::Windows::Devices::Gpio::GpioOpenStatus * openStatus, bool * succeeded) = 0;
};

struct __declspec(uuid("2ed6f42e-7af7-4116-9533-c43d99a1fb64")) __declspec(novtable) IGpioControllerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::Devices::Gpio::IGpioController ** value) = 0;
};

struct __declspec(uuid("912b7d20-6ca4-4106-a373-fffd346b0e5b")) __declspec(novtable) IGpioControllerStatics2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider * provider, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> ** operation) = 0;
};

struct __declspec(uuid("11d9b087-afae-4790-9ee9-e0eac942d201")) __declspec(novtable) IGpioPin : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ValueChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_DebounceTimeout(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_DebounceTimeout(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_PinNumber(int32_t * value) = 0;
    virtual HRESULT __stdcall get_SharingMode(winrt::Windows::Devices::Gpio::GpioSharingMode * value) = 0;
    virtual HRESULT __stdcall abi_IsDriveModeSupported(winrt::Windows::Devices::Gpio::GpioPinDriveMode driveMode, bool * supported) = 0;
    virtual HRESULT __stdcall abi_GetDriveMode(winrt::Windows::Devices::Gpio::GpioPinDriveMode * value) = 0;
    virtual HRESULT __stdcall abi_SetDriveMode(winrt::Windows::Devices::Gpio::GpioPinDriveMode value) = 0;
    virtual HRESULT __stdcall abi_Write(winrt::Windows::Devices::Gpio::GpioPinValue value) = 0;
    virtual HRESULT __stdcall abi_Read(winrt::Windows::Devices::Gpio::GpioPinValue * value) = 0;
};

struct __declspec(uuid("3137aae1-703d-4059-bd24-b5b25dffb84e")) __declspec(novtable) IGpioPinValueChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Edge(winrt::Windows::Devices::Gpio::GpioPinEdge * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Gpio::GpioChangeCounter> { using default_interface = Windows::Devices::Gpio::IGpioChangeCounter; };
template <> struct traits<Windows::Devices::Gpio::GpioChangeReader> { using default_interface = Windows::Devices::Gpio::IGpioChangeReader; };
template <> struct traits<Windows::Devices::Gpio::GpioController> { using default_interface = Windows::Devices::Gpio::IGpioController; };
template <> struct traits<Windows::Devices::Gpio::GpioPin> { using default_interface = Windows::Devices::Gpio::IGpioPin; };
template <> struct traits<Windows::Devices::Gpio::GpioPinValueChangedEventArgs> { using default_interface = Windows::Devices::Gpio::IGpioPinValueChangedEventArgs; };

}

namespace Windows::Devices::Gpio {

template <typename D>
struct WINRT_EBO impl_IGpioChangeCounter
{
    void Polarity(Windows::Devices::Gpio::GpioChangePolarity value) const;
    Windows::Devices::Gpio::GpioChangePolarity Polarity() const;
    bool IsStarted() const;
    void Start() const;
    void Stop() const;
    Windows::Devices::Gpio::GpioChangeCount Read() const;
    Windows::Devices::Gpio::GpioChangeCount Reset() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioChangeCounterFactory
{
    Windows::Devices::Gpio::GpioChangeCounter Create(const Windows::Devices::Gpio::GpioPin & pin) const;
};

template <typename D>
struct WINRT_EBO impl_IGpioChangeReader
{
    int32_t Capacity() const;
    int32_t Length() const;
    bool IsEmpty() const;
    bool IsOverflowed() const;
    void Polarity(Windows::Devices::Gpio::GpioChangePolarity value) const;
    Windows::Devices::Gpio::GpioChangePolarity Polarity() const;
    bool IsStarted() const;
    void Start() const;
    void Stop() const;
    void Clear() const;
    Windows::Devices::Gpio::GpioChangeRecord GetNextItem() const;
    Windows::Devices::Gpio::GpioChangeRecord PeekNextItem() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Gpio::GpioChangeRecord> GetAllItems() const;
    Windows::Foundation::IAsyncAction WaitForItemsAsync(int32_t count) const;
};

template <typename D>
struct WINRT_EBO impl_IGpioChangeReaderFactory
{
    Windows::Devices::Gpio::GpioChangeReader Create(const Windows::Devices::Gpio::GpioPin & pin) const;
    Windows::Devices::Gpio::GpioChangeReader CreateWithCapacity(const Windows::Devices::Gpio::GpioPin & pin, int32_t minCapacity) const;
};

template <typename D>
struct WINRT_EBO impl_IGpioController
{
    int32_t PinCount() const;
    Windows::Devices::Gpio::GpioPin OpenPin(int32_t pinNumber) const;
    Windows::Devices::Gpio::GpioPin OpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode) const;
    bool TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode, Windows::Devices::Gpio::GpioPin & pin, Windows::Devices::Gpio::GpioOpenStatus & openStatus) const;
};

template <typename D>
struct WINRT_EBO impl_IGpioControllerStatics
{
    Windows::Devices::Gpio::GpioController GetDefault() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioControllerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> GetControllersAsync(const Windows::Devices::Gpio::Provider::IGpioProvider & provider) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> GetDefaultAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioPin
{
    event_token ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> & handler) const;
    using ValueChanged_revoker = event_revoker<IGpioPin>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> & handler) const;
    void ValueChanged(event_token token) const;
    Windows::Foundation::TimeSpan DebounceTimeout() const;
    void DebounceTimeout(const Windows::Foundation::TimeSpan & value) const;
    int32_t PinNumber() const;
    Windows::Devices::Gpio::GpioSharingMode SharingMode() const;
    bool IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode driveMode) const;
    Windows::Devices::Gpio::GpioPinDriveMode GetDriveMode() const;
    void SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode value) const;
    void Write(Windows::Devices::Gpio::GpioPinValue value) const;
    Windows::Devices::Gpio::GpioPinValue Read() const;
};

template <typename D>
struct WINRT_EBO impl_IGpioPinValueChangedEventArgs
{
    Windows::Devices::Gpio::GpioPinEdge Edge() const;
};

}

namespace impl {

template <> struct traits<Windows::Devices::Gpio::IGpioChangeCounter>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioChangeCounter;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioChangeCounter<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioChangeCounterFactory>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioChangeCounterFactory;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioChangeCounterFactory<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioChangeReader>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioChangeReader;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioChangeReader<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioChangeReaderFactory>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioChangeReaderFactory;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioChangeReaderFactory<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioController>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioController;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioController<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioControllerStatics>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioControllerStatics;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioControllerStatics<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioControllerStatics2>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioControllerStatics2;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioControllerStatics2<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioPin>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioPin;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioPin<D>;
};

template <> struct traits<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Gpio::IGpioPinValueChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Gpio::impl_IGpioPinValueChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Gpio::GpioChangeCounter>
{
    using abi = ABI::Windows::Devices::Gpio::GpioChangeCounter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Gpio.GpioChangeCounter"; }
};

template <> struct traits<Windows::Devices::Gpio::GpioChangeReader>
{
    using abi = ABI::Windows::Devices::Gpio::GpioChangeReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Gpio.GpioChangeReader"; }
};

template <> struct traits<Windows::Devices::Gpio::GpioController>
{
    using abi = ABI::Windows::Devices::Gpio::GpioController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Gpio.GpioController"; }
};

template <> struct traits<Windows::Devices::Gpio::GpioPin>
{
    using abi = ABI::Windows::Devices::Gpio::GpioPin;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Gpio.GpioPin"; }
};

template <> struct traits<Windows::Devices::Gpio::GpioPinValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Gpio::GpioPinValueChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Gpio.GpioPinValueChangedEventArgs"; }
};

}

}
