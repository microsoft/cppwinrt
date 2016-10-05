// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Gaming.Input.3.h"
#include "internal/Windows.Gaming.Input.Custom.3.h"
#include "Windows.Gaming.Input.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::ICustomGameControllerFactory> : produce_base<D, Windows::Gaming::Input::Custom::ICustomGameControllerFactory>
{
    HRESULT __stdcall abi_CreateGameController(abi_arg_in<Windows::Gaming::Input::Custom::IGameControllerProvider> provider, abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateGameController(*reinterpret_cast<const Windows::Gaming::Input::Custom::IGameControllerProvider *>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnGameControllerAdded(abi_arg_in<Windows::Gaming::Input::IGameController> value) noexcept override
    {
        try
        {
            this->shim().OnGameControllerAdded(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnGameControllerRemoved(abi_arg_in<Windows::Gaming::Input::IGameController> value) noexcept override
    {
        try
        {
            this->shim().OnGameControllerRemoved(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&value));
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
    HRESULT __stdcall abi_RegisterCustomFactoryForGipInterface(abi_arg_in<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> factory, GUID interfaceId) noexcept override
    {
        try
        {
            this->shim().RegisterCustomFactoryForGipInterface(*reinterpret_cast<const Windows::Gaming::Input::Custom::ICustomGameControllerFactory *>(&factory), interfaceId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterCustomFactoryForHardwareId(abi_arg_in<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) noexcept override
    {
        try
        {
            this->shim().RegisterCustomFactoryForHardwareId(*reinterpret_cast<const Windows::Gaming::Input::Custom::ICustomGameControllerFactory *>(&factory), hardwareVendorId, hardwareProductId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterCustomFactoryForXusbType(abi_arg_in<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> factory, Windows::Gaming::Input::Custom::XusbDeviceType xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype xusbSubtype) noexcept override
    {
        try
        {
            this->shim().RegisterCustomFactoryForXusbType(*reinterpret_cast<const Windows::Gaming::Input::Custom::ICustomGameControllerFactory *>(&factory), xusbType, xusbSubtype);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Gaming::Input::Custom::IGameControllerInputSink> : produce_base<D, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    HRESULT __stdcall abi_OnInputResumed(uint64_t timestamp) noexcept override
    {
        try
        {
            this->shim().OnInputResumed(timestamp);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnInputSuspended(uint64_t timestamp) noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_FirmwareVersionInfo(abi_arg_out<Windows::Gaming::Input::Custom::GameControllerVersionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirmwareVersionInfo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareProductId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HardwareProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareVendorId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HardwareVendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareVersionInfo(abi_arg_out<Windows::Gaming::Input::Custom::GameControllerVersionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HardwareVersionInfo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConnected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsConnected());
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
    HRESULT __stdcall get_ExtendedErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FinalComponentId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FinalComponentId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall abi_OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) noexcept override
    {
        try
        {
            this->shim().OnKeyReceived(timestamp, keyCode, isPressed);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnMessageReceived(uint64_t timestamp, Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint8_t sequenceId, uint32_t __messageBufferSize, abi_arg_in<uint8_t> * messageBuffer) noexcept override
    {
        try
        {
            this->shim().OnMessageReceived(timestamp, messageClass, messageId, sequenceId, array_ref<const uint8_t>(messageBuffer, messageBuffer + __messageBufferSize));
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
    HRESULT __stdcall abi_SendMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint32_t __messageBufferSize, abi_arg_in<uint8_t> * messageBuffer) noexcept override
    {
        try
        {
            this->shim().SendMessage(messageClass, messageId, array_ref<const uint8_t>(messageBuffer, messageBuffer + __messageBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendReceiveMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint32_t __requestMessageBufferSize, abi_arg_in<uint8_t> * requestMessageBuffer, uint32_t __responseMessageBufferSize, abi_arg_out<uint8_t> responseMessageBuffer) noexcept override
    {
        try
        {
            this->shim().SendReceiveMessage(messageClass, messageId, array_ref<const uint8_t>(requestMessageBuffer, requestMessageBuffer + __requestMessageBufferSize), *responseMessageBuffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateFirmwareAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> firmwareImage, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UpdateFirmwareAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&firmwareImage)));
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
struct produce<D, Windows::Gaming::Input::Custom::IXusbGameControllerInputSink> : produce_base<D, Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>
{
    HRESULT __stdcall abi_OnInputReceived(uint64_t timestamp, uint8_t reportId, uint32_t __inputBufferSize, abi_arg_in<uint8_t> * inputBuffer) noexcept override
    {
        try
        {
            this->shim().OnInputReceived(timestamp, reportId, array_ref<const uint8_t>(inputBuffer, inputBuffer + __inputBufferSize));
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
    HRESULT __stdcall abi_SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) noexcept override
    {
        try
        {
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

namespace Windows::Gaming::Input::Custom {

template <typename D> void impl_IGameControllerInputSink<D>::OnInputResumed(uint64_t timestamp) const
{
    check_hresult(static_cast<const IGameControllerInputSink &>(static_cast<const D &>(*this))->abi_OnInputResumed(timestamp));
}

template <typename D> void impl_IGameControllerInputSink<D>::OnInputSuspended(uint64_t timestamp) const
{
    check_hresult(static_cast<const IGameControllerInputSink &>(static_cast<const D &>(*this))->abi_OnInputSuspended(timestamp));
}

template <typename D> void impl_IGipGameControllerInputSink<D>::OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) const
{
    check_hresult(static_cast<const IGipGameControllerInputSink &>(static_cast<const D &>(*this))->abi_OnKeyReceived(timestamp, keyCode, isPressed));
}

template <typename D> void impl_IGipGameControllerInputSink<D>::OnMessageReceived(uint64_t timestamp, Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint8_t sequenceId, array_ref<const uint8_t> messageBuffer) const
{
    check_hresult(static_cast<const IGipGameControllerInputSink &>(static_cast<const D &>(*this))->abi_OnMessageReceived(timestamp, messageClass, messageId, sequenceId, messageBuffer.size(), get(messageBuffer)));
}

template <typename D> void impl_IXusbGameControllerInputSink<D>::OnInputReceived(uint64_t timestamp, uint8_t reportId, array_ref<const uint8_t> inputBuffer) const
{
    check_hresult(static_cast<const IXusbGameControllerInputSink &>(static_cast<const D &>(*this))->abi_OnInputReceived(timestamp, reportId, inputBuffer.size(), get(inputBuffer)));
}

template <typename D> uint32_t impl_IGipFirmwareUpdateResult<D>::ExtendedErrorCode() const
{
    uint32_t value {};
    check_hresult(static_cast<const IGipFirmwareUpdateResult &>(static_cast<const D &>(*this))->get_ExtendedErrorCode(&value));
    return value;
}

template <typename D> uint32_t impl_IGipFirmwareUpdateResult<D>::FinalComponentId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IGipFirmwareUpdateResult &>(static_cast<const D &>(*this))->get_FinalComponentId(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus impl_IGipFirmwareUpdateResult<D>::Status() const
{
    Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus value {};
    check_hresult(static_cast<const IGipFirmwareUpdateResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GameControllerVersionInfo impl_IGameControllerProvider<D>::FirmwareVersionInfo() const
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo value {};
    check_hresult(static_cast<const IGameControllerProvider &>(static_cast<const D &>(*this))->get_FirmwareVersionInfo(put(value)));
    return value;
}

template <typename D> uint16_t impl_IGameControllerProvider<D>::HardwareProductId() const
{
    uint16_t value {};
    check_hresult(static_cast<const IGameControllerProvider &>(static_cast<const D &>(*this))->get_HardwareProductId(&value));
    return value;
}

template <typename D> uint16_t impl_IGameControllerProvider<D>::HardwareVendorId() const
{
    uint16_t value {};
    check_hresult(static_cast<const IGameControllerProvider &>(static_cast<const D &>(*this))->get_HardwareVendorId(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GameControllerVersionInfo impl_IGameControllerProvider<D>::HardwareVersionInfo() const
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo value {};
    check_hresult(static_cast<const IGameControllerProvider &>(static_cast<const D &>(*this))->get_HardwareVersionInfo(put(value)));
    return value;
}

template <typename D> bool impl_IGameControllerProvider<D>::IsConnected() const
{
    bool value {};
    check_hresult(static_cast<const IGameControllerProvider &>(static_cast<const D &>(*this))->get_IsConnected(&value));
    return value;
}

template <typename D> void impl_IGipGameControllerProvider<D>::SendMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, array_ref<const uint8_t> messageBuffer) const
{
    check_hresult(static_cast<const IGipGameControllerProvider &>(static_cast<const D &>(*this))->abi_SendMessage(messageClass, messageId, messageBuffer.size(), get(messageBuffer)));
}

template <typename D> void impl_IGipGameControllerProvider<D>::SendReceiveMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, array_ref<const uint8_t> requestMessageBuffer, array_ref<uint8_t> responseMessageBuffer) const
{
    check_hresult(static_cast<const IGipGameControllerProvider &>(static_cast<const D &>(*this))->abi_SendReceiveMessage(messageClass, messageId, requestMessageBuffer.size(), get(requestMessageBuffer), responseMessageBuffer.size(), get(responseMessageBuffer)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> impl_IGipGameControllerProvider<D>::UpdateFirmwareAsync(const Windows::Storage::Streams::IInputStream & firmwareImage) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> result;
    check_hresult(static_cast<const IGipGameControllerProvider &>(static_cast<const D &>(*this))->abi_UpdateFirmwareAsync(get(firmwareImage), put(result)));
    return result;
}

template <typename D> void impl_IXusbGameControllerProvider<D>::SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) const
{
    check_hresult(static_cast<const IXusbGameControllerProvider &>(static_cast<const D &>(*this))->abi_SetVibration(lowFrequencyMotorSpeed, highFrequencyMotorSpeed));
}

template <typename D> Windows::IInspectable impl_ICustomGameControllerFactory<D>::CreateGameController(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider) const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ICustomGameControllerFactory &>(static_cast<const D &>(*this))->abi_CreateGameController(get(provider), put(value)));
    return value;
}

template <typename D> void impl_ICustomGameControllerFactory<D>::OnGameControllerAdded(const Windows::Gaming::Input::IGameController & value) const
{
    check_hresult(static_cast<const ICustomGameControllerFactory &>(static_cast<const D &>(*this))->abi_OnGameControllerAdded(get(value)));
}

template <typename D> void impl_ICustomGameControllerFactory<D>::OnGameControllerRemoved(const Windows::Gaming::Input::IGameController & value) const
{
    check_hresult(static_cast<const ICustomGameControllerFactory &>(static_cast<const D &>(*this))->abi_OnGameControllerRemoved(get(value)));
}

template <typename D> void impl_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForGipInterface(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, GUID interfaceId) const
{
    check_hresult(static_cast<const IGameControllerFactoryManagerStatics &>(static_cast<const D &>(*this))->abi_RegisterCustomFactoryForGipInterface(get(factory), interfaceId));
}

template <typename D> void impl_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForHardwareId(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) const
{
    check_hresult(static_cast<const IGameControllerFactoryManagerStatics &>(static_cast<const D &>(*this))->abi_RegisterCustomFactoryForHardwareId(get(factory), hardwareVendorId, hardwareProductId));
}

template <typename D> void impl_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForXusbType(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, Windows::Gaming::Input::Custom::XusbDeviceType xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype xusbSubtype) const
{
    check_hresult(static_cast<const IGameControllerFactoryManagerStatics &>(static_cast<const D &>(*this))->abi_RegisterCustomFactoryForXusbType(get(factory), xusbType, xusbSubtype));
}

inline void GameControllerFactoryManager::RegisterCustomFactoryForGipInterface(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, GUID interfaceId)
{
    get_activation_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics>().RegisterCustomFactoryForGipInterface(factory, interfaceId);
}

inline void GameControllerFactoryManager::RegisterCustomFactoryForHardwareId(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, uint16_t hardwareVendorId, uint16_t hardwareProductId)
{
    get_activation_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics>().RegisterCustomFactoryForHardwareId(factory, hardwareVendorId, hardwareProductId);
}

inline void GameControllerFactoryManager::RegisterCustomFactoryForXusbType(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, Windows::Gaming::Input::Custom::XusbDeviceType xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype xusbSubtype)
{
    get_activation_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics>().RegisterCustomFactoryForXusbType(factory, xusbType, xusbSubtype);
}

}

}
