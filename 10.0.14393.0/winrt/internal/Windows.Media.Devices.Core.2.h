// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Devices.Core.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif

#ifndef WINRT_GENERIC_3c00fd60_2950_5939_a21a_2d12c5a01b8a
#define WINRT_GENERIC_3c00fd60_2950_5939_a21a_2d12c5a01b8a
template <> struct __declspec(uuid("3c00fd60-2950-5939-a21a-2d12c5a01b8a")) __declspec(novtable) IReference<bool> : impl_IReference<bool> {};
#endif

#ifndef WINRT_GENERIC_719cc2ba_3e76_5def_9f1a_38d85a145ea8
#define WINRT_GENERIC_719cc2ba_3e76_5def_9f1a_38d85a145ea8
template <> struct __declspec(uuid("719cc2ba-3e76-5def-9f1a-38d85a145ea8")) __declspec(novtable) IReference<float> : impl_IReference<float> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_1c8f8276_b89a_5093_a1ed_af49dfb72a89
#define WINRT_GENERIC_1c8f8276_b89a_5093_a1ed_af49dfb72a89
template <> struct __declspec(uuid("1c8f8276-b89a-5093-a1ed-af49dfb72a89")) __declspec(novtable) IVector<Windows::Media::Devices::Core::FrameController> : impl_IVector<Windows::Media::Devices::Core::FrameController> {};
#endif

#ifndef WINRT_GENERIC_fcd6a2a3_b6ff_5572_912b_99ebaf95165d
#define WINRT_GENERIC_fcd6a2a3_b6ff_5572_912b_99ebaf95165d
template <> struct __declspec(uuid("fcd6a2a3-b6ff-5572-912b-99ebaf95165d")) __declspec(novtable) IVectorView<Windows::Media::Devices::Core::FrameController> : impl_IVectorView<Windows::Media::Devices::Core::FrameController> {};
#endif

#ifndef WINRT_GENERIC_1440dc88_63ff_5a01_bb93_390c76742488
#define WINRT_GENERIC_1440dc88_63ff_5a01_bb93_390c76742488
template <> struct __declspec(uuid("1440dc88-63ff-5a01-bb93-390c76742488")) __declspec(novtable) IIterator<Windows::Media::Devices::Core::FrameController> : impl_IIterator<Windows::Media::Devices::Core::FrameController> {};
#endif

#ifndef WINRT_GENERIC_bd8eeadc_2dd9_5ad8_ac5d_f3b13b94b9c2
#define WINRT_GENERIC_bd8eeadc_2dd9_5ad8_ac5d_f3b13b94b9c2
template <> struct __declspec(uuid("bd8eeadc-2dd9-5ad8-ac5d-f3b13b94b9c2")) __declspec(novtable) IIterable<Windows::Media::Devices::Core::FrameController> : impl_IIterable<Windows::Media::Devices::Core::FrameController> {};
#endif


}

