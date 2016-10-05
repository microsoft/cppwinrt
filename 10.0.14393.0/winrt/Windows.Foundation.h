// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Foundation {

template <typename L> DeferralCompletedHandler::DeferralCompletedHandler(L lambda) :
    DeferralCompletedHandler(impl::make_delegate<impl_DeferralCompletedHandler<L>, DeferralCompletedHandler>(std::forward<L>(lambda)))
{}

template <typename F> DeferralCompletedHandler::DeferralCompletedHandler(F * function) :
    DeferralCompletedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DeferralCompletedHandler::DeferralCompletedHandler(O * object, M method) :
    DeferralCompletedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DeferralCompletedHandler::operator()() const
{
    check_hresult((*this)->abi_Invoke());
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Foundation::IClosable> : produce_base<D, Windows::Foundation::IClosable>
{
    HRESULT __stdcall abi_Close() noexcept override
    {
        try
        {
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IDeferral> : produce_base<D, Windows::Foundation::IDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IDeferralFactory> : produce_base<D, Windows::Foundation::IDeferralFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::DeferralCompletedHandler> handler, abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::DeferralCompletedHandler *>(&handler)));
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
struct produce<D, Windows::Foundation::IGetActivationFactory> : produce_base<D, Windows::Foundation::IGetActivationFactory>
{
    HRESULT __stdcall abi_GetActivationFactory(abi_arg_in<hstring> activatableClassId, abi_arg_out<Windows::IInspectable> factory) noexcept override
    {
        try
        {
            *factory = detach(this->shim().GetActivationFactory(*reinterpret_cast<const hstring *>(&activatableClassId)));
            return S_OK;
        }
        catch (...)
        {
            *factory = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IMemoryBuffer> : produce_base<D, Windows::Foundation::IMemoryBuffer>
{
    HRESULT __stdcall abi_CreateReference(abi_arg_out<Windows::Foundation::IMemoryBufferReference> reference) noexcept override
    {
        try
        {
            *reference = detach(this->shim().CreateReference());
            return S_OK;
        }
        catch (...)
        {
            *reference = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IMemoryBufferFactory> : produce_base<D, Windows::Foundation::IMemoryBufferFactory>
{
    HRESULT __stdcall abi_Create(uint32_t capacity, abi_arg_out<Windows::Foundation::IMemoryBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Create(capacity));
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
struct produce<D, Windows::Foundation::IMemoryBufferReference> : produce_base<D, Windows::Foundation::IMemoryBufferReference>
{
    HRESULT __stdcall get_Capacity(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Capacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().Closed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().Closed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IPropertyValue> : produce_base<D, Windows::Foundation::IPropertyValue>
{
    HRESULT __stdcall get_Type(Windows::Foundation::PropertyType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsNumericScalar(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsNumericScalar());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt8(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetUInt8());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt16(int16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt16(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetUInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt32(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt32(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetUInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt64(int64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt64(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetUInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSingle(float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSingle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDouble(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDouble());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetChar16(wchar_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetChar16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBoolean(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetBoolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGuid(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetGuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDateTime(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTimeSpan(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetTimeSpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPoint(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt8Array(uint32_t * __valueSize, abi_arg_out<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().GetUInt8Array(detach<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt16Array(uint32_t * __valueSize, abi_arg_out<int16_t> * value) noexcept override
    {
        try
        {
            this->shim().GetInt16Array(detach<int16_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt16Array(uint32_t * __valueSize, abi_arg_out<uint16_t> * value) noexcept override
    {
        try
        {
            this->shim().GetUInt16Array(detach<uint16_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt32Array(uint32_t * __valueSize, abi_arg_out<int32_t> * value) noexcept override
    {
        try
        {
            this->shim().GetInt32Array(detach<int32_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt32Array(uint32_t * __valueSize, abi_arg_out<uint32_t> * value) noexcept override
    {
        try
        {
            this->shim().GetUInt32Array(detach<uint32_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInt64Array(uint32_t * __valueSize, abi_arg_out<int64_t> * value) noexcept override
    {
        try
        {
            this->shim().GetInt64Array(detach<int64_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUInt64Array(uint32_t * __valueSize, abi_arg_out<uint64_t> * value) noexcept override
    {
        try
        {
            this->shim().GetUInt64Array(detach<uint64_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSingleArray(uint32_t * __valueSize, abi_arg_out<float> * value) noexcept override
    {
        try
        {
            this->shim().GetSingleArray(detach<float>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDoubleArray(uint32_t * __valueSize, abi_arg_out<double> * value) noexcept override
    {
        try
        {
            this->shim().GetDoubleArray(detach<double>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetChar16Array(uint32_t * __valueSize, abi_arg_out<wchar_t> * value) noexcept override
    {
        try
        {
            this->shim().GetChar16Array(detach<wchar_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanArray(uint32_t * __valueSize, abi_arg_out<bool> * value) noexcept override
    {
        try
        {
            this->shim().GetBooleanArray(detach<bool>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStringArray(uint32_t * __valueSize, abi_arg_out<hstring> * value) noexcept override
    {
        try
        {
            this->shim().GetStringArray(detach<hstring>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInspectableArray(uint32_t * __valueSize, abi_arg_out<Windows::IInspectable> * value) noexcept override
    {
        try
        {
            this->shim().GetInspectableArray(detach<Windows::IInspectable>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGuidArray(uint32_t * __valueSize, abi_arg_out<GUID> * value) noexcept override
    {
        try
        {
            this->shim().GetGuidArray(detach<GUID>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDateTimeArray(uint32_t * __valueSize, abi_arg_out<Windows::Foundation::DateTime> * value) noexcept override
    {
        try
        {
            this->shim().GetDateTimeArray(detach<Windows::Foundation::DateTime>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTimeSpanArray(uint32_t * __valueSize, abi_arg_out<Windows::Foundation::TimeSpan> * value) noexcept override
    {
        try
        {
            this->shim().GetTimeSpanArray(detach<Windows::Foundation::TimeSpan>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPointArray(uint32_t * __valueSize, abi_arg_out<Windows::Foundation::Point> * value) noexcept override
    {
        try
        {
            this->shim().GetPointArray(detach<Windows::Foundation::Point>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSizeArray(uint32_t * __valueSize, abi_arg_out<Windows::Foundation::Size> * value) noexcept override
    {
        try
        {
            this->shim().GetSizeArray(detach<Windows::Foundation::Size>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRectArray(uint32_t * __valueSize, abi_arg_out<Windows::Foundation::Rect> * value) noexcept override
    {
        try
        {
            this->shim().GetRectArray(detach<Windows::Foundation::Rect>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IPropertyValueStatics> : produce_base<D, Windows::Foundation::IPropertyValueStatics>
{
    HRESULT __stdcall abi_CreateEmpty(abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateEmpty());
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt8(uint8_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt8(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInt16(int16_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInt16(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt16(uint16_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt16(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInt32(int32_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInt32(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt32(uint32_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt32(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInt64(int64_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInt64(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt64(uint64_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt64(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSingle(float value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateSingle(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDouble(double value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateDouble(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateChar16(wchar_t value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateChar16(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBoolean(bool value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateBoolean(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateString(abi_arg_in<hstring> value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateString(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInspectable(abi_arg_in<Windows::IInspectable> value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInspectable(*reinterpret_cast<const Windows::IInspectable *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateGuid(GUID value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateGuid(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTime(abi_arg_in<Windows::Foundation::DateTime> value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateDateTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTimeSpan(abi_arg_in<Windows::Foundation::TimeSpan> value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateTimeSpan(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePoint(abi_arg_in<Windows::Foundation::Point> value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreatePoint(*reinterpret_cast<const Windows::Foundation::Point *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSize(abi_arg_in<Windows::Foundation::Size> value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateSize(*reinterpret_cast<const Windows::Foundation::Size *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateRect(abi_arg_in<Windows::Foundation::Rect> value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateRect(*reinterpret_cast<const Windows::Foundation::Rect *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt8Array(uint32_t __valueSize, abi_arg_in<uint8_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt8Array(array_ref<const uint8_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInt16Array(uint32_t __valueSize, abi_arg_in<int16_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInt16Array(array_ref<const int16_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt16Array(uint32_t __valueSize, abi_arg_in<uint16_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt16Array(array_ref<const uint16_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInt32Array(uint32_t __valueSize, abi_arg_in<int32_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInt32Array(array_ref<const int32_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt32Array(uint32_t __valueSize, abi_arg_in<uint32_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt32Array(array_ref<const uint32_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInt64Array(uint32_t __valueSize, abi_arg_in<int64_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInt64Array(array_ref<const int64_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUInt64Array(uint32_t __valueSize, abi_arg_in<uint64_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateUInt64Array(array_ref<const uint64_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSingleArray(uint32_t __valueSize, abi_arg_in<float> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateSingleArray(array_ref<const float>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDoubleArray(uint32_t __valueSize, abi_arg_in<double> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateDoubleArray(array_ref<const double>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateChar16Array(uint32_t __valueSize, abi_arg_in<wchar_t> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateChar16Array(array_ref<const wchar_t>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBooleanArray(uint32_t __valueSize, abi_arg_in<bool> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateBooleanArray(array_ref<const bool>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStringArray(uint32_t __valueSize, abi_arg_in<hstring> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateStringArray(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInspectableArray(uint32_t __valueSize, abi_arg_in<Windows::IInspectable> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateInspectableArray(*reinterpret_cast<const Windows::IInspectable *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateGuidArray(uint32_t __valueSize, abi_arg_in<GUID> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateGuidArray(array_ref<const GUID>(value, value + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDateTimeArray(uint32_t __valueSize, abi_arg_in<Windows::Foundation::DateTime> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateDateTimeArray(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateTimeSpanArray(uint32_t __valueSize, abi_arg_in<Windows::Foundation::TimeSpan> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateTimeSpanArray(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePointArray(uint32_t __valueSize, abi_arg_in<Windows::Foundation::Point> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreatePointArray(*reinterpret_cast<const Windows::Foundation::Point *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSizeArray(uint32_t __valueSize, abi_arg_in<Windows::Foundation::Size> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateSizeArray(*reinterpret_cast<const Windows::Foundation::Size *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateRectArray(uint32_t __valueSize, abi_arg_in<Windows::Foundation::Rect> * value, abi_arg_out<Windows::IInspectable> propertyValue) noexcept override
    {
        try
        {
            *propertyValue = detach(this->shim().CreateRectArray(*reinterpret_cast<const Windows::Foundation::Rect *>(&value)));
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
struct produce<D, Windows::Foundation::IStringable> : produce_base<D, Windows::Foundation::IStringable>
{
    HRESULT __stdcall abi_ToString(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ToString());
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
struct produce<D, Windows::Foundation::IUriEscapeStatics> : produce_base<D, Windows::Foundation::IUriEscapeStatics>
{
    HRESULT __stdcall abi_UnescapeComponent(abi_arg_in<hstring> toUnescape, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnescapeComponent(*reinterpret_cast<const hstring *>(&toUnescape)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EscapeComponent(abi_arg_in<hstring> toEscape, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EscapeComponent(*reinterpret_cast<const hstring *>(&toEscape)));
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
struct produce<D, Windows::Foundation::IUriRuntimeClass> : produce_base<D, Windows::Foundation::IUriRuntimeClass>
{
    HRESULT __stdcall get_AbsoluteUri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AbsoluteUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayUri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Domain(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Domain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extension(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Extension());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fragment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fragment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Host(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Host());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Password(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Password());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Query(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Query());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryParsed(abi_arg_out<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> ppWwwFormUrlDecoder) noexcept override
    {
        try
        {
            *ppWwwFormUrlDecoder = detach(this->shim().QueryParsed());
            return S_OK;
        }
        catch (...)
        {
            *ppWwwFormUrlDecoder = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawUri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RawUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SchemeName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SchemeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Port(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Port());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Suspicious(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Suspicious());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Equals(abi_arg_in<Windows::Foundation::IUriRuntimeClass> pUri, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Equals(*reinterpret_cast<const Windows::Foundation::Uri *>(&pUri)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CombineUri(abi_arg_in<hstring> relativeUri, abi_arg_out<Windows::Foundation::IUriRuntimeClass> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CombineUri(*reinterpret_cast<const hstring *>(&relativeUri)));
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
struct produce<D, Windows::Foundation::IUriRuntimeClassFactory> : produce_base<D, Windows::Foundation::IUriRuntimeClassFactory>
{
    HRESULT __stdcall abi_CreateUri(abi_arg_in<hstring> uri, abi_arg_out<Windows::Foundation::IUriRuntimeClass> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateUri(*reinterpret_cast<const hstring *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithRelativeUri(abi_arg_in<hstring> baseUri, abi_arg_in<hstring> relativeUri, abi_arg_out<Windows::Foundation::IUriRuntimeClass> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWithRelativeUri(*reinterpret_cast<const hstring *>(&baseUri), *reinterpret_cast<const hstring *>(&relativeUri)));
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
struct produce<D, Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri> : produce_base<D, Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>
{
    HRESULT __stdcall get_AbsoluteCanonicalUri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AbsoluteCanonicalUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayIri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayIri());
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
struct produce<D, Windows::Foundation::IWwwFormUrlDecoderEntry> : produce_base<D, Windows::Foundation::IWwwFormUrlDecoderEntry>
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

    HRESULT __stdcall get_Value(abi_arg_out<hstring> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> : produce_base<D, Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>
{
    HRESULT __stdcall abi_GetFirstValueByName(abi_arg_in<hstring> name, abi_arg_out<hstring> phstrValue) noexcept override
    {
        try
        {
            *phstrValue = detach(this->shim().GetFirstValueByName(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *phstrValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory> : produce_base<D, Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>
{
    HRESULT __stdcall abi_CreateWwwFormUrlDecoder(abi_arg_in<hstring> query, abi_arg_out<Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWwwFormUrlDecoder(*reinterpret_cast<const hstring *>(&query)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Foundation {

template <typename D> void impl_IClosable<D>::Close() const
{
    check_hresult(static_cast<const IClosable &>(static_cast<const D &>(*this))->abi_Close());
}

template <typename D> Windows::Foundation::PropertyType impl_IPropertyValue<D>::Type() const
{
    Windows::Foundation::PropertyType value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> bool impl_IPropertyValue<D>::IsNumericScalar() const
{
    bool value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->get_IsNumericScalar(&value));
    return value;
}

template <typename D> uint8_t impl_IPropertyValue<D>::GetUInt8() const
{
    uint8_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt8(&value));
    return value;
}

template <typename D> int16_t impl_IPropertyValue<D>::GetInt16() const
{
    int16_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetInt16(&value));
    return value;
}

template <typename D> uint16_t impl_IPropertyValue<D>::GetUInt16() const
{
    uint16_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt16(&value));
    return value;
}

template <typename D> int32_t impl_IPropertyValue<D>::GetInt32() const
{
    int32_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetInt32(&value));
    return value;
}

template <typename D> uint32_t impl_IPropertyValue<D>::GetUInt32() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt32(&value));
    return value;
}

template <typename D> int64_t impl_IPropertyValue<D>::GetInt64() const
{
    int64_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetInt64(&value));
    return value;
}

template <typename D> uint64_t impl_IPropertyValue<D>::GetUInt64() const
{
    uint64_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt64(&value));
    return value;
}

template <typename D> float impl_IPropertyValue<D>::GetSingle() const
{
    float value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetSingle(&value));
    return value;
}

template <typename D> double impl_IPropertyValue<D>::GetDouble() const
{
    double value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetDouble(&value));
    return value;
}

template <typename D> wchar_t impl_IPropertyValue<D>::GetChar16() const
{
    wchar_t value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetChar16(&value));
    return value;
}

template <typename D> bool impl_IPropertyValue<D>::GetBoolean() const
{
    bool value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetBoolean(&value));
    return value;
}

template <typename D> hstring impl_IPropertyValue<D>::GetString() const
{
    hstring value;
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetString(put(value)));
    return value;
}

template <typename D> GUID impl_IPropertyValue<D>::GetGuid() const
{
    GUID value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetGuid(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPropertyValue<D>::GetDateTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetDateTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPropertyValue<D>::GetTimeSpan() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetTimeSpan(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IPropertyValue<D>::GetPoint() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetPoint(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_IPropertyValue<D>::GetSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetSize(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IPropertyValue<D>::GetRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetRect(put(value)));
    return value;
}

template <typename D> void impl_IPropertyValue<D>::GetUInt8Array(com_array<uint8_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt8Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetInt16Array(com_array<int16_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetInt16Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetUInt16Array(com_array<uint16_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt16Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetInt32Array(com_array<int32_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetInt32Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetUInt32Array(com_array<uint32_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt32Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetInt64Array(com_array<int64_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetInt64Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetUInt64Array(com_array<uint64_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetUInt64Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetSingleArray(com_array<float> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetSingleArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetDoubleArray(com_array<double> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetDoubleArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetChar16Array(com_array<wchar_t> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetChar16Array(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetBooleanArray(com_array<bool> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetBooleanArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetStringArray(com_array<hstring> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetStringArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetInspectableArray(com_array<Windows::IInspectable> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetInspectableArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetGuidArray(com_array<GUID> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetGuidArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetDateTimeArray(com_array<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetDateTimeArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetTimeSpanArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetPointArray(com_array<Windows::Foundation::Point> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetPointArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetSizeArray(com_array<Windows::Foundation::Size> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetSizeArray(put_size(value), put(value)));
}

template <typename D> void impl_IPropertyValue<D>::GetRectArray(com_array<Windows::Foundation::Rect> & value) const
{
    check_hresult(static_cast<const IPropertyValue &>(static_cast<const D &>(*this))->abi_GetRectArray(put_size(value), put(value)));
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateEmpty() const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateEmpty(put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt8(uint8_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt8(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInt16(int16_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInt16(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt16(uint16_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt16(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInt32(int32_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInt32(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt32(uint32_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt32(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInt64(int64_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInt64(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt64(uint64_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt64(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateSingle(float value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateSingle(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateDouble(double value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateDouble(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateChar16(wchar_t value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateChar16(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateBoolean(bool value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateBoolean(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateString(hstring_ref value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateString(get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInspectable(const Windows::IInspectable & value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInspectable(get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateGuid(GUID value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateGuid(value, put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateDateTime(const Windows::Foundation::DateTime & value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateDateTime(get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateTimeSpan(const Windows::Foundation::TimeSpan & value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateTimeSpan(get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreatePoint(const Windows::Foundation::Point & value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreatePoint(get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateSize(const Windows::Foundation::Size & value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateSize(get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateRect(const Windows::Foundation::Rect & value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateRect(get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt8Array(array_ref<const uint8_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt8Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInt16Array(array_ref<const int16_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInt16Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt16Array(array_ref<const uint16_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt16Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInt32Array(array_ref<const int32_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInt32Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt32Array(array_ref<const uint32_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt32Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInt64Array(array_ref<const int64_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInt64Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateUInt64Array(array_ref<const uint64_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateUInt64Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateSingleArray(array_ref<const float> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateSingleArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateDoubleArray(array_ref<const double> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateDoubleArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateChar16Array(array_ref<const wchar_t> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateChar16Array(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateBooleanArray(array_ref<const bool> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateBooleanArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateStringArray(array_ref<const hstring> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateStringArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateInspectableArray(array_ref<const Windows::IInspectable> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateInspectableArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateGuidArray(array_ref<const GUID> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateGuidArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateDateTimeArray(array_ref<const Windows::Foundation::DateTime> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateDateTimeArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateTimeSpanArray(array_ref<const Windows::Foundation::TimeSpan> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateTimeSpanArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreatePointArray(array_ref<const Windows::Foundation::Point> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreatePointArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateSizeArray(array_ref<const Windows::Foundation::Size> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateSizeArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::IInspectable impl_IPropertyValueStatics<D>::CreateRectArray(array_ref<const Windows::Foundation::Rect> value) const
{
    Windows::IInspectable propertyValue;
    check_hresult(static_cast<const IPropertyValueStatics &>(static_cast<const D &>(*this))->abi_CreateRectArray(value.size(), get(value), put(propertyValue)));
    return propertyValue;
}

template <typename D> hstring impl_IStringable<D>::ToString() const
{
    hstring value;
    check_hresult(static_cast<const IStringable &>(static_cast<const D &>(*this))->abi_ToString(put(value)));
    return value;
}

template <typename D> void impl_IDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::Foundation::Deferral impl_IDeferralFactory<D>::Create(const Windows::Foundation::DeferralCompletedHandler & handler) const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(static_cast<const IDeferralFactory &>(static_cast<const D &>(*this))->abi_Create(get(handler), put(result)));
    return result;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::AbsoluteUri() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_AbsoluteUri(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::DisplayUri() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_DisplayUri(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::Domain() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Domain(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::Extension() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Extension(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::Fragment() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Fragment(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::Host() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Host(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::Password() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Password(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::Path() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::Query() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Query(put(value)));
    return value;
}

template <typename D> Windows::Foundation::WwwFormUrlDecoder impl_IUriRuntimeClass<D>::QueryParsed() const
{
    Windows::Foundation::WwwFormUrlDecoder ppWwwFormUrlDecoder { nullptr };
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_QueryParsed(put(ppWwwFormUrlDecoder)));
    return ppWwwFormUrlDecoder;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::RawUri() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_RawUri(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::SchemeName() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_SchemeName(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClass<D>::UserName() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_UserName(put(value)));
    return value;
}

template <typename D> int32_t impl_IUriRuntimeClass<D>::Port() const
{
    int32_t value {};
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Port(&value));
    return value;
}

template <typename D> bool impl_IUriRuntimeClass<D>::Suspicious() const
{
    bool value {};
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->get_Suspicious(&value));
    return value;
}

template <typename D> bool impl_IUriRuntimeClass<D>::Equals(const Windows::Foundation::Uri & pUri) const
{
    bool value {};
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->abi_Equals(get(pUri), &value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IUriRuntimeClass<D>::CombineUri(hstring_ref relativeUri) const
{
    Windows::Foundation::Uri instance { nullptr };
    check_hresult(static_cast<const IUriRuntimeClass &>(static_cast<const D &>(*this))->abi_CombineUri(get(relativeUri), put(instance)));
    return instance;
}

template <typename D> hstring impl_IUriRuntimeClassWithAbsoluteCanonicalUri<D>::AbsoluteCanonicalUri() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClassWithAbsoluteCanonicalUri &>(static_cast<const D &>(*this))->get_AbsoluteCanonicalUri(put(value)));
    return value;
}

template <typename D> hstring impl_IUriRuntimeClassWithAbsoluteCanonicalUri<D>::DisplayIri() const
{
    hstring value;
    check_hresult(static_cast<const IUriRuntimeClassWithAbsoluteCanonicalUri &>(static_cast<const D &>(*this))->get_DisplayIri(put(value)));
    return value;
}

template <typename D> hstring impl_IUriEscapeStatics<D>::UnescapeComponent(hstring_ref toUnescape) const
{
    hstring value;
    check_hresult(static_cast<const IUriEscapeStatics &>(static_cast<const D &>(*this))->abi_UnescapeComponent(get(toUnescape), put(value)));
    return value;
}

template <typename D> hstring impl_IUriEscapeStatics<D>::EscapeComponent(hstring_ref toEscape) const
{
    hstring value;
    check_hresult(static_cast<const IUriEscapeStatics &>(static_cast<const D &>(*this))->abi_EscapeComponent(get(toEscape), put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IUriRuntimeClassFactory<D>::CreateUri(hstring_ref uri) const
{
    Windows::Foundation::Uri instance { nullptr };
    check_hresult(static_cast<const IUriRuntimeClassFactory &>(static_cast<const D &>(*this))->abi_CreateUri(get(uri), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Uri impl_IUriRuntimeClassFactory<D>::CreateWithRelativeUri(hstring_ref baseUri, hstring_ref relativeUri) const
{
    Windows::Foundation::Uri instance { nullptr };
    check_hresult(static_cast<const IUriRuntimeClassFactory &>(static_cast<const D &>(*this))->abi_CreateWithRelativeUri(get(baseUri), get(relativeUri), put(instance)));
    return instance;
}

template <typename D> hstring impl_IWwwFormUrlDecoderEntry<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IWwwFormUrlDecoderEntry &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IWwwFormUrlDecoderEntry<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IWwwFormUrlDecoderEntry &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> hstring impl_IWwwFormUrlDecoderRuntimeClass<D>::GetFirstValueByName(hstring_ref name) const
{
    hstring phstrValue;
    check_hresult(static_cast<const IWwwFormUrlDecoderRuntimeClass &>(static_cast<const D &>(*this))->abi_GetFirstValueByName(get(name), put(phstrValue)));
    return phstrValue;
}

template <typename D> Windows::Foundation::WwwFormUrlDecoder impl_IWwwFormUrlDecoderRuntimeClassFactory<D>::CreateWwwFormUrlDecoder(hstring_ref query) const
{
    Windows::Foundation::WwwFormUrlDecoder instance { nullptr };
    check_hresult(static_cast<const IWwwFormUrlDecoderRuntimeClassFactory &>(static_cast<const D &>(*this))->abi_CreateWwwFormUrlDecoder(get(query), put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_IGetActivationFactory<D>::GetActivationFactory(hstring_ref activatableClassId) const
{
    Windows::IInspectable factory;
    check_hresult(static_cast<const IGetActivationFactory &>(static_cast<const D &>(*this))->abi_GetActivationFactory(get(activatableClassId), put(factory)));
    return factory;
}

template <typename D> uint32_t impl_IMemoryBufferReference<D>::Capacity() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMemoryBufferReference &>(static_cast<const D &>(*this))->get_Capacity(&value));
    return value;
}

template <typename D> event_token impl_IMemoryBufferReference<D>::Closed(const Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const IMemoryBufferReference &>(static_cast<const D &>(*this))->add_Closed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<IMemoryBufferReference> impl_IMemoryBufferReference<D>::Closed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMemoryBufferReference>(this, &ABI::Windows::Foundation::IMemoryBufferReference::remove_Closed, Closed(handler));
}

template <typename D> void impl_IMemoryBufferReference<D>::Closed(event_token cookie) const
{
    check_hresult(static_cast<const IMemoryBufferReference &>(static_cast<const D &>(*this))->remove_Closed(cookie));
}

template <typename D> Windows::Foundation::IMemoryBufferReference impl_IMemoryBuffer<D>::CreateReference() const
{
    Windows::Foundation::IMemoryBufferReference reference;
    check_hresult(static_cast<const IMemoryBuffer &>(static_cast<const D &>(*this))->abi_CreateReference(put(reference)));
    return reference;
}

template <typename D> Windows::Foundation::MemoryBuffer impl_IMemoryBufferFactory<D>::Create(uint32_t capacity) const
{
    Windows::Foundation::MemoryBuffer value { nullptr };
    check_hresult(static_cast<const IMemoryBufferFactory &>(static_cast<const D &>(*this))->abi_Create(capacity, put(value)));
    return value;
}

inline Deferral::Deferral(const Windows::Foundation::DeferralCompletedHandler & handler) :
    Deferral(get_activation_factory<Deferral, IDeferralFactory>().Create(handler))
{}

inline MemoryBuffer::MemoryBuffer(uint32_t capacity) :
    MemoryBuffer(get_activation_factory<MemoryBuffer, IMemoryBufferFactory>().Create(capacity))
{}

inline Windows::IInspectable PropertyValue::CreateEmpty()
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateEmpty();
}

inline Windows::IInspectable PropertyValue::CreateUInt8(uint8_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt8(value);
}

inline Windows::IInspectable PropertyValue::CreateInt16(int16_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInt16(value);
}

inline Windows::IInspectable PropertyValue::CreateUInt16(uint16_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt16(value);
}

inline Windows::IInspectable PropertyValue::CreateInt32(int32_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInt32(value);
}

inline Windows::IInspectable PropertyValue::CreateUInt32(uint32_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt32(value);
}

inline Windows::IInspectable PropertyValue::CreateInt64(int64_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInt64(value);
}

inline Windows::IInspectable PropertyValue::CreateUInt64(uint64_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt64(value);
}

inline Windows::IInspectable PropertyValue::CreateSingle(float value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateSingle(value);
}

inline Windows::IInspectable PropertyValue::CreateDouble(double value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateDouble(value);
}

inline Windows::IInspectable PropertyValue::CreateChar16(wchar_t value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateChar16(value);
}

inline Windows::IInspectable PropertyValue::CreateBoolean(bool value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateBoolean(value);
}

inline Windows::IInspectable PropertyValue::CreateString(hstring_ref value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateString(value);
}

inline Windows::IInspectable PropertyValue::CreateInspectable(const Windows::IInspectable & value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInspectable(value);
}

inline Windows::IInspectable PropertyValue::CreateGuid(GUID value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateGuid(value);
}

inline Windows::IInspectable PropertyValue::CreateDateTime(const Windows::Foundation::DateTime & value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateDateTime(value);
}

inline Windows::IInspectable PropertyValue::CreateTimeSpan(const Windows::Foundation::TimeSpan & value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateTimeSpan(value);
}

inline Windows::IInspectable PropertyValue::CreatePoint(const Windows::Foundation::Point & value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreatePoint(value);
}

inline Windows::IInspectable PropertyValue::CreateSize(const Windows::Foundation::Size & value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateSize(value);
}

inline Windows::IInspectable PropertyValue::CreateRect(const Windows::Foundation::Rect & value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateRect(value);
}

inline Windows::IInspectable PropertyValue::CreateUInt8Array(array_ref<const uint8_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt8Array(value);
}

inline Windows::IInspectable PropertyValue::CreateInt16Array(array_ref<const int16_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInt16Array(value);
}

inline Windows::IInspectable PropertyValue::CreateUInt16Array(array_ref<const uint16_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt16Array(value);
}

inline Windows::IInspectable PropertyValue::CreateInt32Array(array_ref<const int32_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInt32Array(value);
}

inline Windows::IInspectable PropertyValue::CreateUInt32Array(array_ref<const uint32_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt32Array(value);
}

inline Windows::IInspectable PropertyValue::CreateInt64Array(array_ref<const int64_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInt64Array(value);
}

inline Windows::IInspectable PropertyValue::CreateUInt64Array(array_ref<const uint64_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateUInt64Array(value);
}

inline Windows::IInspectable PropertyValue::CreateSingleArray(array_ref<const float> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateSingleArray(value);
}

inline Windows::IInspectable PropertyValue::CreateDoubleArray(array_ref<const double> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateDoubleArray(value);
}

inline Windows::IInspectable PropertyValue::CreateChar16Array(array_ref<const wchar_t> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateChar16Array(value);
}

inline Windows::IInspectable PropertyValue::CreateBooleanArray(array_ref<const bool> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateBooleanArray(value);
}

inline Windows::IInspectable PropertyValue::CreateStringArray(array_ref<const hstring> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateStringArray(value);
}

inline Windows::IInspectable PropertyValue::CreateInspectableArray(array_ref<const Windows::IInspectable> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateInspectableArray(value);
}

inline Windows::IInspectable PropertyValue::CreateGuidArray(array_ref<const GUID> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateGuidArray(value);
}

inline Windows::IInspectable PropertyValue::CreateDateTimeArray(array_ref<const Windows::Foundation::DateTime> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateDateTimeArray(value);
}

inline Windows::IInspectable PropertyValue::CreateTimeSpanArray(array_ref<const Windows::Foundation::TimeSpan> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateTimeSpanArray(value);
}

inline Windows::IInspectable PropertyValue::CreatePointArray(array_ref<const Windows::Foundation::Point> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreatePointArray(value);
}

inline Windows::IInspectable PropertyValue::CreateSizeArray(array_ref<const Windows::Foundation::Size> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateSizeArray(value);
}

inline Windows::IInspectable PropertyValue::CreateRectArray(array_ref<const Windows::Foundation::Rect> value)
{
    return get_activation_factory<PropertyValue, IPropertyValueStatics>().CreateRectArray(value);
}

inline Uri::Uri(hstring_ref uri) :
    Uri(get_activation_factory<Uri, IUriRuntimeClassFactory>().CreateUri(uri))
{}

inline Uri::Uri(hstring_ref baseUri, hstring_ref relativeUri) :
    Uri(get_activation_factory<Uri, IUriRuntimeClassFactory>().CreateWithRelativeUri(baseUri, relativeUri))
{}

inline hstring Uri::UnescapeComponent(hstring_ref toUnescape)
{
    return get_activation_factory<Uri, IUriEscapeStatics>().UnescapeComponent(toUnescape);
}

inline hstring Uri::EscapeComponent(hstring_ref toEscape)
{
    return get_activation_factory<Uri, IUriEscapeStatics>().EscapeComponent(toEscape);
}

inline WwwFormUrlDecoder::WwwFormUrlDecoder(hstring_ref query) :
    WwwFormUrlDecoder(get_activation_factory<WwwFormUrlDecoder, IWwwFormUrlDecoderRuntimeClassFactory>().CreateWwwFormUrlDecoder(query))
{}

}

}
