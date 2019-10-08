#include "pch.h"
#include "catch.hpp"

using namespace winrt;

struct nested_base : implements<nested_base, Windows::Foundation::IStringable>
{
    virtual hstring ToString()
    {
        return L"nested_base";
    }
};

struct nested_derived : implements<nested_derived, Windows::Foundation::IClosable, nested_base>
{
    void Close()
    {

    }
    
    hstring ToString() override
    {
        return L"nested_derived";
    }
};

TEST_CASE("implements_nested")
{
    {
        com_ptr<nested_derived> obj = make_self<nested_derived>();
        obj->Close();
        REQUIRE(obj->ToString() == L"nested_derived");

        Windows::Foundation::IClosable closable = obj.as<Windows::Foundation::IClosable>();
        closable.Close();

        Windows::Foundation::IStringable stringable = obj.as<Windows::Foundation::IStringable>();
        REQUIRE(stringable.ToString() == L"nested_derived");

        Windows::Foundation::IInspectable inspect = *obj;
        com_array<guid> actual_iids = get_interfaces(inspect);
        com_array<guid> expected_iids{ guid_of<Windows::Foundation::IClosable>(), guid_of<Windows::Foundation::IStringable>() };

        auto guid_compare = [](guid const& lhs, guid const& rhs)
        {
            return memcmp(&lhs, &rhs, sizeof(guid)) < 0;
        };

        std::sort(actual_iids.begin(), actual_iids.end(), guid_compare);
        std::sort(expected_iids.begin(), expected_iids.end(), guid_compare);

        REQUIRE(actual_iids == expected_iids);
    }

    {
        Windows::Foundation::IClosable obj = make<nested_derived>();
        obj.Close();

        Windows::Foundation::IClosable closable = obj.as<Windows::Foundation::IClosable>();
        closable.Close();

        Windows::Foundation::IStringable stringable = obj.as<Windows::Foundation::IStringable>();
        REQUIRE(stringable.ToString() == L"nested_derived");
    }
}