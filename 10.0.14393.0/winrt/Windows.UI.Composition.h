// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.DirectX.3.h"
#include "internal/Windows.UI.Core.3.h"
#include "internal/Windows.Graphics.Effects.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Composition.3.h"
#include "Windows.UI.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "Windows.Graphics.Effects.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Composition::IAmbientLight> : produce_base<D, Windows::UI::Composition::IAmbientLight>
{
    HRESULT __stdcall get_Color(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().Color(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IColorKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IColorKeyFrameAnimation>
{
    HRESULT __stdcall get_InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterpolationColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace value) noexcept override
    {
        try
        {
            this->shim().InterpolationColorSpace(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_arg_in<Windows::UI::Color> value, abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> easingFunction) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::UI::Color *>(&value), *reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimation> : produce_base<D, Windows::UI::Composition::ICompositionAnimation>
{
    HRESULT __stdcall abi_ClearAllParameters() noexcept override
    {
        try
        {
            this->shim().ClearAllParameters();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearParameter(abi_arg_in<hstring> key) noexcept override
    {
        try
        {
            this->shim().ClearParameter(*reinterpret_cast<const hstring *>(&key));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetColorParameter(abi_arg_in<hstring> key, abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().SetColorParameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetMatrix3x2Parameter(abi_arg_in<hstring> key, abi_arg_in<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            this->shim().SetMatrix3x2Parameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetMatrix4x4Parameter(abi_arg_in<hstring> key, abi_arg_in<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            this->shim().SetMatrix4x4Parameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::Foundation::Numerics::float4x4 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetQuaternionParameter(abi_arg_in<hstring> key, abi_arg_in<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            this->shim().SetQuaternionParameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetReferenceParameter(abi_arg_in<hstring> key, abi_arg_in<Windows::UI::Composition::ICompositionObject> compositionObject) noexcept override
    {
        try
        {
            this->shim().SetReferenceParameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::UI::Composition::CompositionObject *>(&compositionObject));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetScalarParameter(abi_arg_in<hstring> key, float value) noexcept override
    {
        try
        {
            this->shim().SetScalarParameter(*reinterpret_cast<const hstring *>(&key), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetVector2Parameter(abi_arg_in<hstring> key, abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().SetVector2Parameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetVector3Parameter(abi_arg_in<hstring> key, abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().SetVector3Parameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetVector4Parameter(abi_arg_in<hstring> key, abi_arg_in<Windows::Foundation::Numerics::float4> value) noexcept override
    {
        try
        {
            this->shim().SetVector4Parameter(*reinterpret_cast<const hstring *>(&key), *reinterpret_cast<const Windows::Foundation::Numerics::float4 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimation2> : produce_base<D, Windows::UI::Composition::ICompositionAnimation2>
{
    HRESULT __stdcall abi_SetBooleanParameter(abi_arg_in<hstring> key, bool value) noexcept override
    {
        try
        {
            this->shim().SetBooleanParameter(*reinterpret_cast<const hstring *>(&key), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Target(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Target(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Target(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationBase> : produce_base<D, Windows::UI::Composition::ICompositionAnimationBase>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationFactory> : produce_base<D, Windows::UI::Composition::ICompositionAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationGroup> : produce_base<D, Windows::UI::Composition::ICompositionAnimationGroup>
{
    HRESULT __stdcall get_Count(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Add(abi_arg_in<Windows::UI::Composition::ICompositionAnimation> value) noexcept override
    {
        try
        {
            this->shim().Add(*reinterpret_cast<const Windows::UI::Composition::CompositionAnimation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<Windows::UI::Composition::ICompositionAnimation> value) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const Windows::UI::Composition::CompositionAnimation *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAll() noexcept override
    {
        try
        {
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBackdropBrush> : produce_base<D, Windows::UI::Composition::ICompositionBackdropBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBatchCompletedEventArgs> : produce_base<D, Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBrush> : produce_base<D, Windows::UI::Composition::ICompositionBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBrushFactory> : produce_base<D, Windows::UI::Composition::ICompositionBrushFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClip> : produce_base<D, Windows::UI::Composition::ICompositionClip>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClip2> : produce_base<D, Windows::UI::Composition::ICompositionClip2>
{
    HRESULT __stdcall get_AnchorPoint(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().AnchorPoint(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().CenterPoint(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().Offset(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept override
    {
        try
        {
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept override
    {
        try
        {
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().Scale(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(abi_arg_out<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(abi_arg_in<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            this->shim().TransformMatrix(*reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClipFactory> : produce_base<D, Windows::UI::Composition::ICompositionClipFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionColorBrush> : produce_base<D, Windows::UI::Composition::ICompositionColorBrush>
{
    HRESULT __stdcall get_Color(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().Color(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionCommitBatch> : produce_base<D, Windows::UI::Composition::ICompositionCommitBatch>
{
    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnded(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Completed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept override
    {
        try
        {
            this->shim().Completed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionDrawingSurface> : produce_base<D, Windows::UI::Composition::ICompositionDrawingSurface>
{
    HRESULT __stdcall get_AlphaMode(Windows::Graphics::DirectX::DirectXAlphaMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelFormat(Windows::Graphics::DirectX::DirectXPixelFormat * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEasingFunction> : produce_base<D, Windows::UI::Composition::ICompositionEasingFunction>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEasingFunctionFactory> : produce_base<D, Windows::UI::Composition::ICompositionEasingFunctionFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectBrush> : produce_base<D, Windows::UI::Composition::ICompositionEffectBrush>
{
    HRESULT __stdcall abi_GetSourceParameter(abi_arg_in<hstring> name, abi_arg_out<Windows::UI::Composition::ICompositionBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetSourceParameter(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetSourceParameter(abi_arg_in<hstring> name, abi_arg_in<Windows::UI::Composition::ICompositionBrush> source) noexcept override
    {
        try
        {
            this->shim().SetSourceParameter(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::UI::Composition::CompositionBrush *>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectFactory> : produce_base<D, Windows::UI::Composition::ICompositionEffectFactory>
{
    HRESULT __stdcall abi_CreateBrush(abi_arg_out<Windows::UI::Composition::ICompositionEffectBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LoadStatus(Windows::UI::Composition::CompositionEffectFactoryLoadStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LoadStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectSourceParameter> : produce_base<D, Windows::UI::Composition::ICompositionEffectSourceParameter>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
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
struct produce<D, Windows::UI::Composition::ICompositionEffectSourceParameterFactory> : produce_base<D, Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> name, abi_arg_out<Windows::UI::Composition::ICompositionEffectSourceParameter> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGraphicsDevice> : produce_base<D, Windows::UI::Composition::ICompositionGraphicsDevice>
{
    HRESULT __stdcall abi_CreateDrawingSurface(abi_arg_in<Windows::Foundation::Size> sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, abi_arg_out<Windows::UI::Composition::ICompositionDrawingSurface> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateDrawingSurface(*reinterpret_cast<const Windows::Foundation::Size *>(&sizePixels), pixelFormat, alphaMode));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RenderingDeviceReplaced(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RenderingDeviceReplaced(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RenderingDeviceReplaced(event_token token) noexcept override
    {
        try
        {
            this->shim().RenderingDeviceReplaced(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionLight> : produce_base<D, Windows::UI::Composition::ICompositionLight>
{
    HRESULT __stdcall get_Targets(abi_arg_out<Windows::UI::Composition::IVisualUnorderedCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Targets());
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
struct produce<D, Windows::UI::Composition::ICompositionLightFactory> : produce_base<D, Windows::UI::Composition::ICompositionLightFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionMaskBrush> : produce_base<D, Windows::UI::Composition::ICompositionMaskBrush>
{
    HRESULT __stdcall get_Mask(abi_arg_out<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mask());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mask(abi_arg_in<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            this->shim().Mask(*reinterpret_cast<const Windows::UI::Composition::CompositionBrush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::UI::Composition::CompositionBrush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionNineGridBrush> : produce_base<D, Windows::UI::Composition::ICompositionNineGridBrush>
{
    HRESULT __stdcall get_BottomInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BottomInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInset(float value) noexcept override
    {
        try
        {
            this->shim().BottomInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BottomInsetScale(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BottomInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInsetScale(float value) noexcept override
    {
        try
        {
            this->shim().BottomInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCenterHollow(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCenterHollow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCenterHollow(bool value) noexcept override
    {
        try
        {
            this->shim().IsCenterHollow(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LeftInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInset(float value) noexcept override
    {
        try
        {
            this->shim().LeftInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInsetScale(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LeftInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInsetScale(float value) noexcept override
    {
        try
        {
            this->shim().LeftInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RightInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightInset(float value) noexcept override
    {
        try
        {
            this->shim().RightInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightInsetScale(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RightInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightInsetScale(float value) noexcept override
    {
        try
        {
            this->shim().RightInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::UI::Composition::CompositionBrush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TopInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TopInset(float value) noexcept override
    {
        try
        {
            this->shim().TopInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopInsetScale(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TopInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TopInsetScale(float value) noexcept override
    {
        try
        {
            this->shim().TopInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetInsets(float inset) noexcept override
    {
        try
        {
            this->shim().SetInsets(inset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetInsetsWithValues(float left, float top, float right, float bottom) noexcept override
    {
        try
        {
            this->shim().SetInsets(left, top, right, bottom);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetInsetScales(float scale) noexcept override
    {
        try
        {
            this->shim().SetInsetScales(scale);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetInsetScalesWithValues(float left, float top, float right, float bottom) noexcept override
    {
        try
        {
            this->shim().SetInsetScales(left, top, right, bottom);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject> : produce_base<D, Windows::UI::Composition::ICompositionObject>
{
    HRESULT __stdcall get_Compositor(abi_arg_out<Windows::UI::Composition::ICompositor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Compositor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(abi_arg_out<Windows::UI::Core::ICoreDispatcher> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::UI::Composition::ICompositionPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAnimation(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::UI::Composition::ICompositionAnimation> animation) noexcept override
    {
        try
        {
            this->shim().StartAnimation(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::UI::Composition::CompositionAnimation *>(&animation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAnimation(abi_arg_in<hstring> propertyName) noexcept override
    {
        try
        {
            this->shim().StopAnimation(*reinterpret_cast<const hstring *>(&propertyName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject2> : produce_base<D, Windows::UI::Composition::ICompositionObject2>
{
    HRESULT __stdcall get_Comment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Comment(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Comment(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImplicitAnimations(abi_arg_out<Windows::UI::Composition::IImplicitAnimationCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImplicitAnimations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ImplicitAnimations(abi_arg_in<Windows::UI::Composition::IImplicitAnimationCollection> value) noexcept override
    {
        try
        {
            this->shim().ImplicitAnimations(*reinterpret_cast<const Windows::UI::Composition::ImplicitAnimationCollection *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAnimationGroup(abi_arg_in<Windows::UI::Composition::ICompositionAnimationBase> value) noexcept override
    {
        try
        {
            this->shim().StartAnimationGroup(*reinterpret_cast<const Windows::UI::Composition::ICompositionAnimationBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAnimationGroup(abi_arg_in<Windows::UI::Composition::ICompositionAnimationBase> value) noexcept override
    {
        try
        {
            this->shim().StopAnimationGroup(*reinterpret_cast<const Windows::UI::Composition::ICompositionAnimationBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObjectFactory> : produce_base<D, Windows::UI::Composition::ICompositionObjectFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPropertySet> : produce_base<D, Windows::UI::Composition::ICompositionPropertySet>
{
    HRESULT __stdcall abi_InsertColor(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().InsertColor(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertMatrix3x2(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            this->shim().InsertMatrix3x2(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertMatrix4x4(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            this->shim().InsertMatrix4x4(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::Foundation::Numerics::float4x4 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertQuaternion(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            this->shim().InsertQuaternion(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertScalar(abi_arg_in<hstring> propertyName, float value) noexcept override
    {
        try
        {
            this->shim().InsertScalar(*reinterpret_cast<const hstring *>(&propertyName), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertVector2(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().InsertVector2(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertVector3(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().InsertVector3(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertVector4(abi_arg_in<hstring> propertyName, abi_arg_in<Windows::Foundation::Numerics::float4> value) noexcept override
    {
        try
        {
            this->shim().InsertVector4(*reinterpret_cast<const hstring *>(&propertyName), *reinterpret_cast<const Windows::Foundation::Numerics::float4 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetColor(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::UI::Color> value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetColor(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetMatrix3x2(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::Numerics::float3x2> value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetMatrix3x2(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetMatrix4x4(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::Numerics::float4x4> value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetMatrix4x4(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetQuaternion(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::Numerics::quaternion> value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetQuaternion(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetScalar(abi_arg_in<hstring> propertyName, float * value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetScalar(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetVector2(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::Numerics::float2> value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetVector2(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetVector3(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::Numerics::float3> value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetVector3(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetVector4(abi_arg_in<hstring> propertyName, abi_arg_out<Windows::Foundation::Numerics::float4> value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetVector4(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPropertySet2> : produce_base<D, Windows::UI::Composition::ICompositionPropertySet2>
{
    HRESULT __stdcall abi_InsertBoolean(abi_arg_in<hstring> propertyName, bool value) noexcept override
    {
        try
        {
            this->shim().InsertBoolean(*reinterpret_cast<const hstring *>(&propertyName), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetBoolean(abi_arg_in<hstring> propertyName, bool * value, Windows::UI::Composition::CompositionGetValueStatus * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetBoolean(*reinterpret_cast<const hstring *>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionScopedBatch> : produce_base<D, Windows::UI::Composition::ICompositionScopedBatch>
{
    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnded(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_End() noexcept override
    {
        try
        {
            this->shim().End();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Resume() noexcept override
    {
        try
        {
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Suspend() noexcept override
    {
        try
        {
            this->shim().Suspend();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Completed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept override
    {
        try
        {
            this->shim().Completed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShadow> : produce_base<D, Windows::UI::Composition::ICompositionShadow>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShadowFactory> : produce_base<D, Windows::UI::Composition::ICompositionShadowFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurface> : produce_base<D, Windows::UI::Composition::ICompositionSurface>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurfaceBrush> : produce_base<D, Windows::UI::Composition::ICompositionSurfaceBrush>
{
    HRESULT __stdcall get_BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode value) noexcept override
    {
        try
        {
            this->shim().BitmapInterpolationMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignmentRatio(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignmentRatio(float value) noexcept override
    {
        try
        {
            this->shim().HorizontalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stretch(Windows::UI::Composition::CompositionStretch * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Stretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Stretch(Windows::UI::Composition::CompositionStretch value) noexcept override
    {
        try
        {
            this->shim().Stretch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Surface(abi_arg_out<Windows::UI::Composition::ICompositionSurface> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Surface());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Surface(abi_arg_in<Windows::UI::Composition::ICompositionSurface> value) noexcept override
    {
        try
        {
            this->shim().Surface(*reinterpret_cast<const Windows::UI::Composition::ICompositionSurface *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentRatio(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignmentRatio(float value) noexcept override
    {
        try
        {
            this->shim().VerticalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurfaceBrush2> : produce_base<D, Windows::UI::Composition::ICompositionSurfaceBrush2>
{
    HRESULT __stdcall get_AnchorPoint(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().AnchorPoint(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().CenterPoint(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().Offset(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept override
    {
        try
        {
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept override
    {
        try
        {
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().Scale(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(abi_arg_out<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(abi_arg_in<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            this->shim().TransformMatrix(*reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionTarget> : produce_base<D, Windows::UI::Composition::ICompositionTarget>
{
    HRESULT __stdcall get_Root(abi_arg_out<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Root());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Root(abi_arg_in<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            this->shim().Root(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositor> : produce_base<D, Windows::UI::Composition::ICompositor>
{
    HRESULT __stdcall abi_CreateColorKeyFrameAnimation(abi_arg_out<Windows::UI::Composition::IColorKeyFrameAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateColorKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateColorBrush(abi_arg_out<Windows::UI::Composition::ICompositionColorBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateColorBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateColorBrushWithColor(abi_arg_in<Windows::UI::Color> color, abi_arg_out<Windows::UI::Composition::ICompositionColorBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateColorBrush(*reinterpret_cast<const Windows::UI::Color *>(&color)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContainerVisual(abi_arg_out<Windows::UI::Composition::IContainerVisual> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateContainerVisual());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCubicBezierEasingFunction(abi_arg_in<Windows::Foundation::Numerics::float2> controlPoint1, abi_arg_in<Windows::Foundation::Numerics::float2> controlPoint2, abi_arg_out<Windows::UI::Composition::ICubicBezierEasingFunction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateCubicBezierEasingFunction(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&controlPoint1), *reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&controlPoint2)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEffectFactory(abi_arg_in<Windows::Graphics::Effects::IGraphicsEffect> graphicsEffect, abi_arg_out<Windows::UI::Composition::ICompositionEffectFactory> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateEffectFactory(*reinterpret_cast<const Windows::Graphics::Effects::IGraphicsEffect *>(&graphicsEffect)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateEffectFactoryWithProperties(abi_arg_in<Windows::Graphics::Effects::IGraphicsEffect> graphicsEffect, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> animatableProperties, abi_arg_out<Windows::UI::Composition::ICompositionEffectFactory> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateEffectFactory(*reinterpret_cast<const Windows::Graphics::Effects::IGraphicsEffect *>(&graphicsEffect), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&animatableProperties)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateExpressionAnimation(abi_arg_out<Windows::UI::Composition::IExpressionAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateExpressionAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateExpressionAnimationWithExpression(abi_arg_in<hstring> expression, abi_arg_out<Windows::UI::Composition::IExpressionAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateExpressionAnimation(*reinterpret_cast<const hstring *>(&expression)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInsetClip(abi_arg_out<Windows::UI::Composition::IInsetClip> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateInsetClip());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInsetClipWithInsets(float leftInset, float topInset, float rightInset, float bottomInset, abi_arg_out<Windows::UI::Composition::IInsetClip> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateInsetClip(leftInset, topInset, rightInset, bottomInset));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateLinearEasingFunction(abi_arg_out<Windows::UI::Composition::ILinearEasingFunction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateLinearEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePropertySet(abi_arg_out<Windows::UI::Composition::ICompositionPropertySet> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreatePropertySet());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateQuaternionKeyFrameAnimation(abi_arg_out<Windows::UI::Composition::IQuaternionKeyFrameAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateQuaternionKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateScalarKeyFrameAnimation(abi_arg_out<Windows::UI::Composition::IScalarKeyFrameAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateScalarKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes batchType, abi_arg_out<Windows::UI::Composition::ICompositionScopedBatch> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateScopedBatch(batchType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSpriteVisual(abi_arg_out<Windows::UI::Composition::ISpriteVisual> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateSpriteVisual());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSurfaceBrush(abi_arg_out<Windows::UI::Composition::ICompositionSurfaceBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateSurfaceBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSurfaceBrushWithSurface(abi_arg_in<Windows::UI::Composition::ICompositionSurface> surface, abi_arg_out<Windows::UI::Composition::ICompositionSurfaceBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateSurfaceBrush(*reinterpret_cast<const Windows::UI::Composition::ICompositionSurface *>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTargetForCurrentView(abi_arg_out<Windows::UI::Composition::ICompositionTarget> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateTargetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateVector2KeyFrameAnimation(abi_arg_out<Windows::UI::Composition::IVector2KeyFrameAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateVector2KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateVector3KeyFrameAnimation(abi_arg_out<Windows::UI::Composition::IVector3KeyFrameAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateVector3KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateVector4KeyFrameAnimation(abi_arg_out<Windows::UI::Composition::IVector4KeyFrameAnimation> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateVector4KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes batchType, abi_arg_out<Windows::UI::Composition::ICompositionCommitBatch> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCommitBatch(batchType));
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
struct produce<D, Windows::UI::Composition::ICompositor2> : produce_base<D, Windows::UI::Composition::ICompositor2>
{
    HRESULT __stdcall abi_CreateAmbientLight(abi_arg_out<Windows::UI::Composition::IAmbientLight> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateAmbientLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAnimationGroup(abi_arg_out<Windows::UI::Composition::ICompositionAnimationGroup> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateAnimationGroup());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBackdropBrush(abi_arg_out<Windows::UI::Composition::ICompositionBackdropBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateBackdropBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDistantLight(abi_arg_out<Windows::UI::Composition::IDistantLight> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateDistantLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDropShadow(abi_arg_out<Windows::UI::Composition::IDropShadow> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateDropShadow());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateImplicitAnimationCollection(abi_arg_out<Windows::UI::Composition::IImplicitAnimationCollection> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateImplicitAnimationCollection());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateLayerVisual(abi_arg_out<Windows::UI::Composition::ILayerVisual> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateLayerVisual());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMaskBrush(abi_arg_out<Windows::UI::Composition::ICompositionMaskBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateMaskBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateNineGridBrush(abi_arg_out<Windows::UI::Composition::ICompositionNineGridBrush> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateNineGridBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePointLight(abi_arg_out<Windows::UI::Composition::IPointLight> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreatePointLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSpotLight(abi_arg_out<Windows::UI::Composition::ISpotLight> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateSpotLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStepEasingFunction(abi_arg_out<Windows::UI::Composition::IStepEasingFunction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateStepEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStepEasingFunctionWithStepCount(int32_t stepCount, abi_arg_out<Windows::UI::Composition::IStepEasingFunction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateStepEasingFunction(stepCount));
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
struct produce<D, Windows::UI::Composition::IContainerVisual> : produce_base<D, Windows::UI::Composition::IContainerVisual>
{
    HRESULT __stdcall get_Children(abi_arg_out<Windows::UI::Composition::IVisualCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Children());
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
struct produce<D, Windows::UI::Composition::IContainerVisualFactory> : produce_base<D, Windows::UI::Composition::IContainerVisualFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICubicBezierEasingFunction> : produce_base<D, Windows::UI::Composition::ICubicBezierEasingFunction>
{
    HRESULT __stdcall get_ControlPoint1(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlPoint1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlPoint2(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlPoint2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDistantLight> : produce_base<D, Windows::UI::Composition::IDistantLight>
{
    HRESULT __stdcall get_Color(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().Color(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(abi_arg_out<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(abi_arg_in<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            this->shim().CoordinateSpace(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().Direction(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDropShadow> : produce_base<D, Windows::UI::Composition::IDropShadow>
{
    HRESULT __stdcall get_BlurRadius(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BlurRadius());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlurRadius(float value) noexcept override
    {
        try
        {
            this->shim().BlurRadius(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Color(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().Color(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mask(abi_arg_out<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mask());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mask(abi_arg_in<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            this->shim().Mask(*reinterpret_cast<const Windows::UI::Composition::CompositionBrush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().Offset(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(float value) noexcept override
    {
        try
        {
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IExpressionAnimation> : produce_base<D, Windows::UI::Composition::IExpressionAnimation>
{
    HRESULT __stdcall get_Expression(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Expression());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Expression(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Expression(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IImplicitAnimationCollection> : produce_base<D, Windows::UI::Composition::IImplicitAnimationCollection>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IInsetClip> : produce_base<D, Windows::UI::Composition::IInsetClip>
{
    HRESULT __stdcall get_BottomInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BottomInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInset(float value) noexcept override
    {
        try
        {
            this->shim().BottomInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LeftInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInset(float value) noexcept override
    {
        try
        {
            this->shim().LeftInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RightInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightInset(float value) noexcept override
    {
        try
        {
            this->shim().RightInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopInset(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TopInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TopInset(float value) noexcept override
    {
        try
        {
            this->shim().TopInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation>
{
    HRESULT __stdcall get_DelayTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DelayTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DelayTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().DelayTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().Duration(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IterationBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior value) noexcept override
    {
        try
        {
            this->shim().IterationBehavior(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IterationCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IterationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IterationCount(int32_t value) noexcept override
    {
        try
        {
            this->shim().IterationCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyFrameCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyFrameCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StopBehavior(Windows::UI::Composition::AnimationStopBehavior * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StopBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StopBehavior(Windows::UI::Composition::AnimationStopBehavior value) noexcept override
    {
        try
        {
            this->shim().StopBehavior(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertExpressionKeyFrame(float normalizedProgressKey, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().InsertExpressionKeyFrame(normalizedProgressKey, *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertExpressionKeyFrameWithEasingFunction(float normalizedProgressKey, abi_arg_in<hstring> value, abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> easingFunction) noexcept override
    {
        try
        {
            this->shim().InsertExpressionKeyFrame(normalizedProgressKey, *reinterpret_cast<const hstring *>(&value), *reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation2> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation2>
{
    HRESULT __stdcall get_Direction(Windows::UI::Composition::AnimationDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(Windows::UI::Composition::AnimationDirection value) noexcept override
    {
        try
        {
            this->shim().Direction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimationFactory> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ILayerVisual> : produce_base<D, Windows::UI::Composition::ILayerVisual>
{
    HRESULT __stdcall get_Effect(abi_arg_out<Windows::UI::Composition::ICompositionEffectBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Effect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Effect(abi_arg_in<Windows::UI::Composition::ICompositionEffectBrush> value) noexcept override
    {
        try
        {
            this->shim().Effect(*reinterpret_cast<const Windows::UI::Composition::CompositionEffectBrush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ILinearEasingFunction> : produce_base<D, Windows::UI::Composition::ILinearEasingFunction>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IPointLight> : produce_base<D, Windows::UI::Composition::IPointLight>
{
    HRESULT __stdcall get_Color(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().Color(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConstantAttenuation(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConstantAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConstantAttenuation(float value) noexcept override
    {
        try
        {
            this->shim().ConstantAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(abi_arg_out<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(abi_arg_in<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            this->shim().CoordinateSpace(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinearAttenuation(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LinearAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LinearAttenuation(float value) noexcept override
    {
        try
        {
            this->shim().LinearAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().Offset(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QuadraticAttenuation(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QuadraticAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QuadraticAttenuation(float value) noexcept override
    {
        try
        {
            this->shim().QuadraticAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IQuaternionKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IQuaternionKeyFrameAnimation>
{
    HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::quaternion> value, abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> easingFunction) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&value), *reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> : produce_base<D, Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
{
    HRESULT __stdcall get_GraphicsDevice(abi_arg_out<Windows::UI::Composition::ICompositionGraphicsDevice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GraphicsDevice());
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
struct produce<D, Windows::UI::Composition::IScalarKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IScalarKeyFrameAnimation>
{
    HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, float value) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, float value, abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> easingFunction) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, value, *reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpotLight> : produce_base<D, Windows::UI::Composition::ISpotLight>
{
    HRESULT __stdcall get_ConstantAttenuation(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConstantAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConstantAttenuation(float value) noexcept override
    {
        try
        {
            this->shim().ConstantAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(abi_arg_out<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(abi_arg_in<Windows::UI::Composition::IVisual> value) noexcept override
    {
        try
        {
            this->shim().CoordinateSpace(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().Direction(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InnerConeAngle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InnerConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeAngle(float value) noexcept override
    {
        try
        {
            this->shim().InnerConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InnerConeAngleInDegrees(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InnerConeAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeAngleInDegrees(float value) noexcept override
    {
        try
        {
            this->shim().InnerConeAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InnerConeColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InnerConeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().InnerConeColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinearAttenuation(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LinearAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LinearAttenuation(float value) noexcept override
    {
        try
        {
            this->shim().LinearAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().Offset(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeAngle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OuterConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeAngle(float value) noexcept override
    {
        try
        {
            this->shim().OuterConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeAngleInDegrees(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OuterConeAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeAngleInDegrees(float value) noexcept override
    {
        try
        {
            this->shim().OuterConeAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OuterConeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().OuterConeColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QuadraticAttenuation(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QuadraticAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QuadraticAttenuation(float value) noexcept override
    {
        try
        {
            this->shim().QuadraticAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpriteVisual> : produce_base<D, Windows::UI::Composition::ISpriteVisual>
{
    HRESULT __stdcall get_Brush(abi_arg_out<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Brush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Brush(abi_arg_in<Windows::UI::Composition::ICompositionBrush> value) noexcept override
    {
        try
        {
            this->shim().Brush(*reinterpret_cast<const Windows::UI::Composition::CompositionBrush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpriteVisual2> : produce_base<D, Windows::UI::Composition::ISpriteVisual2>
{
    HRESULT __stdcall get_Shadow(abi_arg_out<Windows::UI::Composition::ICompositionShadow> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Shadow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Shadow(abi_arg_in<Windows::UI::Composition::ICompositionShadow> value) noexcept override
    {
        try
        {
            this->shim().Shadow(*reinterpret_cast<const Windows::UI::Composition::CompositionShadow *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IStepEasingFunction> : produce_base<D, Windows::UI::Composition::IStepEasingFunction>
{
    HRESULT __stdcall get_FinalStep(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FinalStep());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FinalStep(int32_t value) noexcept override
    {
        try
        {
            this->shim().FinalStep(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialStep(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialStep());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialStep(int32_t value) noexcept override
    {
        try
        {
            this->shim().InitialStep(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFinalStepSingleFrame(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsFinalStepSingleFrame());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsFinalStepSingleFrame(bool value) noexcept override
    {
        try
        {
            this->shim().IsFinalStepSingleFrame(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInitialStepSingleFrame(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInitialStepSingleFrame());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInitialStepSingleFrame(bool value) noexcept override
    {
        try
        {
            this->shim().IsInitialStepSingleFrame(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StepCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StepCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StepCount(int32_t value) noexcept override
    {
        try
        {
            this->shim().StepCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector2KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector2KeyFrameAnimation>
{
    HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::float2> value, abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> easingFunction) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value), *reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector3KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector3KeyFrameAnimation>
{
    HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::float3> value, abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> easingFunction) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value), *reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector4KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector4KeyFrameAnimation>
{
    HRESULT __stdcall abi_InsertKeyFrame(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::float4> value) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::float4 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_arg_in<Windows::Foundation::Numerics::float4> value, abi_arg_in<Windows::UI::Composition::ICompositionEasingFunction> easingFunction) noexcept override
    {
        try
        {
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<const Windows::Foundation::Numerics::float4 *>(&value), *reinterpret_cast<const Windows::UI::Composition::CompositionEasingFunction *>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisual> : produce_base<D, Windows::UI::Composition::IVisual>
{
    HRESULT __stdcall get_AnchorPoint(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().AnchorPoint(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BackfaceVisibility());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility value) noexcept override
    {
        try
        {
            this->shim().BackfaceVisibility(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Windows::UI::Composition::CompositionBorderMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Windows::UI::Composition::CompositionBorderMode value) noexcept override
    {
        try
        {
            this->shim().BorderMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().CenterPoint(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clip(abi_arg_out<Windows::UI::Composition::ICompositionClip> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Clip());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Clip(abi_arg_in<Windows::UI::Composition::ICompositionClip> value) noexcept override
    {
        try
        {
            this->shim().Clip(*reinterpret_cast<const Windows::UI::Composition::CompositionClip *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompositeMode(Windows::UI::Composition::CompositionCompositeMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompositeMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompositeMode(Windows::UI::Composition::CompositionCompositeMode value) noexcept override
    {
        try
        {
            this->shim().CompositeMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().Offset(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(float value) noexcept override
    {
        try
        {
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_arg_out<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(abi_arg_in<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            this->shim().Orientation(*reinterpret_cast<const Windows::Foundation::Numerics::quaternion *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(abi_arg_out<Windows::UI::Composition::IContainerVisual> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept override
    {
        try
        {
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept override
    {
        try
        {
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAxis(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationAxis());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAxis(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().RotationAxis(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(abi_arg_out<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(abi_arg_in<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            this->shim().Scale(*reinterpret_cast<const Windows::Foundation::Numerics::float3 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_arg_out<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(abi_arg_in<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            this->shim().Size(*reinterpret_cast<const Windows::Foundation::Numerics::float2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(abi_arg_out<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(abi_arg_in<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            this->shim().TransformMatrix(*reinterpret_cast<const Windows::Foundation::Numerics::float4x4 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualCollection> : produce_base<D, Windows::UI::Composition::IVisualCollection>
{
    HRESULT __stdcall get_Count(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertAbove(abi_arg_in<Windows::UI::Composition::IVisual> newChild, abi_arg_in<Windows::UI::Composition::IVisual> sibling) noexcept override
    {
        try
        {
            this->shim().InsertAbove(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&newChild), *reinterpret_cast<const Windows::UI::Composition::Visual *>(&sibling));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertAtBottom(abi_arg_in<Windows::UI::Composition::IVisual> newChild) noexcept override
    {
        try
        {
            this->shim().InsertAtBottom(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&newChild));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertAtTop(abi_arg_in<Windows::UI::Composition::IVisual> newChild) noexcept override
    {
        try
        {
            this->shim().InsertAtTop(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&newChild));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InsertBelow(abi_arg_in<Windows::UI::Composition::IVisual> newChild, abi_arg_in<Windows::UI::Composition::IVisual> sibling) noexcept override
    {
        try
        {
            this->shim().InsertBelow(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&newChild), *reinterpret_cast<const Windows::UI::Composition::Visual *>(&sibling));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<Windows::UI::Composition::IVisual> child) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&child));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAll() noexcept override
    {
        try
        {
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualFactory> : produce_base<D, Windows::UI::Composition::IVisualFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualUnorderedCollection> : produce_base<D, Windows::UI::Composition::IVisualUnorderedCollection>
{
    HRESULT __stdcall get_Count(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Add(abi_arg_in<Windows::UI::Composition::IVisual> newVisual) noexcept override
    {
        try
        {
            this->shim().Add(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&newVisual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Remove(abi_arg_in<Windows::UI::Composition::IVisual> visual) noexcept override
    {
        try
        {
            this->shim().Remove(*reinterpret_cast<const Windows::UI::Composition::Visual *>(&visual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveAll() noexcept override
    {
        try
        {
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Composition {

template <typename D> Windows::UI::Color impl_IAmbientLight<D>::Color() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IAmbientLight &>(static_cast<const D &>(*this))->get_Color(put(value)));
    return value;
}

template <typename D> void impl_IAmbientLight<D>::Color(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IAmbientLight &>(static_cast<const D &>(*this))->put_Color(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionColorSpace impl_IColorKeyFrameAnimation<D>::InterpolationColorSpace() const
{
    Windows::UI::Composition::CompositionColorSpace value {};
    check_hresult(static_cast<const IColorKeyFrameAnimation &>(static_cast<const D &>(*this))->get_InterpolationColorSpace(&value));
    return value;
}

template <typename D> void impl_IColorKeyFrameAnimation<D>::InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace value) const
{
    check_hresult(static_cast<const IColorKeyFrameAnimation &>(static_cast<const D &>(*this))->put_InterpolationColorSpace(value));
}

template <typename D> void impl_IColorKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IColorKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrame(normalizedProgressKey, get(value)));
}

template <typename D> void impl_IColorKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::UI::Color & value, const Windows::UI::Composition::CompositionEasingFunction & easingFunction) const
{
    check_hresult(static_cast<const IColorKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrameWithEasingFunction(normalizedProgressKey, get(value), get(easingFunction)));
}

template <typename D> void impl_ICompositionAnimation<D>::ClearAllParameters() const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_ClearAllParameters());
}

template <typename D> void impl_ICompositionAnimation<D>::ClearParameter(hstring_ref key) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_ClearParameter(get(key)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetColorParameter(hstring_ref key, const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetColorParameter(get(key), get(value)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetMatrix3x2Parameter(hstring_ref key, const Windows::Foundation::Numerics::float3x2 & value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetMatrix3x2Parameter(get(key), get(value)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetMatrix4x4Parameter(hstring_ref key, const Windows::Foundation::Numerics::float4x4 & value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetMatrix4x4Parameter(get(key), get(value)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetQuaternionParameter(hstring_ref key, const Windows::Foundation::Numerics::quaternion & value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetQuaternionParameter(get(key), get(value)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetReferenceParameter(hstring_ref key, const Windows::UI::Composition::CompositionObject & compositionObject) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetReferenceParameter(get(key), get(compositionObject)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetScalarParameter(hstring_ref key, float value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetScalarParameter(get(key), value));
}

template <typename D> void impl_ICompositionAnimation<D>::SetVector2Parameter(hstring_ref key, const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetVector2Parameter(get(key), get(value)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetVector3Parameter(hstring_ref key, const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetVector3Parameter(get(key), get(value)));
}

template <typename D> void impl_ICompositionAnimation<D>::SetVector4Parameter(hstring_ref key, const Windows::Foundation::Numerics::float4 & value) const
{
    check_hresult(static_cast<const ICompositionAnimation &>(static_cast<const D &>(*this))->abi_SetVector4Parameter(get(key), get(value)));
}

template <typename D> void impl_ICompositionAnimation2<D>::SetBooleanParameter(hstring_ref key, bool value) const
{
    check_hresult(static_cast<const ICompositionAnimation2 &>(static_cast<const D &>(*this))->abi_SetBooleanParameter(get(key), value));
}

template <typename D> hstring impl_ICompositionAnimation2<D>::Target() const
{
    hstring value;
    check_hresult(static_cast<const ICompositionAnimation2 &>(static_cast<const D &>(*this))->get_Target(put(value)));
    return value;
}

template <typename D> void impl_ICompositionAnimation2<D>::Target(hstring_ref value) const
{
    check_hresult(static_cast<const ICompositionAnimation2 &>(static_cast<const D &>(*this))->put_Target(get(value)));
}

template <typename D> int32_t impl_ICompositionAnimationGroup<D>::Count() const
{
    int32_t value {};
    check_hresult(static_cast<const ICompositionAnimationGroup &>(static_cast<const D &>(*this))->get_Count(&value));
    return value;
}

template <typename D> void impl_ICompositionAnimationGroup<D>::Add(const Windows::UI::Composition::CompositionAnimation & value) const
{
    check_hresult(static_cast<const ICompositionAnimationGroup &>(static_cast<const D &>(*this))->abi_Add(get(value)));
}

template <typename D> void impl_ICompositionAnimationGroup<D>::Remove(const Windows::UI::Composition::CompositionAnimation & value) const
{
    check_hresult(static_cast<const ICompositionAnimationGroup &>(static_cast<const D &>(*this))->abi_Remove(get(value)));
}

template <typename D> void impl_ICompositionAnimationGroup<D>::RemoveAll() const
{
    check_hresult(static_cast<const ICompositionAnimationGroup &>(static_cast<const D &>(*this))->abi_RemoveAll());
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionClip2<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->get_AnchorPoint(put(value)));
    return value;
}

template <typename D> void impl_ICompositionClip2<D>::AnchorPoint(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->put_AnchorPoint(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionClip2<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->get_CenterPoint(put(value)));
    return value;
}

template <typename D> void impl_ICompositionClip2<D>::CenterPoint(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->put_CenterPoint(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionClip2<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->get_Offset(put(value)));
    return value;
}

template <typename D> void impl_ICompositionClip2<D>::Offset(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->put_Offset(get(value)));
}

template <typename D> float impl_ICompositionClip2<D>::RotationAngle() const
{
    float value {};
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->get_RotationAngle(&value));
    return value;
}

template <typename D> void impl_ICompositionClip2<D>::RotationAngle(float value) const
{
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->put_RotationAngle(value));
}

template <typename D> float impl_ICompositionClip2<D>::RotationAngleInDegrees() const
{
    float value {};
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void impl_ICompositionClip2<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionClip2<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->get_Scale(put(value)));
    return value;
}

template <typename D> void impl_ICompositionClip2<D>::Scale(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->put_Scale(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 impl_ICompositionClip2<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value {};
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->get_TransformMatrix(put(value)));
    return value;
}

template <typename D> void impl_ICompositionClip2<D>::TransformMatrix(const Windows::Foundation::Numerics::float3x2 & value) const
{
    check_hresult(static_cast<const ICompositionClip2 &>(static_cast<const D &>(*this))->put_TransformMatrix(get(value)));
}

template <typename D> Windows::UI::Color impl_ICompositionColorBrush<D>::Color() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const ICompositionColorBrush &>(static_cast<const D &>(*this))->get_Color(put(value)));
    return value;
}

template <typename D> void impl_ICompositionColorBrush<D>::Color(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const ICompositionColorBrush &>(static_cast<const D &>(*this))->put_Color(get(value)));
}

template <typename D> bool impl_ICompositionCommitBatch<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const ICompositionCommitBatch &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> bool impl_ICompositionCommitBatch<D>::IsEnded() const
{
    bool value {};
    check_hresult(static_cast<const ICompositionCommitBatch &>(static_cast<const D &>(*this))->get_IsEnded(&value));
    return value;
}

template <typename D> event_token impl_ICompositionCommitBatch<D>::Completed(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICompositionCommitBatch &>(static_cast<const D &>(*this))->add_Completed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICompositionCommitBatch> impl_ICompositionCommitBatch<D>::Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICompositionCommitBatch>(this, &ABI::Windows::UI::Composition::ICompositionCommitBatch::remove_Completed, Completed(handler));
}

template <typename D> void impl_ICompositionCommitBatch<D>::Completed(event_token token) const
{
    check_hresult(static_cast<const ICompositionCommitBatch &>(static_cast<const D &>(*this))->remove_Completed(token));
}

template <typename D> Windows::Graphics::DirectX::DirectXAlphaMode impl_ICompositionDrawingSurface<D>::AlphaMode() const
{
    Windows::Graphics::DirectX::DirectXAlphaMode value {};
    check_hresult(static_cast<const ICompositionDrawingSurface &>(static_cast<const D &>(*this))->get_AlphaMode(&value));
    return value;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat impl_ICompositionDrawingSurface<D>::PixelFormat() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value {};
    check_hresult(static_cast<const ICompositionDrawingSurface &>(static_cast<const D &>(*this))->get_PixelFormat(&value));
    return value;
}

template <typename D> Windows::Foundation::Size impl_ICompositionDrawingSurface<D>::Size() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const ICompositionDrawingSurface &>(static_cast<const D &>(*this))->get_Size(put(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionBrush impl_ICompositionEffectBrush<D>::GetSourceParameter(hstring_ref name) const
{
    Windows::UI::Composition::CompositionBrush result { nullptr };
    check_hresult(static_cast<const ICompositionEffectBrush &>(static_cast<const D &>(*this))->abi_GetSourceParameter(get(name), put(result)));
    return result;
}

template <typename D> void impl_ICompositionEffectBrush<D>::SetSourceParameter(hstring_ref name, const Windows::UI::Composition::CompositionBrush & source) const
{
    check_hresult(static_cast<const ICompositionEffectBrush &>(static_cast<const D &>(*this))->abi_SetSourceParameter(get(name), get(source)));
}

template <typename D> Windows::UI::Composition::CompositionEffectBrush impl_ICompositionEffectFactory<D>::CreateBrush() const
{
    Windows::UI::Composition::CompositionEffectBrush result { nullptr };
    check_hresult(static_cast<const ICompositionEffectFactory &>(static_cast<const D &>(*this))->abi_CreateBrush(put(result)));
    return result;
}

template <typename D> HRESULT impl_ICompositionEffectFactory<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(static_cast<const ICompositionEffectFactory &>(static_cast<const D &>(*this))->get_ExtendedError(&value));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactoryLoadStatus impl_ICompositionEffectFactory<D>::LoadStatus() const
{
    Windows::UI::Composition::CompositionEffectFactoryLoadStatus value {};
    check_hresult(static_cast<const ICompositionEffectFactory &>(static_cast<const D &>(*this))->get_LoadStatus(&value));
    return value;
}

template <typename D> hstring impl_ICompositionEffectSourceParameter<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const ICompositionEffectSourceParameter &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionEffectSourceParameter impl_ICompositionEffectSourceParameterFactory<D>::Create(hstring_ref name) const
{
    Windows::UI::Composition::CompositionEffectSourceParameter instance { nullptr };
    check_hresult(static_cast<const ICompositionEffectSourceParameterFactory &>(static_cast<const D &>(*this))->abi_Create(get(name), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Composition::CompositionDrawingSurface impl_ICompositionGraphicsDevice<D>::CreateDrawingSurface(const Windows::Foundation::Size & sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode) const
{
    Windows::UI::Composition::CompositionDrawingSurface result { nullptr };
    check_hresult(static_cast<const ICompositionGraphicsDevice &>(static_cast<const D &>(*this))->abi_CreateDrawingSurface(get(sizePixels), pixelFormat, alphaMode, put(result)));
    return result;
}

template <typename D> event_token impl_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(const Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICompositionGraphicsDevice &>(static_cast<const D &>(*this))->add_RenderingDeviceReplaced(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICompositionGraphicsDevice> impl_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICompositionGraphicsDevice>(this, &ABI::Windows::UI::Composition::ICompositionGraphicsDevice::remove_RenderingDeviceReplaced, RenderingDeviceReplaced(handler));
}

template <typename D> void impl_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(event_token token) const
{
    check_hresult(static_cast<const ICompositionGraphicsDevice &>(static_cast<const D &>(*this))->remove_RenderingDeviceReplaced(token));
}

template <typename D> Windows::UI::Composition::VisualUnorderedCollection impl_ICompositionLight<D>::Targets() const
{
    Windows::UI::Composition::VisualUnorderedCollection value { nullptr };
    check_hresult(static_cast<const ICompositionLight &>(static_cast<const D &>(*this))->get_Targets(put(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionBrush impl_ICompositionMaskBrush<D>::Mask() const
{
    Windows::UI::Composition::CompositionBrush value { nullptr };
    check_hresult(static_cast<const ICompositionMaskBrush &>(static_cast<const D &>(*this))->get_Mask(put(value)));
    return value;
}

template <typename D> void impl_ICompositionMaskBrush<D>::Mask(const Windows::UI::Composition::CompositionBrush & value) const
{
    check_hresult(static_cast<const ICompositionMaskBrush &>(static_cast<const D &>(*this))->put_Mask(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush impl_ICompositionMaskBrush<D>::Source() const
{
    Windows::UI::Composition::CompositionBrush value { nullptr };
    check_hresult(static_cast<const ICompositionMaskBrush &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_ICompositionMaskBrush<D>::Source(const Windows::UI::Composition::CompositionBrush & value) const
{
    check_hresult(static_cast<const ICompositionMaskBrush &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::BottomInset() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_BottomInset(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::BottomInset(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_BottomInset(value));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::BottomInsetScale() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_BottomInsetScale(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::BottomInsetScale(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_BottomInsetScale(value));
}

template <typename D> bool impl_ICompositionNineGridBrush<D>::IsCenterHollow() const
{
    bool value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_IsCenterHollow(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::IsCenterHollow(bool value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_IsCenterHollow(value));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::LeftInset() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_LeftInset(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::LeftInset(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_LeftInset(value));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::LeftInsetScale() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_LeftInsetScale(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::LeftInsetScale(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_LeftInsetScale(value));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::RightInset() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_RightInset(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::RightInset(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_RightInset(value));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::RightInsetScale() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_RightInsetScale(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::RightInsetScale(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_RightInsetScale(value));
}

template <typename D> Windows::UI::Composition::CompositionBrush impl_ICompositionNineGridBrush<D>::Source() const
{
    Windows::UI::Composition::CompositionBrush value { nullptr };
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::Source(const Windows::UI::Composition::CompositionBrush & value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::TopInset() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_TopInset(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::TopInset(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_TopInset(value));
}

template <typename D> float impl_ICompositionNineGridBrush<D>::TopInsetScale() const
{
    float value {};
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->get_TopInsetScale(&value));
    return value;
}

template <typename D> void impl_ICompositionNineGridBrush<D>::TopInsetScale(float value) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->put_TopInsetScale(value));
}

template <typename D> void impl_ICompositionNineGridBrush<D>::SetInsets(float inset) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->abi_SetInsets(inset));
}

template <typename D> void impl_ICompositionNineGridBrush<D>::SetInsets(float left, float top, float right, float bottom) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->abi_SetInsetsWithValues(left, top, right, bottom));
}

template <typename D> void impl_ICompositionNineGridBrush<D>::SetInsetScales(float scale) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->abi_SetInsetScales(scale));
}

template <typename D> void impl_ICompositionNineGridBrush<D>::SetInsetScales(float left, float top, float right, float bottom) const
{
    check_hresult(static_cast<const ICompositionNineGridBrush &>(static_cast<const D &>(*this))->abi_SetInsetScalesWithValues(left, top, right, bottom));
}

template <typename D> Windows::UI::Composition::Compositor impl_ICompositionObject<D>::Compositor() const
{
    Windows::UI::Composition::Compositor value { nullptr };
    check_hresult(static_cast<const ICompositionObject &>(static_cast<const D &>(*this))->get_Compositor(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher impl_ICompositionObject<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value { nullptr };
    check_hresult(static_cast<const ICompositionObject &>(static_cast<const D &>(*this))->get_Dispatcher(put(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionPropertySet impl_ICompositionObject<D>::Properties() const
{
    Windows::UI::Composition::CompositionPropertySet value { nullptr };
    check_hresult(static_cast<const ICompositionObject &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> void impl_ICompositionObject<D>::StartAnimation(hstring_ref propertyName, const Windows::UI::Composition::CompositionAnimation & animation) const
{
    check_hresult(static_cast<const ICompositionObject &>(static_cast<const D &>(*this))->abi_StartAnimation(get(propertyName), get(animation)));
}

template <typename D> void impl_ICompositionObject<D>::StopAnimation(hstring_ref propertyName) const
{
    check_hresult(static_cast<const ICompositionObject &>(static_cast<const D &>(*this))->abi_StopAnimation(get(propertyName)));
}

template <typename D> hstring impl_ICompositionObject2<D>::Comment() const
{
    hstring value;
    check_hresult(static_cast<const ICompositionObject2 &>(static_cast<const D &>(*this))->get_Comment(put(value)));
    return value;
}

template <typename D> void impl_ICompositionObject2<D>::Comment(hstring_ref value) const
{
    check_hresult(static_cast<const ICompositionObject2 &>(static_cast<const D &>(*this))->put_Comment(get(value)));
}

template <typename D> Windows::UI::Composition::ImplicitAnimationCollection impl_ICompositionObject2<D>::ImplicitAnimations() const
{
    Windows::UI::Composition::ImplicitAnimationCollection value { nullptr };
    check_hresult(static_cast<const ICompositionObject2 &>(static_cast<const D &>(*this))->get_ImplicitAnimations(put(value)));
    return value;
}

template <typename D> void impl_ICompositionObject2<D>::ImplicitAnimations(const Windows::UI::Composition::ImplicitAnimationCollection & value) const
{
    check_hresult(static_cast<const ICompositionObject2 &>(static_cast<const D &>(*this))->put_ImplicitAnimations(get(value)));
}

template <typename D> void impl_ICompositionObject2<D>::StartAnimationGroup(const Windows::UI::Composition::ICompositionAnimationBase & value) const
{
    check_hresult(static_cast<const ICompositionObject2 &>(static_cast<const D &>(*this))->abi_StartAnimationGroup(get(value)));
}

template <typename D> void impl_ICompositionObject2<D>::StopAnimationGroup(const Windows::UI::Composition::ICompositionAnimationBase & value) const
{
    check_hresult(static_cast<const ICompositionObject2 &>(static_cast<const D &>(*this))->abi_StopAnimationGroup(get(value)));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertColor(hstring_ref propertyName, const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertColor(get(propertyName), get(value)));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertMatrix3x2(hstring_ref propertyName, const Windows::Foundation::Numerics::float3x2 & value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertMatrix3x2(get(propertyName), get(value)));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertMatrix4x4(hstring_ref propertyName, const Windows::Foundation::Numerics::float4x4 & value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertMatrix4x4(get(propertyName), get(value)));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertQuaternion(hstring_ref propertyName, const Windows::Foundation::Numerics::quaternion & value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertQuaternion(get(propertyName), get(value)));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertScalar(hstring_ref propertyName, float value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertScalar(get(propertyName), value));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertVector2(hstring_ref propertyName, const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertVector2(get(propertyName), get(value)));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertVector3(hstring_ref propertyName, const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertVector3(get(propertyName), get(value)));
}

template <typename D> void impl_ICompositionPropertySet<D>::InsertVector4(hstring_ref propertyName, const Windows::Foundation::Numerics::float4 & value) const
{
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_InsertVector4(get(propertyName), get(value)));
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetColor(hstring_ref propertyName, Windows::UI::Color & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetColor(get(propertyName), put(value), &result));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetMatrix3x2(hstring_ref propertyName, Windows::Foundation::Numerics::float3x2 & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetMatrix3x2(get(propertyName), put(value), &result));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetMatrix4x4(hstring_ref propertyName, Windows::Foundation::Numerics::float4x4 & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetMatrix4x4(get(propertyName), put(value), &result));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetQuaternion(hstring_ref propertyName, Windows::Foundation::Numerics::quaternion & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetQuaternion(get(propertyName), put(value), &result));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetScalar(hstring_ref propertyName, float & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetScalar(get(propertyName), &value, &result));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetVector2(hstring_ref propertyName, Windows::Foundation::Numerics::float2 & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetVector2(get(propertyName), put(value), &result));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetVector3(hstring_ref propertyName, Windows::Foundation::Numerics::float3 & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetVector3(get(propertyName), put(value), &result));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet<D>::TryGetVector4(hstring_ref propertyName, Windows::Foundation::Numerics::float4 & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet &>(static_cast<const D &>(*this))->abi_TryGetVector4(get(propertyName), put(value), &result));
    return result;
}

template <typename D> void impl_ICompositionPropertySet2<D>::InsertBoolean(hstring_ref propertyName, bool value) const
{
    check_hresult(static_cast<const ICompositionPropertySet2 &>(static_cast<const D &>(*this))->abi_InsertBoolean(get(propertyName), value));
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus impl_ICompositionPropertySet2<D>::TryGetBoolean(hstring_ref propertyName, bool & value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result {};
    check_hresult(static_cast<const ICompositionPropertySet2 &>(static_cast<const D &>(*this))->abi_TryGetBoolean(get(propertyName), &value, &result));
    return result;
}

template <typename D> bool impl_ICompositionScopedBatch<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const ICompositionScopedBatch &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> bool impl_ICompositionScopedBatch<D>::IsEnded() const
{
    bool value {};
    check_hresult(static_cast<const ICompositionScopedBatch &>(static_cast<const D &>(*this))->get_IsEnded(&value));
    return value;
}

template <typename D> void impl_ICompositionScopedBatch<D>::End() const
{
    check_hresult(static_cast<const ICompositionScopedBatch &>(static_cast<const D &>(*this))->abi_End());
}

template <typename D> void impl_ICompositionScopedBatch<D>::Resume() const
{
    check_hresult(static_cast<const ICompositionScopedBatch &>(static_cast<const D &>(*this))->abi_Resume());
}

template <typename D> void impl_ICompositionScopedBatch<D>::Suspend() const
{
    check_hresult(static_cast<const ICompositionScopedBatch &>(static_cast<const D &>(*this))->abi_Suspend());
}

template <typename D> event_token impl_ICompositionScopedBatch<D>::Completed(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ICompositionScopedBatch &>(static_cast<const D &>(*this))->add_Completed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ICompositionScopedBatch> impl_ICompositionScopedBatch<D>::Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ICompositionScopedBatch>(this, &ABI::Windows::UI::Composition::ICompositionScopedBatch::remove_Completed, Completed(handler));
}

template <typename D> void impl_ICompositionScopedBatch<D>::Completed(event_token token) const
{
    check_hresult(static_cast<const ICompositionScopedBatch &>(static_cast<const D &>(*this))->remove_Completed(token));
}

template <typename D> Windows::UI::Composition::CompositionBitmapInterpolationMode impl_ICompositionSurfaceBrush<D>::BitmapInterpolationMode() const
{
    Windows::UI::Composition::CompositionBitmapInterpolationMode value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->get_BitmapInterpolationMode(&value));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush<D>::BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->put_BitmapInterpolationMode(value));
}

template <typename D> float impl_ICompositionSurfaceBrush<D>::HorizontalAlignmentRatio() const
{
    float value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->get_HorizontalAlignmentRatio(&value));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush<D>::HorizontalAlignmentRatio(float value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->put_HorizontalAlignmentRatio(value));
}

template <typename D> Windows::UI::Composition::CompositionStretch impl_ICompositionSurfaceBrush<D>::Stretch() const
{
    Windows::UI::Composition::CompositionStretch value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->get_Stretch(&value));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush<D>::Stretch(Windows::UI::Composition::CompositionStretch value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->put_Stretch(value));
}

template <typename D> Windows::UI::Composition::ICompositionSurface impl_ICompositionSurfaceBrush<D>::Surface() const
{
    Windows::UI::Composition::ICompositionSurface value;
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->get_Surface(put(value)));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush<D>::Surface(const Windows::UI::Composition::ICompositionSurface & value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->put_Surface(get(value)));
}

template <typename D> float impl_ICompositionSurfaceBrush<D>::VerticalAlignmentRatio() const
{
    float value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->get_VerticalAlignmentRatio(&value));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush<D>::VerticalAlignmentRatio(float value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush &>(static_cast<const D &>(*this))->put_VerticalAlignmentRatio(value));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionSurfaceBrush2<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->get_AnchorPoint(put(value)));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush2<D>::AnchorPoint(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->put_AnchorPoint(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionSurfaceBrush2<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->get_CenterPoint(put(value)));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush2<D>::CenterPoint(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->put_CenterPoint(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionSurfaceBrush2<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->get_Offset(put(value)));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush2<D>::Offset(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->put_Offset(get(value)));
}

template <typename D> float impl_ICompositionSurfaceBrush2<D>::RotationAngle() const
{
    float value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->get_RotationAngle(&value));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush2<D>::RotationAngle(float value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->put_RotationAngle(value));
}

template <typename D> float impl_ICompositionSurfaceBrush2<D>::RotationAngleInDegrees() const
{
    float value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush2<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICompositionSurfaceBrush2<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->get_Scale(put(value)));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush2<D>::Scale(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->put_Scale(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 impl_ICompositionSurfaceBrush2<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value {};
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->get_TransformMatrix(put(value)));
    return value;
}

template <typename D> void impl_ICompositionSurfaceBrush2<D>::TransformMatrix(const Windows::Foundation::Numerics::float3x2 & value) const
{
    check_hresult(static_cast<const ICompositionSurfaceBrush2 &>(static_cast<const D &>(*this))->put_TransformMatrix(get(value)));
}

template <typename D> Windows::UI::Composition::Visual impl_ICompositionTarget<D>::Root() const
{
    Windows::UI::Composition::Visual value { nullptr };
    check_hresult(static_cast<const ICompositionTarget &>(static_cast<const D &>(*this))->get_Root(put(value)));
    return value;
}

template <typename D> void impl_ICompositionTarget<D>::Root(const Windows::UI::Composition::Visual & value) const
{
    check_hresult(static_cast<const ICompositionTarget &>(static_cast<const D &>(*this))->put_Root(get(value)));
}

template <typename D> Windows::UI::Composition::ColorKeyFrameAnimation impl_ICompositor<D>::CreateColorKeyFrameAnimation() const
{
    Windows::UI::Composition::ColorKeyFrameAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateColorKeyFrameAnimation(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorBrush impl_ICompositor<D>::CreateColorBrush() const
{
    Windows::UI::Composition::CompositionColorBrush result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateColorBrush(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorBrush impl_ICompositor<D>::CreateColorBrush(const Windows::UI::Color & color) const
{
    Windows::UI::Composition::CompositionColorBrush result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateColorBrushWithColor(get(color), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ContainerVisual impl_ICompositor<D>::CreateContainerVisual() const
{
    Windows::UI::Composition::ContainerVisual result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateContainerVisual(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CubicBezierEasingFunction impl_ICompositor<D>::CreateCubicBezierEasingFunction(const Windows::Foundation::Numerics::float2 & controlPoint1, const Windows::Foundation::Numerics::float2 & controlPoint2) const
{
    Windows::UI::Composition::CubicBezierEasingFunction result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateCubicBezierEasingFunction(get(controlPoint1), get(controlPoint2), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactory impl_ICompositor<D>::CreateEffectFactory(const Windows::Graphics::Effects::IGraphicsEffect & graphicsEffect) const
{
    Windows::UI::Composition::CompositionEffectFactory result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateEffectFactory(get(graphicsEffect), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactory impl_ICompositor<D>::CreateEffectFactory(const Windows::Graphics::Effects::IGraphicsEffect & graphicsEffect, const Windows::Foundation::Collections::IIterable<hstring> & animatableProperties) const
{
    Windows::UI::Composition::CompositionEffectFactory result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateEffectFactoryWithProperties(get(graphicsEffect), get(animatableProperties), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation impl_ICompositor<D>::CreateExpressionAnimation() const
{
    Windows::UI::Composition::ExpressionAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateExpressionAnimation(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation impl_ICompositor<D>::CreateExpressionAnimation(hstring_ref expression) const
{
    Windows::UI::Composition::ExpressionAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateExpressionAnimationWithExpression(get(expression), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::InsetClip impl_ICompositor<D>::CreateInsetClip() const
{
    Windows::UI::Composition::InsetClip result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateInsetClip(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::InsetClip impl_ICompositor<D>::CreateInsetClip(float leftInset, float topInset, float rightInset, float bottomInset) const
{
    Windows::UI::Composition::InsetClip result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateInsetClipWithInsets(leftInset, topInset, rightInset, bottomInset, put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::LinearEasingFunction impl_ICompositor<D>::CreateLinearEasingFunction() const
{
    Windows::UI::Composition::LinearEasingFunction result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateLinearEasingFunction(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionPropertySet impl_ICompositor<D>::CreatePropertySet() const
{
    Windows::UI::Composition::CompositionPropertySet result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreatePropertySet(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::QuaternionKeyFrameAnimation impl_ICompositor<D>::CreateQuaternionKeyFrameAnimation() const
{
    Windows::UI::Composition::QuaternionKeyFrameAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateQuaternionKeyFrameAnimation(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ScalarKeyFrameAnimation impl_ICompositor<D>::CreateScalarKeyFrameAnimation() const
{
    Windows::UI::Composition::ScalarKeyFrameAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateScalarKeyFrameAnimation(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionScopedBatch impl_ICompositor<D>::CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes batchType) const
{
    Windows::UI::Composition::CompositionScopedBatch result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateScopedBatch(batchType, put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpriteVisual impl_ICompositor<D>::CreateSpriteVisual() const
{
    Windows::UI::Composition::SpriteVisual result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateSpriteVisual(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSurfaceBrush impl_ICompositor<D>::CreateSurfaceBrush() const
{
    Windows::UI::Composition::CompositionSurfaceBrush result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateSurfaceBrush(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSurfaceBrush impl_ICompositor<D>::CreateSurfaceBrush(const Windows::UI::Composition::ICompositionSurface & surface) const
{
    Windows::UI::Composition::CompositionSurfaceBrush result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateSurfaceBrushWithSurface(get(surface), put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionTarget impl_ICompositor<D>::CreateTargetForCurrentView() const
{
    Windows::UI::Composition::CompositionTarget result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateTargetForCurrentView(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector2KeyFrameAnimation impl_ICompositor<D>::CreateVector2KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector2KeyFrameAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateVector2KeyFrameAnimation(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector3KeyFrameAnimation impl_ICompositor<D>::CreateVector3KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector3KeyFrameAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateVector3KeyFrameAnimation(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector4KeyFrameAnimation impl_ICompositor<D>::CreateVector4KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector4KeyFrameAnimation result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_CreateVector4KeyFrameAnimation(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionCommitBatch impl_ICompositor<D>::GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes batchType) const
{
    Windows::UI::Composition::CompositionCommitBatch result { nullptr };
    check_hresult(static_cast<const ICompositor &>(static_cast<const D &>(*this))->abi_GetCommitBatch(batchType, put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::AmbientLight impl_ICompositor2<D>::CreateAmbientLight() const
{
    Windows::UI::Composition::AmbientLight result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateAmbientLight(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionAnimationGroup impl_ICompositor2<D>::CreateAnimationGroup() const
{
    Windows::UI::Composition::CompositionAnimationGroup result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateAnimationGroup(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionBackdropBrush impl_ICompositor2<D>::CreateBackdropBrush() const
{
    Windows::UI::Composition::CompositionBackdropBrush result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateBackdropBrush(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::DistantLight impl_ICompositor2<D>::CreateDistantLight() const
{
    Windows::UI::Composition::DistantLight result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateDistantLight(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::DropShadow impl_ICompositor2<D>::CreateDropShadow() const
{
    Windows::UI::Composition::DropShadow result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateDropShadow(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ImplicitAnimationCollection impl_ICompositor2<D>::CreateImplicitAnimationCollection() const
{
    Windows::UI::Composition::ImplicitAnimationCollection result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateImplicitAnimationCollection(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::LayerVisual impl_ICompositor2<D>::CreateLayerVisual() const
{
    Windows::UI::Composition::LayerVisual result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateLayerVisual(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionMaskBrush impl_ICompositor2<D>::CreateMaskBrush() const
{
    Windows::UI::Composition::CompositionMaskBrush result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateMaskBrush(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionNineGridBrush impl_ICompositor2<D>::CreateNineGridBrush() const
{
    Windows::UI::Composition::CompositionNineGridBrush result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateNineGridBrush(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::PointLight impl_ICompositor2<D>::CreatePointLight() const
{
    Windows::UI::Composition::PointLight result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreatePointLight(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpotLight impl_ICompositor2<D>::CreateSpotLight() const
{
    Windows::UI::Composition::SpotLight result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateSpotLight(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::StepEasingFunction impl_ICompositor2<D>::CreateStepEasingFunction() const
{
    Windows::UI::Composition::StepEasingFunction result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateStepEasingFunction(put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::StepEasingFunction impl_ICompositor2<D>::CreateStepEasingFunction(int32_t stepCount) const
{
    Windows::UI::Composition::StepEasingFunction result { nullptr };
    check_hresult(static_cast<const ICompositor2 &>(static_cast<const D &>(*this))->abi_CreateStepEasingFunctionWithStepCount(stepCount, put(result)));
    return result;
}

template <typename D> Windows::UI::Composition::VisualCollection impl_IContainerVisual<D>::Children() const
{
    Windows::UI::Composition::VisualCollection value { nullptr };
    check_hresult(static_cast<const IContainerVisual &>(static_cast<const D &>(*this))->get_Children(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICubicBezierEasingFunction<D>::ControlPoint1() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICubicBezierEasingFunction &>(static_cast<const D &>(*this))->get_ControlPoint1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 impl_ICubicBezierEasingFunction<D>::ControlPoint2() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const ICubicBezierEasingFunction &>(static_cast<const D &>(*this))->get_ControlPoint2(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IDistantLight<D>::Color() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IDistantLight &>(static_cast<const D &>(*this))->get_Color(put(value)));
    return value;
}

template <typename D> void impl_IDistantLight<D>::Color(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IDistantLight &>(static_cast<const D &>(*this))->put_Color(get(value)));
}

template <typename D> Windows::UI::Composition::Visual impl_IDistantLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value { nullptr };
    check_hresult(static_cast<const IDistantLight &>(static_cast<const D &>(*this))->get_CoordinateSpace(put(value)));
    return value;
}

template <typename D> void impl_IDistantLight<D>::CoordinateSpace(const Windows::UI::Composition::Visual & value) const
{
    check_hresult(static_cast<const IDistantLight &>(static_cast<const D &>(*this))->put_CoordinateSpace(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IDistantLight<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IDistantLight &>(static_cast<const D &>(*this))->get_Direction(put(value)));
    return value;
}

template <typename D> void impl_IDistantLight<D>::Direction(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IDistantLight &>(static_cast<const D &>(*this))->put_Direction(get(value)));
}

template <typename D> float impl_IDropShadow<D>::BlurRadius() const
{
    float value {};
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->get_BlurRadius(&value));
    return value;
}

template <typename D> void impl_IDropShadow<D>::BlurRadius(float value) const
{
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->put_BlurRadius(value));
}

template <typename D> Windows::UI::Color impl_IDropShadow<D>::Color() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->get_Color(put(value)));
    return value;
}

template <typename D> void impl_IDropShadow<D>::Color(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->put_Color(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush impl_IDropShadow<D>::Mask() const
{
    Windows::UI::Composition::CompositionBrush value { nullptr };
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->get_Mask(put(value)));
    return value;
}

template <typename D> void impl_IDropShadow<D>::Mask(const Windows::UI::Composition::CompositionBrush & value) const
{
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->put_Mask(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IDropShadow<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->get_Offset(put(value)));
    return value;
}

template <typename D> void impl_IDropShadow<D>::Offset(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->put_Offset(get(value)));
}

template <typename D> float impl_IDropShadow<D>::Opacity() const
{
    float value {};
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->get_Opacity(&value));
    return value;
}

template <typename D> void impl_IDropShadow<D>::Opacity(float value) const
{
    check_hresult(static_cast<const IDropShadow &>(static_cast<const D &>(*this))->put_Opacity(value));
}

template <typename D> hstring impl_IExpressionAnimation<D>::Expression() const
{
    hstring value;
    check_hresult(static_cast<const IExpressionAnimation &>(static_cast<const D &>(*this))->get_Expression(put(value)));
    return value;
}

template <typename D> void impl_IExpressionAnimation<D>::Expression(hstring_ref value) const
{
    check_hresult(static_cast<const IExpressionAnimation &>(static_cast<const D &>(*this))->put_Expression(get(value)));
}

template <typename D> float impl_IInsetClip<D>::BottomInset() const
{
    float value {};
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->get_BottomInset(&value));
    return value;
}

template <typename D> void impl_IInsetClip<D>::BottomInset(float value) const
{
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->put_BottomInset(value));
}

template <typename D> float impl_IInsetClip<D>::LeftInset() const
{
    float value {};
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->get_LeftInset(&value));
    return value;
}

template <typename D> void impl_IInsetClip<D>::LeftInset(float value) const
{
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->put_LeftInset(value));
}

template <typename D> float impl_IInsetClip<D>::RightInset() const
{
    float value {};
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->get_RightInset(&value));
    return value;
}

template <typename D> void impl_IInsetClip<D>::RightInset(float value) const
{
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->put_RightInset(value));
}

template <typename D> float impl_IInsetClip<D>::TopInset() const
{
    float value {};
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->get_TopInset(&value));
    return value;
}

template <typename D> void impl_IInsetClip<D>::TopInset(float value) const
{
    check_hresult(static_cast<const IInsetClip &>(static_cast<const D &>(*this))->put_TopInset(value));
}

template <typename D> Windows::Foundation::TimeSpan impl_IKeyFrameAnimation<D>::DelayTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->get_DelayTime(put(value)));
    return value;
}

template <typename D> void impl_IKeyFrameAnimation<D>::DelayTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->put_DelayTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IKeyFrameAnimation<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> void impl_IKeyFrameAnimation<D>::Duration(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->put_Duration(get(value)));
}

template <typename D> Windows::UI::Composition::AnimationIterationBehavior impl_IKeyFrameAnimation<D>::IterationBehavior() const
{
    Windows::UI::Composition::AnimationIterationBehavior value {};
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->get_IterationBehavior(&value));
    return value;
}

template <typename D> void impl_IKeyFrameAnimation<D>::IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior value) const
{
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->put_IterationBehavior(value));
}

template <typename D> int32_t impl_IKeyFrameAnimation<D>::IterationCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->get_IterationCount(&value));
    return value;
}

template <typename D> void impl_IKeyFrameAnimation<D>::IterationCount(int32_t value) const
{
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->put_IterationCount(value));
}

template <typename D> int32_t impl_IKeyFrameAnimation<D>::KeyFrameCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->get_KeyFrameCount(&value));
    return value;
}

template <typename D> Windows::UI::Composition::AnimationStopBehavior impl_IKeyFrameAnimation<D>::StopBehavior() const
{
    Windows::UI::Composition::AnimationStopBehavior value {};
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->get_StopBehavior(&value));
    return value;
}

template <typename D> void impl_IKeyFrameAnimation<D>::StopBehavior(Windows::UI::Composition::AnimationStopBehavior value) const
{
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->put_StopBehavior(value));
}

template <typename D> void impl_IKeyFrameAnimation<D>::InsertExpressionKeyFrame(float normalizedProgressKey, hstring_ref value) const
{
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertExpressionKeyFrame(normalizedProgressKey, get(value)));
}

template <typename D> void impl_IKeyFrameAnimation<D>::InsertExpressionKeyFrame(float normalizedProgressKey, hstring_ref value, const Windows::UI::Composition::CompositionEasingFunction & easingFunction) const
{
    check_hresult(static_cast<const IKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertExpressionKeyFrameWithEasingFunction(normalizedProgressKey, get(value), get(easingFunction)));
}

template <typename D> Windows::UI::Composition::AnimationDirection impl_IKeyFrameAnimation2<D>::Direction() const
{
    Windows::UI::Composition::AnimationDirection value {};
    check_hresult(static_cast<const IKeyFrameAnimation2 &>(static_cast<const D &>(*this))->get_Direction(&value));
    return value;
}

template <typename D> void impl_IKeyFrameAnimation2<D>::Direction(Windows::UI::Composition::AnimationDirection value) const
{
    check_hresult(static_cast<const IKeyFrameAnimation2 &>(static_cast<const D &>(*this))->put_Direction(value));
}

template <typename D> Windows::UI::Composition::CompositionEffectBrush impl_ILayerVisual<D>::Effect() const
{
    Windows::UI::Composition::CompositionEffectBrush value { nullptr };
    check_hresult(static_cast<const ILayerVisual &>(static_cast<const D &>(*this))->get_Effect(put(value)));
    return value;
}

template <typename D> void impl_ILayerVisual<D>::Effect(const Windows::UI::Composition::CompositionEffectBrush & value) const
{
    check_hresult(static_cast<const ILayerVisual &>(static_cast<const D &>(*this))->put_Effect(get(value)));
}

template <typename D> Windows::UI::Color impl_IPointLight<D>::Color() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->get_Color(put(value)));
    return value;
}

template <typename D> void impl_IPointLight<D>::Color(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->put_Color(get(value)));
}

template <typename D> float impl_IPointLight<D>::ConstantAttenuation() const
{
    float value {};
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->get_ConstantAttenuation(&value));
    return value;
}

template <typename D> void impl_IPointLight<D>::ConstantAttenuation(float value) const
{
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->put_ConstantAttenuation(value));
}

template <typename D> Windows::UI::Composition::Visual impl_IPointLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value { nullptr };
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->get_CoordinateSpace(put(value)));
    return value;
}

template <typename D> void impl_IPointLight<D>::CoordinateSpace(const Windows::UI::Composition::Visual & value) const
{
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->put_CoordinateSpace(get(value)));
}

template <typename D> float impl_IPointLight<D>::LinearAttenuation() const
{
    float value {};
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->get_LinearAttenuation(&value));
    return value;
}

template <typename D> void impl_IPointLight<D>::LinearAttenuation(float value) const
{
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->put_LinearAttenuation(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IPointLight<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->get_Offset(put(value)));
    return value;
}

template <typename D> void impl_IPointLight<D>::Offset(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->put_Offset(get(value)));
}

template <typename D> float impl_IPointLight<D>::QuadraticAttenuation() const
{
    float value {};
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->get_QuadraticAttenuation(&value));
    return value;
}

template <typename D> void impl_IPointLight<D>::QuadraticAttenuation(float value) const
{
    check_hresult(static_cast<const IPointLight &>(static_cast<const D &>(*this))->put_QuadraticAttenuation(value));
}

template <typename D> void impl_IQuaternionKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::quaternion & value) const
{
    check_hresult(static_cast<const IQuaternionKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrame(normalizedProgressKey, get(value)));
}

template <typename D> void impl_IQuaternionKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::quaternion & value, const Windows::UI::Composition::CompositionEasingFunction & easingFunction) const
{
    check_hresult(static_cast<const IQuaternionKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrameWithEasingFunction(normalizedProgressKey, get(value), get(easingFunction)));
}

template <typename D> Windows::UI::Composition::CompositionGraphicsDevice impl_IRenderingDeviceReplacedEventArgs<D>::GraphicsDevice() const
{
    Windows::UI::Composition::CompositionGraphicsDevice value { nullptr };
    check_hresult(static_cast<const IRenderingDeviceReplacedEventArgs &>(static_cast<const D &>(*this))->get_GraphicsDevice(put(value)));
    return value;
}

template <typename D> void impl_IScalarKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, float value) const
{
    check_hresult(static_cast<const IScalarKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrame(normalizedProgressKey, value));
}

template <typename D> void impl_IScalarKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, float value, const Windows::UI::Composition::CompositionEasingFunction & easingFunction) const
{
    check_hresult(static_cast<const IScalarKeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrameWithEasingFunction(normalizedProgressKey, value, get(easingFunction)));
}

template <typename D> float impl_ISpotLight<D>::ConstantAttenuation() const
{
    float value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_ConstantAttenuation(&value));
    return value;
}

template <typename D> void impl_ISpotLight<D>::ConstantAttenuation(float value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_ConstantAttenuation(value));
}

template <typename D> Windows::UI::Composition::Visual impl_ISpotLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value { nullptr };
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_CoordinateSpace(put(value)));
    return value;
}

template <typename D> void impl_ISpotLight<D>::CoordinateSpace(const Windows::UI::Composition::Visual & value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_CoordinateSpace(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpotLight<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_Direction(put(value)));
    return value;
}

template <typename D> void impl_ISpotLight<D>::Direction(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_Direction(get(value)));
}

template <typename D> float impl_ISpotLight<D>::InnerConeAngle() const
{
    float value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_InnerConeAngle(&value));
    return value;
}

template <typename D> void impl_ISpotLight<D>::InnerConeAngle(float value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_InnerConeAngle(value));
}

template <typename D> float impl_ISpotLight<D>::InnerConeAngleInDegrees() const
{
    float value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_InnerConeAngleInDegrees(&value));
    return value;
}

template <typename D> void impl_ISpotLight<D>::InnerConeAngleInDegrees(float value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_InnerConeAngleInDegrees(value));
}

template <typename D> Windows::UI::Color impl_ISpotLight<D>::InnerConeColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_InnerConeColor(put(value)));
    return value;
}

template <typename D> void impl_ISpotLight<D>::InnerConeColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_InnerConeColor(get(value)));
}

template <typename D> float impl_ISpotLight<D>::LinearAttenuation() const
{
    float value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_LinearAttenuation(&value));
    return value;
}

template <typename D> void impl_ISpotLight<D>::LinearAttenuation(float value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_LinearAttenuation(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_ISpotLight<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_Offset(put(value)));
    return value;
}

template <typename D> void impl_ISpotLight<D>::Offset(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_Offset(get(value)));
}

template <typename D> float impl_ISpotLight<D>::OuterConeAngle() const
{
    float value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_OuterConeAngle(&value));
    return value;
}

template <typename D> void impl_ISpotLight<D>::OuterConeAngle(float value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_OuterConeAngle(value));
}

template <typename D> float impl_ISpotLight<D>::OuterConeAngleInDegrees() const
{
    float value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_OuterConeAngleInDegrees(&value));
    return value;
}

template <typename D> void impl_ISpotLight<D>::OuterConeAngleInDegrees(float value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_OuterConeAngleInDegrees(value));
}

template <typename D> Windows::UI::Color impl_ISpotLight<D>::OuterConeColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_OuterConeColor(put(value)));
    return value;
}

template <typename D> void impl_ISpotLight<D>::OuterConeColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_OuterConeColor(get(value)));
}

template <typename D> float impl_ISpotLight<D>::QuadraticAttenuation() const
{
    float value {};
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->get_QuadraticAttenuation(&value));
    return value;
}

template <typename D> void impl_ISpotLight<D>::QuadraticAttenuation(float value) const
{
    check_hresult(static_cast<const ISpotLight &>(static_cast<const D &>(*this))->put_QuadraticAttenuation(value));
}

template <typename D> Windows::UI::Composition::CompositionBrush impl_ISpriteVisual<D>::Brush() const
{
    Windows::UI::Composition::CompositionBrush value { nullptr };
    check_hresult(static_cast<const ISpriteVisual &>(static_cast<const D &>(*this))->get_Brush(put(value)));
    return value;
}

template <typename D> void impl_ISpriteVisual<D>::Brush(const Windows::UI::Composition::CompositionBrush & value) const
{
    check_hresult(static_cast<const ISpriteVisual &>(static_cast<const D &>(*this))->put_Brush(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionShadow impl_ISpriteVisual2<D>::Shadow() const
{
    Windows::UI::Composition::CompositionShadow value { nullptr };
    check_hresult(static_cast<const ISpriteVisual2 &>(static_cast<const D &>(*this))->get_Shadow(put(value)));
    return value;
}

template <typename D> void impl_ISpriteVisual2<D>::Shadow(const Windows::UI::Composition::CompositionShadow & value) const
{
    check_hresult(static_cast<const ISpriteVisual2 &>(static_cast<const D &>(*this))->put_Shadow(get(value)));
}

template <typename D> int32_t impl_IStepEasingFunction<D>::FinalStep() const
{
    int32_t value {};
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->get_FinalStep(&value));
    return value;
}

template <typename D> void impl_IStepEasingFunction<D>::FinalStep(int32_t value) const
{
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->put_FinalStep(value));
}

template <typename D> int32_t impl_IStepEasingFunction<D>::InitialStep() const
{
    int32_t value {};
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->get_InitialStep(&value));
    return value;
}

template <typename D> void impl_IStepEasingFunction<D>::InitialStep(int32_t value) const
{
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->put_InitialStep(value));
}

template <typename D> bool impl_IStepEasingFunction<D>::IsFinalStepSingleFrame() const
{
    bool value {};
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->get_IsFinalStepSingleFrame(&value));
    return value;
}

template <typename D> void impl_IStepEasingFunction<D>::IsFinalStepSingleFrame(bool value) const
{
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->put_IsFinalStepSingleFrame(value));
}

template <typename D> bool impl_IStepEasingFunction<D>::IsInitialStepSingleFrame() const
{
    bool value {};
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->get_IsInitialStepSingleFrame(&value));
    return value;
}

template <typename D> void impl_IStepEasingFunction<D>::IsInitialStepSingleFrame(bool value) const
{
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->put_IsInitialStepSingleFrame(value));
}

template <typename D> int32_t impl_IStepEasingFunction<D>::StepCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->get_StepCount(&value));
    return value;
}

template <typename D> void impl_IStepEasingFunction<D>::StepCount(int32_t value) const
{
    check_hresult(static_cast<const IStepEasingFunction &>(static_cast<const D &>(*this))->put_StepCount(value));
}

template <typename D> void impl_IVector2KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const IVector2KeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrame(normalizedProgressKey, get(value)));
}

template <typename D> void impl_IVector2KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::float2 & value, const Windows::UI::Composition::CompositionEasingFunction & easingFunction) const
{
    check_hresult(static_cast<const IVector2KeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrameWithEasingFunction(normalizedProgressKey, get(value), get(easingFunction)));
}

template <typename D> void impl_IVector3KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IVector3KeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrame(normalizedProgressKey, get(value)));
}

template <typename D> void impl_IVector3KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::float3 & value, const Windows::UI::Composition::CompositionEasingFunction & easingFunction) const
{
    check_hresult(static_cast<const IVector3KeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrameWithEasingFunction(normalizedProgressKey, get(value), get(easingFunction)));
}

template <typename D> void impl_IVector4KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::float4 & value) const
{
    check_hresult(static_cast<const IVector4KeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrame(normalizedProgressKey, get(value)));
}

template <typename D> void impl_IVector4KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, const Windows::Foundation::Numerics::float4 & value, const Windows::UI::Composition::CompositionEasingFunction & easingFunction) const
{
    check_hresult(static_cast<const IVector4KeyFrameAnimation &>(static_cast<const D &>(*this))->abi_InsertKeyFrameWithEasingFunction(normalizedProgressKey, get(value), get(easingFunction)));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_IVisual<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_AnchorPoint(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::AnchorPoint(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_AnchorPoint(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionBackfaceVisibility impl_IVisual<D>::BackfaceVisibility() const
{
    Windows::UI::Composition::CompositionBackfaceVisibility value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_BackfaceVisibility(&value));
    return value;
}

template <typename D> void impl_IVisual<D>::BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_BackfaceVisibility(value));
}

template <typename D> Windows::UI::Composition::CompositionBorderMode impl_IVisual<D>::BorderMode() const
{
    Windows::UI::Composition::CompositionBorderMode value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_BorderMode(&value));
    return value;
}

template <typename D> void impl_IVisual<D>::BorderMode(Windows::UI::Composition::CompositionBorderMode value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_BorderMode(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IVisual<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_CenterPoint(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::CenterPoint(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_CenterPoint(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionClip impl_IVisual<D>::Clip() const
{
    Windows::UI::Composition::CompositionClip value { nullptr };
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_Clip(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::Clip(const Windows::UI::Composition::CompositionClip & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_Clip(get(value)));
}

template <typename D> Windows::UI::Composition::CompositionCompositeMode impl_IVisual<D>::CompositeMode() const
{
    Windows::UI::Composition::CompositionCompositeMode value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_CompositeMode(&value));
    return value;
}

template <typename D> void impl_IVisual<D>::CompositeMode(Windows::UI::Composition::CompositionCompositeMode value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_CompositeMode(value));
}

template <typename D> bool impl_IVisual<D>::IsVisible() const
{
    bool value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_IsVisible(&value));
    return value;
}

template <typename D> void impl_IVisual<D>::IsVisible(bool value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_IsVisible(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IVisual<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_Offset(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::Offset(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_Offset(get(value)));
}

template <typename D> float impl_IVisual<D>::Opacity() const
{
    float value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_Opacity(&value));
    return value;
}

template <typename D> void impl_IVisual<D>::Opacity(float value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_Opacity(value));
}

template <typename D> Windows::Foundation::Numerics::quaternion impl_IVisual<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_Orientation(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::Orientation(const Windows::Foundation::Numerics::quaternion & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_Orientation(get(value)));
}

template <typename D> Windows::UI::Composition::ContainerVisual impl_IVisual<D>::Parent() const
{
    Windows::UI::Composition::ContainerVisual value { nullptr };
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_Parent(put(value)));
    return value;
}

template <typename D> float impl_IVisual<D>::RotationAngle() const
{
    float value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_RotationAngle(&value));
    return value;
}

template <typename D> void impl_IVisual<D>::RotationAngle(float value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_RotationAngle(value));
}

template <typename D> float impl_IVisual<D>::RotationAngleInDegrees() const
{
    float value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void impl_IVisual<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IVisual<D>::RotationAxis() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_RotationAxis(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::RotationAxis(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_RotationAxis(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IVisual<D>::Scale() const
{
    Windows::Foundation::Numerics::float3 value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_Scale(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::Scale(const Windows::Foundation::Numerics::float3 & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_Scale(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 impl_IVisual<D>::Size() const
{
    Windows::Foundation::Numerics::float2 value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_Size(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::Size(const Windows::Foundation::Numerics::float2 & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_Size(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float4x4 impl_IVisual<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float4x4 value {};
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->get_TransformMatrix(put(value)));
    return value;
}

template <typename D> void impl_IVisual<D>::TransformMatrix(const Windows::Foundation::Numerics::float4x4 & value) const
{
    check_hresult(static_cast<const IVisual &>(static_cast<const D &>(*this))->put_TransformMatrix(get(value)));
}

template <typename D> int32_t impl_IVisualCollection<D>::Count() const
{
    int32_t value {};
    check_hresult(static_cast<const IVisualCollection &>(static_cast<const D &>(*this))->get_Count(&value));
    return value;
}

template <typename D> void impl_IVisualCollection<D>::InsertAbove(const Windows::UI::Composition::Visual & newChild, const Windows::UI::Composition::Visual & sibling) const
{
    check_hresult(static_cast<const IVisualCollection &>(static_cast<const D &>(*this))->abi_InsertAbove(get(newChild), get(sibling)));
}

template <typename D> void impl_IVisualCollection<D>::InsertAtBottom(const Windows::UI::Composition::Visual & newChild) const
{
    check_hresult(static_cast<const IVisualCollection &>(static_cast<const D &>(*this))->abi_InsertAtBottom(get(newChild)));
}

template <typename D> void impl_IVisualCollection<D>::InsertAtTop(const Windows::UI::Composition::Visual & newChild) const
{
    check_hresult(static_cast<const IVisualCollection &>(static_cast<const D &>(*this))->abi_InsertAtTop(get(newChild)));
}

template <typename D> void impl_IVisualCollection<D>::InsertBelow(const Windows::UI::Composition::Visual & newChild, const Windows::UI::Composition::Visual & sibling) const
{
    check_hresult(static_cast<const IVisualCollection &>(static_cast<const D &>(*this))->abi_InsertBelow(get(newChild), get(sibling)));
}

template <typename D> void impl_IVisualCollection<D>::Remove(const Windows::UI::Composition::Visual & child) const
{
    check_hresult(static_cast<const IVisualCollection &>(static_cast<const D &>(*this))->abi_Remove(get(child)));
}

template <typename D> void impl_IVisualCollection<D>::RemoveAll() const
{
    check_hresult(static_cast<const IVisualCollection &>(static_cast<const D &>(*this))->abi_RemoveAll());
}

template <typename D> int32_t impl_IVisualUnorderedCollection<D>::Count() const
{
    int32_t value {};
    check_hresult(static_cast<const IVisualUnorderedCollection &>(static_cast<const D &>(*this))->get_Count(&value));
    return value;
}

template <typename D> void impl_IVisualUnorderedCollection<D>::Add(const Windows::UI::Composition::Visual & newVisual) const
{
    check_hresult(static_cast<const IVisualUnorderedCollection &>(static_cast<const D &>(*this))->abi_Add(get(newVisual)));
}

template <typename D> void impl_IVisualUnorderedCollection<D>::Remove(const Windows::UI::Composition::Visual & visual) const
{
    check_hresult(static_cast<const IVisualUnorderedCollection &>(static_cast<const D &>(*this))->abi_Remove(get(visual)));
}

template <typename D> void impl_IVisualUnorderedCollection<D>::RemoveAll() const
{
    check_hresult(static_cast<const IVisualUnorderedCollection &>(static_cast<const D &>(*this))->abi_RemoveAll());
}

inline CompositionEffectSourceParameter::CompositionEffectSourceParameter(hstring_ref name) :
    CompositionEffectSourceParameter(get_activation_factory<CompositionEffectSourceParameter, ICompositionEffectSourceParameterFactory>().Create(name))
{}

inline Compositor::Compositor() :
    Compositor(activate_instance<Compositor>())
{}

}

}
