// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.Media.DialProtocol.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Media_DialProtocol_IDialApp<D>::AppName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialApp)->get_AppName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppLaunchResult> consume_Windows_Media_DialProtocol_IDialApp<D>::RequestLaunchAsync(param::hstring const& appArgument) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppLaunchResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialApp)->RequestLaunchAsync(get_abi(appArgument), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStopResult> consume_Windows_Media_DialProtocol_IDialApp<D>::StopAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStopResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialApp)->StopAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStateDetails> consume_Windows_Media_DialProtocol_IDialApp<D>::GetAppStateAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialAppStateDetails> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialApp)->GetAppStateAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::DialProtocol::DialAppState consume_Windows_Media_DialProtocol_IDialAppStateDetails<D>::State() const noexcept
{
    Windows::Media::DialProtocol::DialAppState value{};
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialAppStateDetails)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_DialProtocol_IDialAppStateDetails<D>::FullXml() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialAppStateDetails)->get_FullXml(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_DialProtocol_IDialDevice<D>::Id() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevice)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::DialProtocol::DialApp consume_Windows_Media_DialProtocol_IDialDevice<D>::GetDialApp(param::hstring const& appName) const
{
    Windows::Media::DialProtocol::DialApp value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevice)->GetDialApp(get_abi(appName), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_DialProtocol_IDialDevice2<D>::FriendlyName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevice2)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Media_DialProtocol_IDialDevice2<D>::Thumbnail() const noexcept
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevice2)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::DialProtocol::DialDevicePickerFilter consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::Filter() const noexcept
{
    Windows::Media::DialProtocol::DialDevicePickerFilter value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->get_Filter(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DevicePickerAppearance consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::Appearance() const noexcept
{
    Windows::Devices::Enumeration::DevicePickerAppearance value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->get_Appearance(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DialDeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->add_DialDeviceSelected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::DialProtocol::IDialDevicePicker> consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DialDeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::DialProtocol::IDialDevicePicker>(this, &abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DialDeviceSelected, DialDeviceSelected(handler));
}

template <typename D> void consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DialDeviceSelected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->remove_DialDeviceSelected(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DisconnectButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->add_DisconnectButtonClicked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::DialProtocol::IDialDevicePicker> consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DisconnectButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::DialProtocol::IDialDevicePicker>(this, &abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DisconnectButtonClicked, DisconnectButtonClicked(handler));
}

template <typename D> void consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DisconnectButtonClicked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->remove_DisconnectButtonClicked(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DialDevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->add_DialDevicePickerDismissed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::DialProtocol::IDialDevicePicker> consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DialDevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::DialProtocol::IDialDevicePicker>(this, &abi_t<Windows::Media::DialProtocol::IDialDevicePicker>::remove_DialDevicePickerDismissed, DialDevicePickerDismissed(handler));
}

template <typename D> void consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::DialDevicePickerDismissed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->remove_DialDevicePickerDismissed(get_abi(token)));
}

template <typename D> void consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::Show(Windows::Foundation::Rect const& selection) const
{
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->Show(get_abi(selection)));
}

