// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.Capture.0.h"
#include "winrt/impl/Windows.Media.Devices.Core.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.Devices.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

struct WINRT_EBO IAdvancedPhotoCaptureSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedPhotoCaptureSettings>
{
    IAdvancedPhotoCaptureSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedPhotoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedPhotoControl>
{
    IAdvancedPhotoControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedVideoCaptureDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController>
{
    IAdvancedVideoCaptureDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedVideoCaptureDeviceController2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController2>
{
    IAdvancedVideoCaptureDeviceController2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedVideoCaptureDeviceController3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController3>
{
    IAdvancedVideoCaptureDeviceController3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedVideoCaptureDeviceController4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController4>
{
    IAdvancedVideoCaptureDeviceController4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvancedVideoCaptureDeviceController5 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvancedVideoCaptureDeviceController5>
{
    IAdvancedVideoCaptureDeviceController5(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceController>,
    impl::require<IAudioDeviceController, Windows::Media::Devices::IMediaDeviceController>
{
    IAudioDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioDeviceModule :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModule>
{
    IAudioDeviceModule(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioDeviceModuleNotificationEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModuleNotificationEventArgs>
{
    IAudioDeviceModuleNotificationEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioDeviceModulesManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModulesManager>
{
    IAudioDeviceModulesManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioDeviceModulesManagerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceModulesManagerFactory>
{
    IAudioDeviceModulesManagerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICallControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallControl>
{
    ICallControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICallControlStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallControlStatics>
{
    ICallControlStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDefaultAudioDeviceChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDefaultAudioDeviceChangedEventArgs>
{
    IDefaultAudioDeviceChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDialRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDialRequestedEventArgs>
{
    IDialRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExposureCompensationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExposureCompensationControl>
{
    IExposureCompensationControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExposureControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExposureControl>
{
    IExposureControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExposurePriorityVideoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExposurePriorityVideoControl>
{
    IExposurePriorityVideoControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlashControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlashControl>
{
    IFlashControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFlashControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFlashControl2>
{
    IFlashControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusControl>
{
    IFocusControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusControl2>
{
    IFocusControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFocusSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFocusSettings>
{
    IFocusSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHdrVideoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdrVideoControl>
{
    IHdrVideoControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IIsoSpeedControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIsoSpeedControl>
{
    IIsoSpeedControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IIsoSpeedControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIsoSpeedControl2>
{
    IIsoSpeedControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeypadPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeypadPressedEventArgs>
{
    IKeypadPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagPhotoControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoControl>
{
    ILowLagPhotoControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILowLagPhotoSequenceControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILowLagPhotoSequenceControl>
{
    ILowLagPhotoSequenceControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaDeviceControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceControl>
{
    IMediaDeviceControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaDeviceControlCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceControlCapabilities>
{
    IMediaDeviceControlCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceController>
{
    IMediaDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaDeviceStatics>
{
    IMediaDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IModuleCommandResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IModuleCommandResult>
{
    IModuleCommandResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOpticalImageStabilizationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOpticalImageStabilizationControl>
{
    IOpticalImageStabilizationControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhotoConfirmationControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhotoConfirmationControl>
{
    IPhotoConfirmationControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRedialRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRedialRequestedEventArgs>
{
    IRedialRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRegionOfInterest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRegionOfInterest>
{
    IRegionOfInterest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRegionOfInterest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRegionOfInterest2>
{
    IRegionOfInterest2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRegionsOfInterestControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRegionsOfInterestControl>
{
    IRegionsOfInterestControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISceneModeControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneModeControl>
{
    ISceneModeControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITorchControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITorchControl>
{
    ITorchControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoDeviceController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDeviceController>,
    impl::require<IVideoDeviceController, Windows::Media::Devices::IMediaDeviceController>
{
    IVideoDeviceController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoDeviceControllerGetDevicePropertyResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoDeviceControllerGetDevicePropertyResult>
{
    IVideoDeviceControllerGetDevicePropertyResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWhiteBalanceControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWhiteBalanceControl>
{
    IWhiteBalanceControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IZoomControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IZoomControl>
{
    IZoomControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IZoomControl2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IZoomControl2>
{
    IZoomControl2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IZoomSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IZoomSettings>
{
    IZoomSettings(std::nullptr_t = nullptr) noexcept {}
};

}
