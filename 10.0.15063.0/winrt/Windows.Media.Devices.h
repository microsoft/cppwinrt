// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.Devices.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::Devices::AdvancedPhotoMode consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedPhotoCaptureSettings)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IAdvancedPhotoCaptureSettings<D>::Mode(Windows::Media::Devices::AdvancedPhotoMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedPhotoCaptureSettings)->put_Mode(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedPhotoControl)->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AdvancedPhotoMode> consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AdvancedPhotoMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedPhotoControl)->get_SupportedModes(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoMode consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedPhotoControl)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IAdvancedPhotoControl<D>::Configure(Windows::Media::Devices::AdvancedPhotoCaptureSettings const& settings) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedPhotoControl)->Configure(get_abi(settings)));
}

template <typename D> void consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController<D>::SetDeviceProperty(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController)->SetDeviceProperty(get_abi(propertyId), get_abi(propertyValue)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController<D>::GetDeviceProperty(param::hstring const& propertyId) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController)->GetDeviceProperty(get_abi(propertyId), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Media::Devices::LowLagPhotoSequenceControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::LowLagPhotoSequence() const
{
    Windows::Media::Devices::LowLagPhotoSequenceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_LowLagPhotoSequence(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::LowLagPhotoControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::LowLagPhoto() const
{
    Windows::Media::Devices::LowLagPhotoControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_LowLagPhoto(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::SceneModeControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::SceneModeControl() const
{
    Windows::Media::Devices::SceneModeControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_SceneModeControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::TorchControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::TorchControl() const
{
    Windows::Media::Devices::TorchControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_TorchControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FlashControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::FlashControl() const
{
    Windows::Media::Devices::FlashControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_FlashControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::WhiteBalanceControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::WhiteBalanceControl() const
{
    Windows::Media::Devices::WhiteBalanceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_WhiteBalanceControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ExposureControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::ExposureControl() const
{
    Windows::Media::Devices::ExposureControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_ExposureControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FocusControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::FocusControl() const
{
    Windows::Media::Devices::FocusControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_FocusControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ExposureCompensationControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::ExposureCompensationControl() const
{
    Windows::Media::Devices::ExposureCompensationControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_ExposureCompensationControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::IsoSpeedControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::IsoSpeedControl() const
{
    Windows::Media::Devices::IsoSpeedControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_IsoSpeedControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::RegionsOfInterestControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::RegionsOfInterestControl() const
{
    Windows::Media::Devices::RegionsOfInterestControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_RegionsOfInterestControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::CaptureUse consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::PrimaryUse() const
{
    Windows::Media::Devices::CaptureUse value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->get_PrimaryUse(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2<D>::PrimaryUse(Windows::Media::Devices::CaptureUse const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2)->put_PrimaryUse(get_abi(value)));
}

template <typename D> Windows::Media::Devices::Core::VariablePhotoSequenceController consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>::VariablePhotoSequenceController() const
{
    Windows::Media::Devices::Core::VariablePhotoSequenceController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3)->get_VariablePhotoSequenceController(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::PhotoConfirmationControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>::PhotoConfirmationControl() const
{
    Windows::Media::Devices::PhotoConfirmationControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3)->get_PhotoConfirmationControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ZoomControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3<D>::ZoomControl() const
{
    Windows::Media::Devices::ZoomControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3)->get_ZoomControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ExposurePriorityVideoControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::ExposurePriorityVideoControl() const
{
    Windows::Media::Devices::ExposurePriorityVideoControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_ExposurePriorityVideoControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureOptimization consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::DesiredOptimization() const
{
    Windows::Media::Devices::MediaCaptureOptimization value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_DesiredOptimization(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::DesiredOptimization(Windows::Media::Devices::MediaCaptureOptimization const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->put_DesiredOptimization(get_abi(value)));
}

template <typename D> Windows::Media::Devices::HdrVideoControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::HdrVideoControl() const
{
    Windows::Media::Devices::HdrVideoControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_HdrVideoControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::OpticalImageStabilizationControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::OpticalImageStabilizationControl() const
{
    Windows::Media::Devices::OpticalImageStabilizationControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_OpticalImageStabilizationControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoControl consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4<D>::AdvancedPhotoControl() const
{
    Windows::Media::Devices::AdvancedPhotoControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4)->get_AdvancedPhotoControl(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::GetDevicePropertyById(param::hstring const& propertyId, optional<uint32_t> const& maxPropertyValueSize) const
{
    Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->GetDevicePropertyById(get_abi(propertyId), get_abi(maxPropertyValueSize), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::SetDevicePropertyById(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const
{
    Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->SetDevicePropertyById(get_abi(propertyId), get_abi(propertyValue), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::GetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, optional<uint32_t> const& maxPropertyValueSize) const
{
    Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->GetDevicePropertyByExtendedId(extendedPropertyId.size(), get_abi(extendedPropertyId), get_abi(maxPropertyValueSize), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus consume_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5<D>::SetDevicePropertyByExtendedId(array_view<uint8_t const> extendedPropertyId, array_view<uint8_t const> propertyValue) const
{
    Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5)->SetDevicePropertyByExtendedId(extendedPropertyId.size(), get_abi(extendedPropertyId), propertyValue.size(), get_abi(propertyValue), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IAudioDeviceController<D>::Muted(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceController)->put_Muted(value));
}

template <typename D> bool consume_Windows_Media_Devices_IAudioDeviceController<D>::Muted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceController)->get_Muted(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IAudioDeviceController<D>::VolumePercent(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceController)->put_VolumePercent(value));
}

template <typename D> float consume_Windows_Media_Devices_IAudioDeviceController<D>::VolumePercent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceController)->get_VolumePercent(&value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Devices_IAudioDeviceModule<D>::ClassId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModule)->get_ClassId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Devices_IAudioDeviceModule<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModule)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IAudioDeviceModule<D>::InstanceId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModule)->get_InstanceId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IAudioDeviceModule<D>::MajorVersion() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModule)->get_MajorVersion(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IAudioDeviceModule<D>::MinorVersion() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModule)->get_MinorVersion(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult> consume_Windows_Media_Devices_IAudioDeviceModule<D>::SendCommandAsync(Windows::Storage::Streams::IBuffer const& Command) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModule)->SendCommandAsync(get_abi(Command), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Devices::AudioDeviceModule consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs<D>::Module() const
{
    Windows::Media::Devices::AudioDeviceModule value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs)->get_Module(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs<D>::NotificationData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs)->get_NotificationData(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::ModuleNotificationReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager, Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModulesManager)->add_ModuleNotificationReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Devices::IAudioDeviceModulesManager> consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::ModuleNotificationReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager, Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::IAudioDeviceModulesManager>(this, &abi_t<Windows::Media::Devices::IAudioDeviceModulesManager>::remove_ModuleNotificationReceived, ModuleNotificationReceived(handler));
}

template <typename D> void consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::ModuleNotificationReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModulesManager)->remove_ModuleNotificationReceived(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule> consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::FindAllById(param::hstring const& moduleId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule> modules{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModulesManager)->FindAllById(get_abi(moduleId), put_abi(modules)));
    return modules;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule> consume_Windows_Media_Devices_IAudioDeviceModulesManager<D>::FindAll() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule> modules{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModulesManager)->FindAll(put_abi(modules)));
    return modules;
}

template <typename D> Windows::Media::Devices::AudioDeviceModulesManager consume_Windows_Media_Devices_IAudioDeviceModulesManagerFactory<D>::Create(param::hstring const& deviceId) const
{
    Windows::Media::Devices::AudioDeviceModulesManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IAudioDeviceModulesManagerFactory)->Create(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> uint64_t consume_Windows_Media_Devices_ICallControl<D>::IndicateNewIncomingCall(bool enableRinger, param::hstring const& callerId) const
{
    uint64_t callToken{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->IndicateNewIncomingCall(enableRinger, get_abi(callerId), &callToken));
    return callToken;
}

template <typename D> uint64_t consume_Windows_Media_Devices_ICallControl<D>::IndicateNewOutgoingCall() const
{
    uint64_t callToken{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->IndicateNewOutgoingCall(&callToken));
    return callToken;
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::IndicateActiveCall(uint64_t callToken) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->IndicateActiveCall(callToken));
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::EndCall(uint64_t callToken) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->EndCall(callToken));
}

template <typename D> bool consume_Windows_Media_Devices_ICallControl<D>::HasRinger() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->get_HasRinger(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Devices_ICallControl<D>::AnswerRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->add_AnswerRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Devices::ICallControl> consume_Windows_Media_Devices_ICallControl<D>::AnswerRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::ICallControl>(this, &abi_t<Windows::Media::Devices::ICallControl>::remove_AnswerRequested, AnswerRequested(handler));
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::AnswerRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->remove_AnswerRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Devices_ICallControl<D>::HangUpRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->add_HangUpRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Devices::ICallControl> consume_Windows_Media_Devices_ICallControl<D>::HangUpRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::ICallControl>(this, &abi_t<Windows::Media::Devices::ICallControl>::remove_HangUpRequested, HangUpRequested(handler));
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::HangUpRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->remove_HangUpRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Devices_ICallControl<D>::DialRequested(Windows::Media::Devices::DialRequestedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->add_DialRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Devices::ICallControl> consume_Windows_Media_Devices_ICallControl<D>::DialRequested(auto_revoke_t, Windows::Media::Devices::DialRequestedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::ICallControl>(this, &abi_t<Windows::Media::Devices::ICallControl>::remove_DialRequested, DialRequested(handler));
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::DialRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->remove_DialRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Devices_ICallControl<D>::RedialRequested(Windows::Media::Devices::RedialRequestedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->add_RedialRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Devices::ICallControl> consume_Windows_Media_Devices_ICallControl<D>::RedialRequested(auto_revoke_t, Windows::Media::Devices::RedialRequestedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::ICallControl>(this, &abi_t<Windows::Media::Devices::ICallControl>::remove_RedialRequested, RedialRequested(handler));
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::RedialRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->remove_RedialRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Devices_ICallControl<D>::KeypadPressed(Windows::Media::Devices::KeypadPressedEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->add_KeypadPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Devices::ICallControl> consume_Windows_Media_Devices_ICallControl<D>::KeypadPressed(auto_revoke_t, Windows::Media::Devices::KeypadPressedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::ICallControl>(this, &abi_t<Windows::Media::Devices::ICallControl>::remove_KeypadPressed, KeypadPressed(handler));
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::KeypadPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->remove_KeypadPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Devices_ICallControl<D>::AudioTransferRequested(Windows::Media::Devices::CallControlEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->add_AudioTransferRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Devices::ICallControl> consume_Windows_Media_Devices_ICallControl<D>::AudioTransferRequested(auto_revoke_t, Windows::Media::Devices::CallControlEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::ICallControl>(this, &abi_t<Windows::Media::Devices::ICallControl>::remove_AudioTransferRequested, AudioTransferRequested(handler));
}

template <typename D> void consume_Windows_Media_Devices_ICallControl<D>::AudioTransferRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControl)->remove_AudioTransferRequested(get_abi(token)));
}

template <typename D> Windows::Media::Devices::CallControl consume_Windows_Media_Devices_ICallControlStatics<D>::GetDefault() const
{
    Windows::Media::Devices::CallControl callControl{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControlStatics)->GetDefault(put_abi(callControl)));
    return callControl;
}

template <typename D> Windows::Media::Devices::CallControl consume_Windows_Media_Devices_ICallControlStatics<D>::FromId(param::hstring const& deviceId) const
{
    Windows::Media::Devices::CallControl callControl{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ICallControlStatics)->FromId(get_abi(deviceId), put_abi(callControl)));
    return callControl;
}

template <typename D> hstring consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AudioDeviceRole consume_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs<D>::Role() const
{
    Windows::Media::Devices::AudioDeviceRole value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs)->get_Role(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IDialRequestedEventArgs<D>::Handled() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IDialRequestedEventArgs)->Handled());
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Devices_IDialRequestedEventArgs<D>::Contact() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IDialRequestedEventArgs)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IExposureCompensationControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureCompensationControl)->get_Supported(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IExposureCompensationControl<D>::Min() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureCompensationControl)->get_Min(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IExposureCompensationControl<D>::Max() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureCompensationControl)->get_Max(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IExposureCompensationControl<D>::Step() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureCompensationControl)->get_Step(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IExposureCompensationControl<D>::Value() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureCompensationControl)->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IExposureCompensationControl<D>::SetValueAsync(float value) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureCompensationControl)->SetValueAsync(value, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Media_Devices_IExposureControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->get_Supported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IExposureControl<D>::Auto() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->get_Auto(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IExposureControl<D>::SetAutoAsync(bool value) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->SetAutoAsync(value, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Devices_IExposureControl<D>::Min() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->get_Min(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Devices_IExposureControl<D>::Max() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->get_Max(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Devices_IExposureControl<D>::Step() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->get_Step(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Devices_IExposureControl<D>::Value() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IExposureControl<D>::SetValueAsync(Windows::Foundation::TimeSpan const& shutterDuration) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposureControl)->SetValueAsync(get_abi(shutterDuration), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposurePriorityVideoControl)->get_Supported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposurePriorityVideoControl)->get_Enabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IExposurePriorityVideoControl<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IExposurePriorityVideoControl)->put_Enabled(value));
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->get_Supported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl<D>::PowerSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->get_PowerSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl<D>::RedEyeReductionSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->get_RedEyeReductionSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->get_Enabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFlashControl<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->put_Enabled(value));
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl<D>::Auto() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->get_Auto(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFlashControl<D>::Auto(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->put_Auto(value));
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl<D>::RedEyeReduction() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->get_RedEyeReduction(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFlashControl<D>::RedEyeReduction(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->put_RedEyeReduction(value));
}

template <typename D> float consume_Windows_Media_Devices_IFlashControl<D>::PowerPercent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->get_PowerPercent(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFlashControl<D>::PowerPercent(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl)->put_PowerPercent(value));
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl2<D>::AssistantLightSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl2)->get_AssistantLightSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IFlashControl2<D>::AssistantLightEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl2)->get_AssistantLightEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFlashControl2<D>::AssistantLightEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFlashControl2)->put_AssistantLightEnabled(value));
}

template <typename D> bool consume_Windows_Media_Devices_IFocusControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::FocusPreset> consume_Windows_Media_Devices_IFocusControl<D>::SupportedPresets() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::FocusPreset> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->get_SupportedPresets(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FocusPreset consume_Windows_Media_Devices_IFocusControl<D>::Preset() const
{
    Windows::Media::Devices::FocusPreset value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->get_Preset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IFocusControl<D>::SetPresetAsync(Windows::Media::Devices::FocusPreset const& preset) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->SetPresetAsync(get_abi(preset), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IFocusControl<D>::SetPresetAsync(Windows::Media::Devices::FocusPreset const& preset, bool completeBeforeFocus) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->SetPresetWithCompletionOptionAsync(get_abi(preset), completeBeforeFocus, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IFocusControl<D>::Min() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->get_Min(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IFocusControl<D>::Max() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->get_Max(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IFocusControl<D>::Step() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->get_Step(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IFocusControl<D>::Value() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IFocusControl<D>::SetValueAsync(uint32_t focus) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->SetValueAsync(focus, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IFocusControl<D>::FocusAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl)->FocusAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Media_Devices_IFocusControl2<D>::FocusChangedSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->get_FocusChangedSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IFocusControl2<D>::WaitForFocusSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->get_WaitForFocusSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::FocusMode> consume_Windows_Media_Devices_IFocusControl2<D>::SupportedFocusModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::FocusMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->get_SupportedFocusModes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::ManualFocusDistance> consume_Windows_Media_Devices_IFocusControl2<D>::SupportedFocusDistances() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::ManualFocusDistance> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->get_SupportedFocusDistances(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AutoFocusRange> consume_Windows_Media_Devices_IFocusControl2<D>::SupportedFocusRanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AutoFocusRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->get_SupportedFocusRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::FocusMode consume_Windows_Media_Devices_IFocusControl2<D>::Mode() const
{
    Windows::Media::Devices::FocusMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureFocusState consume_Windows_Media_Devices_IFocusControl2<D>::FocusState() const
{
    Windows::Media::Devices::MediaCaptureFocusState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IFocusControl2<D>::UnlockAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->UnlockAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IFocusControl2<D>::LockAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->LockAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Media_Devices_IFocusControl2<D>::Configure(Windows::Media::Devices::FocusSettings const& settings) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusControl2)->Configure(get_abi(settings)));
}

template <typename D> Windows::Media::Devices::FocusMode consume_Windows_Media_Devices_IFocusSettings<D>::Mode() const
{
    Windows::Media::Devices::FocusMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFocusSettings<D>::Mode(Windows::Media::Devices::FocusMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->put_Mode(get_abi(value)));
}

template <typename D> Windows::Media::Devices::AutoFocusRange consume_Windows_Media_Devices_IFocusSettings<D>::AutoFocusRange() const
{
    Windows::Media::Devices::AutoFocusRange value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->get_AutoFocusRange(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFocusSettings<D>::AutoFocusRange(Windows::Media::Devices::AutoFocusRange const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->put_AutoFocusRange(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Devices_IFocusSettings<D>::Value() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFocusSettings<D>::Value(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->put_Value(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Devices::ManualFocusDistance> consume_Windows_Media_Devices_IFocusSettings<D>::Distance() const
{
    Windows::Foundation::IReference<Windows::Media::Devices::ManualFocusDistance> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->get_Distance(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFocusSettings<D>::Distance(optional<Windows::Media::Devices::ManualFocusDistance> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->put_Distance(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Devices_IFocusSettings<D>::WaitForFocus() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->get_WaitForFocus(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFocusSettings<D>::WaitForFocus(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->put_WaitForFocus(value));
}

template <typename D> bool consume_Windows_Media_Devices_IFocusSettings<D>::DisableDriverFallback() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->get_DisableDriverFallback(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IFocusSettings<D>::DisableDriverFallback(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IFocusSettings)->put_DisableDriverFallback(value));
}

template <typename D> bool consume_Windows_Media_Devices_IHdrVideoControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IHdrVideoControl)->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::HdrVideoMode> consume_Windows_Media_Devices_IHdrVideoControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::HdrVideoMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IHdrVideoControl)->get_SupportedModes(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::HdrVideoMode consume_Windows_Media_Devices_IHdrVideoControl<D>::Mode() const
{
    Windows::Media::Devices::HdrVideoMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IHdrVideoControl)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IHdrVideoControl<D>::Mode(Windows::Media::Devices::HdrVideoMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IHdrVideoControl)->put_Mode(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Devices_IIsoSpeedControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl)->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::IsoSpeedPreset> consume_Windows_Media_Devices_IIsoSpeedControl<D>::SupportedPresets() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::IsoSpeedPreset> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl)->get_SupportedPresets(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::IsoSpeedPreset consume_Windows_Media_Devices_IIsoSpeedControl<D>::Preset() const
{
    Windows::Media::Devices::IsoSpeedPreset value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl)->get_Preset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IIsoSpeedControl<D>::SetPresetAsync(Windows::Media::Devices::IsoSpeedPreset const& preset) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl)->SetPresetAsync(get_abi(preset), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Min() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl2)->get_Min(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Max() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl2)->get_Max(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Step() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl2)->get_Step(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Value() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl2)->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IIsoSpeedControl2<D>::SetValueAsync(uint32_t isoSpeed) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl2)->SetValueAsync(isoSpeed, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Media_Devices_IIsoSpeedControl2<D>::Auto() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl2)->get_Auto(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IIsoSpeedControl2<D>::SetAutoAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IIsoSpeedControl2)->SetAutoAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Media::Devices::TelephonyKey consume_Windows_Media_Devices_IKeypadPressedEventArgs<D>::TelephonyKey() const
{
    Windows::Media::Devices::TelephonyKey telephonyKey{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IKeypadPressedEventArgs)->get_TelephonyKey(put_abi(telephonyKey)));
    return telephonyKey;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_Devices_ILowLagPhotoControl<D>::GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->GetHighestConcurrentFrameRate(get_abi(captureProperties), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_Devices_ILowLagPhotoControl<D>::GetCurrentFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->GetCurrentFrameRate(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->get_ThumbnailEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->put_ThumbnailEnabled(value));
}

template <typename D> Windows::Media::MediaProperties::MediaThumbnailFormat consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailFormat() const
{
    Windows::Media::MediaProperties::MediaThumbnailFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->get_ThumbnailFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoControl<D>::ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->put_ThumbnailFormat(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Media_Devices_ILowLagPhotoControl<D>::DesiredThumbnailSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->get_DesiredThumbnailSize(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoControl<D>::DesiredThumbnailSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->put_DesiredThumbnailSize(value));
}

template <typename D> uint32_t consume_Windows_Media_Devices_ILowLagPhotoControl<D>::HardwareAcceleratedThumbnailSupported() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoControl)->get_HardwareAcceleratedThumbnailSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_Supported(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::MaxPastPhotos() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_MaxPastPhotos(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::MaxPhotosPerSecond() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_MaxPhotosPerSecond(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PastPhotoLimit() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_PastPhotoLimit(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PastPhotoLimit(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_PastPhotoLimit(value));
}

template <typename D> float consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PhotosPerSecondLimit() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_PhotosPerSecondLimit(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::PhotosPerSecondLimit(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_PhotosPerSecondLimit(value));
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::GetHighestConcurrentFrameRate(Windows::Media::MediaProperties::IMediaEncodingProperties const& captureProperties) const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->GetHighestConcurrentFrameRate(get_abi(captureProperties), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::GetCurrentFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->GetCurrentFrameRate(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_ThumbnailEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_ThumbnailEnabled(value));
}

template <typename D> Windows::Media::MediaProperties::MediaThumbnailFormat consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailFormat() const
{
    Windows::Media::MediaProperties::MediaThumbnailFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_ThumbnailFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::ThumbnailFormat(Windows::Media::MediaProperties::MediaThumbnailFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_ThumbnailFormat(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::DesiredThumbnailSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_DesiredThumbnailSize(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::DesiredThumbnailSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->put_DesiredThumbnailSize(value));
}

template <typename D> uint32_t consume_Windows_Media_Devices_ILowLagPhotoSequenceControl<D>::HardwareAcceleratedThumbnailSupported() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ILowLagPhotoSequenceControl)->get_HardwareAcceleratedThumbnailSupported(&value));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControlCapabilities consume_Windows_Media_Devices_IMediaDeviceControl<D>::Capabilities() const
{
    Windows::Media::Devices::MediaDeviceControlCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControl)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IMediaDeviceControl<D>::TryGetValue(double& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControl)->TryGetValue(&value, &succeeded));
    return succeeded;
}

template <typename D> bool consume_Windows_Media_Devices_IMediaDeviceControl<D>::TrySetValue(double value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControl)->TrySetValue(value, &succeeded));
    return succeeded;
}

template <typename D> bool consume_Windows_Media_Devices_IMediaDeviceControl<D>::TryGetAuto(bool& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControl)->TryGetAuto(&value, &succeeded));
    return succeeded;
}

template <typename D> bool consume_Windows_Media_Devices_IMediaDeviceControl<D>::TrySetAuto(bool value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControl)->TrySetAuto(value, &succeeded));
    return succeeded;
}

template <typename D> bool consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Supported(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Min() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Min(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Max() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Max(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Step() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Step(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::Default() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_Default(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IMediaDeviceControlCapabilities<D>::AutoModeSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceControlCapabilities)->get_AutoModeSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::IMediaEncodingProperties> consume_Windows_Media_Devices_IMediaDeviceController<D>::GetAvailableMediaStreamProperties(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::IMediaEncodingProperties> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceController)->GetAvailableMediaStreamProperties(get_abi(mediaStreamType), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::IMediaEncodingProperties consume_Windows_Media_Devices_IMediaDeviceController<D>::GetMediaStreamProperties(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
{
    Windows::Media::MediaProperties::IMediaEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceController)->GetMediaStreamProperties(get_abi(mediaStreamType), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IMediaDeviceController<D>::SetMediaStreamPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceController)->SetMediaStreamPropertiesAsync(get_abi(mediaStreamType), get_abi(mediaEncodingProperties), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetAudioCaptureSelector() const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->GetAudioCaptureSelector(put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetAudioRenderSelector() const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->GetAudioRenderSelector(put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetVideoCaptureSelector() const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->GetVideoCaptureSelector(put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole const& role) const
{
    hstring deviceId{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->GetDefaultAudioCaptureId(get_abi(role), put_abi(deviceId)));
    return deviceId;
}

template <typename D> hstring consume_Windows_Media_Devices_IMediaDeviceStatics<D>::GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole const& role) const
{
    hstring deviceId{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->GetDefaultAudioRenderId(get_abi(role), put_abi(deviceId)));
    return deviceId;
}

template <typename D> event_token consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->add_DefaultAudioCaptureDeviceChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Devices::IMediaDeviceStatics> consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::IMediaDeviceStatics>(this, &abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioCaptureDeviceChanged, DefaultAudioCaptureDeviceChanged(handler));
}

template <typename D> void consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioCaptureDeviceChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->remove_DefaultAudioCaptureDeviceChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->add_DefaultAudioRenderDeviceChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Devices::IMediaDeviceStatics> consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Devices::IMediaDeviceStatics>(this, &abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioRenderDeviceChanged, DefaultAudioRenderDeviceChanged(handler));
}

template <typename D> void consume_Windows_Media_Devices_IMediaDeviceStatics<D>::DefaultAudioRenderDeviceChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IMediaDeviceStatics)->remove_DefaultAudioRenderDeviceChanged(get_abi(cookie)));
}

template <typename D> Windows::Media::Devices::SendCommandStatus consume_Windows_Media_Devices_IModuleCommandResult<D>::Status() const
{
    Windows::Media::Devices::SendCommandStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IModuleCommandResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Devices_IModuleCommandResult<D>::Result() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IModuleCommandResult)->get_Result(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IOpticalImageStabilizationControl)->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::OpticalImageStabilizationMode> consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::OpticalImageStabilizationMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IOpticalImageStabilizationControl)->get_SupportedModes(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::OpticalImageStabilizationMode consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::Mode() const
{
    Windows::Media::Devices::OpticalImageStabilizationMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IOpticalImageStabilizationControl)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IOpticalImageStabilizationControl<D>::Mode(Windows::Media::Devices::OpticalImageStabilizationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IOpticalImageStabilizationControl)->put_Mode(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::Supported() const
{
    bool pbSupported{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IPhotoConfirmationControl)->get_Supported(&pbSupported));
    return pbSupported;
}

template <typename D> bool consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IPhotoConfirmationControl)->get_Enabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IPhotoConfirmationControl)->put_Enabled(value));
}

template <typename D> Windows::Media::MediaProperties::MediaPixelFormat consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::PixelFormat() const
{
    Windows::Media::MediaProperties::MediaPixelFormat format{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IPhotoConfirmationControl)->get_PixelFormat(put_abi(format)));
    return format;
}

template <typename D> void consume_Windows_Media_Devices_IPhotoConfirmationControl<D>::PixelFormat(Windows::Media::MediaProperties::MediaPixelFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IPhotoConfirmationControl)->put_PixelFormat(get_abi(format)));
}

template <typename D> void consume_Windows_Media_Devices_IRedialRequestedEventArgs<D>::Handled() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRedialRequestedEventArgs)->Handled());
}

template <typename D> bool consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoFocusEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->get_AutoFocusEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoFocusEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->put_AutoFocusEnabled(value));
}

template <typename D> bool consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoWhiteBalanceEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->get_AutoWhiteBalanceEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoWhiteBalanceEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->put_AutoWhiteBalanceEnabled(value));
}

template <typename D> bool consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoExposureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->get_AutoExposureEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IRegionOfInterest<D>::AutoExposureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->put_AutoExposureEnabled(value));
}

template <typename D> Windows::Foundation::Rect consume_Windows_Media_Devices_IRegionOfInterest<D>::Bounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IRegionOfInterest<D>::Bounds(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest)->put_Bounds(get_abi(value)));
}

template <typename D> Windows::Media::Devices::RegionOfInterestType consume_Windows_Media_Devices_IRegionOfInterest2<D>::Type() const
{
    Windows::Media::Devices::RegionOfInterestType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest2)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IRegionOfInterest2<D>::Type(Windows::Media::Devices::RegionOfInterestType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest2)->put_Type(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Devices_IRegionOfInterest2<D>::BoundsNormalized() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest2)->get_BoundsNormalized(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IRegionOfInterest2<D>::BoundsNormalized(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest2)->put_BoundsNormalized(value));
}

template <typename D> uint32_t consume_Windows_Media_Devices_IRegionOfInterest2<D>::Weight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest2)->get_Weight(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IRegionOfInterest2<D>::Weight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionOfInterest2)->put_Weight(value));
}

template <typename D> uint32_t consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::MaxRegions() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionsOfInterestControl)->get_MaxRegions(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::SetRegionsAsync(param::async_iterable<Windows::Media::Devices::RegionOfInterest> const& regions) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionsOfInterestControl)->SetRegionsAsync(get_abi(regions), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::SetRegionsAsync(param::async_iterable<Windows::Media::Devices::RegionOfInterest> const& regions, bool lockValues) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionsOfInterestControl)->SetRegionsWithLockAsync(get_abi(regions), lockValues, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::ClearRegionsAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionsOfInterestControl)->ClearRegionsAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::AutoFocusSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionsOfInterestControl)->get_AutoFocusSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::AutoWhiteBalanceSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionsOfInterestControl)->get_AutoWhiteBalanceSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IRegionsOfInterestControl<D>::AutoExposureSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IRegionsOfInterestControl)->get_AutoExposureSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::CaptureSceneMode> consume_Windows_Media_Devices_ISceneModeControl<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::CaptureSceneMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ISceneModeControl)->get_SupportedModes(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::CaptureSceneMode consume_Windows_Media_Devices_ISceneModeControl<D>::Value() const
{
    Windows::Media::Devices::CaptureSceneMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ISceneModeControl)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_ISceneModeControl<D>::SetValueAsync(Windows::Media::Devices::CaptureSceneMode const& sceneMode) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ISceneModeControl)->SetValueAsync(get_abi(sceneMode), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Media_Devices_ITorchControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ITorchControl)->get_Supported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_ITorchControl<D>::PowerSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ITorchControl)->get_PowerSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_ITorchControl<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ITorchControl)->get_Enabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ITorchControl<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ITorchControl)->put_Enabled(value));
}

