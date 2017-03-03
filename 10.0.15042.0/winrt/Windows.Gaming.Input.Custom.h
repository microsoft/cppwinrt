// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

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
    HRESULT __stdcall abi_CreateGameController(impl::abi_arg_in<Windows::Gaming::Input::Custom::IGameControllerProvider> provider, impl::abi_arg_out<Windows::Foundation::IInspectable> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateGameController(*reinterpret_cast<const Windows::Gaming::Input::Custom::IGameControllerProvider *>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnGameControllerAdded(impl::abi_arg_in<Windows::Gaming::Input::IGameController> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnGameControllerAdded(*reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnGameControllerRemoved(impl::abi_arg_in<Windows::Gaming::Input::IGameController> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall abi_RegisterCustomFactoryForGipInterface(impl::abi_arg_in<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> factory, GUID interfaceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForGipInterface(*reinterpret_cast<const Windows::Gaming::Input::Custom::ICustomGameControllerFactory *>(&factory), interfaceId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterCustomFactoryForHardwareId(impl::abi_arg_in<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForHardwareId(*reinterpret_cast<const Windows::Gaming::Input::Custom::ICustomGameControllerFactory *>(&factory), hardwareVendorId, hardwareProductId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterCustomFactoryForXusbType(impl::abi_arg_in<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> factory, Windows::Gaming::Input::Custom::XusbDeviceType xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype xusbSubtype) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
struct produce<D, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2> : produce_base<D, Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>
{
    HRESULT __stdcall abi_TryGetFactoryControllerFromGameController(impl::abi_arg_in<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> factory, impl::abi_arg_in<Windows::Gaming::Input::IGameController> gameController, impl::abi_arg_out<Windows::Gaming::Input::IGameController> factoryController) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *factoryController = detach_abi(this->shim().TryGetFactoryControllerFromGameController(*reinterpret_cast<const Windows::Gaming::Input::Custom::ICustomGameControllerFactory *>(&factory), *reinterpret_cast<const Windows::Gaming::Input::IGameController *>(&gameController)));
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
    HRESULT __stdcall abi_OnInputResumed(uint64_t timestamp) noexcept override
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

    HRESULT __stdcall abi_OnInputSuspended(uint64_t timestamp) noexcept override
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
    HRESULT __stdcall get_FirmwareVersionInfo(impl::abi_arg_out<Windows::Gaming::Input::Custom::GameControllerVersionInfo> value) noexcept override
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

    HRESULT __stdcall get_HardwareProductId(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_HardwareVendorId(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_HardwareVersionInfo(impl::abi_arg_out<Windows::Gaming::Input::Custom::GameControllerVersionInfo> value) noexcept override
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

    HRESULT __stdcall get_IsConnected(bool * value) noexcept override
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
    HRESULT __stdcall get_ExtendedErrorCode(uint32_t * value) noexcept override
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

    HRESULT __stdcall get_FinalComponentId(uint32_t * value) noexcept override
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

    HRESULT __stdcall get_Status(Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus * value) noexcept override
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
    HRESULT __stdcall abi_OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) noexcept override
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

    HRESULT __stdcall abi_OnMessageReceived(uint64_t timestamp, Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint8_t sequenceId, uint32_t __messageBufferSize, impl::abi_arg_in<uint8_t> * messageBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnMessageReceived(timestamp, messageClass, messageId, sequenceId, array_view<const uint8_t>(messageBuffer, messageBuffer + __messageBufferSize));
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
    HRESULT __stdcall abi_SendMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint32_t __messageBufferSize, impl::abi_arg_in<uint8_t> * messageBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendMessage(messageClass, messageId, array_view<const uint8_t>(messageBuffer, messageBuffer + __messageBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendReceiveMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint32_t __requestMessageBufferSize, impl::abi_arg_in<uint8_t> * requestMessageBuffer, uint32_t __responseMessageBufferSize, impl::abi_arg_out<uint8_t> responseMessageBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendReceiveMessage(messageClass, messageId, array_view<const uint8_t>(requestMessageBuffer, requestMessageBuffer + __requestMessageBufferSize), *responseMessageBuffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateFirmwareAsync(impl::abi_arg_in<Windows::Storage::Streams::IInputStream> firmwareImage, impl::abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UpdateFirmwareAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&firmwareImage)));
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
    HRESULT __stdcall abi_OnInputReportReceived(uint64_t timestamp, uint8_t reportId, uint32_t __reportBufferSize, impl::abi_arg_in<uint8_t> * reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputReportReceived(timestamp, reportId, array_view<const uint8_t>(reportBuffer, reportBuffer + __reportBufferSize));
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
    HRESULT __stdcall get_UsageId(uint16_t * value) noexcept override
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

    HRESULT __stdcall get_UsagePage(uint16_t * value) noexcept override
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

    HRESULT __stdcall abi_GetFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, impl::abi_arg_out<uint8_t> reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetFeatureReport(reportId, *reportBuffer);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, impl::abi_arg_in<uint8_t> * reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendFeatureReport(reportId, array_view<const uint8_t>(reportBuffer, reportBuffer + __reportBufferSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendOutputReport(uint8_t reportId, uint32_t __reportBufferSize, impl::abi_arg_in<uint8_t> * reportBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendOutputReport(reportId, array_view<const uint8_t>(reportBuffer, reportBuffer + __reportBufferSize));
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
    HRESULT __stdcall abi_OnInputReceived(uint64_t timestamp, uint8_t reportId, uint32_t __inputBufferSize, impl::abi_arg_in<uint8_t> * inputBuffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputReceived(timestamp, reportId, array_view<const uint8_t>(inputBuffer, inputBuffer + __inputBufferSize));
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

namespace Windows::Gaming::Input::Custom {

template <typename D> void impl_IGameControllerInputSink<D>::OnInputResumed(uint64_t timestamp) const
{
    check_hresult(WINRT_SHIM(IGameControllerInputSink)->abi_OnInputResumed(timestamp));
}

template <typename D> void impl_IGameControllerInputSink<D>::OnInputSuspended(uint64_t timestamp) const
{
    check_hresult(WINRT_SHIM(IGameControllerInputSink)->abi_OnInputSuspended(timestamp));
}

template <typename D> void impl_IGipGameControllerInputSink<D>::OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) const
{
    check_hresult(WINRT_SHIM(IGipGameControllerInputSink)->abi_OnKeyReceived(timestamp, keyCode, isPressed));
}

template <typename D> void impl_IGipGameControllerInputSink<D>::OnMessageReceived(uint64_t timestamp, Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint8_t sequenceId, array_view<const uint8_t> messageBuffer) const
{
    check_hresult(WINRT_SHIM(IGipGameControllerInputSink)->abi_OnMessageReceived(timestamp, messageClass, messageId, sequenceId, messageBuffer.size(), get_abi(messageBuffer)));
}

template <typename D> void impl_IHidGameControllerInputSink<D>::OnInputReportReceived(uint64_t timestamp, uint8_t reportId, array_view<const uint8_t> reportBuffer) const
{
    check_hresult(WINRT_SHIM(IHidGameControllerInputSink)->abi_OnInputReportReceived(timestamp, reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> void impl_IXusbGameControllerInputSink<D>::OnInputReceived(uint64_t timestamp, uint8_t reportId, array_view<const uint8_t> inputBuffer) const
{
    check_hresult(WINRT_SHIM(IXusbGameControllerInputSink)->abi_OnInputReceived(timestamp, reportId, inputBuffer.size(), get_abi(inputBuffer)));
}

template <typename D> uint32_t impl_IGipFirmwareUpdateResult<D>::ExtendedErrorCode() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IGipFirmwareUpdateResult)->get_ExtendedErrorCode(&value));
    return value;
}

template <typename D> uint32_t impl_IGipFirmwareUpdateResult<D>::FinalComponentId() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IGipFirmwareUpdateResult)->get_FinalComponentId(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus impl_IGipFirmwareUpdateResult<D>::Status() const
{
    Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus value {};
    check_hresult(WINRT_SHIM(IGipFirmwareUpdateResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GameControllerVersionInfo impl_IGameControllerProvider<D>::FirmwareVersionInfo() const
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo value {};
    check_hresult(WINRT_SHIM(IGameControllerProvider)->get_FirmwareVersionInfo(put_abi(value)));
    return value;
}

template <typename D> uint16_t impl_IGameControllerProvider<D>::HardwareProductId() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGameControllerProvider)->get_HardwareProductId(&value));
    return value;
}

template <typename D> uint16_t impl_IGameControllerProvider<D>::HardwareVendorId() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGameControllerProvider)->get_HardwareVendorId(&value));
    return value;
}

template <typename D> Windows::Gaming::Input::Custom::GameControllerVersionInfo impl_IGameControllerProvider<D>::HardwareVersionInfo() const
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo value {};
    check_hresult(WINRT_SHIM(IGameControllerProvider)->get_HardwareVersionInfo(put_abi(value)));
    return value;
}

template <typename D> bool impl_IGameControllerProvider<D>::IsConnected() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGameControllerProvider)->get_IsConnected(&value));
    return value;
}

template <typename D> void impl_IGipGameControllerProvider<D>::SendMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, array_view<const uint8_t> messageBuffer) const
{
    check_hresult(WINRT_SHIM(IGipGameControllerProvider)->abi_SendMessage(messageClass, messageId, messageBuffer.size(), get_abi(messageBuffer)));
}

template <typename D> void impl_IGipGameControllerProvider<D>::SendReceiveMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, array_view<const uint8_t> requestMessageBuffer, array_view<uint8_t> responseMessageBuffer) const
{
    check_hresult(WINRT_SHIM(IGipGameControllerProvider)->abi_SendReceiveMessage(messageClass, messageId, requestMessageBuffer.size(), get_abi(requestMessageBuffer), responseMessageBuffer.size(), get_abi(responseMessageBuffer)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> impl_IGipGameControllerProvider<D>::UpdateFirmwareAsync(const Windows::Storage::Streams::IInputStream & firmwareImage) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> result;
    check_hresult(WINRT_SHIM(IGipGameControllerProvider)->abi_UpdateFirmwareAsync(get_abi(firmwareImage), put_abi(result)));
    return result;
}

template <typename D> uint16_t impl_IHidGameControllerProvider<D>::UsageId() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IHidGameControllerProvider)->get_UsageId(&value));
    return value;
}

template <typename D> uint16_t impl_IHidGameControllerProvider<D>::UsagePage() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IHidGameControllerProvider)->get_UsagePage(&value));
    return value;
}

template <typename D> void impl_IHidGameControllerProvider<D>::GetFeatureReport(uint8_t reportId, array_view<uint8_t> reportBuffer) const
{
    check_hresult(WINRT_SHIM(IHidGameControllerProvider)->abi_GetFeatureReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> void impl_IHidGameControllerProvider<D>::SendFeatureReport(uint8_t reportId, array_view<const uint8_t> reportBuffer) const
{
    check_hresult(WINRT_SHIM(IHidGameControllerProvider)->abi_SendFeatureReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> void impl_IHidGameControllerProvider<D>::SendOutputReport(uint8_t reportId, array_view<const uint8_t> reportBuffer) const
{
    check_hresult(WINRT_SHIM(IHidGameControllerProvider)->abi_SendOutputReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
}

template <typename D> void impl_IXusbGameControllerProvider<D>::SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) const
{
    check_hresult(WINRT_SHIM(IXusbGameControllerProvider)->abi_SetVibration(lowFrequencyMotorSpeed, highFrequencyMotorSpeed));
}

template <typename D> Windows::Foundation::IInspectable impl_ICustomGameControllerFactory<D>::CreateGameController(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider) const
{
    Windows::Foundation::IInspectable value;
    check_hresult(WINRT_SHIM(ICustomGameControllerFactory)->abi_CreateGameController(get_abi(provider), put_abi(value)));
    return value;
}

template <typename D> void impl_ICustomGameControllerFactory<D>::OnGameControllerAdded(const Windows::Gaming::Input::IGameController & value) const
{
    check_hresult(WINRT_SHIM(ICustomGameControllerFactory)->abi_OnGameControllerAdded(get_abi(value)));
}

template <typename D> void impl_ICustomGameControllerFactory<D>::OnGameControllerRemoved(const Windows::Gaming::Input::IGameController & value) const
{
    check_hresult(WINRT_SHIM(ICustomGameControllerFactory)->abi_OnGameControllerRemoved(get_abi(value)));
}

template <typename D> void impl_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForGipInterface(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, GUID interfaceId) const
{
    check_hresult(WINRT_SHIM(IGameControllerFactoryManagerStatics)->abi_RegisterCustomFactoryForGipInterface(get_abi(factory), interfaceId));
}

template <typename D> void impl_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForHardwareId(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) const
{
    check_hresult(WINRT_SHIM(IGameControllerFactoryManagerStatics)->abi_RegisterCustomFactoryForHardwareId(get_abi(factory), hardwareVendorId, hardwareProductId));
}

template <typename D> void impl_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForXusbType(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, Windows::Gaming::Input::Custom::XusbDeviceType xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype xusbSubtype) const
{
    check_hresult(WINRT_SHIM(IGameControllerFactoryManagerStatics)->abi_RegisterCustomFactoryForXusbType(get_abi(factory), xusbType, xusbSubtype));
}

template <typename D> Windows::Gaming::Input::IGameController impl_IGameControllerFactoryManagerStatics2<D>::TryGetFactoryControllerFromGameController(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, const Windows::Gaming::Input::IGameController & gameController) const
{
    Windows::Gaming::Input::IGameController factoryController;
    check_hresult(WINRT_SHIM(IGameControllerFactoryManagerStatics2)->abi_TryGetFactoryControllerFromGameController(get_abi(factory), get_abi(gameController), put_abi(factoryController)));
    return factoryController;
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

inline Windows::Gaming::Input::IGameController GameControllerFactoryManager::TryGetFactoryControllerFromGameController(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, const Windows::Gaming::Input::IGameController & gameController)
{
    return get_activation_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics2>().TryGetFactoryControllerFromGameController(factory, gameController);
}

}

}

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IGameControllerProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::GipGameControllerProvider>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::GipGameControllerProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::HidGameControllerProvider>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::HidGameControllerProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Gaming::Input::Custom::XusbGameControllerProvider>
{
    size_t operator()(const winrt::Windows::Gaming::Input::Custom::XusbGameControllerProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
