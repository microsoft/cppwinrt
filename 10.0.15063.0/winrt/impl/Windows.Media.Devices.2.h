// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Devices.Core.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

struct CallControlEventHandler : Windows::Foundation::IUnknown
{
    CallControlEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> CallControlEventHandler(L lambda);
    template <typename F> CallControlEventHandler(F* function);
    template <typename O, typename M> CallControlEventHandler(O* object, M method);
    void operator()(Windows::Media::Devices::CallControl const& sender) const;
};

struct DialRequestedEventHandler : Windows::Foundation::IUnknown
{
    DialRequestedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DialRequestedEventHandler(L lambda);
    template <typename F> DialRequestedEventHandler(F* function);
    template <typename O, typename M> DialRequestedEventHandler(O* object, M method);
    void operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::DialRequestedEventArgs const& e) const;
};

struct KeypadPressedEventHandler : Windows::Foundation::IUnknown
{
    KeypadPressedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> KeypadPressedEventHandler(L lambda);
    template <typename F> KeypadPressedEventHandler(F* function);
    template <typename O, typename M> KeypadPressedEventHandler(O* object, M method);
    void operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::KeypadPressedEventArgs const& e) const;
};

struct RedialRequestedEventHandler : Windows::Foundation::IUnknown
{
    RedialRequestedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> RedialRequestedEventHandler(L lambda);
    template <typename F> RedialRequestedEventHandler(F* function);
    template <typename O, typename M> RedialRequestedEventHandler(O* object, M method);
    void operator()(Windows::Media::Devices::CallControl const& sender, Windows::Media::Devices::RedialRequestedEventArgs const& e) const;
};

struct WINRT_EBO AdvancedPhotoCaptureSettings :
    Windows::Media::Devices::IAdvancedPhotoCaptureSettings
{
    AdvancedPhotoCaptureSettings(std::nullptr_t) noexcept {}
    AdvancedPhotoCaptureSettings();
};