template <typename D> void consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->ShowWithPlacement(get_abi(selection), get_abi(preferredPlacement)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->PickSingleDialDeviceAsync(get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::PickSingleDialDeviceAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->PickSingleDialDeviceAsyncWithPlacement(get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::Hide() const
{
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->Hide());
}

template <typename D> void consume_Windows_Media_DialProtocol_IDialDevicePicker<D>::SetDisplayStatus(Windows::Media::DialProtocol::DialDevice const& device, Windows::Media::DialProtocol::DialDeviceDisplayStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePicker)->SetDisplayStatus(get_abi(device), get_abi(status)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Media_DialProtocol_IDialDevicePickerFilter<D>::SupportedAppNames() const noexcept
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDevicePickerFilter)->get_SupportedAppNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::DialProtocol::DialDevice consume_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs<D>::SelectedDialDevice() const noexcept
{
    Windows::Media::DialProtocol::DialDevice value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs)->get_SelectedDialDevice(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_DialProtocol_IDialDeviceStatics<D>::GetDeviceSelector(param::hstring const& appName) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDeviceStatics)->GetDeviceSelector(get_abi(appName), put_abi(selector)));
    return selector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> consume_Windows_Media_DialProtocol_IDialDeviceStatics<D>::FromIdAsync(param::hstring const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDeviceStatics)->FromIdAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Media_DialProtocol_IDialDeviceStatics<D>::DeviceInfoSupportsDialAsync(Windows::Devices::Enumeration::DeviceInformation const& device) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialDeviceStatics)->DeviceInfoSupportsDialAsync(get_abi(device), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::DialProtocol::DialDevice consume_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs<D>::Device() const noexcept
{
    Windows::Media::DialProtocol::DialDevice value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, hstring>> consume_Windows_Media_DialProtocol_IDialReceiverApp<D>::GetAdditionalDataAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, hstring>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialReceiverApp)->GetAdditionalDataAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_DialProtocol_IDialReceiverApp<D>::SetAdditionalDataAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& additionalData) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::DialProtocol::IDialReceiverApp)->SetAdditionalDataAsync(get_abi(additionalData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::DialProtocol::DialReceiverApp consume_Windows_Media_DialProtocol_IDialReceiverAppStatics<D>::Current() const noexcept
{
    Windows::Media::DialProtocol::DialReceiverApp value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::DialProtocol::IDialReceiverAppStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::DialProtocol::IDialApp> : produce_base<D, Windows::Media::DialProtocol::IDialApp>
{
    HRESULT __stdcall get_AppName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppName());
        return S_OK;
    }

    HRESULT __stdcall RequestLaunchAsync(HSTRING appArgument, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestLaunchAsync(*reinterpret_cast<hstring const*>(&appArgument)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAppStateAsync(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAppStateAsync());
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
struct produce<D, Windows::Media::DialProtocol::IDialAppStateDetails> : produce_base<D, Windows::Media::DialProtocol::IDialAppStateDetails>
{
    HRESULT __stdcall get_State(Windows::Media::DialProtocol::DialAppState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().State());
        return S_OK;
    }

    HRESULT __stdcall get_FullXml(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FullXml());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::DialProtocol::IDialDevice> : produce_base<D, Windows::Media::DialProtocol::IDialDevice>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall GetDialApp(HSTRING appName, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDialApp(*reinterpret_cast<hstring const*>(&appName)));
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
struct produce<D, Windows::Media::DialProtocol::IDialDevice2> : produce_base<D, Windows::Media::DialProtocol::IDialDevice2>
{
    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FriendlyName());
        return S_OK;
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Thumbnail());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::DialProtocol::IDialDevicePicker> : produce_base<D, Windows::Media::DialProtocol::IDialDevicePicker>
{
    HRESULT __stdcall get_Filter(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Filter());
        return S_OK;
    }

    HRESULT __stdcall get_Appearance(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Appearance());
        return S_OK;
    }

    HRESULT __stdcall add_DialDeviceSelected(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DialDeviceSelected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DialDeviceSelected(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DialDeviceSelected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisconnectButtonClicked(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DisconnectButtonClicked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisconnectButtonClicked(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisconnectButtonClicked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DialDevicePickerDismissed(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DialDevicePickerDismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::DialProtocol::DialDevicePicker, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DialDevicePickerDismissed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DialDevicePickerDismissed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Show(Windows::Foundation::Rect selection) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowWithPlacement(Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleDialDeviceAsync(Windows::Foundation::Rect selection, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PickSingleDialDeviceAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleDialDeviceAsyncWithPlacement(Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PickSingleDialDeviceAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Hide() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDisplayStatus(::IUnknown* device, Windows::Media::DialProtocol::DialDeviceDisplayStatus status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDisplayStatus(*reinterpret_cast<Windows::Media::DialProtocol::DialDevice const*>(&device), *reinterpret_cast<Windows::Media::DialProtocol::DialDeviceDisplayStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::DialProtocol::IDialDevicePickerFilter> : produce_base<D, Windows::Media::DialProtocol::IDialDevicePickerFilter>
{
    HRESULT __stdcall get_SupportedAppNames(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportedAppNames());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs> : produce_base<D, Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs>
{
    HRESULT __stdcall get_SelectedDialDevice(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SelectedDialDevice());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::DialProtocol::IDialDeviceStatics> : produce_base<D, Windows::Media::DialProtocol::IDialDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING appName, HSTRING* selector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<hstring const*>(&appName)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING value, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeviceInfoSupportsDialAsync(::IUnknown* device, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().DeviceInfoSupportsDialAsync(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device)));
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
struct produce<D, Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs> : produce_base<D, Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs>
{
    HRESULT __stdcall get_Device(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Device());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::DialProtocol::IDialReceiverApp> : produce_base<D, Windows::Media::DialProtocol::IDialReceiverApp>
{
    HRESULT __stdcall GetAdditionalDataAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetAdditionalDataAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAdditionalDataAsync(::IUnknown* additionalData, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetAdditionalDataAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const*>(&additionalData)));
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
struct produce<D, Windows::Media::DialProtocol::IDialReceiverAppStatics> : produce_base<D, Windows::Media::DialProtocol::IDialReceiverAppStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Current());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::DialProtocol {

inline hstring DialDevice::GetDeviceSelector(param::hstring const& appName)
{
    return get_activation_factory<DialDevice, Windows::Media::DialProtocol::IDialDeviceStatics>().GetDeviceSelector(appName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::DialProtocol::DialDevice> DialDevice::FromIdAsync(param::hstring const& value)
{
    return get_activation_factory<DialDevice, Windows::Media::DialProtocol::IDialDeviceStatics>().FromIdAsync(value);
}

inline Windows::Foundation::IAsyncOperation<bool> DialDevice::DeviceInfoSupportsDialAsync(Windows::Devices::Enumeration::DeviceInformation const& device)
{
    return get_activation_factory<DialDevice, Windows::Media::DialProtocol::IDialDeviceStatics>().DeviceInfoSupportsDialAsync(device);
}

inline DialDevicePicker::DialDevicePicker() :
    DialDevicePicker(activate_instance<DialDevicePicker>())
{}

inline Windows::Media::DialProtocol::DialReceiverApp DialReceiverApp::Current()
{
    return get_activation_factory<DialReceiverApp, Windows::Media::DialProtocol::IDialReceiverAppStatics>().Current();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialApp> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialAppStateDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialAppStateDetails> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialDevice> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialDevice2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialDevice2> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialDevicePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialDevicePicker> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialDevicePickerFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialDevicePickerFilter> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialDeviceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialDeviceStatics> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialDisconnectButtonClickedEventArgs> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialReceiverApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialReceiverApp> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::IDialReceiverAppStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::IDialReceiverAppStatics> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialApp> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialAppStateDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialAppStateDetails> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialDevice> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialDevicePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialDevicePicker> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialDevicePickerFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialDevicePickerFilter> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialDeviceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialDisconnectButtonClickedEventArgs> {};

template<> struct hash<winrt::Windows::Media::DialProtocol::DialReceiverApp> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::DialProtocol::DialReceiverApp> {};

}

WINRT_WARNING_POP
