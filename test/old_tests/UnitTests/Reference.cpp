#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::UI::Xaml::Interop;

TEST_CASE("IReference<Rect>")
{
    Point original{ 1, 2 };
    IReference<Point> ref = original;
    Point value = ref.Value();
    REQUIRE(original.X == value.X);
    REQUIRE(original.Y == value.Y);
}

TEST_CASE("IReference<TypeName>")
{
    TypeName original{ L"TestName", TypeKind::Custom };
    IReference<TypeName> ref = original;
    TypeName value = ref.Value();
    REQUIRE(original.Name == value.Name);
    REQUIRE(original.Kind == value.Kind);

    REQUIRE(!ref.IsNumericScalar());
    REQUIRE_THROWS_AS(ref.GetUInt8() == 2, hresult_not_implemented);
    REQUIRE_THROWS_AS(ref.GetUInt16() == 2, hresult_not_implemented);
    REQUIRE_THROWS_AS(ref.GetInt16() == 2, hresult_not_implemented);
    REQUIRE_THROWS_AS(ref.GetUInt32() == 2, hresult_not_implemented);
    REQUIRE_THROWS_AS(ref.GetInt32() == 2, hresult_not_implemented);
    REQUIRE_THROWS_AS(ref.GetUInt64() == 2, hresult_not_implemented);
    REQUIRE_THROWS_AS(ref.GetInt64() == 2, hresult_not_implemented);
}

TEST_CASE("IReference<TypeKind>")
{
    IReference<TypeKind> ref = TypeKind::Custom;
    REQUIRE(ref.Value() == TypeKind::Custom);
    REQUIRE(ref.IsNumericScalar());
    REQUIRE(ref.GetUInt8() == 2);
    REQUIRE(ref.GetUInt16() == 2);
    REQUIRE(ref.GetInt16() == 2);
    REQUIRE(ref.GetUInt32() == 2);
    REQUIRE(ref.GetInt32() == 2);
    REQUIRE(ref.GetUInt64() == 2);
    REQUIRE(ref.GetInt64() == 2);
}

namespace
{
    template <typename T>
    struct Test : implements<Test<T>, IReferenceArray<T>>
    {
        com_array<T> Value()
        {
            return com_array<T>{ m_value };
        }

        Test(std::vector<T>&& value) : m_value(std::move(value)) {}
        Test(std::vector<T> const& value) : m_value(value) {}

        std::vector<T> m_value;
    };
}

TEST_CASE("IReferenceArray_consume")
{
    int values[]{ 0, 42, 1729, -1 };
    auto propertyValue = PropertyValue::CreateInt32Array(values).as<IPropertyValue>();
    {
        com_array<int> temp;
        propertyValue.GetInt32Array(temp);
        REQUIRE(temp == array_view<int>{ values });
    }

    // PropertyValue internally implements arrays with IReferenceArray.
    auto referenceArray = propertyValue.as<IReferenceArray<int>>();
    REQUIRE(referenceArray.Value() == array_view<int>{ values });
}

TEST_CASE("IReferenceArray_produce")
{
    {
        std::vector<int> values{ 0, 42, 1729, -1 };
        auto test = make<Test<int>>(values);
        REQUIRE(test.Value() == array_view<int>{ values });
    }
}