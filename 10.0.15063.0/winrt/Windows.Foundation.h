// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.2.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Foundation_IClosable<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IClosable)->Close());
}

template <typename D> void consume_Windows_Foundation_IDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IDeferral)->Complete());
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Foundation_IDeferralFactory<D>::Create(Windows::Foundation::DeferralCompletedHandler const& handler) const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IDeferralFactory)->Create(get_abi(handler), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IGetActivationFactory<D>::GetActivationFactory(param::hstring const& activatableClassId) const
{
    Windows::Foundation::IInspectable factory{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IGetActivationFactory)->GetActivationFactory(get_abi(activatableClassId), put_abi(factory)));
    return factory;
}

template <typename D> Windows::Foundation::IMemoryBufferReference consume_Windows_Foundation_IMemoryBuffer<D>::CreateReference() const
{
    Windows::Foundation::IMemoryBufferReference reference{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IMemoryBuffer)->CreateReference(put_abi(reference)));
    return reference;
}

template <typename D> Windows::Foundation::MemoryBuffer consume_Windows_Foundation_IMemoryBufferFactory<D>::Create(uint32_t capacity) const
{
    Windows::Foundation::MemoryBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IMemoryBufferFactory)->Create(capacity, put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Foundation_IMemoryBufferReference<D>::Capacity() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IMemoryBufferReference)->get_Capacity(&value));
    return value;
}

template <typename D> event_token consume_Windows_Foundation_IMemoryBufferReference<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IMemoryBufferReference)->add_Closed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Foundation::IMemoryBufferReference> consume_Windows_Foundation_IMemoryBufferReference<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Foundation::IMemoryBufferReference>(this, &abi_t<Windows::Foundation::IMemoryBufferReference>::remove_Closed, Closed(handler));
}

template <typename D> void consume_Windows_Foundation_IMemoryBufferReference<D>::Closed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IMemoryBufferReference)->remove_Closed(get_abi(cookie)));
}

template <typename D> Windows::Foundation::PropertyType consume_Windows_Foundation_IPropertyValue<D>::Type() const
{
    Windows::Foundation::PropertyType value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->get_Type(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Foundation_IPropertyValue<D>::IsNumericScalar() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->get_IsNumericScalar(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Foundation_IPropertyValue<D>::GetUInt8() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt8(&value));
    return value;
}

template <typename D> int16_t consume_Windows_Foundation_IPropertyValue<D>::GetInt16() const
{
    int16_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetInt16(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Foundation_IPropertyValue<D>::GetUInt16() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt16(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Foundation_IPropertyValue<D>::GetInt32() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetInt32(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Foundation_IPropertyValue<D>::GetUInt32() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt32(&value));
    return value;
}

template <typename D> int64_t consume_Windows_Foundation_IPropertyValue<D>::GetInt64() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetInt64(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Foundation_IPropertyValue<D>::GetUInt64() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt64(&value));
    return value;
}

template <typename D> float consume_Windows_Foundation_IPropertyValue<D>::GetSingle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetSingle(&value));
    return value;
}

template <typename D> double consume_Windows_Foundation_IPropertyValue<D>::GetDouble() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetDouble(&value));
    return value;
}

template <typename D> char16_t consume_Windows_Foundation_IPropertyValue<D>::GetChar16() const
{
    char16_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetChar16(&value));
    return value;
}