namespace Windows::Media::Devices::Core {

template <typename D>
struct WINRT_EBO impl_ICameraIntrinsics
{
    Windows::Foundation::Numerics::float2 FocalLength() const;
    Windows::Foundation::Numerics::float2 PrincipalPoint() const;
    Windows::Foundation::Numerics::float3 RadialDistortion() const;
    Windows::Foundation::Numerics::float2 TangentialDistortion() const;
    uint32_t ImageWidth() const;
    uint32_t ImageHeight() const;
    Windows::Foundation::Point ProjectOntoFrame(const Windows::Foundation::Numerics::float3 & coordinate) const;
    Windows::Foundation::Numerics::float2 UnprojectAtUnitDepth(const Windows::Foundation::Point & pixelCoordinate) const;
    void ProjectManyOntoFrame(array_ref<const Windows::Foundation::Numerics::float3> coordinates, array_ref<Windows::Foundation::Point> results) const;
    void UnprojectPixelsAtUnitDepth(array_ref<const Windows::Foundation::Point> pixelCoordinates, array_ref<Windows::Foundation::Numerics::float2> results) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraIntrinsics2
{
    Windows::Foundation::Numerics::float4x4 UndistortedProjectionTransform() const;
    Windows::Foundation::Point DistortPoint(const Windows::Foundation::Point & input) const;
    void DistortPoints(array_ref<const Windows::Foundation::Point> inputs, array_ref<Windows::Foundation::Point> results) const;
    Windows::Foundation::Point UndistortPoint(const Windows::Foundation::Point & input) const;
    void UndistortPoints(array_ref<const Windows::Foundation::Point> inputs, array_ref<Windows::Foundation::Point> results) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraIntrinsicsFactory
{
    Windows::Media::Devices::Core::CameraIntrinsics Create(const Windows::Foundation::Numerics::float2 & focalLength, const Windows::Foundation::Numerics::float2 & principalPoint, const Windows::Foundation::Numerics::float3 & radialDistortion, const Windows::Foundation::Numerics::float2 & tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight) const;
};

template <typename D>
struct WINRT_EBO impl_IDepthCorrelatedCoordinateMapper
{
    Windows::Foundation::Numerics::float3 UnprojectPoint(const Windows::Foundation::Point & sourcePoint, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem) const;
    void UnprojectPoints(array_ref<const Windows::Foundation::Point> sourcePoints, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem, array_ref<Windows::Foundation::Numerics::float3> results) const;
    Windows::Foundation::Point MapPoint(const Windows::Foundation::Point & sourcePoint, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem, const Windows::Media::Devices::Core::CameraIntrinsics & targetCameraIntrinsics) const;
    void MapPoints(array_ref<const Windows::Foundation::Point> sourcePoints, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem, const Windows::Media::Devices::Core::CameraIntrinsics & targetCameraIntrinsics, array_ref<Windows::Foundation::Point> results) const;
};

template <typename D>
struct WINRT_EBO impl_IFrameControlCapabilities
{
    Windows::Media::Devices::Core::FrameExposureCapabilities Exposure() const;
    Windows::Media::Devices::Core::FrameExposureCompensationCapabilities ExposureCompensation() const;
    Windows::Media::Devices::Core::FrameIsoSpeedCapabilities IsoSpeed() const;
    Windows::Media::Devices::Core::FrameFocusCapabilities Focus() const;
    bool PhotoConfirmationSupported() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameControlCapabilities2
{
    Windows::Media::Devices::Core::FrameFlashCapabilities Flash() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameController
{
    Windows::Media::Devices::Core::FrameExposureControl ExposureControl() const;
    Windows::Media::Devices::Core::FrameExposureCompensationControl ExposureCompensationControl() const;
    Windows::Media::Devices::Core::FrameIsoSpeedControl IsoSpeedControl() const;
    Windows::Media::Devices::Core::FrameFocusControl FocusControl() const;
    Windows::Foundation::IReference<bool> PhotoConfirmationEnabled() const;
    void PhotoConfirmationEnabled(const Windows::Foundation::IReference<bool> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IFrameController2
{
    Windows::Media::Devices::Core::FrameFlashControl FlashControl() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameExposureCapabilities
{
    bool Supported() const;
    Windows::Foundation::TimeSpan Min() const;
    Windows::Foundation::TimeSpan Max() const;
    Windows::Foundation::TimeSpan Step() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameExposureCompensationCapabilities
{
    bool Supported() const;
    float Min() const;
    float Max() const;
    float Step() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameExposureCompensationControl
{
    Windows::Foundation::IReference<float> Value() const;
    void Value(const Windows::Foundation::IReference<float> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IFrameExposureControl
{
    bool Auto() const;
    void Auto(bool value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Value() const;
    void Value(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IFrameFlashCapabilities
{
    bool Supported() const;
    bool RedEyeReductionSupported() const;
    bool PowerSupported() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameFlashControl
{
    Windows::Media::Devices::Core::FrameFlashMode Mode() const;
    void Mode(Windows::Media::Devices::Core::FrameFlashMode value) const;
    bool Auto() const;
    void Auto(bool value) const;
    bool RedEyeReduction() const;
    void RedEyeReduction(bool value) const;
    float PowerPercent() const;
    void PowerPercent(float value) const;
};

template <typename D>
struct WINRT_EBO impl_IFrameFocusCapabilities
{
    bool Supported() const;
    uint32_t Min() const;
    uint32_t Max() const;
    uint32_t Step() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameFocusControl
{
    Windows::Foundation::IReference<uint32_t> Value() const;
    void Value(const Windows::Foundation::IReference<uint32_t> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IFrameIsoSpeedCapabilities
{
    bool Supported() const;
    uint32_t Min() const;
    uint32_t Max() const;
    uint32_t Step() const;
};

template <typename D>
struct WINRT_EBO impl_IFrameIsoSpeedControl
{
    bool Auto() const;
    void Auto(bool value) const;
    Windows::Foundation::IReference<uint32_t> Value() const;
    void Value(const Windows::Foundation::IReference<uint32_t> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IVariablePhotoSequenceController
{
    bool Supported() const;
    float MaxPhotosPerSecond() const;
    float PhotosPerSecondLimit() const;
    void PhotosPerSecondLimit(float value) const;
    Windows::Media::MediaProperties::MediaRatio GetHighestConcurrentFrameRate(const Windows::Media::MediaProperties::IMediaEncodingProperties & captureProperties) const;
    Windows::Media::MediaProperties::MediaRatio GetCurrentFrameRate() const;
    Windows::Media::Devices::Core::FrameControlCapabilities FrameCapabilities() const;
    Windows::Foundation::Collections::IVector<Windows::Media::Devices::Core::FrameController> DesiredFrameControllers() const;
};

struct ICameraIntrinsics :
    Windows::IInspectable,
    impl::consume<ICameraIntrinsics>
{
    ICameraIntrinsics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraIntrinsics>(m_ptr); }
};

struct ICameraIntrinsics2 :
    Windows::IInspectable,
    impl::consume<ICameraIntrinsics2>
{
    ICameraIntrinsics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraIntrinsics2>(m_ptr); }
};

struct ICameraIntrinsicsFactory :
    Windows::IInspectable,
    impl::consume<ICameraIntrinsicsFactory>
{
    ICameraIntrinsicsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraIntrinsicsFactory>(m_ptr); }
};

struct IDepthCorrelatedCoordinateMapper :
    Windows::IInspectable,
    impl::consume<IDepthCorrelatedCoordinateMapper>,
    impl::require<IDepthCorrelatedCoordinateMapper, Windows::Foundation::IClosable>
{
    IDepthCorrelatedCoordinateMapper(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDepthCorrelatedCoordinateMapper>(m_ptr); }
};

struct IFrameControlCapabilities :
    Windows::IInspectable,
    impl::consume<IFrameControlCapabilities>
{
    IFrameControlCapabilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameControlCapabilities>(m_ptr); }
};

struct IFrameControlCapabilities2 :
    Windows::IInspectable,
    impl::consume<IFrameControlCapabilities2>
{
    IFrameControlCapabilities2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameControlCapabilities2>(m_ptr); }
};

struct IFrameController :
    Windows::IInspectable,
    impl::consume<IFrameController>
{
    IFrameController(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameController>(m_ptr); }
};

struct IFrameController2 :
    Windows::IInspectable,
    impl::consume<IFrameController2>
{
    IFrameController2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameController2>(m_ptr); }
};

struct IFrameExposureCapabilities :
    Windows::IInspectable,
    impl::consume<IFrameExposureCapabilities>
{
    IFrameExposureCapabilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameExposureCapabilities>(m_ptr); }
};

struct IFrameExposureCompensationCapabilities :
    Windows::IInspectable,
    impl::consume<IFrameExposureCompensationCapabilities>
{
    IFrameExposureCompensationCapabilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameExposureCompensationCapabilities>(m_ptr); }
};

struct IFrameExposureCompensationControl :
    Windows::IInspectable,
    impl::consume<IFrameExposureCompensationControl>
{
    IFrameExposureCompensationControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameExposureCompensationControl>(m_ptr); }
};

struct IFrameExposureControl :
    Windows::IInspectable,
    impl::consume<IFrameExposureControl>
{
    IFrameExposureControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameExposureControl>(m_ptr); }
};

struct IFrameFlashCapabilities :
    Windows::IInspectable,
    impl::consume<IFrameFlashCapabilities>
{
    IFrameFlashCapabilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameFlashCapabilities>(m_ptr); }
};

struct IFrameFlashControl :
    Windows::IInspectable,
    impl::consume<IFrameFlashControl>
{
    IFrameFlashControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameFlashControl>(m_ptr); }
};

struct IFrameFocusCapabilities :
    Windows::IInspectable,
    impl::consume<IFrameFocusCapabilities>
{
    IFrameFocusCapabilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameFocusCapabilities>(m_ptr); }
};

struct IFrameFocusControl :
    Windows::IInspectable,
    impl::consume<IFrameFocusControl>
{
    IFrameFocusControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameFocusControl>(m_ptr); }
};

struct IFrameIsoSpeedCapabilities :
    Windows::IInspectable,
    impl::consume<IFrameIsoSpeedCapabilities>
{
    IFrameIsoSpeedCapabilities(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameIsoSpeedCapabilities>(m_ptr); }
};

struct IFrameIsoSpeedControl :
    Windows::IInspectable,
    impl::consume<IFrameIsoSpeedControl>
{
    IFrameIsoSpeedControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameIsoSpeedControl>(m_ptr); }
};

struct IVariablePhotoSequenceController :
    Windows::IInspectable,
    impl::consume<IVariablePhotoSequenceController>
{
    IVariablePhotoSequenceController(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVariablePhotoSequenceController>(m_ptr); }
};

}

}
