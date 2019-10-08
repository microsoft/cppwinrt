#include "pch.h"
#include "winrt/test_component.h"
#include "test_component.h"

namespace winrt
{
    using namespace Windows::Foundation;
    using namespace test_component;
}

using namespace winrt;

namespace
{
    hstring to_hstring(::IInspectable* raw)
    {
        winrt::IInspectable object;
        copy_from_abi(object, raw);
        return object.as<IStringable>().ToString();
    }
}

TEST_CASE("out_params_abi")
{
    Class object;
    auto abi = object.as<ABI::test_component::IClass>();

    {
        int value{ 0xCC };
        REQUIRE(S_OK == abi->OutInt32(&value));
        REQUIRE(value == 123);
    }
    {
        auto raw{ reinterpret_cast<HSTRING>(0xCC) };
        REQUIRE(S_OK == abi->OutString(&raw));
        hstring value{ raw, take_ownership_from_abi };
        REQUIRE(value == L"123");
    }
    {
        auto raw{ reinterpret_cast<::IInspectable*>(0xCC) };
        REQUIRE(S_OK == abi->OutObject(&raw));
        winrt::IInspectable value{ raw, take_ownership_from_abi };
        REQUIRE(value.as<IStringable>().ToString() == L"123");
    }
    {
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable*>(0xCC) };
        REQUIRE(S_OK == abi->OutStringable(&raw));
        IStringable value{ raw, take_ownership_from_abi };
        REQUIRE(value.ToString() == L"123");
    }
    {
        ABI::test_component::Struct raw;
        memset(&raw, 0xCC, sizeof(raw));
        REQUIRE(S_OK == abi->OutStruct(&raw));
        REQUIRE(WindowsGetStringRawBuffer(raw.First, nullptr) == L"1"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw.Second, nullptr) == L"2"sv);
        REQUIRE(S_OK == WindowsDeleteString(raw.First));
        REQUIRE(S_OK == WindowsDeleteString(raw.Second));
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<int32_t*>(0xCC) };
        REQUIRE(S_OK == abi->OutInt32Array(&length, &raw));
        com_array<int32_t> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == 1);
        REQUIRE(value[1] == 2);
        REQUIRE(value[2] == 3);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<HSTRING*>(0xCC) };
        REQUIRE(S_OK == abi->OutStringArray(&length, &raw));
        com_array<hstring> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == L"1");
        REQUIRE(value[1] == L"2");
        REQUIRE(value[2] == L"3");
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<::IInspectable**>(0xCC) };
        REQUIRE(S_OK == abi->OutObjectArray(&length, &raw));
        com_array<winrt::IInspectable> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].as<IStringable>().ToString() == L"1");
        REQUIRE(value[1].as<IStringable>().ToString() == L"2");
        REQUIRE(value[2].as<IStringable>().ToString() == L"3");
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable**>(0xCC) };
        REQUIRE(S_OK == abi->OutStringableArray(&length, &raw));
        com_array<IStringable> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].ToString() == L"1");
        REQUIRE(value[1].ToString() == L"2");
        REQUIRE(value[2].ToString() == L"3");
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::test_component::Struct*>(0xCC) };
        REQUIRE(S_OK == abi->OutStructArray(&length, &raw));
        com_array<Struct> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 2);
        REQUIRE(value[0].First == L"1");
        REQUIRE(value[0].Second == L"2");
        REQUIRE(value[1].First == L"10");
        REQUIRE(value[1].Second == L"20");
    }
    {
        int32_t raw[4]{ 0xCC,0xCC, 0xCC, 0xCC };
        REQUIRE(S_OK == abi->RefInt32Array(_countof(raw), raw));
        REQUIRE(raw[0] == 1);
        REQUIRE(raw[1] == 2);
        REQUIRE(raw[2] == 3);
        REQUIRE(raw[3] == 0xCC);
    }
    {
        HSTRING raw[4];
        REQUIRE(S_OK == abi->RefStringArray(_countof(raw), raw));
        REQUIRE(WindowsGetStringRawBuffer(raw[0], nullptr) == L"1"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw[1], nullptr) == L"2"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw[2], nullptr) == L"3"sv);
        REQUIRE(raw[3] == nullptr);
        REQUIRE(S_OK == WindowsDeleteString(raw[0]));
        REQUIRE(S_OK == WindowsDeleteString(raw[1]));
        REQUIRE(S_OK == WindowsDeleteString(raw[2]));
    }
    {
        ::IInspectable* raw[4];
        REQUIRE(S_OK == abi->RefObjectArray(_countof(raw), raw));
        REQUIRE(to_hstring(raw[0]) == L"1");
        REQUIRE(to_hstring(raw[1]) == L"2");
        REQUIRE(to_hstring(raw[2]) == L"3");
        REQUIRE(raw[3] == nullptr);
        raw[0]->Release();
        raw[1]->Release();
        raw[2]->Release();
    }
    {
        ABI::Windows::Foundation::IStringable* raw[4];
        REQUIRE(S_OK == abi->RefStringableArray(_countof(raw), raw));
        REQUIRE(to_hstring(raw[0]) == L"1");
        REQUIRE(to_hstring(raw[1]) == L"2");
        REQUIRE(to_hstring(raw[2]) == L"3");
        REQUIRE(raw[3] == nullptr);
        raw[0]->Release();
        raw[1]->Release();
        raw[2]->Release();
    }
    {
        ABI::test_component::Struct raw[4];
        REQUIRE(S_OK == abi->RefStructArray(_countof(raw), raw));
        REQUIRE(WindowsGetStringRawBuffer(raw[0].First, nullptr) == L"1"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw[0].Second, nullptr) == L"2"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw[1].First, nullptr) == L"3"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw[1].Second, nullptr) == L"4"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw[2].First, nullptr) == L"5"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw[2].Second, nullptr) == L"6"sv);
        REQUIRE(raw[3].First == nullptr);
        REQUIRE(raw[3].Second == nullptr);
        REQUIRE(S_OK == WindowsDeleteString(raw[0].First));
        REQUIRE(S_OK == WindowsDeleteString(raw[0].Second));
        REQUIRE(S_OK == WindowsDeleteString(raw[1].First));
        REQUIRE(S_OK == WindowsDeleteString(raw[1].Second));
        REQUIRE(S_OK == WindowsDeleteString(raw[2].First));
        REQUIRE(S_OK == WindowsDeleteString(raw[2].Second));
    }

    object.Fail(true);

    {
        int value{ 0xCC };
        REQUIRE(E_INVALIDARG == abi->OutInt32(&value));
        REQUIRE(value == 0xCC);
    }
    {
        auto raw{ reinterpret_cast<HSTRING>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutString(&raw));
        REQUIRE(raw == nullptr);
    }
    {
        auto raw{ reinterpret_cast<::IInspectable*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutObject(&raw));
        REQUIRE(raw == nullptr);
    }
    {
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutStringable(&raw));
        REQUIRE(raw == nullptr);
    }
    {
        ABI::test_component::Struct raw;
        memset(&raw, 0xCC, sizeof(raw));
        REQUIRE(E_INVALIDARG == abi->OutStruct(&raw));
        REQUIRE(raw.First == nullptr);
        REQUIRE(raw.Second == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<int32_t*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutInt32Array(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<HSTRING*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutStringArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<::IInspectable**>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutObjectArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable**>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutStringableArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::test_component::Struct*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->OutStructArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        int32_t raw[2]{ 0xCC,0xCC };
        REQUIRE(E_INVALIDARG == abi->RefInt32Array(_countof(raw), raw));
        REQUIRE(raw[0] == 0xCC);
        REQUIRE(raw[1] == 0xCC);
    }
    {
        HSTRING raw[2];
        REQUIRE(E_INVALIDARG == abi->RefStringArray(_countof(raw), raw));
        REQUIRE(raw[0] == nullptr);
        REQUIRE(raw[1] == nullptr);
    }
    {
        ::IInspectable* raw[2];
        REQUIRE(E_INVALIDARG == abi->RefObjectArray(_countof(raw), raw));
        REQUIRE(raw[0] == nullptr);
        REQUIRE(raw[1] == nullptr);
    }
    {
        ABI::Windows::Foundation::IStringable* raw[2];
        REQUIRE(E_INVALIDARG == abi->RefStringableArray(_countof(raw), raw));
        REQUIRE(raw[0] == nullptr);
        REQUIRE(raw[1] == nullptr);
    }
    {
        ABI::test_component::Struct raw[2];
        REQUIRE(E_INVALIDARG == abi->RefStructArray(_countof(raw), raw));
        REQUIRE(raw[0].First == nullptr);
        REQUIRE(raw[0].Second == nullptr);
        REQUIRE(raw[1].First == nullptr);
        REQUIRE(raw[1].Second == nullptr);
    }
}
