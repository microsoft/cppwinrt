// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Gaming.Input.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Gaming.Input.Custom.2.h"
#include "winrt/Windows.Gaming.Input.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IInspectable consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory<D>::CreateGameController(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::ICustomGameControllerFactory)->CreateGameController(get_abi(provider), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory<D>::OnGameControllerAdded(Windows::Gaming::Input::IGameController const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::ICustomGameControllerFactory)->OnGameControllerAdded(get_abi(value)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory<D>::OnGameControllerRemoved(Windows::Gaming::Input::IGameController const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::ICustomGameControllerFactory)->OnGameControllerRemoved(get_abi(value)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForGipInterface(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, GUID const& interfaceId) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics)->RegisterCustomFactoryForGipInterface(get_abi(factory), get_abi(interfaceId)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForHardwareId(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics)->RegisterCustomFactoryForHardwareId(get_abi(factory), hardwareVendorId, hardwareProductId));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForXusbType(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::Custom::XusbDeviceType const& xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype const& xusbSubtype) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics)->RegisterCustomFactoryForXusbType(get_abi(factory), get_abi(xusbType), get_abi(xusbSubtype)));
}

template <typename D> Windows::Gaming::Input::IGameController consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics2<D>::TryGetFactoryControllerFromGameController(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::IGameController const& gameController) const
{
    Windows::Gaming::Input::IGameController factoryController{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2)->TryGetFactoryControllerFromGameController(get_abi(factory), get_abi(gameController), put_abi(factoryController)));
    return factoryController;
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGameControllerInputSink<D>::OnInputResumed(uint64_t timestamp) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerInputSink)->OnInputResumed(timestamp));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGameControllerInputSink<D>::OnInputSuspended(uint64_t timestamp) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerInputSink)->OnInputSuspended(timestamp));
}

template <typename D> Windows::Gaming::Input::Custom::GameControllerVersionInfo consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::FirmwareVersionInfo() const
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerProvider)->get_FirmwareVersionInfo(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::HardwareProductId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerProvider)->get_HardwareProductId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::HardwareVendorId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerProvider)->get_HardwareVendorId(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GameControllerVersionInfo consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::HardwareVersionInfo() const
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerProvider)->get_HardwareVersionInfo(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::IsConnected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGameControllerProvider)->get_IsConnected(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult<D>::ExtendedErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult)->get_ExtendedErrorCode(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult<D>::FinalComponentId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult)->get_FinalComponentId(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult<D>::Status() const
{
    Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGipGameControllerInputSink<D>::OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipGameControllerInputSink)->OnKeyReceived(timestamp, keyCode, isPressed));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGipGameControllerInputSink<D>::OnMessageReceived(uint64_t timestamp, Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, uint8_t sequenceId, array_view<uint8_t const> messageBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipGameControllerInputSink)->OnMessageReceived(timestamp, get_abi(messageClass), messageId, sequenceId, messageBuffer.size(), get_abi(messageBuffer)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider<D>::SendMessage(Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, array_view<uint8_t const> messageBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipGameControllerProvider)->SendMessage(get_abi(messageClass), messageId, messageBuffer.size(), get_abi(messageBuffer)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider<D>::SendReceiveMessage(Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, array_view<uint8_t const> requestMessageBuffer, array_view<uint8_t> responseMessageBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipGameControllerProvider)->SendReceiveMessage(get_abi(messageClass), messageId, requestMessageBuffer.size(), get_abi(requestMessageBuffer), responseMessageBuffer.size(), get_abi(responseMessageBuffer)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider<D>::UpdateFirmwareAsync(Windows::Storage::Streams::IInputStream const& firmwareImage) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IGipGameControllerProvider)->UpdateFirmwareAsync(get_abi(firmwareImage), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IHidGameControllerInputSink<D>::OnInputReportReceived(uint64_t timestamp, uint8_t reportId, array_view<uint8_t const> reportBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IHidGameControllerInputSink)->OnInputReportReceived(timestamp, reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> uint16_t consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::UsageId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IHidGameControllerProvider)->get_UsageId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::UsagePage() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IHidGameControllerProvider)->get_UsagePage(&value));
    return value;
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::GetFeatureReport(uint8_t reportId, array_view<uint8_t> reportBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IHidGameControllerProvider)->GetFeatureReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::SendFeatureReport(uint8_t reportId, array_view<uint8_t const> reportBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IHidGameControllerProvider)->SendFeatureReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::SendOutputReport(uint8_t reportId, array_view<uint8_t const> reportBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IHidGameControllerProvider)->SendOutputReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IXusbGameControllerInputSink<D>::OnInputReceived(uint64_t timestamp, uint8_t reportId, array_view<uint8_t const> inputBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IXusbGameControllerInputSink)->OnInputReceived(timestamp, reportId, inputBuffer.size(), get_abi(inputBuffer)));
}