struct WINRT_EBO AdvancedPhotoControl :
    Windows::Media::Devices::IAdvancedPhotoControl
{
    AdvancedPhotoControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioDeviceController :
    Windows::Media::Devices::IAudioDeviceController
{
    AudioDeviceController(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioDeviceModule :
    Windows::Media::Devices::IAudioDeviceModule
{
    AudioDeviceModule(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioDeviceModuleNotificationEventArgs :
    Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs
{
    AudioDeviceModuleNotificationEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioDeviceModulesManager :
    Windows::Media::Devices::IAudioDeviceModulesManager
{
    AudioDeviceModulesManager(std::nullptr_t) noexcept {}
    AudioDeviceModulesManager(param::hstring const& deviceId);
};

struct WINRT_EBO CallControl :
    Windows::Media::Devices::ICallControl
{
    CallControl(std::nullptr_t) noexcept {}
    static Windows::Media::Devices::CallControl GetDefault();
    static Windows::Media::Devices::CallControl FromId(param::hstring const& deviceId);
};

struct WINRT_EBO DefaultAudioCaptureDeviceChangedEventArgs :
    Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs
{
    DefaultAudioCaptureDeviceChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DefaultAudioRenderDeviceChangedEventArgs :
    Windows::Media::Devices::IDefaultAudioDeviceChangedEventArgs
{
    DefaultAudioRenderDeviceChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DialRequestedEventArgs :
    Windows::Media::Devices::IDialRequestedEventArgs
{
    DialRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ExposureCompensationControl :
    Windows::Media::Devices::IExposureCompensationControl
{
    ExposureCompensationControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ExposureControl :
    Windows::Media::Devices::IExposureControl
{
    ExposureControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ExposurePriorityVideoControl :
    Windows::Media::Devices::IExposurePriorityVideoControl
{
    ExposurePriorityVideoControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FlashControl :
    Windows::Media::Devices::IFlashControl,
    impl::require<FlashControl, Windows::Media::Devices::IFlashControl2>
{
    FlashControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FocusControl :
    Windows::Media::Devices::IFocusControl,
    impl::require<FocusControl, Windows::Media::Devices::IFocusControl2>
{
    FocusControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FocusSettings :
    Windows::Media::Devices::IFocusSettings
{
    FocusSettings(std::nullptr_t) noexcept {}
    FocusSettings();
};

struct WINRT_EBO HdrVideoControl :
    Windows::Media::Devices::IHdrVideoControl
{
    HdrVideoControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO IsoSpeedControl :
    Windows::Media::Devices::IIsoSpeedControl,
    impl::require<IsoSpeedControl, Windows::Media::Devices::IIsoSpeedControl2>
{
    IsoSpeedControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO KeypadPressedEventArgs :
    Windows::Media::Devices::IKeypadPressedEventArgs
{
    KeypadPressedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagPhotoControl :
    Windows::Media::Devices::ILowLagPhotoControl
{
    LowLagPhotoControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LowLagPhotoSequenceControl :
    Windows::Media::Devices::ILowLagPhotoSequenceControl
{
    LowLagPhotoSequenceControl(std::nullptr_t) noexcept {}
};

struct MediaDevice
{
    MediaDevice() = delete;
    static hstring GetAudioCaptureSelector();
    static hstring GetAudioRenderSelector();
    static hstring GetVideoCaptureSelector();
    static hstring GetDefaultAudioCaptureId(Windows::Media::Devices::AudioDeviceRole const& role);
    static hstring GetDefaultAudioRenderId(Windows::Media::Devices::AudioDeviceRole const& role);
    static event_token DefaultAudioCaptureDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler);
    using DefaultAudioCaptureDeviceChanged_revoker = factory_event_revoker<Windows::Media::Devices::IMediaDeviceStatics>;
    static DefaultAudioCaptureDeviceChanged_revoker DefaultAudioCaptureDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioCaptureDeviceChangedEventArgs> const& handler);
    static void DefaultAudioCaptureDeviceChanged(event_token const& cookie);
    static event_token DefaultAudioRenderDeviceChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler);
    using DefaultAudioRenderDeviceChanged_revoker = factory_event_revoker<Windows::Media::Devices::IMediaDeviceStatics>;
    static DefaultAudioRenderDeviceChanged_revoker DefaultAudioRenderDeviceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::Media::Devices::DefaultAudioRenderDeviceChangedEventArgs> const& handler);
    static void DefaultAudioRenderDeviceChanged(event_token const& cookie);
};

struct WINRT_EBO MediaDeviceControl :
    Windows::Media::Devices::IMediaDeviceControl
{
    MediaDeviceControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaDeviceControlCapabilities :
    Windows::Media::Devices::IMediaDeviceControlCapabilities
{
    MediaDeviceControlCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ModuleCommandResult :
    Windows::Media::Devices::IModuleCommandResult
{
    ModuleCommandResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO OpticalImageStabilizationControl :
    Windows::Media::Devices::IOpticalImageStabilizationControl
{
    OpticalImageStabilizationControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PhotoConfirmationControl :
    Windows::Media::Devices::IPhotoConfirmationControl
{
    PhotoConfirmationControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RedialRequestedEventArgs :
    Windows::Media::Devices::IRedialRequestedEventArgs
{
    RedialRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RegionOfInterest :
    Windows::Media::Devices::IRegionOfInterest,
    impl::require<RegionOfInterest, Windows::Media::Devices::IRegionOfInterest2>
{
    RegionOfInterest(std::nullptr_t) noexcept {}
    RegionOfInterest();
};

struct WINRT_EBO RegionsOfInterestControl :
    Windows::Media::Devices::IRegionsOfInterestControl
{
    RegionsOfInterestControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SceneModeControl :
    Windows::Media::Devices::ISceneModeControl
{
    SceneModeControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TorchControl :
    Windows::Media::Devices::ITorchControl
{
    TorchControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoDeviceController :
    Windows::Media::Devices::IVideoDeviceController,
    impl::require<VideoDeviceController, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController2, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController3, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController4, Windows::Media::Devices::IAdvancedVideoCaptureDeviceController5>
{
    VideoDeviceController(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoDeviceControllerGetDevicePropertyResult :
    Windows::Media::Devices::IVideoDeviceControllerGetDevicePropertyResult
{
    VideoDeviceControllerGetDevicePropertyResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WhiteBalanceControl :
    Windows::Media::Devices::IWhiteBalanceControl
{
    WhiteBalanceControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ZoomControl :
    Windows::Media::Devices::IZoomControl,
    impl::require<ZoomControl, Windows::Media::Devices::IZoomControl2>
{
    ZoomControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ZoomSettings :
    Windows::Media::Devices::IZoomSettings
{
    ZoomSettings(std::nullptr_t) noexcept {}
    ZoomSettings();
};

}
