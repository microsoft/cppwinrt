#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Component;

TEST_CASE("Structures")
{
    {
        WrapStructure a{ { L"value", 123 } };
        WrapStructure b{ a };
        WrapStructure c{ { L"value", 123 } };
        WrapStructure d{ { L"value", 321 } };
        WrapStructure e{ { L"value", nullptr } };

        // The underlying IReference<T> is the same so the comparison
        // uses get_abi under the hood.
        REQUIRE(a == b);

        // In this case, it's a different IReference<T> but it still compares
        // correctly by value.
        REQUIRE(a == c);

        // Both valid but different values.
        REQUIRE(a != d);

        // Tests short circuit when one is empty.
        REQUIRE(a != e);
    }

    {
        Structures structs;
        WrapStructure value{ { L"value", 123 } };
        structs.Set(value);
        WrapStructure get = structs.Get();

        // Basic struct equality
        REQUIRE(get == value);

        // Make sure the identity of the IReference<T> was preserved across the ABI
        REQUIRE(value.Inner.Object.as<::IUnknown>() == get.Inner.Object.as<::IUnknown>());
    }

    {
        Structures structs;
        structs.Set({ { L"value", 123 } });
        REQUIRE(structs.Get() == WrapStructure{ { L"value", 123 } });

        WrapStructure value;
        structs.Out(value);
        REQUIRE(value == WrapStructure{ { L"value", 123 } });

        structs.Ref({ { L"different", 321 } });
        REQUIRE(structs.Get() == WrapStructure{ { L"different", 321 } });
    }

    {
        WrapStructure one{ { L"one", 1 } };
        WrapStructure two{ { L"two", 2 } };
        WrapStructure three{ { L"three", 3 } };

        Structures structs;
        structs.SetArray({ one, two, three });

        REQUIRE(structs.GetArray() == com_array<WrapStructure>{ one, two, three });

        com_array<WrapStructure> value;
        structs.OutArray(value);
        REQUIRE(value == com_array<WrapStructure>{ one, two, three });

        std::array<WrapStructure, 3> view;
        structs.CopyArray(view);
        REQUIRE(view == std::array<WrapStructure, 3>{ one, two, three });
    }
}