template <typename D> void consume_Windows_Gaming_Input_Custom_IXusbGameControllerProvider<D>::SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) const
{
    check_hresult(WINRT_SHIM(Windows::Gaming::Input::Custom::IXusbGameControllerProvider)->SetVibration(lowFrequencyMotorSpeed, highFrequencyMotorSpeed));
}

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::ICustomGameControllerFactory> : produce_base<D, Windows::Gaming::Input::Custom::ICustomGameControllerFactory>
{
    HRESULT __stdcall CreateGameController(::IUnknown* provider, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateGameController(*reinterpret_cast<Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OnGameControllerAdded(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnGameControllerAdded(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OnGameControllerRemoved(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnGameControllerRemoved(*reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics> : produce_base<D, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>
{
    HRESULT __stdcall RegisterCustomFactoryForGipInterface(::IUnknown* factory, abi_t<GUID> interfaceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForGipInterface(*reinterpret_cast<Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), *reinterpret_cast<GUID const*>(&interfaceId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterCustomFactoryForHardwareId(::IUnknown* factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForHardwareId(*reinterpret_cast<Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), hardwareVendorId, hardwareProductId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterCustomFactoryForXusbType(::IUnknown* factory, abi_t<Windows::Gaming::Input::Custom::XusbDeviceType> xusbType, abi_t<Windows::Gaming::Input::Custom::XusbDeviceSubtype> xusbSubtype) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForXusbType(*reinterpret_cast<Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), *reinterpret_cast<Windows::Gaming::Input::Custom::XusbDeviceType const*>(&xusbType), *reinterpret_cast<Windows::Gaming::Input::Custom::XusbDeviceSubtype const*>(&xusbSubtype));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2> : produce_base<D, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>
{
    HRESULT __stdcall TryGetFactoryControllerFromGameController(::IUnknown* factory, ::IUnknown* gameController, ::IUnknown** factoryController) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *factoryController = detach_abi(this->shim().TryGetFactoryControllerFromGameController(*reinterpret_cast<Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), *reinterpret_cast<Windows::Gaming::Input::IGameController const*>(&gameController)));
            return S_OK;
        }
        catch (...)
        {
            *factoryController = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGameControllerInputSink> : produce_base<D, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    HRESULT __stdcall OnInputResumed(uint64_t timestamp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputResumed(timestamp);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OnInputSuspended(uint64_t timestamp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputSuspended(timestamp);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGameControllerProvider> : produce_base<D, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    HRESULT __stdcall get_FirmwareVersionInfo(abi_t<Windows::Gaming::Input::Custom::GameControllerVersionInfo>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirmwareVersionInfo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareProductId(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareVendorId(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareVendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareVersionInfo(abi_t<Windows::Gaming::Input::Custom::GameControllerVersionInfo>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareVersionInfo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConnected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsConnected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult> : produce_base<D, Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult>
{
    HRESULT __stdcall get_ExtendedErrorCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FinalComponentId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FinalComponentId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGipGameControllerInputSink> : produce_base<D, Windows::Gaming::Input::Custom::IGipGameControllerInputSink>
{
    HRESULT __stdcall OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnKeyReceived(timestamp, keyCode, isPressed);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OnMessageReceived(uint64_t timestamp, abi_t<Windows::Gaming::Input::Custom::GipMessageClass> messageClass, uint8_t messageId, uint8_t sequenceId, uint32_t __messageBufferSize, uint8_t* messageBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnMessageReceived(timestamp, *reinterpret_cast<Windows::Gaming::Input::Custom::GipMessageClass const*>(&messageClass), messageId, sequenceId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(messageBuffer), reinterpret_cast<uint8_t const *>(messageBuffer) + __messageBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGipGameControllerProvider> : produce_base<D, Windows::Gaming::Input::Custom::IGipGameControllerProvider>
{
    HRESULT __stdcall SendMessage(abi_t<Windows::Gaming::Input::Custom::GipMessageClass> messageClass, uint8_t messageId, uint32_t __messageBufferSize, uint8_t* messageBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendMessage(*reinterpret_cast<Windows::Gaming::Input::Custom::GipMessageClass const*>(&messageClass), messageId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(messageBuffer), reinterpret_cast<uint8_t const *>(messageBuffer) + __messageBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendReceiveMessage(abi_t<Windows::Gaming::Input::Custom::GipMessageClass> messageClass, uint8_t messageId, uint32_t __requestMessageBufferSize, uint8_t* requestMessageBuffer, uint32_t __responseMessageBufferSize, uint8_t* responseMessageBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendReceiveMessage(*reinterpret_cast<Windows::Gaming::Input::Custom::GipMessageClass const*>(&messageClass), messageId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(requestMessageBuffer), reinterpret_cast<uint8_t const *>(requestMessageBuffer) + __requestMessageBufferSize), array_view<uint8_t>(reinterpret_cast<uint8_t*>(responseMessageBuffer), reinterpret_cast<uint8_t*>(responseMessageBuffer) + __responseMessageBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateFirmwareAsync(::IUnknown* firmwareImage, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateFirmwareAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&firmwareImage)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IHidGameControllerInputSink> : produce_base<D, Windows::Gaming::Input::Custom::IHidGameControllerInputSink>
{
    HRESULT __stdcall OnInputReportReceived(uint64_t timestamp, uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputReportReceived(timestamp, reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(reportBuffer), reinterpret_cast<uint8_t const *>(reportBuffer) + __reportBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IHidGameControllerProvider> : produce_base<D, Windows::Gaming::Input::Custom::IHidGameControllerProvider>
{
    HRESULT __stdcall get_UsageId(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsageId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsagePage(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsagePage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetFeatureReport(reportId, array_view<uint8_t>(reinterpret_cast<uint8_t*>(reportBuffer), reinterpret_cast<uint8_t*>(reportBuffer) + __reportBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendFeatureReport(reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(reportBuffer), reinterpret_cast<uint8_t const *>(reportBuffer) + __reportBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendOutputReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendOutputReport(reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(reportBuffer), reinterpret_cast<uint8_t const *>(reportBuffer) + __reportBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IXusbGameControllerInputSink> : produce_base<D, Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>
{
    HRESULT __stdcall OnInputReceived(uint64_t timestamp, uint8_t reportId, uint32_t __inputBufferSize, uint8_t* inputBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputReceived(timestamp, reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(inputBuffer), reinterpret_cast<uint8_t const *>(inputBuffer) + __inputBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IXusbGameControllerProvider> : produce_base<D, Windows::Gaming::Input::Custom::IXusbGameControllerProvider>
{
    HRESULT __stdcall SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVibration(lowFrequencyMotorSpeed, highFrequencyMotorSpeed);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Custom {

inline void GameControllerFactoryManager::RegisterCustomFactoryForGipInterface(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, GUID const& interfaceId)
{
    get_activation_factory<GameControllerFactoryManager, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>().RegisterCustomFactoryForGipInterface(factory, interfaceId);
}

inline void GameControllerFactoryManager::RegisterCustomFactoryForHardwareId(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, uint16_t hardwareVendorId, uint16_t hardwareProductId)
{
    get_activation_factory<GameControllerFactoryManager, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>().RegisterCustomFactoryForHardwareId(factory, hardwareVendorId, hardwareProductId);
}

inline void GameControllerFactoryManager::RegisterCustomFactoryForXusbType(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::Custom::XusbDeviceType const& xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype const& xusbSubtype)
{
    get_activation_factory<GameControllerFactoryManager, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>().RegisterCustomFactoryForXusbType(factory, xusbType, xusbSubtype);
}

inline Windows::Gaming::Input::IGameController GameControllerFactoryManager::TryGetFactoryControllerFromGameController(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::IGameController const& gameController)
{
    return get_activation_factory<GameControllerFactoryManager, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>().TryGetFactoryControllerFromGameController(factory, gameController);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::GameControllerFactoryManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::GameControllerFactoryManager> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::GipGameControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::GipGameControllerProvider> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::HidGameControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::HidGameControllerProvider> {};

template<> struct hash<winrt::Windows::Gaming::Input::Custom::XusbGameControllerProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Gaming::Input::Custom::XusbGameControllerProvider> {};

}

WINRT_WARNING_POP
