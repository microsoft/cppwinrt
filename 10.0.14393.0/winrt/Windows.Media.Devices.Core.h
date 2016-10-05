// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Perception.Spatial.3.h"
#include "internal/Windows.Media.Devices.Core.3.h"
#include "Windows.Media.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Devices::Core::ICameraIntrinsics> : produce_base<D, Windows::Media::Devices::Core::ICameraIntrinsics>
{
    HRESULT __stdcall get_FocalLength(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocalLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalPoint(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrincipalPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadialDistortion(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RadialDistortion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TangentialDistortion(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TangentialDistortion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImageWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImageHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProjectOntoFrame(abi_arg_in<Windows::Foundation::Numerics::float3> coordinate, abi_arg_out<Windows::Foundation::Point> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ProjectOntoFrame(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&coordinate)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprojectAtUnitDepth(abi_arg_in<Windows::Foundation::Point> pixelCoordinate, abi_arg_out<Windows::Foundation::Numerics::float2> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnprojectAtUnitDepth(*reinterpret_cast<const Windows::Foundation::Point *>(&pixelCoordinate)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProjectManyOntoFrame(uint32_t __coordinatesSize, abi_arg_in<Windows::Foundation::Numerics::float3> * coordinates, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Point> results) noexcept override
    {
        try
        {
            this->shim().ProjectManyOntoFrame(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&coordinates), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprojectPixelsAtUnitDepth(uint32_t __pixelCoordinatesSize, abi_arg_in<Windows::Foundation::Point> * pixelCoordinates, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Numerics::float2> results) noexcept override
    {
        try
        {
            this->shim().UnprojectPixelsAtUnitDepth(*reinterpret_cast<const Windows::Foundation::Point *>(&pixelCoordinates), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::ICameraIntrinsics2> : produce_base<D, Windows::Media::Devices::Core::ICameraIntrinsics2>
{
    HRESULT __stdcall get_UndistortedProjectionTransform(abi_arg_out<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UndistortedProjectionTransform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DistortPoint(abi_arg_in<Windows::Foundation::Point> input, abi_arg_out<Windows::Foundation::Point> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DistortPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DistortPoints(uint32_t __inputsSize, abi_arg_in<Windows::Foundation::Point> * inputs, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Point> results) noexcept override
    {
        try
        {
            this->shim().DistortPoints(*reinterpret_cast<const Windows::Foundation::Point *>(&inputs), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UndistortPoint(abi_arg_in<Windows::Foundation::Point> input, abi_arg_out<Windows::Foundation::Point> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UndistortPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UndistortPoints(uint32_t __inputsSize, abi_arg_in<Windows::Foundation::Point> * inputs, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Point> results) noexcept override
    {
        try
        {
            this->shim().UndistortPoints(*reinterpret_cast<const Windows::Foundation::Point *>(&inputs), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::ICameraIntrinsicsFactory> : produce_base<D, Windows::Media::Devices::Core::ICameraIntrinsicsFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Numerics::float2> focalLength, abi_arg_in<Windows::Foundation::Numerics::float2> principalPoint, abi_arg_in<Windows::Foundation::Numerics::float3> radialDistortion, abi_arg_in<Windows::Foundation::Numerics::float2> tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight, abi_arg_out<Windows::Media::Devices::Core::ICameraIntrinsics> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&focalLength), *reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&principalPoint), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&radialDistortion), *reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&tangentialDistortion), imageWidth, imageHeight));
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
struct produce<D, Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper> : produce_base<D, Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper>
{
    HRESULT __stdcall abi_UnprojectPoint(abi_arg_in<Windows::Foundation::Point> sourcePoint, abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> targetCoordinateSystem, abi_arg_out<Windows::Foundation::Numerics::float3> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnprojectPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&sourcePoint), *reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&targetCoordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprojectPoints(uint32_t __sourcePointsSize, abi_arg_in<Windows::Foundation::Point> * sourcePoints, abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> targetCoordinateSystem, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Numerics::float3> results) noexcept override
    {
        try
        {
            this->shim().UnprojectPoints(*reinterpret_cast<const Windows::Foundation::Point *>(&sourcePoints), *reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&targetCoordinateSystem), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MapPoint(abi_arg_in<Windows::Foundation::Point> sourcePoint, abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> targetCoordinateSystem, abi_arg_in<Windows::Media::Devices::Core::ICameraIntrinsics> targetCameraIntrinsics, abi_arg_out<Windows::Foundation::Point> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MapPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&sourcePoint), *reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&targetCoordinateSystem), *reinterpret_cast<const Windows::Media::Devices::Core::CameraIntrinsics *>(&targetCameraIntrinsics)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MapPoints(uint32_t __sourcePointsSize, abi_arg_in<Windows::Foundation::Point> * sourcePoints, abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> targetCoordinateSystem, abi_arg_in<Windows::Media::Devices::Core::ICameraIntrinsics> targetCameraIntrinsics, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Point> results) noexcept override
    {
        try
        {
            this->shim().MapPoints(*reinterpret_cast<const Windows::Foundation::Point *>(&sourcePoints), *reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&targetCoordinateSystem), *reinterpret_cast<const Windows::Media::Devices::Core::CameraIntrinsics *>(&targetCameraIntrinsics), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameControlCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameControlCapabilities>
{
    HRESULT __stdcall get_Exposure(abi_arg_out<Windows::Media::Devices::Core::IFrameExposureCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(abi_arg_out<Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeed(abi_arg_out<Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsoSpeed());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(abi_arg_out<Windows::Media::Devices::Core::IFrameFocusCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoConfirmationSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhotoConfirmationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameControlCapabilities2> : produce_base<D, Windows::Media::Devices::Core::IFrameControlCapabilities2>
{
    HRESULT __stdcall get_Flash(abi_arg_out<Windows::Media::Devices::Core::IFrameFlashCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Flash());
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
struct produce<D, Windows::Media::Devices::Core::IFrameController> : produce_base<D, Windows::Media::Devices::Core::IFrameController>
{
    HRESULT __stdcall get_ExposureControl(abi_arg_out<Windows::Media::Devices::Core::IFrameExposureControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExposureControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensationControl(abi_arg_out<Windows::Media::Devices::Core::IFrameExposureCompensationControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExposureCompensationControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeedControl(abi_arg_out<Windows::Media::Devices::Core::IFrameIsoSpeedControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsoSpeedControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusControl(abi_arg_out<Windows::Media::Devices::Core::IFrameFocusControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoConfirmationEnabled(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhotoConfirmationEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoConfirmationEnabled(abi_arg_in<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            this->shim().PhotoConfirmationEnabled(*reinterpret_cast<const Windows::Foundation::IReference<bool> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameController2> : produce_base<D, Windows::Media::Devices::Core::IFrameController2>
{
    HRESULT __stdcall get_FlashControl(abi_arg_out<Windows::Media::Devices::Core::IFrameFlashControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlashControl());
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
struct produce<D, Windows::Media::Devices::Core::IFrameExposureCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureCapabilities>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureCompensationCapabilities>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameExposureCompensationControl> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureCompensationControl>
{
    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::Foundation::IReference<float>> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::Foundation::IReference<float> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameExposureControl> : produce_base<D, Windows::Media::Devices::Core::IFrameExposureControl>
{
    HRESULT __stdcall get_Auto(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Auto());
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
            this->shim().Auto(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameFlashCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameFlashCapabilities>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedEyeReductionSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RedEyeReductionSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameFlashControl> : produce_base<D, Windows::Media::Devices::Core::IFrameFlashControl>
{
    HRESULT __stdcall get_Mode(Windows::Media::Devices::Core::FrameFlashMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Media::Devices::Core::FrameFlashMode value) noexcept override
    {
        try
        {
            this->shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Auto(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Auto());
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
            this->shim().Auto(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RedEyeReduction(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RedEyeReduction());
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
            this->shim().RedEyeReduction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowerPercent(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PowerPercent());
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
struct produce<D, Windows::Media::Devices::Core::IFrameFocusCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameFocusCapabilities>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameFocusControl> : produce_base<D, Windows::Media::Devices::Core::IFrameFocusControl>
{
    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities> : produce_base<D, Windows::Media::Devices::Core::IFrameIsoSpeedCapabilities>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Min(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Min());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Max(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Max());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Step(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Step());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IFrameIsoSpeedControl> : produce_base<D, Windows::Media::Devices::Core::IFrameIsoSpeedControl>
{
    HRESULT __stdcall get_Auto(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Auto());
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
            this->shim().Auto(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Devices::Core::IVariablePhotoSequenceController> : produce_base<D, Windows::Media::Devices::Core::IVariablePhotoSequenceController>
{
    HRESULT __stdcall get_Supported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Supported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPhotosPerSecond(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPhotosPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosPerSecondLimit(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhotosPerSecondLimit());
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
            this->shim().PhotosPerSecondLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHighestConcurrentFrameRate(abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProperties> captureProperties, abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetHighestConcurrentFrameRate(*reinterpret_cast<const Windows::Media::MediaProperties::IMediaEncodingProperties *>(&captureProperties)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentFrameRate(abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCurrentFrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameCapabilities(abi_arg_out<Windows::Media::Devices::Core::IFrameControlCapabilities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameCapabilities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFrameControllers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Media::Devices::Core::FrameController>> items) noexcept override
    {
        try
        {
            *items = detach(this->shim().DesiredFrameControllers());
            return S_OK;
        }
        catch (...)
        {
            *items = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Devices::Core {

template <typename D> bool impl_IFrameExposureCapabilities<D>::Supported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameExposureCapabilities &>(static_cast<const D &>(*this))->get_Supported(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IFrameExposureCapabilities<D>::Min() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IFrameExposureCapabilities &>(static_cast<const D &>(*this))->get_Min(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IFrameExposureCapabilities<D>::Max() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IFrameExposureCapabilities &>(static_cast<const D &>(*this))->get_Max(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IFrameExposureCapabilities<D>::Step() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IFrameExposureCapabilities &>(static_cast<const D &>(*this))->get_Step(put(value)));
    return value;
}

template <typename D> bool impl_IFrameExposureCompensationCapabilities<D>::Supported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameExposureCompensationCapabilities &>(static_cast<const D &>(*this))->get_Supported(&value));
    return value;
}

template <typename D> float impl_IFrameExposureCompensationCapabilities<D>::Min() const
{
    float value {};
    check_hresult(static_cast<const IFrameExposureCompensationCapabilities &>(static_cast<const D &>(*this))->get_Min(&value));
    return value;
}

template <typename D> float impl_IFrameExposureCompensationCapabilities<D>::Max() const
{
    float value {};
    check_hresult(static_cast<const IFrameExposureCompensationCapabilities &>(static_cast<const D &>(*this))->get_Max(&value));
    return value;
}

template <typename D> float impl_IFrameExposureCompensationCapabilities<D>::Step() const
{
    float value {};
    check_hresult(static_cast<const IFrameExposureCompensationCapabilities &>(static_cast<const D &>(*this))->get_Step(&value));
    return value;
}

template <typename D> bool impl_IFrameIsoSpeedCapabilities<D>::Supported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameIsoSpeedCapabilities &>(static_cast<const D &>(*this))->get_Supported(&value));
    return value;
}

template <typename D> uint32_t impl_IFrameIsoSpeedCapabilities<D>::Min() const
{
    uint32_t value {};
    check_hresult(static_cast<const IFrameIsoSpeedCapabilities &>(static_cast<const D &>(*this))->get_Min(&value));
    return value;
}

template <typename D> uint32_t impl_IFrameIsoSpeedCapabilities<D>::Max() const
{
    uint32_t value {};
    check_hresult(static_cast<const IFrameIsoSpeedCapabilities &>(static_cast<const D &>(*this))->get_Max(&value));
    return value;
}

template <typename D> uint32_t impl_IFrameIsoSpeedCapabilities<D>::Step() const
{
    uint32_t value {};
    check_hresult(static_cast<const IFrameIsoSpeedCapabilities &>(static_cast<const D &>(*this))->get_Step(&value));
    return value;
}

template <typename D> bool impl_IFrameFocusCapabilities<D>::Supported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameFocusCapabilities &>(static_cast<const D &>(*this))->get_Supported(&value));
    return value;
}

template <typename D> uint32_t impl_IFrameFocusCapabilities<D>::Min() const
{
    uint32_t value {};
    check_hresult(static_cast<const IFrameFocusCapabilities &>(static_cast<const D &>(*this))->get_Min(&value));
    return value;
}

template <typename D> uint32_t impl_IFrameFocusCapabilities<D>::Max() const
{
    uint32_t value {};
    check_hresult(static_cast<const IFrameFocusCapabilities &>(static_cast<const D &>(*this))->get_Max(&value));
    return value;
}

template <typename D> uint32_t impl_IFrameFocusCapabilities<D>::Step() const
{
    uint32_t value {};
    check_hresult(static_cast<const IFrameFocusCapabilities &>(static_cast<const D &>(*this))->get_Step(&value));
    return value;
}

template <typename D> bool impl_IFrameFlashCapabilities<D>::Supported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameFlashCapabilities &>(static_cast<const D &>(*this))->get_Supported(&value));
    return value;
}

template <typename D> bool impl_IFrameFlashCapabilities<D>::RedEyeReductionSupported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameFlashCapabilities &>(static_cast<const D &>(*this))->get_RedEyeReductionSupported(&value));
    return value;
}

template <typename D> bool impl_IFrameFlashCapabilities<D>::PowerSupported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameFlashCapabilities &>(static_cast<const D &>(*this))->get_PowerSupported(&value));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameExposureCapabilities impl_IFrameControlCapabilities<D>::Exposure() const
{
    Windows::Media::Devices::Core::FrameExposureCapabilities value { nullptr };
    check_hresult(static_cast<const IFrameControlCapabilities &>(static_cast<const D &>(*this))->get_Exposure(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameExposureCompensationCapabilities impl_IFrameControlCapabilities<D>::ExposureCompensation() const
{
    Windows::Media::Devices::Core::FrameExposureCompensationCapabilities value { nullptr };
    check_hresult(static_cast<const IFrameControlCapabilities &>(static_cast<const D &>(*this))->get_ExposureCompensation(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameIsoSpeedCapabilities impl_IFrameControlCapabilities<D>::IsoSpeed() const
{
    Windows::Media::Devices::Core::FrameIsoSpeedCapabilities value { nullptr };
    check_hresult(static_cast<const IFrameControlCapabilities &>(static_cast<const D &>(*this))->get_IsoSpeed(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameFocusCapabilities impl_IFrameControlCapabilities<D>::Focus() const
{
    Windows::Media::Devices::Core::FrameFocusCapabilities value { nullptr };
    check_hresult(static_cast<const IFrameControlCapabilities &>(static_cast<const D &>(*this))->get_Focus(put(value)));
    return value;
}

template <typename D> bool impl_IFrameControlCapabilities<D>::PhotoConfirmationSupported() const
{
    bool value {};
    check_hresult(static_cast<const IFrameControlCapabilities &>(static_cast<const D &>(*this))->get_PhotoConfirmationSupported(&value));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameFlashCapabilities impl_IFrameControlCapabilities2<D>::Flash() const
{
    Windows::Media::Devices::Core::FrameFlashCapabilities value { nullptr };
    check_hresult(static_cast<const IFrameControlCapabilities2 &>(static_cast<const D &>(*this))->get_Flash(put(value)));
    return value;
}

template <typename D> bool impl_IFrameExposureControl<D>::Auto() const
{
    bool value {};
    check_hresult(static_cast<const IFrameExposureControl &>(static_cast<const D &>(*this))->get_Auto(&value));
    return value;
}

template <typename D> void impl_IFrameExposureControl<D>::Auto(bool value) const
{
    check_hresult(static_cast<const IFrameExposureControl &>(static_cast<const D &>(*this))->put_Auto(value));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IFrameExposureControl<D>::Value() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IFrameExposureControl &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IFrameExposureControl<D>::Value(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IFrameExposureControl &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Foundation::IReference<float> impl_IFrameExposureCompensationControl<D>::Value() const
{
    Windows::Foundation::IReference<float> value;
    check_hresult(static_cast<const IFrameExposureCompensationControl &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IFrameExposureCompensationControl<D>::Value(const Windows::Foundation::IReference<float> & value) const
{
    check_hresult(static_cast<const IFrameExposureCompensationControl &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> bool impl_IFrameIsoSpeedControl<D>::Auto() const
{
    bool value {};
    check_hresult(static_cast<const IFrameIsoSpeedControl &>(static_cast<const D &>(*this))->get_Auto(&value));
    return value;
}

template <typename D> void impl_IFrameIsoSpeedControl<D>::Auto(bool value) const
{
    check_hresult(static_cast<const IFrameIsoSpeedControl &>(static_cast<const D &>(*this))->put_Auto(value));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IFrameIsoSpeedControl<D>::Value() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IFrameIsoSpeedControl &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IFrameIsoSpeedControl<D>::Value(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IFrameIsoSpeedControl &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IFrameFocusControl<D>::Value() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IFrameFocusControl &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IFrameFocusControl<D>::Value(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IFrameFocusControl &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Media::Devices::Core::FrameFlashMode impl_IFrameFlashControl<D>::Mode() const
{
    Windows::Media::Devices::Core::FrameFlashMode value {};
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_IFrameFlashControl<D>::Mode(Windows::Media::Devices::Core::FrameFlashMode value) const
{
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> bool impl_IFrameFlashControl<D>::Auto() const
{
    bool value {};
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->get_Auto(&value));
    return value;
}

template <typename D> void impl_IFrameFlashControl<D>::Auto(bool value) const
{
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->put_Auto(value));
}

template <typename D> bool impl_IFrameFlashControl<D>::RedEyeReduction() const
{
    bool value {};
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->get_RedEyeReduction(&value));
    return value;
}

template <typename D> void impl_IFrameFlashControl<D>::RedEyeReduction(bool value) const
{
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->put_RedEyeReduction(value));
}

template <typename D> float impl_IFrameFlashControl<D>::PowerPercent() const
{
    float value {};
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->get_PowerPercent(&value));
    return value;
}

template <typename D> void impl_IFrameFlashControl<D>::PowerPercent(float value) const
{
    check_hresult(static_cast<const IFrameFlashControl &>(static_cast<const D &>(*this))->put_PowerPercent(value));
}

template <typename D> Windows::Media::Devices::Core::FrameExposureControl impl_IFrameController<D>::ExposureControl() const
{
    Windows::Media::Devices::Core::FrameExposureControl value { nullptr };
    check_hresult(static_cast<const IFrameController &>(static_cast<const D &>(*this))->get_ExposureControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameExposureCompensationControl impl_IFrameController<D>::ExposureCompensationControl() const
{
    Windows::Media::Devices::Core::FrameExposureCompensationControl value { nullptr };
    check_hresult(static_cast<const IFrameController &>(static_cast<const D &>(*this))->get_ExposureCompensationControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameIsoSpeedControl impl_IFrameController<D>::IsoSpeedControl() const
{
    Windows::Media::Devices::Core::FrameIsoSpeedControl value { nullptr };
    check_hresult(static_cast<const IFrameController &>(static_cast<const D &>(*this))->get_IsoSpeedControl(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameFocusControl impl_IFrameController<D>::FocusControl() const
{
    Windows::Media::Devices::Core::FrameFocusControl value { nullptr };
    check_hresult(static_cast<const IFrameController &>(static_cast<const D &>(*this))->get_FocusControl(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> impl_IFrameController<D>::PhotoConfirmationEnabled() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(static_cast<const IFrameController &>(static_cast<const D &>(*this))->get_PhotoConfirmationEnabled(put(value)));
    return value;
}

template <typename D> void impl_IFrameController<D>::PhotoConfirmationEnabled(const Windows::Foundation::IReference<bool> & value) const
{
    check_hresult(static_cast<const IFrameController &>(static_cast<const D &>(*this))->put_PhotoConfirmationEnabled(get(value)));
}

template <typename D> Windows::Media::Devices::Core::FrameFlashControl impl_IFrameController2<D>::FlashControl() const
{
    Windows::Media::Devices::Core::FrameFlashControl value { nullptr };
    check_hresult(static_cast<const IFrameController2 &>(static_cast<const D &>(*this))->get_FlashControl(put(value)));
    return value;
}

template <typename D> bool impl_IVariablePhotoSequenceController<D>::Supported() const
{
    bool value {};
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->get_Supported(&value));
    return value;
}

template <typename D> float impl_IVariablePhotoSequenceController<D>::MaxPhotosPerSecond() const
{
    float value {};
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->get_MaxPhotosPerSecond(&value));
    return value;
}

template <typename D> float impl_IVariablePhotoSequenceController<D>::PhotosPerSecondLimit() const
{
    float value {};
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->get_PhotosPerSecondLimit(&value));
    return value;
}

template <typename D> void impl_IVariablePhotoSequenceController<D>::PhotosPerSecondLimit(float value) const
{
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->put_PhotosPerSecondLimit(value));
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_IVariablePhotoSequenceController<D>::GetHighestConcurrentFrameRate(const Windows::Media::MediaProperties::IMediaEncodingProperties & captureProperties) const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->abi_GetHighestConcurrentFrameRate(get(captureProperties), put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_IVariablePhotoSequenceController<D>::GetCurrentFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->abi_GetCurrentFrameRate(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::FrameControlCapabilities impl_IVariablePhotoSequenceController<D>::FrameCapabilities() const
{
    Windows::Media::Devices::Core::FrameControlCapabilities value { nullptr };
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->get_FrameCapabilities(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Devices::Core::FrameController> impl_IVariablePhotoSequenceController<D>::DesiredFrameControllers() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Devices::Core::FrameController> items;
    check_hresult(static_cast<const IVariablePhotoSequenceController &>(static_cast<const D &>(*this))->get_DesiredFrameControllers(put(items)));
    return items;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics impl_ICameraIntrinsicsFactory<D>::Create(const Windows::Foundation::Numerics::float2 & focalLength, const Windows::Foundation::Numerics::float2 & principalPoint, const Windows::Foundation::Numerics::float3 & radialDistortion, const Windows::Foundation::Numerics::float2 & tangentialDistortion, uint32_t imageWidth, uint32_t imageHeight) const
{
    Windows::Media::Devices::Core::CameraIntrinsics result { nullptr };
    check_hresult(static_cast<const ICameraIntrinsicsFactory &>(static_cast<const D &>(*this))->abi_Create(get(focalLength), get(principalPoint), get(radialDistortion), get(tangentialDistortion), imageWidth, imageHeight, put(result)));
    return result;
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICameraIntrinsics<D>::FocalLength() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->get_FocalLength(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICameraIntrinsics<D>::PrincipalPoint() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->get_PrincipalPoint(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ICameraIntrinsics<D>::RadialDistortion() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->get_RadialDistortion(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICameraIntrinsics<D>::TangentialDistortion() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->get_TangentialDistortion(put(value)));
    return value;
}

template <typename D> uint32_t impl_ICameraIntrinsics<D>::ImageWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->get_ImageWidth(&value));
    return value;
}

template <typename D> uint32_t impl_ICameraIntrinsics<D>::ImageHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->get_ImageHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::Point impl_ICameraIntrinsics<D>::ProjectOntoFrame(const Windows::Foundation::Numerics::float3 & coordinate) const
{
    Windows::Foundation::Point result {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->abi_ProjectOntoFrame(get(coordinate), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICameraIntrinsics<D>::UnprojectAtUnitDepth(const Windows::Foundation::Point & pixelCoordinate) const
{
    Windows::Foundation::Numerics::float2 result {};
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->abi_UnprojectAtUnitDepth(get(pixelCoordinate), put(result)));
    return result;
}

template <typename D> void impl_ICameraIntrinsics<D>::ProjectManyOntoFrame(array_ref<const Windows::Foundation::Numerics::float3> coordinates, array_ref<Windows::Foundation::Point> results) const
{
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->abi_ProjectManyOntoFrame(coordinates.size(), get(coordinates), results.size(), get(results)));
}

template <typename D> void impl_ICameraIntrinsics<D>::UnprojectPixelsAtUnitDepth(array_ref<const Windows::Foundation::Point> pixelCoordinates, array_ref<Windows::Foundation::Numerics::float2> results) const
{
    check_hresult(static_cast<const ICameraIntrinsics &>(static_cast<const D &>(*this))->abi_UnprojectPixelsAtUnitDepth(pixelCoordinates.size(), get(pixelCoordinates), results.size(), get(results)));
}

template <typename D> Windows::Foundation::Numerics::float4x4 impl_ICameraIntrinsics2<D>::UndistortedProjectionTransform() const
{
    Windows::Foundation::Numerics::float4x4 value {};
    check_hresult(static_cast<const ICameraIntrinsics2 &>(static_cast<const D &>(*this))->get_UndistortedProjectionTransform(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_ICameraIntrinsics2<D>::DistortPoint(const Windows::Foundation::Point & input) const
{
    Windows::Foundation::Point result {};
    check_hresult(static_cast<const ICameraIntrinsics2 &>(static_cast<const D &>(*this))->abi_DistortPoint(get(input), put(result)));
    return result;
}

template <typename D> void impl_ICameraIntrinsics2<D>::DistortPoints(array_ref<const Windows::Foundation::Point> inputs, array_ref<Windows::Foundation::Point> results) const
{
    check_hresult(static_cast<const ICameraIntrinsics2 &>(static_cast<const D &>(*this))->abi_DistortPoints(inputs.size(), get(inputs), results.size(), get(results)));
}

template <typename D> Windows::Foundation::Point impl_ICameraIntrinsics2<D>::UndistortPoint(const Windows::Foundation::Point & input) const
{
    Windows::Foundation::Point result {};
    check_hresult(static_cast<const ICameraIntrinsics2 &>(static_cast<const D &>(*this))->abi_UndistortPoint(get(input), put(result)));
    return result;
}

template <typename D> void impl_ICameraIntrinsics2<D>::UndistortPoints(array_ref<const Windows::Foundation::Point> inputs, array_ref<Windows::Foundation::Point> results) const
{
    check_hresult(static_cast<const ICameraIntrinsics2 &>(static_cast<const D &>(*this))->abi_UndistortPoints(inputs.size(), get(inputs), results.size(), get(results)));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IDepthCorrelatedCoordinateMapper<D>::UnprojectPoint(const Windows::Foundation::Point & sourcePoint, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem) const
{
    Windows::Foundation::Numerics::float3 result {};
    check_hresult(static_cast<const IDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_UnprojectPoint(get(sourcePoint), get(targetCoordinateSystem), put(result)));
    return result;
}

template <typename D> void impl_IDepthCorrelatedCoordinateMapper<D>::UnprojectPoints(array_ref<const Windows::Foundation::Point> sourcePoints, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem, array_ref<Windows::Foundation::Numerics::float3> results) const
{
    check_hresult(static_cast<const IDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_UnprojectPoints(sourcePoints.size(), get(sourcePoints), get(targetCoordinateSystem), results.size(), get(results)));
}

template <typename D> Windows::Foundation::Point impl_IDepthCorrelatedCoordinateMapper<D>::MapPoint(const Windows::Foundation::Point & sourcePoint, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem, const Windows::Media::Devices::Core::CameraIntrinsics & targetCameraIntrinsics) const
{
    Windows::Foundation::Point result {};
    check_hresult(static_cast<const IDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_MapPoint(get(sourcePoint), get(targetCoordinateSystem), get(targetCameraIntrinsics), put(result)));
    return result;
}

template <typename D> void impl_IDepthCorrelatedCoordinateMapper<D>::MapPoints(array_ref<const Windows::Foundation::Point> sourcePoints, const Windows::Perception::Spatial::SpatialCoordinateSystem & targetCoordinateSystem, const Windows::Media::Devices::Core::CameraIntrinsics & targetCameraIntrinsics, array_ref<Windows::Foundation::Point> results) const
{
    check_hresult(static_cast<const IDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_MapPoints(sourcePoints.size(), get(sourcePoints), get(targetCoordinateSystem), get(targetCameraIntrinsics), results.size(), get(results)));
}

inline FrameController::FrameController() :
    FrameController(activate_instance<FrameController>())
{}

}

}