template <typename D> float consume_Windows_Media_Devices_ITorchControl<D>::PowerPercent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ITorchControl)->get_PowerPercent(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_ITorchControl<D>::PowerPercent(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::ITorchControl)->put_PowerPercent(value));
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Brightness() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Brightness(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Contrast() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Contrast(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Hue() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Hue(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::WhiteBalance() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_WhiteBalance(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::BacklightCompensation() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_BacklightCompensation(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Pan() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Pan(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Tilt() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Tilt(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Zoom() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Zoom(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Roll() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Roll(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Exposure() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::MediaDeviceControl consume_Windows_Media_Devices_IVideoDeviceController<D>::Focus() const
{
    Windows::Media::Devices::MediaDeviceControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->get_Focus(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IVideoDeviceController<D>::TrySetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency const& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->TrySetPowerlineFrequency(get_abi(value), &succeeded));
    return succeeded;
}

template <typename D> bool consume_Windows_Media_Devices_IVideoDeviceController<D>::TryGetPowerlineFrequency(Windows::Media::Capture::PowerlineFrequency& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceController)->TryGetPowerlineFrequency(put_abi(value), &succeeded));
    return succeeded;
}

template <typename D> Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult<D>::Status() const
{
    Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->get_Supported(&value));
    return value;
}

template <typename D> Windows::Media::Devices::ColorTemperaturePreset consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Preset() const
{
    Windows::Media::Devices::ColorTemperaturePreset value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->get_Preset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IWhiteBalanceControl<D>::SetPresetAsync(Windows::Media::Devices::ColorTemperaturePreset const& preset) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->SetPresetAsync(get_abi(preset), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Min() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->get_Min(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Max() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->get_Max(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Step() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->get_Step(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Devices_IWhiteBalanceControl<D>::Value() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->get_Value(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Devices_IWhiteBalanceControl<D>::SetValueAsync(uint32_t temperature) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IWhiteBalanceControl)->SetValueAsync(temperature, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> bool consume_Windows_Media_Devices_IZoomControl<D>::Supported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl)->get_Supported(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IZoomControl<D>::Min() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl)->get_Min(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IZoomControl<D>::Max() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl)->get_Max(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IZoomControl<D>::Step() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl)->get_Step(&value));
    return value;
}

template <typename D> float consume_Windows_Media_Devices_IZoomControl<D>::Value() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IZoomControl<D>::Value(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl)->put_Value(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::ZoomTransitionMode> consume_Windows_Media_Devices_IZoomControl2<D>::SupportedModes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::ZoomTransitionMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl2)->get_SupportedModes(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::ZoomTransitionMode consume_Windows_Media_Devices_IZoomControl2<D>::Mode() const
{
    Windows::Media::Devices::ZoomTransitionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl2)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IZoomControl2<D>::Configure(Windows::Media::Devices::ZoomSettings const& settings) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomControl2)->Configure(get_abi(settings)));
}

template <typename D> Windows::Media::Devices::ZoomTransitionMode consume_Windows_Media_Devices_IZoomSettings<D>::Mode() const
{
    Windows::Media::Devices::ZoomTransitionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomSettings)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IZoomSettings<D>::Mode(Windows::Media::Devices::ZoomTransitionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomSettings)->put_Mode(get_abi(value)));
}

template <typename D> float consume_Windows_Media_Devices_IZoomSettings<D>::Value() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomSettings)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Devices_IZoomSettings<D>::Value(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Devices::IZoomSettings)->put_Value(value));
}

template <> struct delegate<Windows::Media::Devices::CallControlEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Devices::CallControlEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Devices::CallControlEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Devices::CallControl const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Media::Devices::DialRequestedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Devices::DialRequestedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Devices::DialRequestedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Devices::CallControl const*>(&sender), *reinterpret_cast<Windows::Media::Devices::DialRequestedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Media::Devices::KeypadPressedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Devices::KeypadPressedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Devices::KeypadPressedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Devices::CallControl const*>(&sender), *reinterpret_cast<Windows::Media::Devices::KeypadPressedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Media::Devices::RedialRequestedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Devices::RedialRequestedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Devices::RedialRequestedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Devices::CallControl const*>(&sender), *reinterpret_cast<Windows::Media::Devices::RedialRequestedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedPhotoCaptureSettings> : produce_base<D, Windows::Media::Devices::IAdvancedPhotoCaptureSettings>
{
    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::AdvancedPhotoMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::AdvancedPhotoMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Media::Devices::AdvancedPhotoMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedPhotoControl> : produce_base<D, Windows::Media::Devices::IAdvancedPhotoControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedModes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::AdvancedPhotoMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Configure(::IUnknown* settings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<Windows::Media::Devices::AdvancedPhotoCaptureSettings const*>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController>
{
    HRESULT __stdcall SetDeviceProperty(HSTRING propertyId, ::IUnknown* propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDeviceProperty(*reinterpret_cast<hstring const*>(&propertyId), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&propertyValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceProperty(HSTRING propertyId, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().GetDeviceProperty(*reinterpret_cast<hstring const*>(&propertyId)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2>
{
    HRESULT __stdcall get_LowLagPhotoSequence(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowLagPhotoSequence());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LowLagPhoto(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowLagPhoto());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SceneModeControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SceneModeControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TorchControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TorchControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlashControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlashControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalanceControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhiteBalanceControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExposureControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensationControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExposureCompensationControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeedControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsoSpeedControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegionsOfInterestControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RegionsOfInterestControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryUse(abi_t<Windows::Media::Devices::CaptureUse>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrimaryUse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrimaryUse(abi_t<Windows::Media::Devices::CaptureUse> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrimaryUse(*reinterpret_cast<Windows::Media::Devices::CaptureUse const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3>
{
    HRESULT __stdcall get_VariablePhotoSequenceController(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VariablePhotoSequenceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoConfirmationControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotoConfirmationControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ZoomControl());
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
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4>
{
    HRESULT __stdcall get_ExposurePriorityVideoControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExposurePriorityVideoControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredOptimization(abi_t<Windows::Media::Devices::MediaCaptureOptimization>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredOptimization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredOptimization(abi_t<Windows::Media::Devices::MediaCaptureOptimization> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredOptimization(*reinterpret_cast<Windows::Media::Devices::MediaCaptureOptimization const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HdrVideoControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HdrVideoControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpticalImageStabilizationControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OpticalImageStabilizationControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvancedPhotoControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvancedPhotoControl());
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
struct produce<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5> : produce_base<D, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDevicePropertyById(HSTRING propertyId, ::IUnknown* maxPropertyValueSize, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDevicePropertyById(*reinterpret_cast<hstring const*>(&propertyId), *reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&maxPropertyValueSize)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDevicePropertyById(HSTRING propertyId, ::IUnknown* propertyValue, abi_t<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SetDevicePropertyById(*reinterpret_cast<hstring const*>(&propertyId), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&propertyValue)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDevicePropertyByExtendedId(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, ::IUnknown* maxPropertyValueSize, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDevicePropertyByExtendedId(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(extendedPropertyId), reinterpret_cast<uint8_t const *>(extendedPropertyId) + __extendedPropertyIdSize), *reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&maxPropertyValueSize)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDevicePropertyByExtendedId(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, uint32_t __propertyValueSize, uint8_t* propertyValue, abi_t<Windows::Media::Devices::VideoDeviceControllerSetDevicePropertyStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SetDevicePropertyByExtendedId(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(extendedPropertyId), reinterpret_cast<uint8_t const *>(extendedPropertyId) + __extendedPropertyIdSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(propertyValue), reinterpret_cast<uint8_t const *>(propertyValue) + __propertyValueSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAudioDeviceController> : produce_base<D, Windows::Media::Devices::IAudioDeviceController>
{
    HRESULT __stdcall put_Muted(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Muted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Muted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Muted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VolumePercent(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VolumePercent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VolumePercent(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VolumePercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAudioDeviceModule> : produce_base<D, Windows::Media::Devices::IAudioDeviceModule>
{
    HRESULT __stdcall get_ClassId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClassId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InstanceId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InstanceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MajorVersion(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MajorVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinorVersion(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinorVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendCommandAsync(::IUnknown* Command, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendCommandAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&Command)));
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
struct produce<D, Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs> : produce_base<D, Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs>
{
    HRESULT __stdcall get_Module(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Module());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NotificationData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NotificationData());
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
struct produce<D, Windows::Media::Devices::IAudioDeviceModulesManager> : produce_base<D, Windows::Media::Devices::IAudioDeviceModulesManager>
{
    HRESULT __stdcall add_ModuleNotificationReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ModuleNotificationReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager, Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ModuleNotificationReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ModuleNotificationReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllById(HSTRING moduleId, ::IUnknown** modules) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *modules = detach_abi(this->shim().FindAllById(*reinterpret_cast<hstring const*>(&moduleId)));
            return S_OK;
        }
        catch (...)
        {
            *modules = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAll(::IUnknown** modules) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *modules = detach_abi(this->shim().FindAll());
            return S_OK;
        }
        catch (...)
        {
            *modules = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IAudioDeviceModulesManagerFactory> : produce_base<D, Windows::Media::Devices::IAudioDeviceModulesManagerFactory>
{
    HRESULT __stdcall Create(HSTRING deviceId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&deviceId)));
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
struct produce<D, Windows::Media::Devices::ICallControl> : produce_base<D, Windows::Media::Devices::ICallControl>
{
    HRESULT __stdcall IndicateNewIncomingCall(bool enableRinger, HSTRING callerId, uint64_t* callToken) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *callToken = detach_abi(this->shim().IndicateNewIncomingCall(enableRinger, *reinterpret_cast<hstring const*>(&callerId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IndicateNewOutgoingCall(uint64_t* callToken) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *callToken = detach_abi(this->shim().IndicateNewOutgoingCall());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IndicateActiveCall(uint64_t callToken) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndicateActiveCall(callToken);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndCall(uint64_t callToken) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndCall(callToken);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasRinger(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasRinger());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AnswerRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AnswerRequested(*reinterpret_cast<Windows::Media::Devices::CallControlEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AnswerRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnswerRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HangUpRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HangUpRequested(*reinterpret_cast<Windows::Media::Devices::CallControlEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HangUpRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HangUpRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DialRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DialRequested(*reinterpret_cast<Windows::Media::Devices::DialRequestedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DialRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DialRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RedialRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RedialRequested(*reinterpret_cast<Windows::Media::Devices::RedialRequestedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RedialRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedialRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeypadPressed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().KeypadPressed(*reinterpret_cast<Windows::Media::Devices::KeypadPressedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeypadPressed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeypadPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AudioTransferRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AudioTransferRequested(*reinterpret_cast<Windows::Media::Devices::CallControlEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioTransferRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioTransferRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ICallControlStatics> : produce_base<D, Windows::Media::Devices::ICallControlStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** callControl) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *callControl = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *callControl = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** callControl) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *callControl = detach_abi(this->shim().FromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *callControl = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs> : produce_base<D, Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Role(abi_t<Windows::Media::Devices::AudioDeviceRole>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Role());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IDialRequestedEventArgs> : produce_base<D, Windows::Media::Devices::IDialRequestedEventArgs>
{
    HRESULT __stdcall Handled() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contact());
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
struct produce<D, Windows::Media::Devices::IExposureCompensationControl> : produce_base<D, Windows::Media::Devices::IExposureCompensationControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValueAsync(float value, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetValueAsync(value));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IExposureControl> : produce_base<D, Windows::Media::Devices::IExposureControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Auto(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAutoAsync(bool value, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetAutoAsync(value));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValueAsync(abi_t<Windows::Foundation::TimeSpan> shutterDuration, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetValueAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&shutterDuration)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IExposurePriorityVideoControl> : produce_base<D, Windows::Media::Devices::IExposurePriorityVideoControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFlashControl> : produce_base<D, Windows::Media::Devices::IFlashControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedEyeReductionSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedEyeReductionSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Auto(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Auto(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Auto(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedEyeReduction(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RedEyeReduction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RedEyeReduction(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedEyeReduction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerPercent(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerPercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PowerPercent(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerPercent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFlashControl2> : produce_base<D, Windows::Media::Devices::IFlashControl2>
{
    HRESULT __stdcall get_AssistantLightSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AssistantLightSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AssistantLightEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AssistantLightEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AssistantLightEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AssistantLightEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFocusControl> : produce_base<D, Windows::Media::Devices::IFocusControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPresets(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedPresets());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preset(abi_t<Windows::Media::Devices::FocusPreset>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Preset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPresetAsync(abi_t<Windows::Media::Devices::FocusPreset> preset, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetPresetAsync(*reinterpret_cast<Windows::Media::Devices::FocusPreset const*>(&preset)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPresetWithCompletionOptionAsync(abi_t<Windows::Media::Devices::FocusPreset> preset, bool completeBeforeFocus, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetPresetAsync(*reinterpret_cast<Windows::Media::Devices::FocusPreset const*>(&preset), completeBeforeFocus));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValueAsync(uint32_t focus, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetValueAsync(focus));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FocusAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FocusAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFocusControl2> : produce_base<D, Windows::Media::Devices::IFocusControl2>
{
    HRESULT __stdcall get_FocusChangedSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusChangedSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WaitForFocusSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WaitForFocusSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFocusModes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedFocusModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFocusDistances(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedFocusDistances());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFocusRanges(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedFocusRanges());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::FocusMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusState(abi_t<Windows::Media::Devices::MediaCaptureFocusState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnlockAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().UnlockAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LockAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().LockAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Configure(::IUnknown* settings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<Windows::Media::Devices::FocusSettings const*>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IFocusSettings> : produce_base<D, Windows::Media::Devices::IFocusSettings>
{
    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::FocusMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::FocusMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Media::Devices::FocusMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoFocusRange(abi_t<Windows::Media::Devices::AutoFocusRange>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoFocusRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoFocusRange(abi_t<Windows::Media::Devices::AutoFocusRange> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoFocusRange(*reinterpret_cast<Windows::Media::Devices::AutoFocusRange const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Distance(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Distance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Distance(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Distance(*reinterpret_cast<Windows::Foundation::IReference<Windows::Media::Devices::ManualFocusDistance> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WaitForFocus(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WaitForFocus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WaitForFocus(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WaitForFocus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisableDriverFallback(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisableDriverFallback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisableDriverFallback(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableDriverFallback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IHdrVideoControl> : produce_base<D, Windows::Media::Devices::IHdrVideoControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedModes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::HdrVideoMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::HdrVideoMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Media::Devices::HdrVideoMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IIsoSpeedControl> : produce_base<D, Windows::Media::Devices::IIsoSpeedControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPresets(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedPresets());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preset(abi_t<Windows::Media::Devices::IsoSpeedPreset>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Preset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPresetAsync(abi_t<Windows::Media::Devices::IsoSpeedPreset> preset, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetPresetAsync(*reinterpret_cast<Windows::Media::Devices::IsoSpeedPreset const*>(&preset)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IIsoSpeedControl2> : produce_base<D, Windows::Media::Devices::IIsoSpeedControl2>
{
    HRESULT __stdcall get_Min(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValueAsync(uint32_t isoSpeed, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetValueAsync(isoSpeed));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Auto(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAutoAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetAutoAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IKeypadPressedEventArgs> : produce_base<D, Windows::Media::Devices::IKeypadPressedEventArgs>
{
    HRESULT __stdcall get_TelephonyKey(abi_t<Windows::Media::Devices::TelephonyKey>* telephonyKey) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *telephonyKey = detach_abi(this->shim().TelephonyKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ILowLagPhotoControl> : produce_base<D, Windows::Media::Devices::ILowLagPhotoControl>
{
    HRESULT __stdcall GetHighestConcurrentFrameRate(::IUnknown* captureProperties, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHighestConcurrentFrameRate(*reinterpret_cast<Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&captureProperties)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentFrameRate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThumbnailEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThumbnailFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailFormat(*reinterpret_cast<Windows::Media::MediaProperties::MediaThumbnailFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredThumbnailSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredThumbnailSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredThumbnailSize(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredThumbnailSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareAcceleratedThumbnailSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ILowLagPhotoSequenceControl> : produce_base<D, Windows::Media::Devices::ILowLagPhotoSequenceControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPastPhotos(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPastPhotos());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPhotosPerSecond(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPhotosPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PastPhotoLimit(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PastPhotoLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PastPhotoLimit(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PastPhotoLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosPerSecondLimit(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotosPerSecondLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotosPerSecondLimit(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotosPerSecondLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHighestConcurrentFrameRate(::IUnknown* captureProperties, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHighestConcurrentFrameRate(*reinterpret_cast<Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&captureProperties)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentFrameRate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThumbnailEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThumbnailFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ThumbnailFormat(abi_t<Windows::Media::MediaProperties::MediaThumbnailFormat> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailFormat(*reinterpret_cast<Windows::Media::MediaProperties::MediaThumbnailFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredThumbnailSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredThumbnailSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredThumbnailSize(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredThumbnailSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareAcceleratedThumbnailSupported(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareAcceleratedThumbnailSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceControl> : produce_base<D, Windows::Media::Devices::IMediaDeviceControl>
{
    HRESULT __stdcall get_Capabilities(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetValue(double* value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryGetValue(*value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetValue(double value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySetValue(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetAuto(bool* value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryGetAuto(*value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetAuto(bool value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySetAuto(value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceControlCapabilities> : produce_base<D, Windows::Media::Devices::IMediaDeviceControlCapabilities>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Default(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Default());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoModeSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoModeSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceController> : produce_base<D, Windows::Media::Devices::IMediaDeviceController>
{
    HRESULT __stdcall GetAvailableMediaStreamProperties(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAvailableMediaStreamProperties(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMediaStreamProperties(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetMediaStreamProperties(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetMediaStreamPropertiesAsync(abi_t<Windows::Media::Capture::MediaStreamType> mediaStreamType, ::IUnknown* mediaEncodingProperties, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetMediaStreamPropertiesAsync(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&mediaEncodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IMediaDeviceStatics> : produce_base<D, Windows::Media::Devices::IMediaDeviceStatics>
{
    HRESULT __stdcall GetAudioCaptureSelector(HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetAudioCaptureSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAudioRenderSelector(HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetAudioRenderSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVideoCaptureSelector(HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetVideoCaptureSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAudioCaptureId(abi_t<Windows::Media::Devices::AudioDeviceRole> role, HSTRING* deviceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceId = detach_abi(this->shim().GetDefaultAudioCaptureId(*reinterpret_cast<Windows::Media::Devices::AudioDeviceRole const*>(&role)));
            return S_OK;
        }
        catch (...)
        {
            *deviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAudioRenderId(abi_t<Windows::Media::Devices::AudioDeviceRole> role, HSTRING* deviceId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceId = detach_abi(this->shim().GetDefaultAudioRenderId(*reinterpret_cast<Windows::Media::Devices::AudioDeviceRole const*>(&role)));
            return S_OK;
        }
        catch (...)
        {
            *deviceId = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefaultAudioCaptureDeviceChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().DefaultAudioCaptureDeviceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefaultAudioCaptureDeviceChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultAudioCaptureDeviceChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefaultAudioRenderDeviceChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().DefaultAudioRenderDeviceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefaultAudioRenderDeviceChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultAudioRenderDeviceChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IModuleCommandResult> : produce_base<D, Windows::Media::Devices::IModuleCommandResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Devices::SendCommandStatus>* value) noexcept override
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

    HRESULT __stdcall get_Result(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Result());
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
struct produce<D, Windows::Media::Devices::IOpticalImageStabilizationControl> : produce_base<D, Windows::Media::Devices::IOpticalImageStabilizationControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedModes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::OpticalImageStabilizationMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::OpticalImageStabilizationMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Media::Devices::OpticalImageStabilizationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IPhotoConfirmationControl> : produce_base<D, Windows::Media::Devices::IPhotoConfirmationControl>
{
    HRESULT __stdcall get_Supported(bool* pbSupported) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pbSupported = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelFormat(abi_t<Windows::Media::MediaProperties::MediaPixelFormat>* format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *format = detach_abi(this->shim().PixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PixelFormat(abi_t<Windows::Media::MediaProperties::MediaPixelFormat> format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PixelFormat(*reinterpret_cast<Windows::Media::MediaProperties::MediaPixelFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRedialRequestedEventArgs> : produce_base<D, Windows::Media::Devices::IRedialRequestedEventArgs>
{
    HRESULT __stdcall Handled() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRegionOfInterest> : produce_base<D, Windows::Media::Devices::IRegionOfInterest>
{
    HRESULT __stdcall get_AutoFocusEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoFocusEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoFocusEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoFocusEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoWhiteBalanceEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoWhiteBalanceEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoWhiteBalanceEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoWhiteBalanceEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoExposureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoExposureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bounds(abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRegionOfInterest2> : produce_base<D, Windows::Media::Devices::IRegionOfInterest2>
{
    HRESULT __stdcall get_Type(abi_t<Windows::Media::Devices::RegionOfInterestType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(abi_t<Windows::Media::Devices::RegionOfInterestType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::Media::Devices::RegionOfInterestType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundsNormalized(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BoundsNormalized());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BoundsNormalized(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BoundsNormalized(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Weight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Weight(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Weight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IRegionsOfInterestControl> : produce_base<D, Windows::Media::Devices::IRegionsOfInterestControl>
{
    HRESULT __stdcall get_MaxRegions(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxRegions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetRegionsAsync(::IUnknown* regions, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetRegionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest> const*>(&regions)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetRegionsWithLockAsync(::IUnknown* regions, bool lockValues, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetRegionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::RegionOfInterest> const*>(&regions), lockValues));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearRegionsAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ClearRegionsAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoFocusSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoFocusSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoWhiteBalanceSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoWhiteBalanceSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoExposureSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ISceneModeControl> : produce_base<D, Windows::Media::Devices::ISceneModeControl>
{
    HRESULT __stdcall get_SupportedModes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_t<Windows::Media::Devices::CaptureSceneMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValueAsync(abi_t<Windows::Media::Devices::CaptureSceneMode> sceneMode, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetValueAsync(*reinterpret_cast<Windows::Media::Devices::CaptureSceneMode const*>(&sceneMode)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::ITorchControl> : produce_base<D, Windows::Media::Devices::ITorchControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerPercent(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerPercent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PowerPercent(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerPercent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IVideoDeviceController> : produce_base<D, Windows::Media::Devices::IVideoDeviceController>
{
    HRESULT __stdcall get_Brightness(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Brightness());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contrast(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contrast());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hue(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalance(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhiteBalance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BacklightCompensation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BacklightCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pan(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pan());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tilt(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tilt());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Zoom(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Zoom());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Roll(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Roll());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Exposure(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetPowerlineFrequency(abi_t<Windows::Media::Capture::PowerlineFrequency> value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySetPowerlineFrequency(*reinterpret_cast<Windows::Media::Capture::PowerlineFrequency const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetPowerlineFrequency(abi_t<Windows::Media::Capture::PowerlineFrequency>* value, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryGetPowerlineFrequency(*reinterpret_cast<Windows::Media::Capture::PowerlineFrequency*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult> : produce_base<D, Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyStatus>* value) noexcept override
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

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
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
struct produce<D, Windows::Media::Devices::IWhiteBalanceControl> : produce_base<D, Windows::Media::Devices::IWhiteBalanceControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Preset(abi_t<Windows::Media::Devices::ColorTemperaturePreset>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Preset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPresetAsync(abi_t<Windows::Media::Devices::ColorTemperaturePreset> preset, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetPresetAsync(*reinterpret_cast<Windows::Media::Devices::ColorTemperaturePreset const*>(&preset)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetValueAsync(uint32_t temperature, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetValueAsync(temperature));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IZoomControl> : produce_base<D, Windows::Media::Devices::IZoomControl>
{
    HRESULT __stdcall get_Supported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IZoomControl2> : produce_base<D, Windows::Media::Devices::IZoomControl2>
{
    HRESULT __stdcall get_SupportedModes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedModes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::ZoomTransitionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Configure(::IUnknown* settings) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Configure(*reinterpret_cast<Windows::Media::Devices::ZoomSettings const*>(&settings));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::IZoomSettings> : produce_base<D, Windows::Media::Devices::IZoomSettings>
{
    HRESULT __stdcall get_Mode(abi_t<Windows::Media::Devices::ZoomTransitionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(abi_t<Windows::Media::Devices::ZoomTransitionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Media::Devices::ZoomTransitionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

inline AdvancedPhotoCaptureSettings::AdvancedPhotoCaptureSettings() :
    AdvancedPhotoCaptureSettings(activate_instance<AdvancedPhotoCaptureSettings>())
{}

inline AudioDeviceModulesManager::AudioDeviceModulesManager(param::hstring const& deviceId) :
    AudioDeviceModulesManager(get_activation_factory<AudioDeviceModulesManager, Windows::Media::Devices::IAudioDeviceModulesManagerFactory>().Create(deviceId))
{}

inline Windows::Media::Devices::CallControl CallControl::GetDefault()
{
    return get_activation_factory<CallControl, Windows::Media::Devices::ICallControlStatics>().GetDefault();
}

inline Windows::Media::Devices::CallControl CallControl::FromId(param::hstring const& deviceId)
{
    return get_activation_factory<CallControl, Windows::Media::Devices::ICallControlStatics>().FromId(deviceId);
}

inline FocusSettings::FocusSettings() :
    FocusSettings(activate_instance<FocusSettings>())
{}

inline hstring MediaDevice::GetAudioCaptureSelector()
{
    return get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().GetAudioCaptureSelector();
}

inline hstring MediaDevice::GetAudioRenderSelector()
{
    return get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().GetAudioRenderSelector();
}

inline hstring MediaDevice::GetVideoCaptureSelector()
{
    return get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().GetVideoCaptureSelector();
}

inline hstring MediaDevice::GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole const& role)
{
    return get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().GetDefaultAudioCaptureId(role);
}

inline hstring MediaDevice::GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole const& role)
{
    return get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().GetDefaultAudioRenderId(role);
}

inline event_token MediaDevice::DefaultAudioCaptureDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler)
{
    return get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().DefaultAudioCaptureDeviceChanged(handler);
}

inline factory_event_revoker<Windows::Media::Devices::IMediaDeviceStatics> MediaDevice::DefaultAudioCaptureDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler)
{
    auto factory = get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>();
    return { factory, &abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioCaptureDeviceChanged, factory.DefaultAudioCaptureDeviceChanged(handler) };
}

inline void MediaDevice::DefaultAudioCaptureDeviceChanged(event_token const& cookie)
{
    get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().DefaultAudioCaptureDeviceChanged(cookie);
}

inline event_token MediaDevice::DefaultAudioRenderDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler)
{
    return get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().DefaultAudioRenderDeviceChanged(handler);
}

inline factory_event_revoker<Windows::Media::Devices::IMediaDeviceStatics> MediaDevice::DefaultAudioRenderDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler)
{
    auto factory = get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>();
    return { factory, &abi_t<Windows::Media::Devices::IMediaDeviceStatics>::remove_DefaultAudioRenderDeviceChanged, factory.DefaultAudioRenderDeviceChanged(handler) };
}

inline void MediaDevice::DefaultAudioRenderDeviceChanged(event_token const& cookie)
{
    get_activation_factory<MediaDevice, Windows::Media::Devices::IMediaDeviceStatics>().DefaultAudioRenderDeviceChanged(cookie);
}

inline RegionOfInterest::RegionOfInterest() :
    RegionOfInterest(activate_instance<RegionOfInterest>())
{}

inline ZoomSettings::ZoomSettings() :
    ZoomSettings(activate_instance<ZoomSettings>())
{}

template <typename L> CallControlEventHandler::CallControlEventHandler(L handler) :
    CallControlEventHandler(impl::make_delegate<CallControlEventHandler>(std::forward<L>(handler)))
{}

template <typename F> CallControlEventHandler::CallControlEventHandler(F* handler) :
    CallControlEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> CallControlEventHandler::CallControlEventHandler(O* object, M method) :
    CallControlEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void CallControlEventHandler::operator()(Windows::Media::Devices::CallControl const& sender) const
{
    check_hresult((*(abi_t<CallControlEventHandler>**)this)->Invoke(get_abi(sender)));
}

template <typename L> DialRequestedEventHandler::DialRequestedEventHandler(L handler) :
    DialRequestedEventHandler(impl::make_delegate<DialRequestedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DialRequestedEventHandler::DialRequestedEventHandler(F* handler) :
    DialRequestedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DialRequestedEventHandler::DialRequestedEventHandler(O* object, M method) :
    DialRequestedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DialRequestedEventHandler::operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::DialRequestedEventArgs const& e) const
{
    check_hresult((*(abi_t<DialRequestedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> KeypadPressedEventHandler::KeypadPressedEventHandler(L handler) :
    KeypadPressedEventHandler(impl::make_delegate<KeypadPressedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> KeypadPressedEventHandler::KeypadPressedEventHandler(F* handler) :
    KeypadPressedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> KeypadPressedEventHandler::KeypadPressedEventHandler(O* object, M method) :
    KeypadPressedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void KeypadPressedEventHandler::operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::KeypadPressedEventArgs const& e) const
{
    check_hresult((*(abi_t<KeypadPressedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> RedialRequestedEventHandler::RedialRequestedEventHandler(L handler) :
    RedialRequestedEventHandler(impl::make_delegate<RedialRequestedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RedialRequestedEventHandler::RedialRequestedEventHandler(F* handler) :
    RedialRequestedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> RedialRequestedEventHandler::RedialRequestedEventHandler(O* object, M method) :
    RedialRequestedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void RedialRequestedEventHandler::operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::RedialRequestedEventArgs const& e) const
{
    check_hresult((*(abi_t<RedialRequestedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAdvancedPhotoCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Devices::IAdvancedPhotoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAdvancedPhotoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController> {};

template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2> {};

template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3> {};

template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4> {};

template<> struct hash<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5> {};

template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAudioDeviceController> {};

template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModule> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAudioDeviceModule> {};

template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModulesManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAudioDeviceModulesManager> {};

template<> struct hash<winrt::Windows::Media::Devices::IAudioDeviceModulesManagerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IAudioDeviceModulesManagerFactory> {};

template<> struct hash<winrt::Windows::Media::Devices::ICallControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ICallControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ICallControlStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ICallControlStatics> {};

template<> struct hash<winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::IDialRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IDialRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::IExposureCompensationControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IExposureCompensationControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IExposureControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IExposureControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IExposurePriorityVideoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IExposurePriorityVideoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IFlashControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IFlashControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IFlashControl2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IFlashControl2> {};

template<> struct hash<winrt::Windows::Media::Devices::IFocusControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IFocusControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IFocusControl2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IFocusControl2> {};

template<> struct hash<winrt::Windows::Media::Devices::IFocusSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IFocusSettings> {};

template<> struct hash<winrt::Windows::Media::Devices::IHdrVideoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IHdrVideoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IIsoSpeedControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IIsoSpeedControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IIsoSpeedControl2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IIsoSpeedControl2> {};

template<> struct hash<winrt::Windows::Media::Devices::IKeypadPressedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IKeypadPressedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::ILowLagPhotoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ILowLagPhotoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ILowLagPhotoSequenceControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IMediaDeviceControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IMediaDeviceControlCapabilities> {};

template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IMediaDeviceController> {};

template<> struct hash<winrt::Windows::Media::Devices::IMediaDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IMediaDeviceStatics> {};

template<> struct hash<winrt::Windows::Media::Devices::IModuleCommandResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IModuleCommandResult> {};

template<> struct hash<winrt::Windows::Media::Devices::IOpticalImageStabilizationControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IOpticalImageStabilizationControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IPhotoConfirmationControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IPhotoConfirmationControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IRedialRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IRedialRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::IRegionOfInterest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IRegionOfInterest> {};

template<> struct hash<winrt::Windows::Media::Devices::IRegionOfInterest2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IRegionOfInterest2> {};

template<> struct hash<winrt::Windows::Media::Devices::IRegionsOfInterestControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IRegionsOfInterestControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ISceneModeControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ISceneModeControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ITorchControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ITorchControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IVideoDeviceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IVideoDeviceController> {};

template<> struct hash<winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult> {};

template<> struct hash<winrt::Windows::Media::Devices::IWhiteBalanceControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IWhiteBalanceControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IZoomControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IZoomControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IZoomControl2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IZoomControl2> {};

template<> struct hash<winrt::Windows::Media::Devices::IZoomSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IZoomSettings> {};

template<> struct hash<winrt::Windows::Media::Devices::AdvancedPhotoCaptureSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::AdvancedPhotoCaptureSettings> {};

template<> struct hash<winrt::Windows::Media::Devices::AdvancedPhotoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::AdvancedPhotoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::AudioDeviceController> {};

template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceModule> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::AudioDeviceModule> {};

template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::AudioDeviceModulesManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::AudioDeviceModulesManager> {};

template<> struct hash<winrt::Windows::Media::Devices::CallControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::CallControl> {};

template<> struct hash<winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::DialRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::DialRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::ExposureCompensationControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ExposureCompensationControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ExposureControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ExposureControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ExposurePriorityVideoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ExposurePriorityVideoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::FlashControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::FlashControl> {};

template<> struct hash<winrt::Windows::Media::Devices::FocusControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::FocusControl> {};

template<> struct hash<winrt::Windows::Media::Devices::FocusSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::FocusSettings> {};

template<> struct hash<winrt::Windows::Media::Devices::HdrVideoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::HdrVideoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::IsoSpeedControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::IsoSpeedControl> {};

template<> struct hash<winrt::Windows::Media::Devices::KeypadPressedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::KeypadPressedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::LowLagPhotoControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::LowLagPhotoControl> {};

template<> struct hash<winrt::Windows::Media::Devices::LowLagPhotoSequenceControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::LowLagPhotoSequenceControl> {};

template<> struct hash<winrt::Windows::Media::Devices::MediaDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::MediaDevice> {};

template<> struct hash<winrt::Windows::Media::Devices::MediaDeviceControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::MediaDeviceControl> {};

template<> struct hash<winrt::Windows::Media::Devices::MediaDeviceControlCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::MediaDeviceControlCapabilities> {};

template<> struct hash<winrt::Windows::Media::Devices::ModuleCommandResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ModuleCommandResult> {};

template<> struct hash<winrt::Windows::Media::Devices::OpticalImageStabilizationControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::OpticalImageStabilizationControl> {};

template<> struct hash<winrt::Windows::Media::Devices::PhotoConfirmationControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::PhotoConfirmationControl> {};

template<> struct hash<winrt::Windows::Media::Devices::RedialRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::RedialRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Devices::RegionOfInterest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::RegionOfInterest> {};

template<> struct hash<winrt::Windows::Media::Devices::RegionsOfInterestControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::RegionsOfInterestControl> {};

template<> struct hash<winrt::Windows::Media::Devices::SceneModeControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::SceneModeControl> {};

template<> struct hash<winrt::Windows::Media::Devices::TorchControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::TorchControl> {};

template<> struct hash<winrt::Windows::Media::Devices::VideoDeviceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::VideoDeviceController> {};

template<> struct hash<winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::VideoDeviceControllerGetDevicePropertyResult> {};

template<> struct hash<winrt::Windows::Media::Devices::WhiteBalanceControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::WhiteBalanceControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ZoomControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ZoomControl> {};

template<> struct hash<winrt::Windows::Media::Devices::ZoomSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Devices::ZoomSettings> {};

}

WINRT_WARNING_POP
