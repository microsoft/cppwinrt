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

TEST_CASE("return_params_abi")
{
    Class object;
    auto abi = object.as<ABI::test_component::IClass>();

    {
        int value{ 0xCC };
        REQUIRE(S_OK == abi->ReturnInt32(&value));
        REQUIRE(value == 123);
    }
    {
        auto raw{ reinterpret_cast<HSTRING>(0xCC) };
        REQUIRE(S_OK == abi->ReturnString(&raw));
        hstring value{ raw, take_ownership_from_abi };
        REQUIRE(value == L"123");
    }
    {
        auto raw{ reinterpret_cast<::IInspectable*>(0xCC) };
        REQUIRE(S_OK == abi->ReturnObject(&raw));
        winrt::IInspectable value{ raw, take_ownership_from_abi };
        REQUIRE(value.as<IStringable>().ToString() == L"123");
    }
    {
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable*>(0xCC) };
        REQUIRE(S_OK == abi->ReturnStringable(&raw));
        IStringable value{ raw, take_ownership_from_abi };
        REQUIRE(value.ToString() == L"123");
    }
    {
        ABI::test_component::Struct raw;
        memset(&raw, 0xCC, sizeof(raw));
        REQUIRE(S_OK == abi->ReturnStruct(&raw));
        REQUIRE(WindowsGetStringRawBuffer(raw.First, nullptr) == L"1"sv);
        REQUIRE(WindowsGetStringRawBuffer(raw.Second, nullptr) == L"2"sv);
        REQUIRE(S_OK == WindowsDeleteString(raw.First));
        REQUIRE(S_OK == WindowsDeleteString(raw.Second));
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<int32_t*>(0xCC) };
        REQUIRE(S_OK == abi->ReturnInt32Array(&length, &raw));
        com_array<int32_t> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == 1);
        REQUIRE(value[1] == 2);
        REQUIRE(value[2] == 3);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<HSTRING*>(0xCC) };
        REQUIRE(S_OK == abi->ReturnStringArray(&length, &raw));
        com_array<hstring> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0] == L"1");
        REQUIRE(value[1] == L"2");
        REQUIRE(value[2] == L"3");
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<::IInspectable * *>(0xCC) };
        REQUIRE(S_OK == abi->ReturnObjectArray(&length, &raw));
        com_array<winrt::IInspectable> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].as<IStringable>().ToString() == L"1");
        REQUIRE(value[1].as<IStringable>().ToString() == L"2");
        REQUIRE(value[2].as<IStringable>().ToString() == L"3");
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable * *>(0xCC) };
        REQUIRE(S_OK == abi->ReturnStringableArray(&length, &raw));
        com_array<IStringable> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 3);
        REQUIRE(value[0].ToString() == L"1");
        REQUIRE(value[1].ToString() == L"2");
        REQUIRE(value[2].ToString() == L"3");
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::test_component::Struct*>(0xCC) };
        REQUIRE(S_OK == abi->ReturnStructArray(&length, &raw));
        com_array<Struct> value{ raw, length, take_ownership_from_abi };
        REQUIRE(value.size() == 2);
        REQUIRE(value[0].First == L"1");
        REQUIRE(value[0].Second == L"2");
        REQUIRE(value[1].First == L"10");
        REQUIRE(value[1].Second == L"20");
    }

    object.Fail(true);

    {
        int value{ 0xCC };
        REQUIRE(E_INVALIDARG == abi->ReturnInt32(&value));
        REQUIRE(value == 0xCC);
    }
    {
        auto raw{ reinterpret_cast<HSTRING>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnString(&raw));
        REQUIRE(raw == nullptr);
    }
    {
        auto raw{ reinterpret_cast<::IInspectable*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnObject(&raw));
        REQUIRE(raw == nullptr);
    }
    {
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnStringable(&raw));
        REQUIRE(raw == nullptr);
    }
    {
        ABI::test_component::Struct raw;
        memset(&raw, 0xCC, sizeof(raw));
        REQUIRE(E_INVALIDARG == abi->ReturnStruct(&raw));
        REQUIRE(raw.First == nullptr);
        REQUIRE(raw.Second == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<int32_t*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnInt32Array(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<HSTRING*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnStringArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<::IInspectable * *>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnObjectArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::Windows::Foundation::IStringable * *>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnStringableArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
    {
        uint32_t length{ 0xCC };
        auto raw{ reinterpret_cast<ABI::test_component::Struct*>(0xCC) };
        REQUIRE(E_INVALIDARG == abi->ReturnStructArray(&length, &raw));
        REQUIRE(length == 0xCC);
        REQUIRE(raw == nullptr);
    }
}
