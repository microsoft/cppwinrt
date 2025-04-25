#include "pch.h"
#include "catch.hpp"
#include <array>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage::Streams;
using namespace Windows::Data::Json;

//
// This is a helper to create a data reader for use in testing arrays.
//
static IAsyncOperation<IDataReader> CreateDataReader(std::initializer_list<byte> /*values*/)
{
    InMemoryRandomAccessStream stream;
    DataWriter writer(stream);
    writer.WriteByte(1);
    writer.WriteByte(2);
    writer.WriteByte(3);
    co_await writer.StoreAsync();

    stream.Seek(0);
    DataReader reader(stream);
    co_await reader.LoadAsync(3);
    co_return reader;
}

//
// This test illustrates an array_view<T> (non-const) bound to a std::span<T> on a std::array
//
TEST_CASE("array,DataReader,std::span")
{
    auto reader = CreateDataReader({ 1, 2, 3 }).get();

    std::array<byte, 3> a{};
    std::span<byte> sp(a);
    reader.ReadBytes(sp); // FillArray pattern

    REQUIRE(a.size() == 3);
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// This test illustrates passing a std::array to a method that takes array_view<T>
//
TEST_CASE("array,DataReader,std::span,direct")
{
    auto reader = CreateDataReader({ 1, 2, 3 }).get();

    std::array<byte, 3> a{};
    reader.ReadBytes(a); // FillArray pattern

    REQUIRE(a.size() == 3);
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}


TEST_CASE("array_view,span")
{
    {
        int v[] = { 1, 2, 3 };
        std::span<int> s(v);
        array_view<int> a = s;
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == 3);
    }

    {
        int v[] = { 1, 2, 3 };
        std::span<int const> s(v);
        array_view<int const> a = s;
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == 3);
    }

    {
        int const v[] = { 1, 2, 3 };
        std::span<int const> s(v);
        array_view<int const> a = s;
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == 3);
    }
}

//
// Tests com_array support for span construction.
//
TEST_CASE("com_array,span")
{
    {
        int v[] = { 1, 2, 3 };
        std::span<int> s(v);
        com_array<int> a(s);
        REQUIRE(a.size() == 3);
        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 2);
        REQUIRE(a[2] == 3);
    }
}

//
// Tests array_view support for conversion to span
//
TEST_CASE("array_view,span,as")
{
    {
        int v[] = { 1, 2, 3 };
        array_view<int> a = v;
        std::span<int> s(a);
        REQUIRE(s.data() == v);
        REQUIRE(s.size() == 3);
    }

    {
        int v[] = { 1, 2, 3 };
        array_view<int const> a = v;
        std::span<int const> s(a);
        REQUIRE(s.data() == v);
        REQUIRE(s.size() == 3);
    }

    {
        int const v[] = { 1, 2, 3 };
        array_view<int const> a = v;
        std::span<int const> s(a);
        REQUIRE(s.data() == v);
        REQUIRE(s.size() == 3);
    }
}

//
// Tests com_array support for conversion to span
//
TEST_CASE("com_array,span,as")
{
    {
        int v[] = { 1, 2, 3 };
        com_array<int> a(v);
        std::span<int> s(a);
        REQUIRE(s.size() == 3);
        REQUIRE(s[0] == 1);
        REQUIRE(s[1] == 2);
        REQUIRE(s[2] == 3);
    }
}

// Verify that class template argument deduction works for array_view.
TEST_CASE("array_view,span,ctad")
{
#define REQUIRE_DEDUCED_AS(T, ...) \
    static_assert(std::is_same_v<array_view<T>, decltype(array_view(__VA_ARGS__))>)

    uint8_t a[] = {1, 2, 3};
    std::span<uint8_t, 3> sp{ a };

    REQUIRE_DEDUCED_AS(uint8_t, sp);

    std::span<uint8_t const, 3> csp{ a };
    REQUIRE_DEDUCED_AS(uint8_t const, csp);

    std::span<uint8_t, 3> const cs{ a };
    REQUIRE_DEDUCED_AS(uint8_t const, cs);

#undef REQUIRE_DEDUCED_AS
}

// Verify that class template argument deduction works for com_array.
TEST_CASE("com_array,span,ctad")
{
#define REQUIRE_DEDUCED_AS(T, ...) \
    static_assert(std::is_same_v<com_array<T>, decltype(com_array(__VA_ARGS__))>)

    uint8_t a[] = { 1, 2, 3 };

    std::span<uint8_t, 3> sp{ a };
    REQUIRE_DEDUCED_AS(uint8_t, sp);

    std::span<uint8_t const, 3> csp{ a };
    REQUIRE_DEDUCED_AS(uint8_t, csp);

    std::span<uint8_t, 3> const cs{ a };
    REQUIRE_DEDUCED_AS(uint8_t, cs);

#undef REQUIRE_DEDUCED_AS
}
