// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Core.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.3.h"
#include "internal/Windows.UI.Input.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.UI.Input.Inking.3.h"
#include "Windows.UI.Input.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes>
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

    HRESULT __stdcall get_PenTip(Windows::UI::Input::Inking::PenTipShape * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PenTip());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PenTip(Windows::UI::Input::Inking::PenTipShape value) noexcept override
    {
        try
        {
            this->shim().PenTip(value);
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

    HRESULT __stdcall put_Size(abi_arg_in<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            this->shim().Size(*reinterpret_cast<const Windows::Foundation::Size *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IgnorePressure(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IgnorePressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IgnorePressure(bool value) noexcept override
    {
        try
        {
            this->shim().IgnorePressure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FitToCurve(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FitToCurve());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FitToCurve(bool value) noexcept override
    {
        try
        {
            this->shim().FitToCurve(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes2> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes2>
{
    HRESULT __stdcall get_PenTipTransform(abi_arg_out<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PenTipTransform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PenTipTransform(abi_arg_in<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            this->shim().PenTipTransform(*reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DrawAsHighlighter(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DrawAsHighlighter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DrawAsHighlighter(bool value) noexcept override
    {
        try
        {
            this->shim().DrawAsHighlighter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes3> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes3>
{
    HRESULT __stdcall get_Kind(Windows::UI::Input::Inking::InkDrawingAttributesKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PencilProperties(abi_arg_out<Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PencilProperties());
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
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>
{
    HRESULT __stdcall get_Opacity(double * value) noexcept override
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

    HRESULT __stdcall put_Opacity(double value) noexcept override
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
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributesStatics> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributesStatics>
{
    HRESULT __stdcall abi_CreateForPencil(abi_arg_out<Windows::UI::Input::Inking::IInkDrawingAttributes> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateForPencil());
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
struct produce<D, Windows::UI::Input::Inking::IInkInputProcessingConfiguration> : produce_base<D, Windows::UI::Input::Inking::IInkInputProcessingConfiguration>
{
    HRESULT __stdcall get_Mode(Windows::UI::Input::Inking::InkInputProcessingMode * value) noexcept override
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

    HRESULT __stdcall put_Mode(Windows::UI::Input::Inking::InkInputProcessingMode value) noexcept override
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

    HRESULT __stdcall get_RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RightDragAction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction value) noexcept override
    {
        try
        {
            this->shim().RightDragAction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkManager> : produce_base<D, Windows::UI::Input::Inking::IInkManager>
{
    HRESULT __stdcall get_Mode(Windows::UI::Input::Inking::InkManipulationMode * value) noexcept override
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

    HRESULT __stdcall put_Mode(Windows::UI::Input::Inking::InkManipulationMode value) noexcept override
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

    HRESULT __stdcall abi_ProcessPointerDown(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint) noexcept override
    {
        try
        {
            this->shim().ProcessPointerDown(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessPointerUpdate(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint, abi_arg_out<Windows::IInspectable> updateInformation) noexcept override
    {
        try
        {
            *updateInformation = detach(this->shim().ProcessPointerUpdate(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            *updateInformation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessPointerUp(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint, abi_arg_out<Windows::Foundation::Rect> updateRectangle) noexcept override
    {
        try
        {
            *updateRectangle = detach(this->shim().ProcessPointerUp(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDefaultDrawingAttributes(abi_arg_in<Windows::UI::Input::Inking::IInkDrawingAttributes> drawingAttributes) noexcept override
    {
        try
        {
            this->shim().SetDefaultDrawingAttributes(*reinterpret_cast<const Windows::UI::Input::Inking::InkDrawingAttributes *>(&drawingAttributes));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RecognizeAsync2(Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>>> recognitionResults) noexcept override
    {
        try
        {
            *recognitionResults = detach(this->shim().RecognizeAsync(recognitionTarget));
            return S_OK;
        }
        catch (...)
        {
            *recognitionResults = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPoint> : produce_base<D, Windows::UI::Input::Inking::IInkPoint>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPointFactory> : produce_base<D, Windows::UI::Input::Inking::IInkPointFactory>
{
    HRESULT __stdcall abi_CreateInkPoint(abi_arg_in<Windows::Foundation::Point> position, float pressure, abi_arg_out<Windows::UI::Input::Inking::IInkPoint> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateInkPoint(*reinterpret_cast<const Windows::Foundation::Point *>(&position), pressure));
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
struct produce<D, Windows::UI::Input::Inking::IInkPresenter> : produce_base<D, Windows::UI::Input::Inking::IInkPresenter>
{
    HRESULT __stdcall get_IsInputEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInputEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputDeviceTypes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes value) noexcept override
    {
        try
        {
            this->shim().InputDeviceTypes(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnprocessedInput(abi_arg_out<Windows::UI::Input::Inking::IInkUnprocessedInput> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnprocessedInput());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeInput(abi_arg_out<Windows::UI::Input::Inking::IInkStrokeInput> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeInput());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputProcessingConfiguration(abi_arg_out<Windows::UI::Input::Inking::IInkInputProcessingConfiguration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputProcessingConfiguration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeContainer(abi_arg_out<Windows::UI::Input::Inking::IInkStrokeContainer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StrokeContainer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeContainer(abi_arg_in<Windows::UI::Input::Inking::IInkStrokeContainer> value) noexcept override
    {
        try
        {
            this->shim().StrokeContainer(*reinterpret_cast<const Windows::UI::Input::Inking::InkStrokeContainer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyDefaultDrawingAttributes(abi_arg_out<Windows::UI::Input::Inking::IInkDrawingAttributes> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CopyDefaultDrawingAttributes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateDefaultDrawingAttributes(abi_arg_in<Windows::UI::Input::Inking::IInkDrawingAttributes> value) noexcept override
    {
        try
        {
            this->shim().UpdateDefaultDrawingAttributes(*reinterpret_cast<const Windows::UI::Input::Inking::InkDrawingAttributes *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ActivateCustomDrying(abi_arg_out<Windows::UI::Input::Inking::IInkSynchronizer> inkSynchronizer) noexcept override
    {
        try
        {
            *inkSynchronizer = detach(this->shim().ActivateCustomDrying());
            return S_OK;
        }
        catch (...)
        {
            *inkSynchronizer = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPredefinedConfiguration(Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration value) noexcept override
    {
        try
        {
            this->shim().SetPredefinedConfiguration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StrokesCollected(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StrokesCollected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokesCollected(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StrokesCollected(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StrokesErased(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StrokesErased(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokesErased(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StrokesErased(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterRuler> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterRuler>
{
    HRESULT __stdcall get_Length(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Length(double value) noexcept override
    {
        try
        {
            this->shim().Length(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Width(double value) noexcept override
    {
        try
        {
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterRulerFactory> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterRulerFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::UI::Input::Inking::IInkPresenter> inkPresenter, abi_arg_out<Windows::UI::Input::Inking::IInkPresenterRuler> inkPresenterRuler) noexcept override
    {
        try
        {
            *inkPresenterRuler = detach(this->shim().Create(*reinterpret_cast<const Windows::UI::Input::Inking::InkPresenter *>(&inkPresenter)));
            return S_OK;
        }
        catch (...)
        {
            *inkPresenterRuler = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterStencil> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterStencil>
{
    HRESULT __stdcall get_Kind(Windows::UI::Input::Inking::InkPresenterStencilKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
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

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().BackgroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().ForegroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transform(abi_arg_out<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Transform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Transform(abi_arg_in<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            this->shim().Transform(*reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkRecognitionResult> : produce_base<D, Windows::UI::Input::Inking::IInkRecognitionResult>
{
    HRESULT __stdcall get_BoundingRect(abi_arg_out<Windows::Foundation::Rect> boundingRect) noexcept override
    {
        try
        {
            *boundingRect = detach(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTextCandidates(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> textCandidates) noexcept override
    {
        try
        {
            *textCandidates = detach(this->shim().GetTextCandidates());
            return S_OK;
        }
        catch (...)
        {
            *textCandidates = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStrokes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>> strokes) noexcept override
    {
        try
        {
            *strokes = detach(this->shim().GetStrokes());
            return S_OK;
        }
        catch (...)
        {
            *strokes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkRecognizer> : produce_base<D, Windows::UI::Input::Inking::IInkRecognizer>
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
struct produce<D, Windows::UI::Input::Inking::IInkRecognizerContainer> : produce_base<D, Windows::UI::Input::Inking::IInkRecognizerContainer>
{
    HRESULT __stdcall abi_SetDefaultRecognizer(abi_arg_in<Windows::UI::Input::Inking::IInkRecognizer> recognizer) noexcept override
    {
        try
        {
            this->shim().SetDefaultRecognizer(*reinterpret_cast<const Windows::UI::Input::Inking::InkRecognizer *>(&recognizer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RecognizeAsync(abi_arg_in<Windows::UI::Input::Inking::IInkStrokeContainer> strokeCollection, Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>>> recognitionResults) noexcept override
    {
        try
        {
            *recognitionResults = detach(this->shim().RecognizeAsync(*reinterpret_cast<const Windows::UI::Input::Inking::InkStrokeContainer *>(&strokeCollection), recognitionTarget));
            return S_OK;
        }
        catch (...)
        {
            *recognitionResults = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRecognizers(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognizer>> recognizerView) noexcept override
    {
        try
        {
            *recognizerView = detach(this->shim().GetRecognizers());
            return S_OK;
        }
        catch (...)
        {
            *recognizerView = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStroke> : produce_base<D, Windows::UI::Input::Inking::IInkStroke>
{
    HRESULT __stdcall get_DrawingAttributes(abi_arg_out<Windows::UI::Input::Inking::IInkDrawingAttributes> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DrawingAttributes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DrawingAttributes(abi_arg_in<Windows::UI::Input::Inking::IInkDrawingAttributes> value) noexcept override
    {
        try
        {
            this->shim().DrawingAttributes(*reinterpret_cast<const Windows::UI::Input::Inking::InkDrawingAttributes *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Selected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Selected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Selected(bool value) noexcept override
    {
        try
        {
            this->shim().Selected(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recognized(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Recognized());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRenderingSegments(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStrokeRenderingSegment>> renderingSegments) noexcept override
    {
        try
        {
            *renderingSegments = detach(this->shim().GetRenderingSegments());
            return S_OK;
        }
        catch (...)
        {
            *renderingSegments = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clone(abi_arg_out<Windows::UI::Input::Inking::IInkStroke> clonedStroke) noexcept override
    {
        try
        {
            *clonedStroke = detach(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *clonedStroke = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStroke2> : produce_base<D, Windows::UI::Input::Inking::IInkStroke2>
{
    HRESULT __stdcall get_PointTransform(abi_arg_out<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointTransform());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointTransform(abi_arg_in<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            this->shim().PointTransform(*reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInkPoints(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkPoint>> inkPoints) noexcept override
    {
        try
        {
            *inkPoints = detach(this->shim().GetInkPoints());
            return S_OK;
        }
        catch (...)
        {
            *inkPoints = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeBuilder> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeBuilder>
{
    HRESULT __stdcall abi_BeginStroke(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint) noexcept override
    {
        try
        {
            this->shim().BeginStroke(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendToStroke(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint, abi_arg_out<Windows::UI::Input::IPointerPoint> previousPointerPoint) noexcept override
    {
        try
        {
            *previousPointerPoint = detach(this->shim().AppendToStroke(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            *previousPointerPoint = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndStroke(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint, abi_arg_out<Windows::UI::Input::Inking::IInkStroke> stroke) noexcept override
    {
        try
        {
            *stroke = detach(this->shim().EndStroke(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            *stroke = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStroke(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> points, abi_arg_out<Windows::UI::Input::Inking::IInkStroke> stroke) noexcept override
    {
        try
        {
            *stroke = detach(this->shim().CreateStroke(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> *>(&points)));
            return S_OK;
        }
        catch (...)
        {
            *stroke = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDefaultDrawingAttributes(abi_arg_in<Windows::UI::Input::Inking::IInkDrawingAttributes> drawingAttributes) noexcept override
    {
        try
        {
            this->shim().SetDefaultDrawingAttributes(*reinterpret_cast<const Windows::UI::Input::Inking::InkDrawingAttributes *>(&drawingAttributes));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeBuilder2> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeBuilder2>
{
    HRESULT __stdcall abi_CreateStrokeFromInkPoints(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkPoint>> inkPoints, abi_arg_in<Windows::Foundation::Numerics::float3x2> transform, abi_arg_out<Windows::UI::Input::Inking::IInkStroke> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateStrokeFromInkPoints(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkPoint> *>(&inkPoints), *reinterpret_cast<const Windows::Foundation::Numerics::float3x2 *>(&transform)));
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
struct produce<D, Windows::UI::Input::Inking::IInkStrokeContainer> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeContainer>
{
    HRESULT __stdcall get_BoundingRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddStroke(abi_arg_in<Windows::UI::Input::Inking::IInkStroke> stroke) noexcept override
    {
        try
        {
            this->shim().AddStroke(*reinterpret_cast<const Windows::UI::Input::Inking::InkStroke *>(&stroke));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteSelected(abi_arg_out<Windows::Foundation::Rect> invalidatedRect) noexcept override
    {
        try
        {
            *invalidatedRect = detach(this->shim().DeleteSelected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveSelected(abi_arg_in<Windows::Foundation::Point> translation, abi_arg_out<Windows::Foundation::Rect> invalidatedRectangle) noexcept override
    {
        try
        {
            *invalidatedRectangle = detach(this->shim().MoveSelected(*reinterpret_cast<const Windows::Foundation::Point *>(&translation)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectWithPolyLine(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> polyline, abi_arg_out<Windows::Foundation::Rect> invalidatedRectangle) noexcept override
    {
        try
        {
            *invalidatedRectangle = detach(this->shim().SelectWithPolyLine(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> *>(&polyline)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectWithLine(abi_arg_in<Windows::Foundation::Point> from, abi_arg_in<Windows::Foundation::Point> to, abi_arg_out<Windows::Foundation::Rect> invalidatedRectangle) noexcept override
    {
        try
        {
            *invalidatedRectangle = detach(this->shim().SelectWithLine(*reinterpret_cast<const Windows::Foundation::Point *>(&from), *reinterpret_cast<const Windows::Foundation::Point *>(&to)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopySelectedToClipboard() noexcept override
    {
        try
        {
            this->shim().CopySelectedToClipboard();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PasteFromClipboard(abi_arg_in<Windows::Foundation::Point> position, abi_arg_out<Windows::Foundation::Rect> invalidatedRectangle) noexcept override
    {
        try
        {
            *invalidatedRectangle = detach(this->shim().PasteFromClipboard(*reinterpret_cast<const Windows::Foundation::Point *>(&position)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanPasteFromClipboard(bool * canPaste) noexcept override
    {
        try
        {
            *canPaste = detach(this->shim().CanPasteFromClipboard());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> inputStream, abi_arg_out<Windows::Foundation::IAsyncActionWithProgress<uint64_t>> loadAction) noexcept override
    {
        try
        {
            *loadAction = detach(this->shim().LoadAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&inputStream)));
            return S_OK;
        }
        catch (...)
        {
            *loadAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_in<Windows::Storage::Streams::IOutputStream> outputStream, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t>> outputStreamOperation) noexcept override
    {
        try
        {
            *outputStreamOperation = detach(this->shim().SaveAsync(*reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&outputStream)));
            return S_OK;
        }
        catch (...)
        {
            *outputStreamOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateRecognitionResults(abi_arg_in<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> recognitionResults) noexcept override
    {
        try
        {
            this->shim().UpdateRecognitionResults(*reinterpret_cast<const Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> *>(&recognitionResults));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStrokes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>> strokeView) noexcept override
    {
        try
        {
            *strokeView = detach(this->shim().GetStrokes());
            return S_OK;
        }
        catch (...)
        {
            *strokeView = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRecognitionResults(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> recognitionResults) noexcept override
    {
        try
        {
            *recognitionResults = detach(this->shim().GetRecognitionResults());
            return S_OK;
        }
        catch (...)
        {
            *recognitionResults = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeContainer2> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeContainer2>
{
    HRESULT __stdcall abi_AddStrokes(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke>> strokes) noexcept override
    {
        try
        {
            this->shim().AddStrokes(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> *>(&strokes));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeInput> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeInput>
{
    HRESULT __stdcall add_StrokeStarted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StrokeStarted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeStarted(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StrokeStarted(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StrokeContinued(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StrokeContinued(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeContinued(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StrokeContinued(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StrokeEnded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StrokeEnded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeEnded(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StrokeEnded(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StrokeCanceled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().StrokeCanceled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeCanceled(event_token cookie) noexcept override
    {
        try
        {
            this->shim().StrokeCanceled(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(abi_arg_out<Windows::UI::Input::Inking::IInkPresenter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InkPresenter());
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
struct produce<D, Windows::UI::Input::Inking::IInkStrokeRenderingSegment> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeRenderingSegment>
{
    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BezierControlPoint1(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BezierControlPoint1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BezierControlPoint2(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BezierControlPoint2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltX(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiltX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TiltY(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TiltY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Twist(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Twist());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs> : produce_base<D, Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>
{
    HRESULT __stdcall get_Strokes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Strokes());
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
struct produce<D, Windows::UI::Input::Inking::IInkStrokesErasedEventArgs> : produce_base<D, Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>
{
    HRESULT __stdcall get_Strokes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Strokes());
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
struct produce<D, Windows::UI::Input::Inking::IInkSynchronizer> : produce_base<D, Windows::UI::Input::Inking::IInkSynchronizer>
{
    HRESULT __stdcall abi_BeginDry(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>> inkStrokes) noexcept override
    {
        try
        {
            *inkStrokes = detach(this->shim().BeginDry());
            return S_OK;
        }
        catch (...)
        {
            *inkStrokes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EndDry() noexcept override
    {
        try
        {
            this->shim().EndDry();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkUnprocessedInput> : produce_base<D, Windows::UI::Input::Inking::IInkUnprocessedInput>
{
    HRESULT __stdcall add_PointerEntered(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerEntered(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerEntered(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerHovered(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerHovered(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerHovered(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerHovered(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerExited(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerExited(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerPressed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerPressed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerMoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerMoved(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerReleased(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerReleased(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().PointerLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerLost(event_token cookie) noexcept override
    {
        try
        {
            this->shim().PointerLost(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(abi_arg_out<Windows::UI::Input::Inking::IInkPresenter> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InkPresenter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Input::Inking {

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> impl_IInkStrokesCollectedEventArgs<D>::Strokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> value;
    check_hresult(static_cast<const IInkStrokesCollectedEventArgs &>(static_cast<const D &>(*this))->get_Strokes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> impl_IInkStrokesErasedEventArgs<D>::Strokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> value;
    check_hresult(static_cast<const IInkStrokesErasedEventArgs &>(static_cast<const D &>(*this))->get_Strokes(put(value)));
    return value;
}

template <typename D> bool impl_IInkPresenter<D>::IsInputEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->get_IsInputEnabled(&value));
    return value;
}

template <typename D> void impl_IInkPresenter<D>::IsInputEnabled(bool value) const
{
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->put_IsInputEnabled(value));
}

template <typename D> Windows::UI::Core::CoreInputDeviceTypes impl_IInkPresenter<D>::InputDeviceTypes() const
{
    Windows::UI::Core::CoreInputDeviceTypes value {};
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->get_InputDeviceTypes(&value));
    return value;
}

template <typename D> void impl_IInkPresenter<D>::InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes value) const
{
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->put_InputDeviceTypes(value));
}

template <typename D> Windows::UI::Input::Inking::InkUnprocessedInput impl_IInkPresenter<D>::UnprocessedInput() const
{
    Windows::UI::Input::Inking::InkUnprocessedInput value { nullptr };
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->get_UnprocessedInput(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkStrokeInput impl_IInkPresenter<D>::StrokeInput() const
{
    Windows::UI::Input::Inking::InkStrokeInput value { nullptr };
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->get_StrokeInput(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkInputProcessingConfiguration impl_IInkPresenter<D>::InputProcessingConfiguration() const
{
    Windows::UI::Input::Inking::InkInputProcessingConfiguration value { nullptr };
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->get_InputProcessingConfiguration(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkStrokeContainer impl_IInkPresenter<D>::StrokeContainer() const
{
    Windows::UI::Input::Inking::InkStrokeContainer value { nullptr };
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->get_StrokeContainer(put(value)));
    return value;
}

template <typename D> void impl_IInkPresenter<D>::StrokeContainer(const Windows::UI::Input::Inking::InkStrokeContainer & value) const
{
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->put_StrokeContainer(get(value)));
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributes impl_IInkPresenter<D>::CopyDefaultDrawingAttributes() const
{
    Windows::UI::Input::Inking::InkDrawingAttributes value { nullptr };
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->abi_CopyDefaultDrawingAttributes(put(value)));
    return value;
}

template <typename D> void impl_IInkPresenter<D>::UpdateDefaultDrawingAttributes(const Windows::UI::Input::Inking::InkDrawingAttributes & value) const
{
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->abi_UpdateDefaultDrawingAttributes(get(value)));
}

template <typename D> Windows::UI::Input::Inking::InkSynchronizer impl_IInkPresenter<D>::ActivateCustomDrying() const
{
    Windows::UI::Input::Inking::InkSynchronizer inkSynchronizer { nullptr };
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->abi_ActivateCustomDrying(put(inkSynchronizer)));
    return inkSynchronizer;
}

template <typename D> void impl_IInkPresenter<D>::SetPredefinedConfiguration(Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration value) const
{
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->abi_SetPredefinedConfiguration(value));
}

template <typename D> event_token impl_IInkPresenter<D>::StrokesCollected(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->add_StrokesCollected(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkPresenter> impl_IInkPresenter<D>::StrokesCollected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkPresenter>(this, &ABI::Windows::UI::Input::Inking::IInkPresenter::remove_StrokesCollected, StrokesCollected(handler));
}

template <typename D> void impl_IInkPresenter<D>::StrokesCollected(event_token cookie) const
{
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->remove_StrokesCollected(cookie));
}

template <typename D> event_token impl_IInkPresenter<D>::StrokesErased(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->add_StrokesErased(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkPresenter> impl_IInkPresenter<D>::StrokesErased(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkPresenter>(this, &ABI::Windows::UI::Input::Inking::IInkPresenter::remove_StrokesErased, StrokesErased(handler));
}

template <typename D> void impl_IInkPresenter<D>::StrokesErased(event_token cookie) const
{
    check_hresult(static_cast<const IInkPresenter &>(static_cast<const D &>(*this))->remove_StrokesErased(cookie));
}

template <typename D> Windows::UI::Input::Inking::InkInputProcessingMode impl_IInkInputProcessingConfiguration<D>::Mode() const
{
    Windows::UI::Input::Inking::InkInputProcessingMode value {};
    check_hresult(static_cast<const IInkInputProcessingConfiguration &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_IInkInputProcessingConfiguration<D>::Mode(Windows::UI::Input::Inking::InkInputProcessingMode value) const
{
    check_hresult(static_cast<const IInkInputProcessingConfiguration &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> Windows::UI::Input::Inking::InkInputRightDragAction impl_IInkInputProcessingConfiguration<D>::RightDragAction() const
{
    Windows::UI::Input::Inking::InkInputRightDragAction value {};
    check_hresult(static_cast<const IInkInputProcessingConfiguration &>(static_cast<const D &>(*this))->get_RightDragAction(&value));
    return value;
}

template <typename D> void impl_IInkInputProcessingConfiguration<D>::RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction value) const
{
    check_hresult(static_cast<const IInkInputProcessingConfiguration &>(static_cast<const D &>(*this))->put_RightDragAction(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> impl_IInkSynchronizer<D>::BeginDry() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> inkStrokes;
    check_hresult(static_cast<const IInkSynchronizer &>(static_cast<const D &>(*this))->abi_BeginDry(put(inkStrokes)));
    return inkStrokes;
}

template <typename D> void impl_IInkSynchronizer<D>::EndDry() const
{
    check_hresult(static_cast<const IInkSynchronizer &>(static_cast<const D &>(*this))->abi_EndDry());
}

template <typename D> event_token impl_IInkUnprocessedInput<D>::PointerEntered(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->add_PointerEntered(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkUnprocessedInput> impl_IInkUnprocessedInput<D>::PointerEntered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkUnprocessedInput>(this, &ABI::Windows::UI::Input::Inking::IInkUnprocessedInput::remove_PointerEntered, PointerEntered(handler));
}

template <typename D> void impl_IInkUnprocessedInput<D>::PointerEntered(event_token cookie) const
{
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->remove_PointerEntered(cookie));
}

template <typename D> event_token impl_IInkUnprocessedInput<D>::PointerHovered(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->add_PointerHovered(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkUnprocessedInput> impl_IInkUnprocessedInput<D>::PointerHovered(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkUnprocessedInput>(this, &ABI::Windows::UI::Input::Inking::IInkUnprocessedInput::remove_PointerHovered, PointerHovered(handler));
}

template <typename D> void impl_IInkUnprocessedInput<D>::PointerHovered(event_token cookie) const
{
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->remove_PointerHovered(cookie));
}

template <typename D> event_token impl_IInkUnprocessedInput<D>::PointerExited(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->add_PointerExited(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkUnprocessedInput> impl_IInkUnprocessedInput<D>::PointerExited(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkUnprocessedInput>(this, &ABI::Windows::UI::Input::Inking::IInkUnprocessedInput::remove_PointerExited, PointerExited(handler));
}

template <typename D> void impl_IInkUnprocessedInput<D>::PointerExited(event_token cookie) const
{
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->remove_PointerExited(cookie));
}

template <typename D> event_token impl_IInkUnprocessedInput<D>::PointerPressed(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->add_PointerPressed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkUnprocessedInput> impl_IInkUnprocessedInput<D>::PointerPressed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkUnprocessedInput>(this, &ABI::Windows::UI::Input::Inking::IInkUnprocessedInput::remove_PointerPressed, PointerPressed(handler));
}

template <typename D> void impl_IInkUnprocessedInput<D>::PointerPressed(event_token cookie) const
{
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->remove_PointerPressed(cookie));
}

template <typename D> event_token impl_IInkUnprocessedInput<D>::PointerMoved(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->add_PointerMoved(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkUnprocessedInput> impl_IInkUnprocessedInput<D>::PointerMoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkUnprocessedInput>(this, &ABI::Windows::UI::Input::Inking::IInkUnprocessedInput::remove_PointerMoved, PointerMoved(handler));
}

template <typename D> void impl_IInkUnprocessedInput<D>::PointerMoved(event_token cookie) const
{
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->remove_PointerMoved(cookie));
}

template <typename D> event_token impl_IInkUnprocessedInput<D>::PointerReleased(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->add_PointerReleased(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkUnprocessedInput> impl_IInkUnprocessedInput<D>::PointerReleased(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkUnprocessedInput>(this, &ABI::Windows::UI::Input::Inking::IInkUnprocessedInput::remove_PointerReleased, PointerReleased(handler));
}

template <typename D> void impl_IInkUnprocessedInput<D>::PointerReleased(event_token cookie) const
{
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->remove_PointerReleased(cookie));
}

template <typename D> event_token impl_IInkUnprocessedInput<D>::PointerLost(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->add_PointerLost(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkUnprocessedInput> impl_IInkUnprocessedInput<D>::PointerLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkUnprocessedInput>(this, &ABI::Windows::UI::Input::Inking::IInkUnprocessedInput::remove_PointerLost, PointerLost(handler));
}

template <typename D> void impl_IInkUnprocessedInput<D>::PointerLost(event_token cookie) const
{
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->remove_PointerLost(cookie));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter impl_IInkUnprocessedInput<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value { nullptr };
    check_hresult(static_cast<const IInkUnprocessedInput &>(static_cast<const D &>(*this))->get_InkPresenter(put(value)));
    return value;
}

template <typename D> event_token impl_IInkStrokeInput<D>::StrokeStarted(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->add_StrokeStarted(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkStrokeInput> impl_IInkStrokeInput<D>::StrokeStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkStrokeInput>(this, &ABI::Windows::UI::Input::Inking::IInkStrokeInput::remove_StrokeStarted, StrokeStarted(handler));
}

template <typename D> void impl_IInkStrokeInput<D>::StrokeStarted(event_token cookie) const
{
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->remove_StrokeStarted(cookie));
}

template <typename D> event_token impl_IInkStrokeInput<D>::StrokeContinued(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->add_StrokeContinued(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkStrokeInput> impl_IInkStrokeInput<D>::StrokeContinued(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkStrokeInput>(this, &ABI::Windows::UI::Input::Inking::IInkStrokeInput::remove_StrokeContinued, StrokeContinued(handler));
}

template <typename D> void impl_IInkStrokeInput<D>::StrokeContinued(event_token cookie) const
{
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->remove_StrokeContinued(cookie));
}

template <typename D> event_token impl_IInkStrokeInput<D>::StrokeEnded(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->add_StrokeEnded(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkStrokeInput> impl_IInkStrokeInput<D>::StrokeEnded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkStrokeInput>(this, &ABI::Windows::UI::Input::Inking::IInkStrokeInput::remove_StrokeEnded, StrokeEnded(handler));
}

template <typename D> void impl_IInkStrokeInput<D>::StrokeEnded(event_token cookie) const
{
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->remove_StrokeEnded(cookie));
}

template <typename D> event_token impl_IInkStrokeInput<D>::StrokeCanceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->add_StrokeCanceled(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IInkStrokeInput> impl_IInkStrokeInput<D>::StrokeCanceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IInkStrokeInput>(this, &ABI::Windows::UI::Input::Inking::IInkStrokeInput::remove_StrokeCanceled, StrokeCanceled(handler));
}

template <typename D> void impl_IInkStrokeInput<D>::StrokeCanceled(event_token cookie) const
{
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->remove_StrokeCanceled(cookie));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter impl_IInkStrokeInput<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value { nullptr };
    check_hresult(static_cast<const IInkStrokeInput &>(static_cast<const D &>(*this))->get_InkPresenter(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkPresenterStencilKind impl_IInkPresenterStencil<D>::Kind() const
{
    Windows::UI::Input::Inking::InkPresenterStencilKind value {};
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> bool impl_IInkPresenterStencil<D>::IsVisible() const
{
    bool value {};
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->get_IsVisible(&value));
    return value;
}

template <typename D> void impl_IInkPresenterStencil<D>::IsVisible(bool value) const
{
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->put_IsVisible(value));
}

template <typename D> Windows::UI::Color impl_IInkPresenterStencil<D>::BackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IInkPresenterStencil<D>::BackgroundColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->put_BackgroundColor(get(value)));
}

template <typename D> Windows::UI::Color impl_IInkPresenterStencil<D>::ForegroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->get_ForegroundColor(put(value)));
    return value;
}

template <typename D> void impl_IInkPresenterStencil<D>::ForegroundColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->put_ForegroundColor(get(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 impl_IInkPresenterStencil<D>::Transform() const
{
    Windows::Foundation::Numerics::float3x2 value {};
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->get_Transform(put(value)));
    return value;
}

template <typename D> void impl_IInkPresenterStencil<D>::Transform(const Windows::Foundation::Numerics::float3x2 & value) const
{
    check_hresult(static_cast<const IInkPresenterStencil &>(static_cast<const D &>(*this))->put_Transform(get(value)));
}

template <typename D> double impl_IInkPresenterRuler<D>::Length() const
{
    double value {};
    check_hresult(static_cast<const IInkPresenterRuler &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> void impl_IInkPresenterRuler<D>::Length(double value) const
{
    check_hresult(static_cast<const IInkPresenterRuler &>(static_cast<const D &>(*this))->put_Length(value));
}

template <typename D> double impl_IInkPresenterRuler<D>::Width() const
{
    double value {};
    check_hresult(static_cast<const IInkPresenterRuler &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> void impl_IInkPresenterRuler<D>::Width(double value) const
{
    check_hresult(static_cast<const IInkPresenterRuler &>(static_cast<const D &>(*this))->put_Width(value));
}

template <typename D> Windows::UI::Input::Inking::InkPresenterRuler impl_IInkPresenterRulerFactory<D>::Create(const Windows::UI::Input::Inking::InkPresenter & inkPresenter) const
{
    Windows::UI::Input::Inking::InkPresenterRuler inkPresenterRuler { nullptr };
    check_hresult(static_cast<const IInkPresenterRulerFactory &>(static_cast<const D &>(*this))->abi_Create(get(inkPresenter), put(inkPresenterRuler)));
    return inkPresenterRuler;
}

template <typename D> Windows::Foundation::Point impl_IInkPoint<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IInkPoint &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> float impl_IInkPoint<D>::Pressure() const
{
    float value {};
    check_hresult(static_cast<const IInkPoint &>(static_cast<const D &>(*this))->get_Pressure(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkPoint impl_IInkPointFactory<D>::CreateInkPoint(const Windows::Foundation::Point & position, float pressure) const
{
    Windows::UI::Input::Inking::InkPoint result { nullptr };
    check_hresult(static_cast<const IInkPointFactory &>(static_cast<const D &>(*this))->abi_CreateInkPoint(get(position), pressure, put(result)));
    return result;
}

template <typename D> Windows::UI::Color impl_IInkDrawingAttributes<D>::Color() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->get_Color(put(value)));
    return value;
}

template <typename D> void impl_IInkDrawingAttributes<D>::Color(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->put_Color(get(value)));
}

template <typename D> Windows::UI::Input::Inking::PenTipShape impl_IInkDrawingAttributes<D>::PenTip() const
{
    Windows::UI::Input::Inking::PenTipShape value {};
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->get_PenTip(&value));
    return value;
}

template <typename D> void impl_IInkDrawingAttributes<D>::PenTip(Windows::UI::Input::Inking::PenTipShape value) const
{
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->put_PenTip(value));
}

template <typename D> Windows::Foundation::Size impl_IInkDrawingAttributes<D>::Size() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->get_Size(put(value)));
    return value;
}

template <typename D> void impl_IInkDrawingAttributes<D>::Size(const Windows::Foundation::Size & value) const
{
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->put_Size(get(value)));
}

template <typename D> bool impl_IInkDrawingAttributes<D>::IgnorePressure() const
{
    bool value {};
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->get_IgnorePressure(&value));
    return value;
}

template <typename D> void impl_IInkDrawingAttributes<D>::IgnorePressure(bool value) const
{
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->put_IgnorePressure(value));
}

template <typename D> bool impl_IInkDrawingAttributes<D>::FitToCurve() const
{
    bool value {};
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->get_FitToCurve(&value));
    return value;
}

template <typename D> void impl_IInkDrawingAttributes<D>::FitToCurve(bool value) const
{
    check_hresult(static_cast<const IInkDrawingAttributes &>(static_cast<const D &>(*this))->put_FitToCurve(value));
}

template <typename D> Windows::Foundation::Numerics::float3x2 impl_IInkDrawingAttributes2<D>::PenTipTransform() const
{
    Windows::Foundation::Numerics::float3x2 value {};
    check_hresult(static_cast<const IInkDrawingAttributes2 &>(static_cast<const D &>(*this))->get_PenTipTransform(put(value)));
    return value;
}

template <typename D> void impl_IInkDrawingAttributes2<D>::PenTipTransform(const Windows::Foundation::Numerics::float3x2 & value) const
{
    check_hresult(static_cast<const IInkDrawingAttributes2 &>(static_cast<const D &>(*this))->put_PenTipTransform(get(value)));
}

template <typename D> bool impl_IInkDrawingAttributes2<D>::DrawAsHighlighter() const
{
    bool value {};
    check_hresult(static_cast<const IInkDrawingAttributes2 &>(static_cast<const D &>(*this))->get_DrawAsHighlighter(&value));
    return value;
}

template <typename D> void impl_IInkDrawingAttributes2<D>::DrawAsHighlighter(bool value) const
{
    check_hresult(static_cast<const IInkDrawingAttributes2 &>(static_cast<const D &>(*this))->put_DrawAsHighlighter(value));
}

template <typename D> double impl_IInkDrawingAttributesPencilProperties<D>::Opacity() const
{
    double value {};
    check_hresult(static_cast<const IInkDrawingAttributesPencilProperties &>(static_cast<const D &>(*this))->get_Opacity(&value));
    return value;
}

template <typename D> void impl_IInkDrawingAttributesPencilProperties<D>::Opacity(double value) const
{
    check_hresult(static_cast<const IInkDrawingAttributesPencilProperties &>(static_cast<const D &>(*this))->put_Opacity(value));
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributesKind impl_IInkDrawingAttributes3<D>::Kind() const
{
    Windows::UI::Input::Inking::InkDrawingAttributesKind value {};
    check_hresult(static_cast<const IInkDrawingAttributes3 &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties impl_IInkDrawingAttributes3<D>::PencilProperties() const
{
    Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties value { nullptr };
    check_hresult(static_cast<const IInkDrawingAttributes3 &>(static_cast<const D &>(*this))->get_PencilProperties(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributes impl_IInkDrawingAttributesStatics<D>::CreateForPencil() const
{
    Windows::UI::Input::Inking::InkDrawingAttributes result { nullptr };
    check_hresult(static_cast<const IInkDrawingAttributesStatics &>(static_cast<const D &>(*this))->abi_CreateForPencil(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Point impl_IInkStrokeRenderingSegment<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IInkStrokeRenderingSegment &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IInkStrokeRenderingSegment<D>::BezierControlPoint1() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IInkStrokeRenderingSegment &>(static_cast<const D &>(*this))->get_BezierControlPoint1(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IInkStrokeRenderingSegment<D>::BezierControlPoint2() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IInkStrokeRenderingSegment &>(static_cast<const D &>(*this))->get_BezierControlPoint2(put(value)));
    return value;
}

template <typename D> float impl_IInkStrokeRenderingSegment<D>::Pressure() const
{
    float value {};
    check_hresult(static_cast<const IInkStrokeRenderingSegment &>(static_cast<const D &>(*this))->get_Pressure(&value));
    return value;
}

template <typename D> float impl_IInkStrokeRenderingSegment<D>::TiltX() const
{
    float value {};
    check_hresult(static_cast<const IInkStrokeRenderingSegment &>(static_cast<const D &>(*this))->get_TiltX(&value));
    return value;
}

template <typename D> float impl_IInkStrokeRenderingSegment<D>::TiltY() const
{
    float value {};
    check_hresult(static_cast<const IInkStrokeRenderingSegment &>(static_cast<const D &>(*this))->get_TiltY(&value));
    return value;
}

template <typename D> float impl_IInkStrokeRenderingSegment<D>::Twist() const
{
    float value {};
    check_hresult(static_cast<const IInkStrokeRenderingSegment &>(static_cast<const D &>(*this))->get_Twist(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributes impl_IInkStroke<D>::DrawingAttributes() const
{
    Windows::UI::Input::Inking::InkDrawingAttributes value { nullptr };
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->get_DrawingAttributes(put(value)));
    return value;
}

template <typename D> void impl_IInkStroke<D>::DrawingAttributes(const Windows::UI::Input::Inking::InkDrawingAttributes & value) const
{
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->put_DrawingAttributes(get(value)));
}

template <typename D> Windows::Foundation::Rect impl_IInkStroke<D>::BoundingRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->get_BoundingRect(put(value)));
    return value;
}

template <typename D> bool impl_IInkStroke<D>::Selected() const
{
    bool value {};
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->get_Selected(&value));
    return value;
}

template <typename D> void impl_IInkStroke<D>::Selected(bool value) const
{
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->put_Selected(value));
}

template <typename D> bool impl_IInkStroke<D>::Recognized() const
{
    bool value {};
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->get_Recognized(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStrokeRenderingSegment> impl_IInkStroke<D>::GetRenderingSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStrokeRenderingSegment> renderingSegments;
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->abi_GetRenderingSegments(put(renderingSegments)));
    return renderingSegments;
}

template <typename D> Windows::UI::Input::Inking::InkStroke impl_IInkStroke<D>::Clone() const
{
    Windows::UI::Input::Inking::InkStroke clonedStroke { nullptr };
    check_hresult(static_cast<const IInkStroke &>(static_cast<const D &>(*this))->abi_Clone(put(clonedStroke)));
    return clonedStroke;
}

template <typename D> Windows::Foundation::Numerics::float3x2 impl_IInkStroke2<D>::PointTransform() const
{
    Windows::Foundation::Numerics::float3x2 value {};
    check_hresult(static_cast<const IInkStroke2 &>(static_cast<const D &>(*this))->get_PointTransform(put(value)));
    return value;
}

template <typename D> void impl_IInkStroke2<D>::PointTransform(const Windows::Foundation::Numerics::float3x2 & value) const
{
    check_hresult(static_cast<const IInkStroke2 &>(static_cast<const D &>(*this))->put_PointTransform(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkPoint> impl_IInkStroke2<D>::GetInkPoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkPoint> inkPoints;
    check_hresult(static_cast<const IInkStroke2 &>(static_cast<const D &>(*this))->abi_GetInkPoints(put(inkPoints)));
    return inkPoints;
}

template <typename D> void impl_IInkStrokeBuilder<D>::BeginStroke(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    check_hresult(static_cast<const IInkStrokeBuilder &>(static_cast<const D &>(*this))->abi_BeginStroke(get(pointerPoint)));
}

template <typename D> Windows::UI::Input::PointerPoint impl_IInkStrokeBuilder<D>::AppendToStroke(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    Windows::UI::Input::PointerPoint previousPointerPoint { nullptr };
    check_hresult(static_cast<const IInkStrokeBuilder &>(static_cast<const D &>(*this))->abi_AppendToStroke(get(pointerPoint), put(previousPointerPoint)));
    return previousPointerPoint;
}

template <typename D> Windows::UI::Input::Inking::InkStroke impl_IInkStrokeBuilder<D>::EndStroke(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    Windows::UI::Input::Inking::InkStroke stroke { nullptr };
    check_hresult(static_cast<const IInkStrokeBuilder &>(static_cast<const D &>(*this))->abi_EndStroke(get(pointerPoint), put(stroke)));
    return stroke;
}

template <typename D> Windows::UI::Input::Inking::InkStroke impl_IInkStrokeBuilder<D>::CreateStroke(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> & points) const
{
    Windows::UI::Input::Inking::InkStroke stroke { nullptr };
    check_hresult(static_cast<const IInkStrokeBuilder &>(static_cast<const D &>(*this))->abi_CreateStroke(get(points), put(stroke)));
    return stroke;
}

template <typename D> void impl_IInkStrokeBuilder<D>::SetDefaultDrawingAttributes(const Windows::UI::Input::Inking::InkDrawingAttributes & drawingAttributes) const
{
    check_hresult(static_cast<const IInkStrokeBuilder &>(static_cast<const D &>(*this))->abi_SetDefaultDrawingAttributes(get(drawingAttributes)));
}

template <typename D> Windows::UI::Input::Inking::InkStroke impl_IInkStrokeBuilder2<D>::CreateStrokeFromInkPoints(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkPoint> & inkPoints, const Windows::Foundation::Numerics::float3x2 & transform) const
{
    Windows::UI::Input::Inking::InkStroke result { nullptr };
    check_hresult(static_cast<const IInkStrokeBuilder2 &>(static_cast<const D &>(*this))->abi_CreateStrokeFromInkPoints(get(inkPoints), get(transform), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Rect impl_IInkRecognitionResult<D>::BoundingRect() const
{
    Windows::Foundation::Rect boundingRect {};
    check_hresult(static_cast<const IInkRecognitionResult &>(static_cast<const D &>(*this))->get_BoundingRect(put(boundingRect)));
    return boundingRect;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IInkRecognitionResult<D>::GetTextCandidates() const
{
    Windows::Foundation::Collections::IVectorView<hstring> textCandidates;
    check_hresult(static_cast<const IInkRecognitionResult &>(static_cast<const D &>(*this))->abi_GetTextCandidates(put(textCandidates)));
    return textCandidates;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> impl_IInkRecognitionResult<D>::GetStrokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> strokes;
    check_hresult(static_cast<const IInkRecognitionResult &>(static_cast<const D &>(*this))->abi_GetStrokes(put(strokes)));
    return strokes;
}

template <typename D> Windows::Foundation::Rect impl_IInkStrokeContainer<D>::BoundingRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->get_BoundingRect(put(value)));
    return value;
}

template <typename D> void impl_IInkStrokeContainer<D>::AddStroke(const Windows::UI::Input::Inking::InkStroke & stroke) const
{
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_AddStroke(get(stroke)));
}

template <typename D> Windows::Foundation::Rect impl_IInkStrokeContainer<D>::DeleteSelected() const
{
    Windows::Foundation::Rect invalidatedRect {};
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_DeleteSelected(put(invalidatedRect)));
    return invalidatedRect;
}

template <typename D> Windows::Foundation::Rect impl_IInkStrokeContainer<D>::MoveSelected(const Windows::Foundation::Point & translation) const
{
    Windows::Foundation::Rect invalidatedRectangle {};
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_MoveSelected(get(translation), put(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> Windows::Foundation::Rect impl_IInkStrokeContainer<D>::SelectWithPolyLine(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> & polyline) const
{
    Windows::Foundation::Rect invalidatedRectangle {};
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_SelectWithPolyLine(get(polyline), put(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> Windows::Foundation::Rect impl_IInkStrokeContainer<D>::SelectWithLine(const Windows::Foundation::Point & from, const Windows::Foundation::Point & to) const
{
    Windows::Foundation::Rect invalidatedRectangle {};
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_SelectWithLine(get(from), get(to), put(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> void impl_IInkStrokeContainer<D>::CopySelectedToClipboard() const
{
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_CopySelectedToClipboard());
}

template <typename D> Windows::Foundation::Rect impl_IInkStrokeContainer<D>::PasteFromClipboard(const Windows::Foundation::Point & position) const
{
    Windows::Foundation::Rect invalidatedRectangle {};
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_PasteFromClipboard(get(position), put(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> bool impl_IInkStrokeContainer<D>::CanPasteFromClipboard() const
{
    bool canPaste {};
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_CanPasteFromClipboard(&canPaste));
    return canPaste;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<uint64_t> impl_IInkStrokeContainer<D>::LoadAsync(const Windows::Storage::Streams::IInputStream & inputStream) const
{
    Windows::Foundation::IAsyncActionWithProgress<uint64_t> loadAction;
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_LoadAsync(get(inputStream), put(loadAction)));
    return loadAction;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> impl_IInkStrokeContainer<D>::SaveAsync(const Windows::Storage::Streams::IOutputStream & outputStream) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> outputStreamOperation;
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_SaveAsync(get(outputStream), put(outputStreamOperation)));
    return outputStreamOperation;
}

template <typename D> void impl_IInkStrokeContainer<D>::UpdateRecognitionResults(const Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> & recognitionResults) const
{
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_UpdateRecognitionResults(get(recognitionResults)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> impl_IInkStrokeContainer<D>::GetStrokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> strokeView;
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_GetStrokes(put(strokeView)));
    return strokeView;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> impl_IInkStrokeContainer<D>::GetRecognitionResults() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> recognitionResults;
    check_hresult(static_cast<const IInkStrokeContainer &>(static_cast<const D &>(*this))->abi_GetRecognitionResults(put(recognitionResults)));
    return recognitionResults;
}

template <typename D> void impl_IInkStrokeContainer2<D>::AddStrokes(const Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> & strokes) const
{
    check_hresult(static_cast<const IInkStrokeContainer2 &>(static_cast<const D &>(*this))->abi_AddStrokes(get(strokes)));
}

template <typename D> void impl_IInkStrokeContainer2<D>::Clear() const
{
    check_hresult(static_cast<const IInkStrokeContainer2 &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> hstring impl_IInkRecognizer<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IInkRecognizer &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IInkRecognizerContainer<D>::SetDefaultRecognizer(const Windows::UI::Input::Inking::InkRecognizer & recognizer) const
{
    check_hresult(static_cast<const IInkRecognizerContainer &>(static_cast<const D &>(*this))->abi_SetDefaultRecognizer(get(recognizer)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> impl_IInkRecognizerContainer<D>::RecognizeAsync(const Windows::UI::Input::Inking::InkStrokeContainer & strokeCollection, Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> recognitionResults;
    check_hresult(static_cast<const IInkRecognizerContainer &>(static_cast<const D &>(*this))->abi_RecognizeAsync(get(strokeCollection), recognitionTarget, put(recognitionResults)));
    return recognitionResults;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognizer> impl_IInkRecognizerContainer<D>::GetRecognizers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognizer> recognizerView;
    check_hresult(static_cast<const IInkRecognizerContainer &>(static_cast<const D &>(*this))->abi_GetRecognizers(put(recognizerView)));
    return recognizerView;
}

template <typename D> Windows::UI::Input::Inking::InkManipulationMode impl_IInkManager<D>::Mode() const
{
    Windows::UI::Input::Inking::InkManipulationMode value {};
    check_hresult(static_cast<const IInkManager &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_IInkManager<D>::Mode(Windows::UI::Input::Inking::InkManipulationMode value) const
{
    check_hresult(static_cast<const IInkManager &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> void impl_IInkManager<D>::ProcessPointerDown(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    check_hresult(static_cast<const IInkManager &>(static_cast<const D &>(*this))->abi_ProcessPointerDown(get(pointerPoint)));
}

template <typename D> Windows::IInspectable impl_IInkManager<D>::ProcessPointerUpdate(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    Windows::IInspectable updateInformation;
    check_hresult(static_cast<const IInkManager &>(static_cast<const D &>(*this))->abi_ProcessPointerUpdate(get(pointerPoint), put(updateInformation)));
    return updateInformation;
}

template <typename D> Windows::Foundation::Rect impl_IInkManager<D>::ProcessPointerUp(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    Windows::Foundation::Rect updateRectangle {};
    check_hresult(static_cast<const IInkManager &>(static_cast<const D &>(*this))->abi_ProcessPointerUp(get(pointerPoint), put(updateRectangle)));
    return updateRectangle;
}

template <typename D> void impl_IInkManager<D>::SetDefaultDrawingAttributes(const Windows::UI::Input::Inking::InkDrawingAttributes & drawingAttributes) const
{
    check_hresult(static_cast<const IInkManager &>(static_cast<const D &>(*this))->abi_SetDefaultDrawingAttributes(get(drawingAttributes)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> impl_IInkManager<D>::RecognizeAsync(Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> recognitionResults;
    check_hresult(static_cast<const IInkManager &>(static_cast<const D &>(*this))->abi_RecognizeAsync2(recognitionTarget, put(recognitionResults)));
    return recognitionResults;
}

inline InkDrawingAttributes::InkDrawingAttributes() :
    InkDrawingAttributes(activate_instance<InkDrawingAttributes>())
{}

inline Windows::UI::Input::Inking::InkDrawingAttributes InkDrawingAttributes::CreateForPencil()
{
    return get_activation_factory<InkDrawingAttributes, IInkDrawingAttributesStatics>().CreateForPencil();
}

inline InkManager::InkManager() :
    InkManager(activate_instance<InkManager>())
{}

inline InkPoint::InkPoint(const Windows::Foundation::Point & position, float pressure) :
    InkPoint(get_activation_factory<InkPoint, IInkPointFactory>().CreateInkPoint(position, pressure))
{}

inline InkPresenterRuler::InkPresenterRuler(const Windows::UI::Input::Inking::InkPresenter & inkPresenter) :
    InkPresenterRuler(get_activation_factory<InkPresenterRuler, IInkPresenterRulerFactory>().Create(inkPresenter))
{}

inline InkRecognizerContainer::InkRecognizerContainer() :
    InkRecognizerContainer(activate_instance<InkRecognizerContainer>())
{}

inline InkStrokeBuilder::InkStrokeBuilder() :
    InkStrokeBuilder(activate_instance<InkStrokeBuilder>())
{}

inline InkStrokeContainer::InkStrokeContainer() :
    InkStrokeContainer(activate_instance<InkStrokeContainer>())
{}

}

}
