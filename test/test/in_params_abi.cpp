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
    struct Value : implements<Value, IStringable>
    {
        Value(int32_t value) :
            m_value(value)
        {
        }

        hstring ToString()
        {
            return hstring{ std::to_wstring(m_value) };
        }

    private:

        int32_t m_value{};
    };
}

TEST_CASE("in_params_abi")
{
    Class object;
    auto abi = object.as<ABI::test_component::IClass>();

    {
        HSTRING result{};
        REQUIRE(S_OK == abi->InInt32(123, &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"123"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
    {
        hstring input = L"123";
        HSTRING raw = static_cast<HSTRING>(get_abi(input));
        HSTRING result{};
        REQUIRE(S_OK == abi->InString(raw, &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"123"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
    {
        auto input = make<Value>(123);
        auto raw = static_cast<::IInspectable*>(get_abi(input));
        HSTRING result{};
        REQUIRE(S_OK == abi->InObject(raw, &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"123"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
    {
        auto input = make<Value>(123);
        auto raw = static_cast<ABI::Windows::Foundation::IStringable*>(get_abi(input));
        HSTRING result{};
        REQUIRE(S_OK == abi->InStringable(raw, &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"123"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
    {
        Struct input{ L"1",L"2" };
        auto& raw = reinterpret_cast<ABI::test_component::Struct&>(input);
        HSTRING result{};
        REQUIRE(S_OK == abi->InStruct(raw, &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"12"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
    {
        Struct input{ L"1",L"2" };
        auto& raw = reinterpret_cast<ABI::test_component::Struct&>(input);
        HSTRING result{};
        REQUIRE(S_OK == abi->InStructRef(&raw, &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"12ref"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
    {
        std::array<int32_t, 2> input{ 1,2 };
        HSTRING result{};
        REQUIRE(S_OK == abi->InInt32Array(static_cast<uint32_t>(input.size()), input.data(), &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"12"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
    {
        std::array<HSTRING, 2> input;
        WindowsCreateString(L"1", 1, input.data());
        WindowsCreateString(L"2", 1, input.data() + 1);
        HSTRING result{};
        REQUIRE(S_OK == abi->InStringArray(static_cast<uint32_t>(input.size()), input.data(), &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"12"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
        REQUIRE(S_OK == WindowsDeleteString(input[0]));
        REQUIRE(S_OK == WindowsDeleteString(input[1]));
    }
    {
        std::array<::IInspectable*, 2> input;
        input[0] = static_cast<::IInspectable*>(detach_abi(make<Value>(1)));
        input[1] = static_cast<::IInspectable*>(detach_abi(make<Value>(2)));
        HSTRING result{};
        REQUIRE(S_OK == abi->InObjectArray(static_cast<uint32_t>(input.size()), input.data(), &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"12"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
        input[0]->Release();
        input[1]->Release();
    }
    {
        std::array<ABI::Windows::Foundation::IStringable*, 2> input;
        input[0] = static_cast<ABI::Windows::Foundation::IStringable*>(detach_abi(make<Value>(1)));
        input[1] = static_cast<ABI::Windows::Foundation::IStringable*>(detach_abi(make<Value>(2)));
        HSTRING result{};
        REQUIRE(S_OK == abi->InStringableArray(static_cast<uint32_t>(input.size()), input.data(), &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"12"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
        input[0]->Release();
        input[1]->Release();
    }
    {
        std::array<Struct, 2> input{ Struct{L"1",L"2"}, Struct{L"3",L"4"} };
        auto raw = reinterpret_cast<ABI::test_component::Struct*>(input.data());
        HSTRING result{};
        REQUIRE(S_OK == abi->InStructArray(static_cast<uint32_t>(input.size()), raw, &result));
        REQUIRE(WindowsGetStringRawBuffer(result, nullptr) == L"1234"sv);
        REQUIRE(S_OK == WindowsDeleteString(result));
    }
}
