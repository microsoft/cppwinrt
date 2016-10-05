// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Data.Json.3.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Data::Json::IJsonArray> : produce_base<D, Windows::Data::Json::IJsonArray>
{
    HRESULT __stdcall abi_GetObjectAt(uint32_t index, abi_arg_out<Windows::Data::Json::IJsonObject> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetObjectAt(index));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetArrayAt(uint32_t index, abi_arg_out<Windows::Data::Json::IJsonArray> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetArrayAt(index));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStringAt(uint32_t index, abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetStringAt(index));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumberAt(uint32_t index, double * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNumberAt(index));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBooleanAt(uint32_t index, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetBooleanAt(index));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Data::Json::IJsonArray> jsonArray) noexcept override
    {
        try
        {
            *jsonArray = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *jsonArray = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Data::Json::IJsonArray> result, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *result));
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
    HRESULT __stdcall abi_GetJsonStatus(int32_t hresult, Windows::Data::Json::JsonErrorStatus * status) noexcept override
    {
        try
        {
            *status = detach(this->shim().GetJsonStatus(hresult));
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
    HRESULT __stdcall abi_GetNamedValue(abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Json::IJsonValue> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedValue(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetNamedValue(abi_arg_in<hstring> name, abi_arg_in<Windows::Data::Json::IJsonValue> value) noexcept override
    {
        try
        {
            this->shim().SetNamedValue(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Data::Json::IJsonValue *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedObject(abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Json::IJsonObject> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedObject(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedArray(abi_arg_in<hstring> name, abi_arg_out<Windows::Data::Json::IJsonArray> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedArray(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedString(abi_arg_in<hstring> name, abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedString(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedNumber(abi_arg_in<hstring> name, double * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedNumber(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedBoolean(abi_arg_in<hstring> name, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedBoolean(*reinterpret_cast<const hstring *>(&name)));
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Data::Json::IJsonObject> jsonObject) noexcept override
    {
        try
        {
            *jsonObject = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *jsonObject = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Data::Json::IJsonObject> result, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *result));
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
    HRESULT __stdcall abi_GetNamedValueOrDefault(abi_arg_in<hstring> name, abi_arg_in<Windows::Data::Json::IJsonValue> defaultValue, abi_arg_out<Windows::Data::Json::IJsonValue> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedValue(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Data::Json::JsonValue *>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedObjectOrDefault(abi_arg_in<hstring> name, abi_arg_in<Windows::Data::Json::IJsonObject> defaultValue, abi_arg_out<Windows::Data::Json::IJsonObject> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedObject(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Data::Json::JsonObject *>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedStringOrDefault(abi_arg_in<hstring> name, abi_arg_in<hstring> defaultValue, abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedString(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedArrayOrDefault(abi_arg_in<hstring> name, abi_arg_in<Windows::Data::Json::IJsonArray> defaultValue, abi_arg_out<Windows::Data::Json::IJsonArray> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedArray(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::Data::Json::JsonArray *>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedNumberOrDefault(abi_arg_in<hstring> name, double defaultValue, double * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedNumber(*reinterpret_cast<const hstring *>(&name), defaultValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNamedBooleanOrDefault(abi_arg_in<hstring> name, bool defaultValue, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNamedBoolean(*reinterpret_cast<const hstring *>(&name), defaultValue));
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
    HRESULT __stdcall get_ValueType(Windows::Data::Json::JsonValueType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stringify(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Stringify());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetString(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetString());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNumber(double * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBoolean(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetBoolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetArray(abi_arg_out<Windows::Data::Json::IJsonArray> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetArray());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetObject(abi_arg_out<Windows::Data::Json::IJsonObject> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetObject());
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
    HRESULT __stdcall abi_Parse(abi_arg_in<hstring> input, abi_arg_out<Windows::Data::Json::IJsonValue> jsonValue) noexcept override
    {
        try
        {
            *jsonValue = detach(this->shim().Parse(*reinterpret_cast<const hstring *>(&input)));
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Data::Json::IJsonValue> result, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *result));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBooleanValue(bool input, abi_arg_out<Windows::Data::Json::IJsonValue> jsonValue) noexcept override
    {
        try
        {
            *jsonValue = detach(this->shim().CreateBooleanValue(input));
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateNumberValue(double input, abi_arg_out<Windows::Data::Json::IJsonValue> jsonValue) noexcept override
    {
        try
        {
            *jsonValue = detach(this->shim().CreateNumberValue(input));
            return S_OK;
        }
        catch (...)
        {
            *jsonValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStringValue(abi_arg_in<hstring> input, abi_arg_out<Windows::Data::Json::IJsonValue> jsonValue) noexcept override
    {
        try
        {
            *jsonValue = detach(this->shim().CreateStringValue(*reinterpret_cast<const hstring *>(&input)));
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
    HRESULT __stdcall abi_CreateNullValue(abi_arg_out<Windows::Data::Json::IJsonValue> jsonValue) noexcept override
    {
        try
        {
            *jsonValue = detach(this->shim().CreateNullValue());
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

namespace Windows::Data::Json {

template <typename D> Windows::Data::Json::JsonValueType impl_IJsonValue<D>::ValueType() const
{
    Windows::Data::Json::JsonValueType value {};
    check_hresult(static_cast<const IJsonValue &>(static_cast<const D &>(*this))->get_ValueType(&value));
    return value;
}

template <typename D> hstring impl_IJsonValue<D>::Stringify() const
{
    hstring returnValue;
    check_hresult(static_cast<const IJsonValue &>(static_cast<const D &>(*this))->abi_Stringify(put(returnValue)));
    return returnValue;
}

template <typename D> hstring impl_IJsonValue<D>::GetString() const
{
    hstring returnValue;
    check_hresult(static_cast<const IJsonValue &>(static_cast<const D &>(*this))->abi_GetString(put(returnValue)));
    return returnValue;
}

template <typename D> double impl_IJsonValue<D>::GetNumber() const
{
    double returnValue {};
    check_hresult(static_cast<const IJsonValue &>(static_cast<const D &>(*this))->abi_GetNumber(&returnValue));
    return returnValue;
}

template <typename D> bool impl_IJsonValue<D>::GetBoolean() const
{
    bool returnValue {};
    check_hresult(static_cast<const IJsonValue &>(static_cast<const D &>(*this))->abi_GetBoolean(&returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray impl_IJsonValue<D>::GetArray() const
{
    Windows::Data::Json::JsonArray returnValue { nullptr };
    check_hresult(static_cast<const IJsonValue &>(static_cast<const D &>(*this))->abi_GetArray(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonObject impl_IJsonValue<D>::GetObject() const
{
    Windows::Data::Json::JsonObject returnValue { nullptr };
    check_hresult(static_cast<const IJsonValue &>(static_cast<const D &>(*this))->abi_GetObject(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonValue impl_IJsonValueStatics<D>::Parse(hstring_ref input) const
{
    Windows::Data::Json::JsonValue jsonValue { nullptr };
    check_hresult(static_cast<const IJsonValueStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(jsonValue)));
    return jsonValue;
}

template <typename D> bool impl_IJsonValueStatics<D>::TryParse(hstring_ref input, Windows::Data::Json::JsonValue & result) const
{
    bool succeeded {};
    check_hresult(static_cast<const IJsonValueStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(result), &succeeded));
    return succeeded;
}

template <typename D> Windows::Data::Json::JsonValue impl_IJsonValueStatics<D>::CreateBooleanValue(bool input) const
{
    Windows::Data::Json::JsonValue jsonValue { nullptr };
    check_hresult(static_cast<const IJsonValueStatics &>(static_cast<const D &>(*this))->abi_CreateBooleanValue(input, put(jsonValue)));
    return jsonValue;
}

template <typename D> Windows::Data::Json::JsonValue impl_IJsonValueStatics<D>::CreateNumberValue(double input) const
{
    Windows::Data::Json::JsonValue jsonValue { nullptr };
    check_hresult(static_cast<const IJsonValueStatics &>(static_cast<const D &>(*this))->abi_CreateNumberValue(input, put(jsonValue)));
    return jsonValue;
}

template <typename D> Windows::Data::Json::JsonValue impl_IJsonValueStatics<D>::CreateStringValue(hstring_ref input) const
{
    Windows::Data::Json::JsonValue jsonValue { nullptr };
    check_hresult(static_cast<const IJsonValueStatics &>(static_cast<const D &>(*this))->abi_CreateStringValue(get(input), put(jsonValue)));
    return jsonValue;
}

template <typename D> Windows::Data::Json::JsonValue impl_IJsonValueStatics2<D>::CreateNullValue() const
{
    Windows::Data::Json::JsonValue jsonValue { nullptr };
    check_hresult(static_cast<const IJsonValueStatics2 &>(static_cast<const D &>(*this))->abi_CreateNullValue(put(jsonValue)));
    return jsonValue;
}

template <typename D> Windows::Data::Json::JsonValue impl_IJsonObject<D>::GetNamedValue(hstring_ref name) const
{
    Windows::Data::Json::JsonValue returnValue { nullptr };
    check_hresult(static_cast<const IJsonObject &>(static_cast<const D &>(*this))->abi_GetNamedValue(get(name), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IJsonObject<D>::SetNamedValue(hstring_ref name, const Windows::Data::Json::IJsonValue & value) const
{
    check_hresult(static_cast<const IJsonObject &>(static_cast<const D &>(*this))->abi_SetNamedValue(get(name), get(value)));
}

template <typename D> Windows::Data::Json::JsonObject impl_IJsonObject<D>::GetNamedObject(hstring_ref name) const
{
    Windows::Data::Json::JsonObject returnValue { nullptr };
    check_hresult(static_cast<const IJsonObject &>(static_cast<const D &>(*this))->abi_GetNamedObject(get(name), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray impl_IJsonObject<D>::GetNamedArray(hstring_ref name) const
{
    Windows::Data::Json::JsonArray returnValue { nullptr };
    check_hresult(static_cast<const IJsonObject &>(static_cast<const D &>(*this))->abi_GetNamedArray(get(name), put(returnValue)));
    return returnValue;
}

template <typename D> hstring impl_IJsonObject<D>::GetNamedString(hstring_ref name) const
{
    hstring returnValue;
    check_hresult(static_cast<const IJsonObject &>(static_cast<const D &>(*this))->abi_GetNamedString(get(name), put(returnValue)));
    return returnValue;
}

template <typename D> double impl_IJsonObject<D>::GetNamedNumber(hstring_ref name) const
{
    double returnValue {};
    check_hresult(static_cast<const IJsonObject &>(static_cast<const D &>(*this))->abi_GetNamedNumber(get(name), &returnValue));
    return returnValue;
}

template <typename D> bool impl_IJsonObject<D>::GetNamedBoolean(hstring_ref name) const
{
    bool returnValue {};
    check_hresult(static_cast<const IJsonObject &>(static_cast<const D &>(*this))->abi_GetNamedBoolean(get(name), &returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonValue impl_IJsonObjectWithDefaultValues<D>::GetNamedValue(hstring_ref name, const Windows::Data::Json::JsonValue & defaultValue) const
{
    Windows::Data::Json::JsonValue returnValue { nullptr };
    check_hresult(static_cast<const IJsonObjectWithDefaultValues &>(static_cast<const D &>(*this))->abi_GetNamedValueOrDefault(get(name), get(defaultValue), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonObject impl_IJsonObjectWithDefaultValues<D>::GetNamedObject(hstring_ref name, const Windows::Data::Json::JsonObject & defaultValue) const
{
    Windows::Data::Json::JsonObject returnValue { nullptr };
    check_hresult(static_cast<const IJsonObjectWithDefaultValues &>(static_cast<const D &>(*this))->abi_GetNamedObjectOrDefault(get(name), get(defaultValue), put(returnValue)));
    return returnValue;
}

template <typename D> hstring impl_IJsonObjectWithDefaultValues<D>::GetNamedString(hstring_ref name, hstring_ref defaultValue) const
{
    hstring returnValue;
    check_hresult(static_cast<const IJsonObjectWithDefaultValues &>(static_cast<const D &>(*this))->abi_GetNamedStringOrDefault(get(name), get(defaultValue), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray impl_IJsonObjectWithDefaultValues<D>::GetNamedArray(hstring_ref name, const Windows::Data::Json::JsonArray & defaultValue) const
{
    Windows::Data::Json::JsonArray returnValue { nullptr };
    check_hresult(static_cast<const IJsonObjectWithDefaultValues &>(static_cast<const D &>(*this))->abi_GetNamedArrayOrDefault(get(name), get(defaultValue), put(returnValue)));
    return returnValue;
}

template <typename D> double impl_IJsonObjectWithDefaultValues<D>::GetNamedNumber(hstring_ref name, double defaultValue) const
{
    double returnValue {};
    check_hresult(static_cast<const IJsonObjectWithDefaultValues &>(static_cast<const D &>(*this))->abi_GetNamedNumberOrDefault(get(name), defaultValue, &returnValue));
    return returnValue;
}

template <typename D> bool impl_IJsonObjectWithDefaultValues<D>::GetNamedBoolean(hstring_ref name, bool defaultValue) const
{
    bool returnValue {};
    check_hresult(static_cast<const IJsonObjectWithDefaultValues &>(static_cast<const D &>(*this))->abi_GetNamedBooleanOrDefault(get(name), defaultValue, &returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonObject impl_IJsonObjectStatics<D>::Parse(hstring_ref input) const
{
    Windows::Data::Json::JsonObject jsonObject { nullptr };
    check_hresult(static_cast<const IJsonObjectStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(jsonObject)));
    return jsonObject;
}

template <typename D> bool impl_IJsonObjectStatics<D>::TryParse(hstring_ref input, Windows::Data::Json::JsonObject & result) const
{
    bool succeeded {};
    check_hresult(static_cast<const IJsonObjectStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(result), &succeeded));
    return succeeded;
}

template <typename D> Windows::Data::Json::JsonObject impl_IJsonArray<D>::GetObjectAt(uint32_t index) const
{
    Windows::Data::Json::JsonObject returnValue { nullptr };
    check_hresult(static_cast<const IJsonArray &>(static_cast<const D &>(*this))->abi_GetObjectAt(index, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray impl_IJsonArray<D>::GetArrayAt(uint32_t index) const
{
    Windows::Data::Json::JsonArray returnValue { nullptr };
    check_hresult(static_cast<const IJsonArray &>(static_cast<const D &>(*this))->abi_GetArrayAt(index, put(returnValue)));
    return returnValue;
}

template <typename D> hstring impl_IJsonArray<D>::GetStringAt(uint32_t index) const
{
    hstring returnValue;
    check_hresult(static_cast<const IJsonArray &>(static_cast<const D &>(*this))->abi_GetStringAt(index, put(returnValue)));
    return returnValue;
}

template <typename D> double impl_IJsonArray<D>::GetNumberAt(uint32_t index) const
{
    double returnValue {};
    check_hresult(static_cast<const IJsonArray &>(static_cast<const D &>(*this))->abi_GetNumberAt(index, &returnValue));
    return returnValue;
}

template <typename D> bool impl_IJsonArray<D>::GetBooleanAt(uint32_t index) const
{
    bool returnValue {};
    check_hresult(static_cast<const IJsonArray &>(static_cast<const D &>(*this))->abi_GetBooleanAt(index, &returnValue));
    return returnValue;
}

template <typename D> Windows::Data::Json::JsonArray impl_IJsonArrayStatics<D>::Parse(hstring_ref input) const
{
    Windows::Data::Json::JsonArray jsonArray { nullptr };
    check_hresult(static_cast<const IJsonArrayStatics &>(static_cast<const D &>(*this))->abi_Parse(get(input), put(jsonArray)));
    return jsonArray;
}

template <typename D> bool impl_IJsonArrayStatics<D>::TryParse(hstring_ref input, Windows::Data::Json::JsonArray & result) const
{
    bool succeeded {};
    check_hresult(static_cast<const IJsonArrayStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(result), &succeeded));
    return succeeded;
}

template <typename D> Windows::Data::Json::JsonErrorStatus impl_IJsonErrorStatics2<D>::GetJsonStatus(int32_t hresult) const
{
    Windows::Data::Json::JsonErrorStatus status {};
    check_hresult(static_cast<const IJsonErrorStatics2 &>(static_cast<const D &>(*this))->abi_GetJsonStatus(hresult, &status));
    return status;
}

inline JsonArray::JsonArray() :
    JsonArray(activate_instance<JsonArray>())
{}

inline Windows::Data::Json::JsonArray JsonArray::Parse(hstring_ref input)
{
    return get_activation_factory<JsonArray, IJsonArrayStatics>().Parse(input);
}

inline bool JsonArray::TryParse(hstring_ref input, Windows::Data::Json::JsonArray & result)
{
    return get_activation_factory<JsonArray, IJsonArrayStatics>().TryParse(input, result);
}

inline Windows::Data::Json::JsonErrorStatus JsonError::GetJsonStatus(int32_t hresult)
{
    return get_activation_factory<JsonError, IJsonErrorStatics2>().GetJsonStatus(hresult);
}

inline JsonObject::JsonObject() :
    JsonObject(activate_instance<JsonObject>())
{}

inline Windows::Data::Json::JsonObject JsonObject::Parse(hstring_ref input)
{
    return get_activation_factory<JsonObject, IJsonObjectStatics>().Parse(input);
}

inline bool JsonObject::TryParse(hstring_ref input, Windows::Data::Json::JsonObject & result)
{
    return get_activation_factory<JsonObject, IJsonObjectStatics>().TryParse(input, result);
}

inline Windows::Data::Json::JsonValue JsonValue::Parse(hstring_ref input)
{
    return get_activation_factory<JsonValue, IJsonValueStatics>().Parse(input);
}

inline bool JsonValue::TryParse(hstring_ref input, Windows::Data::Json::JsonValue & result)
{
    return get_activation_factory<JsonValue, IJsonValueStatics>().TryParse(input, result);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateBooleanValue(bool input)
{
    return get_activation_factory<JsonValue, IJsonValueStatics>().CreateBooleanValue(input);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateNumberValue(double input)
{
    return get_activation_factory<JsonValue, IJsonValueStatics>().CreateNumberValue(input);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateStringValue(hstring_ref input)
{
    return get_activation_factory<JsonValue, IJsonValueStatics>().CreateStringValue(input);
}

inline Windows::Data::Json::JsonValue JsonValue::CreateNullValue()
{
    return get_activation_factory<JsonValue, IJsonValueStatics2>().CreateNullValue();
}

}

}
