// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Gaming.Input.Custom.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_bfaa48bd_155f_5112_bd86_e01d6f7cd405
#define WINRT_GENERIC_bfaa48bd_155f_5112_bd86_e01d6f7cd405
template <> struct __declspec(uuid("bfaa48bd-155f-5112-bd86-e01d6f7cd405")) __declspec(novtable) IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> : impl_IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> {};
#endif

#ifndef WINRT_GENERIC_065c16af_49dc_5c94_afe2_9385937facc9
#define WINRT_GENERIC_065c16af_49dc_5c94_afe2_9385937facc9
template <> struct __declspec(uuid("065c16af-49dc-5c94-afe2-9385937facc9")) __declspec(novtable) AsyncOperationProgressHandler<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> : impl_AsyncOperationProgressHandler<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> {};
#endif

#ifndef WINRT_GENERIC_61b95949_a027_51d8_9f33_37927451502b
#define WINRT_GENERIC_61b95949_a027_51d8_9f33_37927451502b
template <> struct __declspec(uuid("61b95949-a027-51d8-9f33-37927451502b")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> : impl_AsyncOperationWithProgressCompletedHandler<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> {};
#endif


}

namespace Windows::Gaming::Input::Custom {

template <typename D>
struct WINRT_EBO impl_ICustomGameControllerFactory
{
    Windows::IInspectable CreateGameController(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider) const;
    void OnGameControllerAdded(const Windows::Gaming::Input::IGameController & value) const;
    void OnGameControllerRemoved(const Windows::Gaming::Input::IGameController & value) const;
};

template <typename D>
struct WINRT_EBO impl_IGameControllerFactoryManagerStatics
{
    void RegisterCustomFactoryForGipInterface(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, GUID interfaceId) const;
    void RegisterCustomFactoryForHardwareId(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) const;
    void RegisterCustomFactoryForXusbType(const Windows::Gaming::Input::Custom::ICustomGameControllerFactory & factory, Windows::Gaming::Input::Custom::XusbDeviceType xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype xusbSubtype) const;
};

template <typename D>
struct WINRT_EBO impl_IGameControllerInputSink
{
    void OnInputResumed(uint64_t timestamp) const;
    void OnInputSuspended(uint64_t timestamp) const;
};

template <typename D>
struct WINRT_EBO impl_IGameControllerProvider
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo FirmwareVersionInfo() const;
    uint16_t HardwareProductId() const;
    uint16_t HardwareVendorId() const;
    Windows::Gaming::Input::Custom::GameControllerVersionInfo HardwareVersionInfo() const;
    bool IsConnected() const;
};

template <typename D>
struct WINRT_EBO impl_IGipFirmwareUpdateResult
{
    uint32_t ExtendedErrorCode() const;
    uint32_t FinalComponentId() const;
    Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IGipGameControllerInputSink
{
    void OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) const;
    void OnMessageReceived(uint64_t timestamp, Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, uint8_t sequenceId, array_ref<const uint8_t> messageBuffer) const;
};

template <typename D>
struct WINRT_EBO impl_IGipGameControllerProvider
{
    void SendMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, array_ref<const uint8_t> messageBuffer) const;
    void SendReceiveMessage(Windows::Gaming::Input::Custom::GipMessageClass messageClass, uint8_t messageId, array_ref<const uint8_t> requestMessageBuffer, array_ref<uint8_t> responseMessageBuffer) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> UpdateFirmwareAsync(const Windows::Storage::Streams::IInputStream & firmwareImage) const;
};

template <typename D>
struct WINRT_EBO impl_IXusbGameControllerInputSink
{
    void OnInputReceived(uint64_t timestamp, uint8_t reportId, array_ref<const uint8_t> inputBuffer) const;
};

template <typename D>
struct WINRT_EBO impl_IXusbGameControllerProvider
{
    void SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) const;
};

struct ICustomGameControllerFactory :
    Windows::IInspectable,
    impl::consume<ICustomGameControllerFactory>
{
    ICustomGameControllerFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomGameControllerFactory>(m_ptr); }
};

struct IGameControllerFactoryManagerStatics :
    Windows::IInspectable,
    impl::consume<IGameControllerFactoryManagerStatics>
{
    IGameControllerFactoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGameControllerFactoryManagerStatics>(m_ptr); }
};

struct IGameControllerInputSink :
    Windows::IInspectable,
    impl::consume<IGameControllerInputSink>
{
    IGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGameControllerInputSink>(m_ptr); }
};

struct IGameControllerProvider :
    Windows::IInspectable,
    impl::consume<IGameControllerProvider>
{
    IGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGameControllerProvider>(m_ptr); }
};

struct IGipFirmwareUpdateResult :
    Windows::IInspectable,
    impl::consume<IGipFirmwareUpdateResult>
{
    IGipFirmwareUpdateResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGipFirmwareUpdateResult>(m_ptr); }
};

struct IGipGameControllerInputSink :
    Windows::IInspectable,
    impl::consume<IGipGameControllerInputSink>,
    impl::require<IGipGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IGipGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGipGameControllerInputSink>(m_ptr); }
};

struct IGipGameControllerProvider :
    Windows::IInspectable,
    impl::consume<IGipGameControllerProvider>,
    impl::require<IGipGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IGipGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGipGameControllerProvider>(m_ptr); }
};

struct IXusbGameControllerInputSink :
    Windows::IInspectable,
    impl::consume<IXusbGameControllerInputSink>,
    impl::require<IXusbGameControllerInputSink, Windows::Gaming::Input::Custom::IGameControllerInputSink>
{
    IXusbGameControllerInputSink(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXusbGameControllerInputSink>(m_ptr); }
};

struct IXusbGameControllerProvider :
    Windows::IInspectable,
    impl::consume<IXusbGameControllerProvider>,
    impl::require<IXusbGameControllerProvider, Windows::Gaming::Input::Custom::IGameControllerProvider>
{
    IXusbGameControllerProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXusbGameControllerProvider>(m_ptr); }
};

}

}
