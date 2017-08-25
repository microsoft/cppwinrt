// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Data.Json.2.h"

namespace winrt::impl {

template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonArray<D>::GetObjectAt(uint32_t index) const
{
    Windows::Data::Json::JsonObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetObjectAt(index, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonArray<D>::GetArrayAt(uint32_t index) const
{
    Windows::Data::Json::JsonArray returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetArrayAt(index, put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_Data_Json_IJsonArray<D>::GetStringAt(uint32_t index) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetStringAt(index, put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_Data_Json_IJsonArray<D>::GetNumberAt(uint32_t index) const
{
    double returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetNumberAt(index, &returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_Data_Json_IJsonArray<D>::GetBooleanAt(uint32_t index) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArray)->GetBooleanAt(index, &returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonArrayStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Data::Json::JsonArray jsonArray{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArrayStatics)->Parse(get_abi(input), put_abi(jsonArray)));
    return jsonArray;
}

template <typename D> bool consume_Windows_Data_Json_IJsonArrayStatics<D>::TryParse(param::hstring const& input, Windows::Data::Json::JsonArray& result) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonArrayStatics)->TryParse(get_abi(input), put_abi(result), &succeeded));
    return succeeded;
}

template <typename D> Windows::Data::Json::JsonErrorStatus consume_Windows_Data_Json_IJsonErrorStatics2<D>::GetJsonStatus(int32_t hresult) const
{
    Windows::Data::Json::JsonErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonErrorStatics2)->GetJsonStatus(hresult, put_abi(status)));
    return status;
}

template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonObject<D>::GetNamedValue(param::hstring const& name) const
{
    Windows::Data::Json::JsonValue returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedValue(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_Data_Json_IJsonObject<D>::SetNamedValue(param::hstring const& name, Windows::Data::Json::IJsonValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->SetNamedValue(get_abi(name), get_abi(value)));
}

template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonObject<D>::GetNamedObject(param::hstring const& name) const
{
    Windows::Data::Json::JsonObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedObject(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonObject<D>::GetNamedArray(param::hstring const& name) const
{
    Windows::Data::Json::JsonArray returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedArray(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_Data_Json_IJsonObject<D>::GetNamedString(param::hstring const& name) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedString(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_Data_Json_IJsonObject<D>::GetNamedNumber(param::hstring const& name) const
{
    double returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedNumber(get_abi(name), &returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_Data_Json_IJsonObject<D>::GetNamedBoolean(param::hstring const& name) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObject)->GetNamedBoolean(get_abi(name), &returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonObjectStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Data::Json::JsonObject jsonObject{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectStatics)->Parse(get_abi(input), put_abi(jsonObject)));
    return jsonObject;
}

template <typename D> bool consume_Windows_Data_Json_IJsonObjectStatics<D>::TryParse(param::hstring const& input, Windows::Data::Json::JsonObject& result) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectStatics)->TryParse(get_abi(input), put_abi(result), &succeeded));
    return succeeded;
}

template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedValue(param::hstring const& name, Windows::Data::Json::JsonValue const& defaultValue) const
{
    Windows::Data::Json::JsonValue returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedValueOrDefault(get_abi(name), get_abi(defaultValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedObject(param::hstring const& name, Windows::Data::Json::JsonObject const& defaultValue) const
{
    Windows::Data::Json::JsonObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedObjectOrDefault(get_abi(name), get_abi(defaultValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedString(param::hstring const& name, param::hstring const& defaultValue) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedStringOrDefault(get_abi(name), get_abi(defaultValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedArray(param::hstring const& name, Windows::Data::Json::JsonArray const& defaultValue) const
{
    Windows::Data::Json::JsonArray returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedArrayOrDefault(get_abi(name), get_abi(defaultValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedNumber(param::hstring const& name, double defaultValue) const
{
    double returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedNumberOrDefault(get_abi(name), defaultValue, &returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>::GetNamedBoolean(param::hstring const& name, bool defaultValue) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonObjectWithDefaultValues)->GetNamedBooleanOrDefault(get_abi(name), defaultValue, &returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonValueType consume_Windows_Data_Json_IJsonValue<D>::ValueType() const
{
    Windows::Data::Json::JsonValueType value{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->get_ValueType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Data_Json_IJsonValue<D>::Stringify() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->Stringify(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_Data_Json_IJsonValue<D>::GetString() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetString(put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_Data_Json_IJsonValue<D>::GetNumber() const
{
    double returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetNumber(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_Data_Json_IJsonValue<D>::GetBoolean() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetBoolean(&returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray consume_Windows_Data_Json_IJsonValue<D>::GetArray() const
{
    Windows::Data::Json::JsonArray returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetArray(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonObject consume_Windows_Data_Json_IJsonValue<D>::GetObject() const
{
    Windows::Data::Json::JsonObject returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValue)->GetObject(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::Parse(param::hstring const& input) const
{
    Windows::Data::Json::JsonValue jsonValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->Parse(get_abi(input), put_abi(jsonValue)));
    return jsonValue;
}

template <typename D> bool consume_Windows_Data_Json_IJsonValueStatics<D>::TryParse(param::hstring const& input, Windows::Data::Json::JsonValue& result) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->TryParse(get_abi(input), put_abi(result), &succeeded));
    return succeeded;
}

template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::CreateBooleanValue(bool input) const
{
    Windows::Data::Json::JsonValue jsonValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->CreateBooleanValue(input, put_abi(jsonValue)));
    return jsonValue;
}

template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::CreateNumberValue(double input) const
{
    Windows::Data::Json::JsonValue jsonValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->CreateNumberValue(input, put_abi(jsonValue)));
    return jsonValue;
}

template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics<D>::CreateStringValue(param::hstring const& input) const
{
    Windows::Data::Json::JsonValue jsonValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics)->CreateStringValue(get_abi(input), put_abi(jsonValue)));
    return jsonValue;
}

template <typename D> Windows::Data::Json::JsonValue consume_Windows_Data_Json_IJsonValueStatics2<D>::CreateNullValue() const
{
    Windows::Data::Json::JsonValue jsonValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Data::Json::IJsonValueStatics2)->CreateNullValue(put_abi(jsonValue)));
    return jsonValue;
}

template <typename D>
struct produce<D, Windows::Data::Json::IJsonArray> : produce_base<D, Windows::Data::Json::IJsonArray>
{
    HRESULT __stdcall GetObjectAt(uint32_t index, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetObjectAt(index));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetArrayAt(uint32_t index, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetArrayAt(index));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStringAt(uint32_t index, HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetStringAt(index));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNumberAt(uint32_t index, double* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNumberAt(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBooleanAt(uint32_t index, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetBooleanAt(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Json::IJsonArrayStatics> : produce_base<D, Windows::Data::Json::IJsonArrayStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** jsonArray) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *jsonArray = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *jsonArray = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** result, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Data::Json::JsonArray*>(result)));
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
struct produce<D, Windows::Data::Json::IJsonErrorStatics2> : produce_base<D, Windows::Data::Json::IJsonErrorStatics2>
{
    HRESULT __stdcall GetJsonStatus(int32_t hresult, abi_t<Windows::Data::Json::JsonErrorStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().GetJsonStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Json::IJsonObject> : produce_base<D, Windows::Data::Json::IJsonObject>
{
    HRESULT __stdcall GetNamedValue(HSTRING name, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedValue(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetNamedValue(HSTRING name, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNamedValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::IJsonValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedObject(HSTRING name, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedObject(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedArray(HSTRING name, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedArray(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedString(HSTRING name, HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedString(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedNumber(HSTRING name, double* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedNumber(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedBoolean(HSTRING name, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedBoolean(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Json::IJsonObjectStatics> : produce_base<D, Windows::Data::Json::IJsonObjectStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** jsonObject) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *jsonObject = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *jsonObject = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** result, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Data::Json::JsonObject*>(result)));
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
struct produce<D, Windows::Data::Json::IJsonObjectWithDefaultValues> : produce_base<D, Windows::Data::Json::IJsonObjectWithDefaultValues>
{
    HRESULT __stdcall GetNamedValueOrDefault(HSTRING name, ::IUnknown* defaultValue, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::JsonValue const*>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedObjectOrDefault(HSTRING name, ::IUnknown* defaultValue, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedObject(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::JsonObject const*>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedStringOrDefault(HSTRING name, HSTRING defaultValue, HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedArrayOrDefault(HSTRING name, ::IUnknown* defaultValue, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedArray(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Data::Json::JsonArray const*>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedNumberOrDefault(HSTRING name, double defaultValue, double* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedNumber(*reinterpret_cast<hstring const*>(&name), defaultValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNamedBooleanOrDefault(HSTRING name, bool defaultValue, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNamedBoolean(*reinterpret_cast<hstring const*>(&name), defaultValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Json::IJsonValue> : produce_base<D, Windows::Data::Json::IJsonValue>
{
    HRESULT __stdcall get_ValueType(abi_t<Windows::Data::Json::JsonValueType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ValueType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stringify(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Stringify());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetString(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetString());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNumber(double* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBoolean(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetBoolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetArray(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetArray());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetObject(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetObject());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Json::IJsonValueStatics> : produce_base<D, Windows::Data::Json::IJsonValueStatics>
{
    HRESULT __stdcall Parse(HSTRING input, ::IUnknown** jsonValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_abi(this->shim().Parse(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** result, bool* succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Data::Json::JsonValue*>(result)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBooleanValue(bool input, ::IUnknown** jsonValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_abi(this->shim().CreateBooleanValue(input));
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateNumberValue(double input, ::IUnknown** jsonValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_abi(this->shim().CreateNumberValue(input));
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStringValue(HSTRING input, ::IUnknown** jsonValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_abi(this->shim().CreateStringValue(*reinterpret_cast<hstring const*>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Data::Json::IJsonValueStatics2> : produce_base<D, Windows::Data::Json::IJsonValueStatics2>
{
    HRESULT __stdcall CreateNullValue(::IUnknown** jsonValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *jsonValue = detach_abi(this->shim().CreateNullValue());
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Data::Json {

inline JsonArray::JsonArray() :
    JsonArray(activate_instance<JsonArray>())
{}

inline Windows::Data::Json::JsonArray JsonArray::Parse(param::hstring const& input)
{
    return get_activation_factory<JsonArray, Windows::Data::Json::IJsonArrayStatics>().Parse(input);
}

inline bool JsonArray::TryParse(param::hstring const& input, Windows::Data::Json::JsonArray& result)
{
    return get_activation_factory<JsonArray, Windows::Data::Json::IJsonArrayStatics>().TryParse(input, result);
}

inline Windows::Data::Json::JsonErrorStatus JsonError::GetJsonStatus(int32_t hresult)
{
    return get_activation_factory<JsonError, Windows::Data::Json::IJsonErrorStatics2>().GetJsonStatus(hresult);
}

inline JsonObject::JsonObject() :
    JsonObject(activate_instance<JsonObject>())
{}

inline Windows::Data::Json::JsonObject JsonObject::Parse(param::hstring const& input)
{
    return get_activation_factory<JsonObject, Windows::Data::Json::IJsonObjectStatics>().Parse(input);
}

inline bool JsonObject::TryParse(param::hstring const& input, Windows::Data::Json::JsonObject& result)
{
    return get_activation_factory<JsonObject, Windows::Data::Json::IJsonObjectStatics>().TryParse(input, result);
}

inline Windows::Data::Json::JsonValue JsonValue::Parse(param::hstring const& input)
{
    return get_activation_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>().Parse(input);
}

inline bool JsonValue::TryParse(param::hstring const& input, Windows::Data::Json::JsonValue& result)
{
    return get_activation_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>().TryParse(input, result);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateBooleanValue(bool input)
{
    return get_activation_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>().CreateBooleanValue(input);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateNumberValue(double input)
{
    return get_activation_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>().CreateNumberValue(input);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateStringValue(param::hstring const& input)
{
    return get_activation_factory<JsonValue, Windows::Data::Json::IJsonValueStatics>().CreateStringValue(input);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateNullValue()
{
    return get_activation_factory<JsonValue, Windows::Data::Json::IJsonValueStatics2>().CreateNullValue();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Data::Json::IJsonArray> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonArray> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonArrayStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonArrayStatics> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonErrorStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonErrorStatics2> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonObject> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonObject> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonObjectStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonObjectStatics> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonValue> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonValueStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonValueStatics> {};

template<> struct hash<winrt::Windows::Data::Json::IJsonValueStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::IJsonValueStatics2> {};

template<> struct hash<winrt::Windows::Data::Json::JsonArray> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::JsonArray> {};

template<> struct hash<winrt::Windows::Data::Json::JsonError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::JsonError> {};

template<> struct hash<winrt::Windows::Data::Json::JsonObject> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::JsonObject> {};

template<> struct hash<winrt::Windows::Data::Json::JsonValue> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Json::JsonValue> {};

}

WINRT_WARNING_POP