template <typename D> bool consume_Windows_Foundation_IPropertyValue<D>::GetBoolean() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetBoolean(&value));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IPropertyValue<D>::GetString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetString(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Foundation_IPropertyValue<D>::GetGuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetGuid(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Foundation_IPropertyValue<D>::GetDateTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetDateTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Foundation_IPropertyValue<D>::GetTimeSpan() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetTimeSpan(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Foundation_IPropertyValue<D>::GetPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetPoint(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Foundation_IPropertyValue<D>::GetSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Foundation_IPropertyValue<D>::GetRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetUInt8Array(com_array<uint8_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt8Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetInt16Array(com_array<int16_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetInt16Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetUInt16Array(com_array<uint16_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt16Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetInt32Array(com_array<int32_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetInt32Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetUInt32Array(com_array<uint32_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt32Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetInt64Array(com_array<int64_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetInt64Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetUInt64Array(com_array<uint64_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetUInt64Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetSingleArray(com_array<float>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetSingleArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetDoubleArray(com_array<double>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetDoubleArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetChar16Array(com_array<char16_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetChar16Array(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetBooleanArray(com_array<bool>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetBooleanArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetStringArray(com_array<hstring>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetStringArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetInspectableArray(com_array<Windows::Foundation::IInspectable>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetInspectableArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetGuidArray(com_array<GUID>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetGuidArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetDateTimeArray(com_array<Windows::Foundation::DateTime>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetDateTimeArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetTimeSpanArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetPointArray(com_array<Windows::Foundation::Point>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetPointArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetSizeArray(com_array<Windows::Foundation::Size>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetSizeArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Foundation_IPropertyValue<D>::GetRectArray(com_array<Windows::Foundation::Rect>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValue)->GetRectArray(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateEmpty() const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateEmpty(put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt8(uint8_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt8(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInt16(int16_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInt16(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt16(uint16_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt16(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInt32(int32_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInt32(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt32(uint32_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt32(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInt64(int64_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInt64(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt64(uint64_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt64(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateSingle(float value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateSingle(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateDouble(double value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateDouble(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateChar16(char16_t value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateChar16(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateBoolean(bool value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateBoolean(value, put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateString(param::hstring const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateString(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInspectable(Windows::Foundation::IInspectable const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInspectable(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateGuid(GUID const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateGuid(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateDateTime(Windows::Foundation::DateTime const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateDateTime(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateTimeSpan(Windows::Foundation::TimeSpan const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateTimeSpan(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreatePoint(Windows::Foundation::Point const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreatePoint(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateSize(Windows::Foundation::Size const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateSize(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateRect(Windows::Foundation::Rect const& value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateRect(get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt8Array(array_view<uint8_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt8Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInt16Array(array_view<int16_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInt16Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt16Array(array_view<uint16_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt16Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInt32Array(array_view<int32_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInt32Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt32Array(array_view<uint32_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt32Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInt64Array(array_view<int64_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInt64Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateUInt64Array(array_view<uint64_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateUInt64Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateSingleArray(array_view<float const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateSingleArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateDoubleArray(array_view<double const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateDoubleArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateChar16Array(array_view<char16_t const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateChar16Array(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateBooleanArray(array_view<bool const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateBooleanArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateStringArray(array_view<hstring const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateStringArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateInspectableArray(array_view<Windows::Foundation::IInspectable const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateInspectableArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateGuidArray(array_view<GUID const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateGuidArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateDateTimeArray(array_view<Windows::Foundation::DateTime const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateDateTimeArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateTimeSpanArray(array_view<Windows::Foundation::TimeSpan const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateTimeSpanArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreatePointArray(array_view<Windows::Foundation::Point const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreatePointArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateSizeArray(array_view<Windows::Foundation::Size const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateSizeArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Foundation_IPropertyValueStatics<D>::CreateRectArray(array_view<Windows::Foundation::Rect const> value) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IPropertyValueStatics)->CreateRectArray(value.size(), get_abi(value), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> hstring consume_Windows_Foundation_IStringable<D>::ToString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IStringable)->ToString(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriEscapeStatics<D>::UnescapeComponent(param::hstring const& toUnescape) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriEscapeStatics)->UnescapeComponent(get_abi(toUnescape), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriEscapeStatics<D>::EscapeComponent(param::hstring const& toEscape) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriEscapeStatics)->EscapeComponent(get_abi(toEscape), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::AbsoluteUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_AbsoluteUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::DisplayUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_DisplayUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::Domain() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Domain(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::Extension() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Extension(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::Fragment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Fragment(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::Host() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Host(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::Password() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Password(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Path(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::Query() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Query(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::WwwFormUrlDecoder consume_Windows_Foundation_IUriRuntimeClass<D>::QueryParsed() const
{
    Windows::Foundation::WwwFormUrlDecoder ppWwwFormUrlDecoder{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_QueryParsed(put_abi(ppWwwFormUrlDecoder)));
    return ppWwwFormUrlDecoder;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::RawUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_RawUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::SchemeName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_SchemeName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClass<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Foundation_IUriRuntimeClass<D>::Port() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Port(&value));
    return value;
}

template <typename D> bool consume_Windows_Foundation_IUriRuntimeClass<D>::Suspicious() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->get_Suspicious(&value));
    return value;
}

template <typename D> bool consume_Windows_Foundation_IUriRuntimeClass<D>::Equals(Windows::Foundation::Uri const& pUri) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->Equals(get_abi(pUri), &value));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Foundation_IUriRuntimeClass<D>::CombineUri(param::hstring const& relativeUri) const
{
    Windows::Foundation::Uri instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClass)->CombineUri(get_abi(relativeUri), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Foundation_IUriRuntimeClassFactory<D>::CreateUri(param::hstring const& uri) const
{
    Windows::Foundation::Uri instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClassFactory)->CreateUri(get_abi(uri), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Foundation_IUriRuntimeClassFactory<D>::CreateWithRelativeUri(param::hstring const& baseUri, param::hstring const& relativeUri) const
{
    Windows::Foundation::Uri instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClassFactory)->CreateWithRelativeUri(get_abi(baseUri), get_abi(relativeUri), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClassWithAbsoluteCanonicalUri<D>::AbsoluteCanonicalUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri)->get_AbsoluteCanonicalUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IUriRuntimeClassWithAbsoluteCanonicalUri<D>::DisplayIri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri)->get_DisplayIri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IWwwFormUrlDecoderEntry<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IWwwFormUrlDecoderEntry)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IWwwFormUrlDecoderEntry<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IWwwFormUrlDecoderEntry)->get_Value(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClass<D>::GetFirstValueByName(param::hstring const& name) const
{
    hstring phstrValue{};
    check_hresult(WINRT_SHIM(Windows::Foundation::IWwwFormUrlDecoderRuntimeClass)->GetFirstValueByName(get_abi(name), put_abi(phstrValue)));
    return phstrValue;
}

template <typename D> Windows::Foundation::WwwFormUrlDecoder consume_Windows_Foundation_IWwwFormUrlDecoderRuntimeClassFactory<D>::CreateWwwFormUrlDecoder(param::hstring const& query) const
{
    Windows::Foundation::WwwFormUrlDecoder instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory)->CreateWwwFormUrlDecoder(get_abi(query), put_abi(instance)));
    return instance;
}

template <> struct delegate<Windows::Foundation::DeferralCompletedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Foundation::DeferralCompletedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Foundation::DeferralCompletedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke() noexcept final
        {
            try
            {
                (*this)();
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
struct produce<D, Windows::Foundation::IClosable> : produce_base<D, Windows::Foundation::IClosable>
{
    HRESULT __stdcall Close() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall Create(::IUnknown* handler, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::DeferralCompletedHandler const*>(&handler)));
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
    HRESULT __stdcall GetActivationFactory(HSTRING activatableClassId, ::IUnknown** factory) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *factory = detach_abi(this->shim().GetActivationFactory(*reinterpret_cast<hstring const*>(&activatableClassId)));
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
    HRESULT __stdcall CreateReference(::IUnknown** reference) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *reference = detach_abi(this->shim().CreateReference());
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
    HRESULT __stdcall Create(uint32_t capacity, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(capacity));
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
    HRESULT __stdcall get_Capacity(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Capacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IMemoryBufferReference, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&cookie));
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
    HRESULT __stdcall get_Type(abi_t<Windows::Foundation::PropertyType>* value) noexcept override
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

    HRESULT __stdcall get_IsNumericScalar(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsNumericScalar());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt8(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetUInt8());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInt16(int16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt16(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetUInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInt32(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt32(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetUInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInt64(int64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt64(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetUInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSingle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSingle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDouble(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDouble());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChar16(char16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetChar16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBoolean(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetBoolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetString(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGuid(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetGuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDateTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTimeSpan(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTimeSpan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPoint(abi_t<Windows::Foundation::Point>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt8Array(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetUInt8Array(detach_abi<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInt16Array(uint32_t* __valueSize, int16_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetInt16Array(detach_abi<int16_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt16Array(uint32_t* __valueSize, uint16_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetUInt16Array(detach_abi<uint16_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInt32Array(uint32_t* __valueSize, int32_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetInt32Array(detach_abi<int32_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt32Array(uint32_t* __valueSize, uint32_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetUInt32Array(detach_abi<uint32_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInt64Array(uint32_t* __valueSize, int64_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetInt64Array(detach_abi<int64_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUInt64Array(uint32_t* __valueSize, uint64_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetUInt64Array(detach_abi<uint64_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSingleArray(uint32_t* __valueSize, float** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetSingleArray(detach_abi<float>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDoubleArray(uint32_t* __valueSize, double** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetDoubleArray(detach_abi<double>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChar16Array(uint32_t* __valueSize, char16_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetChar16Array(detach_abi<char16_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanArray(uint32_t* __valueSize, bool** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetBooleanArray(detach_abi<bool>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStringArray(uint32_t* __valueSize, HSTRING** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetStringArray(detach_abi<hstring>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetInspectableArray(uint32_t* __valueSize, ::IUnknown*** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetInspectableArray(detach_abi<Windows::Foundation::IInspectable>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGuidArray(uint32_t* __valueSize, abi_t<GUID>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetGuidArray(detach_abi<GUID>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDateTimeArray(uint32_t* __valueSize, abi_t<Windows::Foundation::DateTime>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetDateTimeArray(detach_abi<Windows::Foundation::DateTime>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTimeSpanArray(uint32_t* __valueSize, abi_t<Windows::Foundation::TimeSpan>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetTimeSpanArray(detach_abi<Windows::Foundation::TimeSpan>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPointArray(uint32_t* __valueSize, abi_t<Windows::Foundation::Point>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetPointArray(detach_abi<Windows::Foundation::Point>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSizeArray(uint32_t* __valueSize, abi_t<Windows::Foundation::Size>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetSizeArray(detach_abi<Windows::Foundation::Size>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRectArray(uint32_t* __valueSize, abi_t<Windows::Foundation::Rect>** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetRectArray(detach_abi<Windows::Foundation::Rect>(__valueSize, value));
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
    HRESULT __stdcall CreateEmpty(::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateEmpty());
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt8(uint8_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt8(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInt16(int16_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInt16(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt16(uint16_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt16(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInt32(int32_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInt32(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt32(uint32_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt32(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInt64(int64_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInt64(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt64(uint64_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt64(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSingle(float value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateSingle(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDouble(double value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateDouble(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateChar16(char16_t value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateChar16(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBoolean(bool value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateBoolean(value));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateString(HSTRING value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateString(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInspectable(::IUnknown* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInspectable(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateGuid(abi_t<GUID> value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateGuid(*reinterpret_cast<GUID const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDateTime(abi_t<Windows::Foundation::DateTime> value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateDateTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTimeSpan(abi_t<Windows::Foundation::TimeSpan> value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateTimeSpan(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePoint(abi_t<Windows::Foundation::Point> value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreatePoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSize(abi_t<Windows::Foundation::Size> value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRect(abi_t<Windows::Foundation::Rect> value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateRect(*reinterpret_cast<Windows::Foundation::Rect const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt8Array(uint32_t __valueSize, uint8_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt8Array(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInt16Array(uint32_t __valueSize, int16_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInt16Array(array_view<int16_t const>(reinterpret_cast<int16_t const *>(value), reinterpret_cast<int16_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt16Array(uint32_t __valueSize, uint16_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt16Array(array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(value), reinterpret_cast<uint16_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInt32Array(uint32_t __valueSize, int32_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInt32Array(array_view<int32_t const>(reinterpret_cast<int32_t const *>(value), reinterpret_cast<int32_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt32Array(uint32_t __valueSize, uint32_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt32Array(array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(value), reinterpret_cast<uint32_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInt64Array(uint32_t __valueSize, int64_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInt64Array(array_view<int64_t const>(reinterpret_cast<int64_t const *>(value), reinterpret_cast<int64_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUInt64Array(uint32_t __valueSize, uint64_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateUInt64Array(array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(value), reinterpret_cast<uint64_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSingleArray(uint32_t __valueSize, float* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateSingleArray(array_view<float const>(reinterpret_cast<float const *>(value), reinterpret_cast<float const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDoubleArray(uint32_t __valueSize, double* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateDoubleArray(array_view<double const>(reinterpret_cast<double const *>(value), reinterpret_cast<double const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateChar16Array(uint32_t __valueSize, char16_t* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateChar16Array(array_view<char16_t const>(reinterpret_cast<char16_t const *>(value), reinterpret_cast<char16_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBooleanArray(uint32_t __valueSize, bool* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateBooleanArray(array_view<bool const>(reinterpret_cast<bool const *>(value), reinterpret_cast<bool const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStringArray(uint32_t __valueSize, HSTRING* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateStringArray(array_view<hstring const>(reinterpret_cast<hstring const *>(value), reinterpret_cast<hstring const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInspectableArray(uint32_t __valueSize, ::IUnknown** value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateInspectableArray(array_view<Windows::Foundation::IInspectable const>(reinterpret_cast<Windows::Foundation::IInspectable const *>(value), reinterpret_cast<Windows::Foundation::IInspectable const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateGuidArray(uint32_t __valueSize, abi_t<GUID>* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateGuidArray(array_view<GUID const>(reinterpret_cast<GUID const *>(value), reinterpret_cast<GUID const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDateTimeArray(uint32_t __valueSize, abi_t<Windows::Foundation::DateTime>* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateDateTimeArray(array_view<Windows::Foundation::DateTime const>(reinterpret_cast<Windows::Foundation::DateTime const *>(value), reinterpret_cast<Windows::Foundation::DateTime const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTimeSpanArray(uint32_t __valueSize, abi_t<Windows::Foundation::TimeSpan>* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateTimeSpanArray(array_view<Windows::Foundation::TimeSpan const>(reinterpret_cast<Windows::Foundation::TimeSpan const *>(value), reinterpret_cast<Windows::Foundation::TimeSpan const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePointArray(uint32_t __valueSize, abi_t<Windows::Foundation::Point>* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreatePointArray(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(value), reinterpret_cast<Windows::Foundation::Point const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSizeArray(uint32_t __valueSize, abi_t<Windows::Foundation::Size>* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateSizeArray(array_view<Windows::Foundation::Size const>(reinterpret_cast<Windows::Foundation::Size const *>(value), reinterpret_cast<Windows::Foundation::Size const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *propertyValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateRectArray(uint32_t __valueSize, abi_t<Windows::Foundation::Rect>* value, ::IUnknown** propertyValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_abi(this->shim().CreateRectArray(array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(value), reinterpret_cast<Windows::Foundation::Rect const *>(value) + __valueSize)));
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
    HRESULT __stdcall ToString(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ToString());
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
    HRESULT __stdcall UnescapeComponent(HSTRING toUnescape, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnescapeComponent(*reinterpret_cast<hstring const*>(&toUnescape)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EscapeComponent(HSTRING toEscape, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EscapeComponent(*reinterpret_cast<hstring const*>(&toEscape)));
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
    HRESULT __stdcall get_AbsoluteUri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayUri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Domain(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Domain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extension(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Extension());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fragment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Fragment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Host(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Host());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Password(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Password());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Query(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Query());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueryParsed(::IUnknown** ppWwwFormUrlDecoder) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppWwwFormUrlDecoder = detach_abi(this->shim().QueryParsed());
            return S_OK;
        }
        catch (...)
        {
            *ppWwwFormUrlDecoder = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawUri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SchemeName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SchemeName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Port(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Port());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Suspicious(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Suspicious());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Equals(::IUnknown* pUri, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Equals(*reinterpret_cast<Windows::Foundation::Uri const*>(&pUri)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CombineUri(HSTRING relativeUri, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CombineUri(*reinterpret_cast<hstring const*>(&relativeUri)));
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
    HRESULT __stdcall CreateUri(HSTRING uri, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateUri(*reinterpret_cast<hstring const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithRelativeUri(HSTRING baseUri, HSTRING relativeUri, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWithRelativeUri(*reinterpret_cast<hstring const*>(&baseUri), *reinterpret_cast<hstring const*>(&relativeUri)));
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
    HRESULT __stdcall get_AbsoluteCanonicalUri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AbsoluteCanonicalUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayIri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayIri());
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
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept override
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
struct produce<D, Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> : produce_base<D, Windows::Foundation::IWwwFormUrlDecoderRuntimeClass>
{
    HRESULT __stdcall GetFirstValueByName(HSTRING name, HSTRING* phstrValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *phstrValue = detach_abi(this->shim().GetFirstValueByName(*reinterpret_cast<hstring const*>(&name)));
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
    HRESULT __stdcall CreateWwwFormUrlDecoder(HSTRING query, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWwwFormUrlDecoder(*reinterpret_cast<hstring const*>(&query)));
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

WINRT_EXPORT namespace winrt::Windows::Foundation {

inline Deferral::Deferral(Windows::Foundation::DeferralCompletedHandler const& handler) :
    Deferral(get_activation_factory<Deferral, Windows::Foundation::IDeferralFactory>().Create(handler))
{}

inline MemoryBuffer::MemoryBuffer(uint32_t capacity) :
    MemoryBuffer(get_activation_factory<MemoryBuffer, Windows::Foundation::IMemoryBufferFactory>().Create(capacity))
{}

inline Windows::Foundation::IInspectable PropertyValue::CreateEmpty()
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateEmpty();
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt8(uint8_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt8(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInt16(int16_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInt16(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt16(uint16_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt16(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInt32(int32_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInt32(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt32(uint32_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt32(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInt64(int64_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInt64(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt64(uint64_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt64(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateSingle(float value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateSingle(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateDouble(double value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateDouble(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateChar16(char16_t value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateChar16(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateBoolean(bool value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateBoolean(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateString(param::hstring const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateString(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInspectable(Windows::Foundation::IInspectable const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInspectable(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateGuid(GUID const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateGuid(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateDateTime(Windows::Foundation::DateTime const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateDateTime(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateTimeSpan(Windows::Foundation::TimeSpan const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateTimeSpan(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreatePoint(Windows::Foundation::Point const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreatePoint(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateSize(Windows::Foundation::Size const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateSize(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateRect(Windows::Foundation::Rect const& value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateRect(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt8Array(array_view<uint8_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt8Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInt16Array(array_view<int16_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInt16Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt16Array(array_view<uint16_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt16Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInt32Array(array_view<int32_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInt32Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt32Array(array_view<uint32_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt32Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInt64Array(array_view<int64_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInt64Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateUInt64Array(array_view<uint64_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateUInt64Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateSingleArray(array_view<float const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateSingleArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateDoubleArray(array_view<double const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateDoubleArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateChar16Array(array_view<char16_t const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateChar16Array(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateBooleanArray(array_view<bool const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateBooleanArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateStringArray(array_view<hstring const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateStringArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateInspectableArray(array_view<Windows::Foundation::IInspectable const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateInspectableArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateGuidArray(array_view<GUID const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateGuidArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateDateTimeArray(array_view<Windows::Foundation::DateTime const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateDateTimeArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateTimeSpanArray(array_view<Windows::Foundation::TimeSpan const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateTimeSpanArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreatePointArray(array_view<Windows::Foundation::Point const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreatePointArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateSizeArray(array_view<Windows::Foundation::Size const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateSizeArray(value);
}

inline Windows::Foundation::IInspectable PropertyValue::CreateRectArray(array_view<Windows::Foundation::Rect const> value)
{
    return get_activation_factory<PropertyValue, Windows::Foundation::IPropertyValueStatics>().CreateRectArray(value);
}

inline Uri::Uri(param::hstring const& uri) :
    Uri(get_activation_factory<Uri, Windows::Foundation::IUriRuntimeClassFactory>().CreateUri(uri))
{}

inline Uri::Uri(param::hstring const& baseUri, param::hstring const& relativeUri) :
    Uri(get_activation_factory<Uri, Windows::Foundation::IUriRuntimeClassFactory>().CreateWithRelativeUri(baseUri, relativeUri))
{}

inline hstring Uri::UnescapeComponent(param::hstring const& toUnescape)
{
    return get_activation_factory<Uri, Windows::Foundation::IUriEscapeStatics>().UnescapeComponent(toUnescape);
}

inline hstring Uri::EscapeComponent(param::hstring const& toEscape)
{
    return get_activation_factory<Uri, Windows::Foundation::IUriEscapeStatics>().EscapeComponent(toEscape);
}

inline WwwFormUrlDecoder::WwwFormUrlDecoder(param::hstring const& query) :
    WwwFormUrlDecoder(get_activation_factory<WwwFormUrlDecoder, Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory>().CreateWwwFormUrlDecoder(query))
{}

template <typename L> DeferralCompletedHandler::DeferralCompletedHandler(L handler) :
    DeferralCompletedHandler(impl::make_delegate<DeferralCompletedHandler>(std::forward<L>(handler)))
{}

template <typename F> DeferralCompletedHandler::DeferralCompletedHandler(F* handler) :
    DeferralCompletedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DeferralCompletedHandler::DeferralCompletedHandler(O* object, M method) :
    DeferralCompletedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DeferralCompletedHandler::operator()() const
{
    check_hresult((*(abi_t<DeferralCompletedHandler>**)this)->Invoke());
}

}

namespace winrt::impl
{
    template <typename D, typename T>
    struct produce<D, Windows::Foundation::IReference<T>> : produce_base<D, Windows::Foundation::IReference<T>>
    {
        HRESULT __stdcall get_Value(arg_out<T> value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = detach_abi(this->shim().Value());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename T>
    struct reference : implements<reference<T>, Windows::Foundation::IReference<T>, Windows::Foundation::IPropertyValue>
    {
        reference(T const & value)
        {
            m_value = value;
        }

        T Value() const
        {
            return m_value;
        }

        Windows::Foundation::PropertyType Type() { throw hresult_not_implemented(); }
        bool IsNumericScalar() { throw hresult_not_implemented(); }
        uint8_t GetUInt8() { throw hresult_not_implemented(); }
        int16_t GetInt16() { throw hresult_not_implemented(); }
        uint16_t GetUInt16() { throw hresult_not_implemented(); }
        int32_t GetInt32() { throw hresult_not_implemented(); }
        uint32_t GetUInt32() { throw hresult_not_implemented(); }
        int64_t GetInt64() { throw hresult_not_implemented(); }
        uint64_t GetUInt64() { throw hresult_not_implemented(); }
        float GetSingle() { throw hresult_not_implemented(); }
        double GetDouble() { throw hresult_not_implemented(); }
        char16_t GetChar16() { throw hresult_not_implemented(); }
        bool GetBoolean() { throw hresult_not_implemented(); }
        hstring GetString() { throw hresult_not_implemented(); }
        GUID GetGuid() { throw hresult_not_implemented(); }
        Windows::Foundation::DateTime GetDateTime() { throw hresult_not_implemented(); }
        Windows::Foundation::TimeSpan GetTimeSpan() { throw hresult_not_implemented(); }
        Windows::Foundation::Point GetPoint() { throw hresult_not_implemented(); }
        Windows::Foundation::Size GetSize() { throw hresult_not_implemented(); }
        Windows::Foundation::Rect GetRect() { throw hresult_not_implemented(); }
        void GetUInt8Array(com_array<uint8_t> &) { throw hresult_not_implemented(); }
        void GetInt16Array(com_array<int16_t> &) { throw hresult_not_implemented(); }
        void GetUInt16Array(com_array<uint16_t> &) { throw hresult_not_implemented(); }
        void GetInt32Array(com_array<int32_t> &) { throw hresult_not_implemented(); }
        void GetUInt32Array(com_array<uint32_t> &) { throw hresult_not_implemented(); }
        void GetInt64Array(com_array<int64_t> &) { throw hresult_not_implemented(); }
        void GetUInt64Array(com_array<uint64_t> &) { throw hresult_not_implemented(); }
        void GetSingleArray(com_array<float> &) { throw hresult_not_implemented(); }
        void GetDoubleArray(com_array<double> &) { throw hresult_not_implemented(); }
        void GetChar16Array(com_array<char16_t> &) { throw hresult_not_implemented(); }
        void GetBooleanArray(com_array<bool> &) { throw hresult_not_implemented(); }
        void GetStringArray(com_array<hstring> &) { throw hresult_not_implemented(); }
        void GetInspectableArray(com_array<Windows::Foundation::IInspectable> &) { throw hresult_not_implemented(); }
        void GetGuidArray(com_array<GUID> &) { throw hresult_not_implemented(); }
        void GetDateTimeArray(com_array<Windows::Foundation::DateTime> &) { throw hresult_not_implemented(); }
        void GetTimeSpanArray(com_array<Windows::Foundation::TimeSpan> &) { throw hresult_not_implemented(); }
        void GetPointArray(com_array<Windows::Foundation::Point> &) { throw hresult_not_implemented(); }
        void GetSizeArray(com_array<Windows::Foundation::Size> &) { throw hresult_not_implemented(); }
        void GetRectArray(com_array<Windows::Foundation::Rect> &) { throw hresult_not_implemented(); }

    private:

        T m_value;
    };

    template <typename T>
    struct reference_traits
    {
        static Windows::Foundation::IInspectable make(T const & val) { return winrt::make<impl::reference<T>>(val); }
    };

    template <>
    struct reference_traits <uint8_t>
    {
        static Windows::Foundation::IInspectable make(uint8_t val) { return Windows::Foundation::PropertyValue::CreateUInt8(val); }
    };

    template <>
    struct reference_traits <uint16_t>
    {
        static Windows::Foundation::IInspectable make(uint16_t val) { return Windows::Foundation::PropertyValue::CreateUInt16(val); }
    };

    template <>
    struct reference_traits <int16_t>
    {
        static Windows::Foundation::IInspectable make(int16_t val) { return Windows::Foundation::PropertyValue::CreateInt16(val); }
    };

    template <>
    struct reference_traits <uint32_t>
    {
        static Windows::Foundation::IInspectable make(uint32_t val) { return Windows::Foundation::PropertyValue::CreateUInt32(val); }
    };

    template <>
    struct reference_traits <int32_t>
    {
        static Windows::Foundation::IInspectable make(int32_t val) { return Windows::Foundation::PropertyValue::CreateInt32(val); }
    };

    template <>
    struct reference_traits <uint64_t>
    {
        static Windows::Foundation::IInspectable make(uint64_t val) { return Windows::Foundation::PropertyValue::CreateUInt64(val); }
    };

    template <>
    struct reference_traits <int64_t>
    {
        static Windows::Foundation::IInspectable make(int64_t val) { return Windows::Foundation::PropertyValue::CreateInt64(val); }
    };

    template <>
    struct reference_traits <float>
    {
        static Windows::Foundation::IInspectable make(float val) { return Windows::Foundation::PropertyValue::CreateSingle(val); }
    };

    template <>
    struct reference_traits <double>
    {
        static Windows::Foundation::IInspectable make(double val) { return Windows::Foundation::PropertyValue::CreateDouble(val); }
    };

    template <>
    struct reference_traits <char16_t>
    {
        static Windows::Foundation::IInspectable make(char16_t val) { return Windows::Foundation::PropertyValue::CreateChar16(val); }
    };

    template <>
    struct reference_traits <bool>
    {
        static Windows::Foundation::IInspectable make(bool val) { return Windows::Foundation::PropertyValue::CreateBoolean(val); }
    };

    template <>
    struct reference_traits <hstring>
    {
        static Windows::Foundation::IInspectable make(hstring const & val) { return Windows::Foundation::PropertyValue::CreateString(val); }
    };

    template <>
    struct reference_traits <Windows::Foundation::IInspectable>
    {
        static Windows::Foundation::IInspectable make(Windows::Foundation::IInspectable const & val) { return Windows::Foundation::PropertyValue::CreateInspectable(val); }
    };

    template <>
    struct reference_traits <GUID>
    {
        static Windows::Foundation::IInspectable make(GUID const & val) { return Windows::Foundation::PropertyValue::CreateGuid(val); }
    };

    template <>
    struct reference_traits <Windows::Foundation::DateTime>
    {
        static Windows::Foundation::IInspectable make(Windows::Foundation::DateTime val) { return Windows::Foundation::PropertyValue::CreateDateTime(val); }
    };

    template <>
    struct reference_traits <Windows::Foundation::TimeSpan>
    {
        static Windows::Foundation::IInspectable make(Windows::Foundation::TimeSpan val) { return Windows::Foundation::PropertyValue::CreateTimeSpan(val); }
    };

    template <>
    struct reference_traits  <Windows::Foundation::Point>
    {
        static Windows::Foundation::IInspectable make(Windows::Foundation::Point const & val) { return Windows::Foundation::PropertyValue::CreatePoint(val); }
    };

    template <>
    struct reference_traits <Windows::Foundation::Size>
    {
        static Windows::Foundation::IInspectable make(Windows::Foundation::Size const & val) { return Windows::Foundation::PropertyValue::CreateSize(val); }
    };

    template <>
    struct reference_traits <Windows::Foundation::Rect>
    {
        static Windows::Foundation::IInspectable make(Windows::Foundation::Rect const & val) { return Windows::Foundation::PropertyValue::CreateRect(val); }
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T>
    struct IReference :
        IInspectable,
        impl::consume_t<IReference<T>>
    {
        IReference<T>(std::nullptr_t = nullptr) noexcept {}

        IReference<T>(T const & val)
        {
            this->m_ptr = detach_abi((impl::reference_traits<T>::make(val)).template as<IReference<T>>());
        }
    };
}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Foundation::IUnknown> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IUnknown> {};

template<> struct hash<winrt::Windows::Foundation::IInspectable> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IInspectable> {};

template<> struct hash<winrt::Windows::Foundation::IActivationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IActivationFactory> {};

template<> struct hash<winrt::Windows::Foundation::IAsyncInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IAsyncInfo> {};

template<> struct hash<winrt::Windows::Foundation::IAsyncAction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IAsyncAction> {};

template<typename TProgress> struct hash<winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>> {};

template<typename TResult> struct hash<winrt::Windows::Foundation::IAsyncOperation<TResult>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IAsyncOperation<TResult>> {};

template<typename TResult, typename TProgress> struct hash<winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> {};

template<> struct hash<winrt::Windows::Foundation::AsyncActionCompletedHandler> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::AsyncActionCompletedHandler> {};

template<typename TProgress> struct hash<winrt::Windows::Foundation::AsyncActionProgressHandler<TProgress>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::AsyncActionProgressHandler<TProgress>> {};

template<typename TProgress> struct hash<winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>> {};

template<typename TResult> struct hash<winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult>> {};

template<typename TResult, typename TProgress> struct hash<winrt::Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>> {};

template<typename TResult, typename TProgress> struct hash<winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>> {};

template<typename T> struct hash<winrt::Windows::Foundation::IReference<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IReference<T>> {};

template<typename T> struct hash<winrt::Windows::Foundation::EventHandler<T>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::EventHandler<T>> {};

template<typename TSender, typename TArgs> struct hash<winrt::Windows::Foundation::TypedEventHandler<TSender, TArgs>> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::TypedEventHandler<TSender, TArgs>> {};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Foundation::IClosable> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IClosable> {};

template<> struct hash<winrt::Windows::Foundation::IDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IDeferral> {};

template<> struct hash<winrt::Windows::Foundation::IDeferralFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IDeferralFactory> {};

template<> struct hash<winrt::Windows::Foundation::IGetActivationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IGetActivationFactory> {};

template<> struct hash<winrt::Windows::Foundation::IMemoryBuffer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IMemoryBuffer> {};

template<> struct hash<winrt::Windows::Foundation::IMemoryBufferFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IMemoryBufferFactory> {};

template<> struct hash<winrt::Windows::Foundation::IMemoryBufferReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IMemoryBufferReference> {};

template<> struct hash<winrt::Windows::Foundation::IPropertyValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IPropertyValue> {};

template<> struct hash<winrt::Windows::Foundation::IPropertyValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IPropertyValueStatics> {};

template<> struct hash<winrt::Windows::Foundation::IStringable> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IStringable> {};

template<> struct hash<winrt::Windows::Foundation::IUriEscapeStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IUriEscapeStatics> {};

template<> struct hash<winrt::Windows::Foundation::IUriRuntimeClass> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IUriRuntimeClass> {};

template<> struct hash<winrt::Windows::Foundation::IUriRuntimeClassFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IUriRuntimeClassFactory> {};

template<> struct hash<winrt::Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri> {};

template<> struct hash<winrt::Windows::Foundation::IWwwFormUrlDecoderEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IWwwFormUrlDecoderEntry> {};

template<> struct hash<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass> {};

template<> struct hash<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClassFactory> {};

template<> struct hash<winrt::Windows::Foundation::Deferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Deferral> {};

template<> struct hash<winrt::Windows::Foundation::MemoryBuffer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::MemoryBuffer> {};

template<> struct hash<winrt::Windows::Foundation::PropertyValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::PropertyValue> {};

template<> struct hash<winrt::Windows::Foundation::Uri> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::Uri> {};

template<> struct hash<winrt::Windows::Foundation::WwwFormUrlDecoder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::WwwFormUrlDecoder> {};

template<> struct hash<winrt::Windows::Foundation::WwwFormUrlDecoderEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Foundation::WwwFormUrlDecoderEntry> {};

}

WINRT_WARNING_POP
