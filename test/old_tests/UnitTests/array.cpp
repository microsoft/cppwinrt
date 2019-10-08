#include "pch.h"
#include "catch.hpp"
#include <array>
#include "produce_IPropertyValue.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Storage::Streams;
using namespace Windows::Devices::Sms;
using namespace Windows::Security::Cryptography::Certificates;
using namespace Windows::Web::Syndication;

//
// First some array tests using the projection (real-world examples).
//

//
// This is a helper to create a data reader for use in testing arrays.
//
static IAsyncOperation<IDataReader> CreateDataReader(std::initializer_list<byte> values)
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
// This is a helper to create a syndication feed (collection) for testing arrays.
//
static IAsyncOperation<SyndicationFeed> GetSyndicationFeed()
{
    Uri uri(L"https://moderncpp.com/feed/");
    SyndicationClient client;

    co_return co_await client.RetrieveFeedAsync(uri);
}

//
// This test illustrates an array_view<T const> and a com_array<T> as a retval.
//
TEST_CASE("array,SmsBinaryMessage")
{
    CertificateQuery query;
    query.Thumbprint({ 1, 2, 3 }); // PassArray pattern

    com_array<byte> a = query.Thumbprint(); // ReceiveArray pattern

    REQUIRE(3 == a.size());
    REQUIRE(1 == a[0]);
    REQUIRE(2 == a[1]);
    REQUIRE(3 == a[2]);
}

//
// This test illustrates a com_array<T> as an out param.
//
TEST_CASE("array,CreateInt32Array,GetInt32Array")
{
    com_array<int> a;
    PropertyValue::CreateInt32Array({ 1, 2, 3 }). // PassArray pattern
        as<IPropertyValue>().GetInt32Array(a); // ReceiveArray pattern

    REQUIRE(3 == a.size());
    REQUIRE(1 == a[0]);
    REQUIRE(2 == a[1]);
    REQUIRE(3 == a[2]);
}

//
// This test illustrates an array_view<T> (non-const) bound to a std::array<T, N>
//
TEST_CASE("array,DataReader")
{
    auto reader = CreateDataReader({1, 2, 3}).get();

    std::array<byte, 3> a;
    reader.ReadBytes(a); // FillArray pattern

    REQUIRE(3 == a.size());
    REQUIRE(1 == a[0]);
    REQUIRE(2 == a[1]);
    REQUIRE(3 == a[2]);
}

//
// This test illustrates an array_view<T> (non-const) bound to a std::vector<T>
//
TEST_CASE("array,DataReader,std::vector")
{
    auto reader = CreateDataReader({ 1, 2, 3 }).get();

    std::vector<byte> a(3);
    reader.ReadBytes(a); // FillArray pattern

    REQUIRE(a.size() == 3);
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// This test illustrates an array_view<T> (non-const) bound to a custom container
//
TEST_CASE("custom,DataReader")
{
    auto reader = CreateDataReader({ 1, 2, 3 }).get();

    std::array<byte, 3> a;
    byte* ptr = a.data();
    auto size = a.size();
    reader.ReadBytes({ ptr, ptr + size });

    REQUIRE(3 == a.size());
    REQUIRE(1 == a[0]);
    REQUIRE(2 == a[1]);
    REQUIRE(3 == a[2]);
}

//
// This test illustrates receiving an IVector and calling GetMany to fill an array.
//
TEST_CASE("array,EBO")
{
    //
    // This version calls GetMany on the collection.
    //
    SECTION("collection")
    {
        SyndicationFeed feed = GetSyndicationFeed().get();

        std::vector<hstring> expected;

        for (auto item : feed.Items())
        {
            expected.emplace_back(item.Title().Text());
        }

        std::vector<SyndicationItem> items(expected.size());
        REQUIRE(expected.size() == feed.Items().GetMany(0, items));

        std::vector<hstring> actual;

        for (auto && item : items)
        {
            actual.emplace_back(item.Title().Text());
        }

        REQUIRE(expected == actual);
    }

    //
    // And this version calls GetMany on the iterator.
    //
    SECTION("iterator")
    {
        SyndicationFeed feed = GetSyndicationFeed().get();

        std::vector<hstring> expected;

        for (auto item : feed.Items())
        {
            expected.emplace_back(item.Title().Text());
        }

        std::vector<SyndicationItem> items(expected.size());
        REQUIRE(expected.size() == feed.Items().First().GetMany(items));

        std::vector<hstring> actual;

        for (auto && item : items)
        {
            actual.emplace_back(item.Title().Text());
        }

        REQUIRE(expected == actual);
    }
}

//
// Now some tests to cover the array members.
//

static void test_array_ref(array_view<int const> a)
{
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// Here we're testing 'operator[]' for the three array patterns.
//
TEST_CASE("array,[N]")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> a = v;

        a[1] = 20;

        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 3);

    }

    SECTION("array_cref")
    {
        test_array_ref({ 1, 2, 3 });
    }

    SECTION("com_array")
    {
        com_array<int> a{ 1, 2, 3 };

        a[1] = 20;

        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 3);
    }
}

static void test_array_ref_n(array_view<int const> const a)
{
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// Here we're testing 'operator[] const' for the three array patterns.
//
TEST_CASE("array,[N],const")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 2);
        REQUIRE(a[2] == 3);
    }

    SECTION("array_cref")
    {
        test_array_ref_n({ 1, 2, 3 });
    }

    SECTION("com_array")
    {
        com_array<int> const a{ 1, 2, 3 };

        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 2);
        REQUIRE(a[2] == 3);
    }
}

static void test_array_ref_at(array_view<int const> a)
{
    REQUIRE(a.at(0) == 1);
    REQUIRE(a.at(1) == 2);
    REQUIRE(a.at(2) == 3);
}

//
// Here we're testing 'at()' for the three array patterns.
//
TEST_CASE("array,at")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> a = v;

        a.at(1) = 20;

        REQUIRE(a.at(0) == 1);
        REQUIRE(a.at(1) == 20);
        REQUIRE(a.at(2) == 3);

    }

    SECTION("array_cref")
    {
        test_array_ref_at({ 1, 2, 3 });
    }

    SECTION("com_array")
    {
        com_array<int> a{ 1, 2, 3 };

        a.at(1) = 20;

        REQUIRE(a.at(0) == 1);
        REQUIRE(a.at(1) == 20);
        REQUIRE(a.at(2) == 3);
    }
}

static void test_array_ref_at_throw(array_view<int const> const a)
{
    a.at(4);
}

//
// Here we're testing that 'at()' throws out_of_range for the three array patterns.
//
TEST_CASE("array,at,throw")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        try
        {
            a.at(3);
            FAIL(L"Previous line should throw");
        }
        catch (std::out_of_range const & e)
        {
            REQUIRE(std::string("Invalid array subscript") == e.what());
        }
    }

    SECTION("array_cref")
    {
        try
        {
            test_array_ref_at_throw({ 1, 2, 3 });
            FAIL(L"Previous line should throw");
        }
        catch (std::out_of_range const & e)
        {
            REQUIRE(std::string("Invalid array subscript") == e.what());
        }
    }

    SECTION("com_array")
    {
        com_array<int> const a{ 1, 2, 3 };

        try
        {
            a.at(5);
            FAIL(L"Previous line should throw");
        }
        catch (std::out_of_range const & e)
        {
            REQUIRE(std::string("Invalid array subscript") == e.what());
        }
    }
}

static void test_array_ref_front_back(array_view<int const> a)
{
    REQUIRE(a.front() == 1);
    REQUIRE(a.back() == 3);
}

//
// Tests for the front/back methods for the three array patterns.
//
TEST_CASE("array,front,back")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> a = v;

        a.front() = 10;
        a.back() = 30;

        REQUIRE(a.front() == 10);
        REQUIRE(a.back() == 30);
    }

    SECTION("array_cref")
    {
        test_array_ref_front_back({ 1, 2, 3 });
    }

    SECTION("com_array")
    {
        com_array<int> a{ 1, 2, 3 };

        a.front() = 10;
        a.back() = 30;

        REQUIRE(a.front() == 10);
        REQUIRE(a.back() == 30);
    }
}

static void test_array_ref_front_back_const(array_view<int const> const a)
{
    REQUIRE(a.front() == 1);
    REQUIRE(a.back() == 3);
}

//
// Tests for the front/back methods for the three array patterns (const versions).
//
TEST_CASE("array,front,back,const")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        REQUIRE(a.front() == 1);
        REQUIRE(a.back() == 3);
    }

    SECTION("array_cref")
    {
        test_array_ref_front_back_const({ 1, 2, 3 });
    }

    SECTION("com_array")
    {
        com_array<int> const a{ 1, 2, 3 };

        REQUIRE(a.front() == 1);
        REQUIRE(a.back() == 3);
    }
}

//
// Tests for the 'data' method for the three array patterns.
//
TEST_CASE("array,data")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> a = v;
        REQUIRE(v.data() == a.data());

        int * p = a.data();

        p[1] = 20;

        REQUIRE(p[0] == 1);
        REQUIRE(p[1] == 20);
        REQUIRE(p[2] == 3);

        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 3);
    }

    SECTION("array_cref")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int const> a = v;
        REQUIRE(v.data() == a.data());

        int const * p = a.data();

        REQUIRE(p[0] == 1);
        REQUIRE(p[1] == 2);
        REQUIRE(p[2] == 3);
    }

    SECTION("com_array")
    {
        com_array<int> a{ 1, 2, 3 };

        int * p = a.data();

        p[1] = 20;

        REQUIRE(p[0] == 1);
        REQUIRE(p[1] == 20);
        REQUIRE(p[2] == 3);

        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 3);
    }
}

static void test_array_cref(array_view<int const> const a)
{
    int const * p = a.data();

    REQUIRE(p[0] == 1);
    REQUIRE(p[1] == 2);
    REQUIRE(p[2] == 3);
}

//
// Tests for the 'data' method for the three array patterns.
//
TEST_CASE("array,data,const")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        int const * p = a.data();

        REQUIRE(p[0] == 1);
        REQUIRE(p[1] == 2);
        REQUIRE(p[2] == 3);
    }

    SECTION("array_cref")
    {
        test_array_cref({ 1, 2, 3 });
    }

    SECTION("com_array")
    {
        com_array<int> const a{ 1, 2, 3 };

        int const * p = a.data();

        REQUIRE(p[0] == 1);
        REQUIRE(p[1] == 2);
        REQUIRE(p[2] == 3);
    }
}

//
// Tests for the 'begin/end' methods for the three array patterns.
//
TEST_CASE("array,begin,end")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> a = v;

        auto first = a.begin();
        auto last = a.end();

        for (auto i = first; i != last; ++i)
        {
            *i *= 10;
        }

        REQUIRE(a[0] == 10);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 30);
    }

    SECTION("array_cref")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int const> a = v;

        std::vector<int> copy(a.begin(), a.end());
        REQUIRE(v == copy);
    }

    SECTION("com_array")
    {
        com_array<int> a{ 1, 2, 3 };

        auto first = a.begin();
        auto last = a.end();

        for (auto i = first; i != last; ++i)
        {
            *i *= 10;
        }

        REQUIRE(a[0] == 10);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 30);
    }

}

//
// Tests for the 'begin/end' methods for the three array patterns (const versions).
//
TEST_CASE("array,begin,end,const")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        std::vector<int> copy(a.begin(), a.end());
        REQUIRE(v == copy);
    }

    SECTION("array_cref")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int const> const a = v;

        std::vector<int> copy(a.begin(), a.end());
        REQUIRE(v == copy);
    }

    SECTION("com_array")
    {
        std::vector<int> v{ 1, 2, 3 };
        com_array<int> const a(v);

        std::vector<int> copy(a.begin(), a.end());
        REQUIRE(v == copy);
    }
}

//
// Tests for the 'cbegin/cend' methods for the three array patterns.
//
TEST_CASE("array,cbegin,cend,const")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        std::vector<int> copy(a.cbegin(), a.cend());
        REQUIRE(v == copy);
    }

    SECTION("array_cref")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int const> const a = v;

        std::vector<int> copy(a.cbegin(), a.cend());
        REQUIRE(v == copy);
    }

    SECTION("com_array")
    {
        std::vector<int> v{ 1, 2, 3 };
        com_array<int> const a(v);

        std::vector<int> copy(a.cbegin(), a.cend());
        REQUIRE(v == copy);
    }
}

//
// Tests for the 'rbegin/rend' methods for the three array patterns.
//
TEST_CASE("array,rbegin,rend")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> a = v;

        auto first = a.rbegin();
        auto last = a.rend();

        REQUIRE(3 == *first);

        for (auto i = first; i != last; ++i)
        {
            *i *= 10;
        }

        REQUIRE(a[0] == 10);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 30);
    }

    SECTION("array_cref")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int const> a = v;

        std::vector<int> copy(a.rbegin(), a.rend());

        std::reverse(v.begin(), v.end());
        REQUIRE(v == copy);
    }

    SECTION("com_array")
    {
        com_array<int> a{ 1, 2, 3 };

        auto first = a.rbegin();
        auto last = a.rend();

        REQUIRE(3 == *first);

        for (auto i = first; i != last; ++i)
        {
            *i *= 10;
        }

        REQUIRE(a[0] == 10);
        REQUIRE(a[1] == 20);
        REQUIRE(a[2] == 30);
    }

}

//
// Tests for the 'rbegin/rend' methods for the three array patterns (const versions).
//
TEST_CASE("array,rbegin,rend,const")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        std::vector<int> copy(a.rbegin(), a.rend());
        std::reverse(v.begin(), v.end());
        REQUIRE(v == copy);
    }

    SECTION("array_cref")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int const> const a = v;

        std::vector<int> copy(a.rbegin(), a.rend());
        std::reverse(v.begin(), v.end());
        REQUIRE(v == copy);
    }

    SECTION("com_array")
    {
        std::vector<int> v{ 1, 2, 3 };
        com_array<int> const a(v);

        std::vector<int> copy(a.rbegin(), a.rend());
        std::reverse(v.begin(), v.end());
        REQUIRE(v == copy);
    }
}

//
// Tests for the 'crbegin/crend' methods for the three array patterns.
//
TEST_CASE("array,crbegin,crend,const")
{
    SECTION("array_view")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int> const a = v;

        std::vector<int> copy(a.crbegin(), a.crend());
        std::reverse(v.begin(), v.end());
        REQUIRE(v == copy);
    }

    SECTION("array_cref")
    {
        std::vector<int> v{ 1, 2, 3 };
        array_view<int const> const a = v;

        std::vector<int> copy(a.crbegin(), a.crend());
        std::reverse(v.begin(), v.end());
        REQUIRE(v == copy);
    }

    SECTION("com_array")
    {
        std::vector<int> v{ 1, 2, 3 };
        com_array<int> const a(v);

        std::vector<int> copy(a.crbegin(), a.crend());
        std::reverse(v.begin(), v.end());
        REQUIRE(v == copy);
    }
}

//
// array_view
//

//
// Tests array_view support for ranges.
//
TEST_CASE("array_view,range")
{
    {
        int v[] { 1, 2, 3 };
        array_view<int> a(v, v + _countof(v));
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == _countof(v));
    }

    {
        int v[]{ 1, 2, 3 };
        array_view<int const> a(v, v + _countof(v));
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == _countof(v));
    }

    {
        int const v[]{ 1, 2, 3 };
        array_view<int const> a(v, v + _countof(v));
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == _countof(v));
    }
}

static void test_array_ref_init_list(array_view<int const> a)
{
    REQUIRE(a.size() == 3);
}

//
// Tests array_view support for initializer list construction.
//
TEST_CASE("array_view,initializer_list")
{
    // initializer_list cannot be used with array_view of non-const T

    test_array_ref_init_list({ 1, 2, 3 });
}

//
// Tests array_view support for various C-style array construction.
//
TEST_CASE("array_view,C-style array")
{
    {
        int v[] = { 1, 2, 3 };
        array_view<int> a = v;
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == 3);
    }

    {
        int v[] = { 1, 2, 3 };
        array_view<int const> a = v;
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == 3);
    }

    {
        int const v[] = { 1, 2, 3 };
        array_view<int const> a = v;
        REQUIRE(a.data() == v);
        REQUIRE(a.size() == 3);
    }
}

//
// Tests array_view support for various std::vector construction.
//
TEST_CASE("array_view,vector")
{
    {
        std::vector<int> v = { 1, 2, 3 };
        array_view<int> a = v;
        REQUIRE(a.data() == v.data());
        REQUIRE(a.size() == 3);
    }

    {
        std::vector<int> v = { 1, 2, 3 };
        array_view<int const> a = v;
        REQUIRE(a.data() == v.data());
        REQUIRE(a.size() == 3);
    }

    {
        std::vector<int> const v = { 1, 2, 3 };
        array_view<int const> a = v;
        REQUIRE(a.data() == v.data());
        REQUIRE(a.size() == 3);
    }
}

//
// Tests array_view support for various std::array construction.
//
TEST_CASE("array_view,array")
{
    {
        std::array<int, 3> v = { 1, 2, 3 };
        array_view<int> a = v;
        REQUIRE(a.data() == v.data());
        REQUIRE(a.size() == 3);
    }

    {
        std::array<int, 3> v = { 1, 2, 3 };
        array_view<int const> a = v;
        REQUIRE(a.data() == v.data());
        REQUIRE(a.size() == 3);
    }

    {
        std::array<int, 3> const v = { 1, 2, 3 };
        array_view<int const> a = v;
        REQUIRE(a.data() == v.data());
        REQUIRE(a.size() == 3);
    }
}

//
// com_array
//

//
// Tests default construction of com_array.
//
TEST_CASE("com_array,default")
{
    com_array<int> a;
    REQUIRE(a.empty());
    REQUIRE(a.begin() == a.end());
    REQUIRE(a.size() == 0);
    REQUIRE(a.empty());
}

//
// Tests com_array's count constructor (must not be confused with initializer list).
//
TEST_CASE("com_array,count")
{
    com_array<int> a(3);
    REQUIRE(3 == a.size());
    REQUIRE(a[0] == 0);
    REQUIRE(a[1] == 0);
    REQUIRE(a[2] == 0);
}

//
// Tests com_array's N values constructor (must not be confused with initializer list).
//
TEST_CASE("com_array,count,value")
{
    com_array<int> a(3U, 123);
    REQUIRE(3 == a.size());
    REQUIRE(a[0] == 123);
    REQUIRE(a[1] == 123);
    REQUIRE(a[2] == 123);
}

//
// Tests com_array's range constructor.
//
TEST_CASE("com_array,range")
{
    std::vector<int> v { 1, 2, 3 };
    com_array<int> a(v.begin(), v.end());
    REQUIRE(3 == a.size());
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// Tests com_array's std::vector constructor.
//
TEST_CASE("com_array,vector")
{
    std::vector<int> v{ 1, 2, 3 };
    com_array<int> a(v);
    REQUIRE(3 == a.size());
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// Tests com_array's std::array constructor.
//
TEST_CASE("com_array,array")
{
    std::array<int, 3> v{ 1, 2, 3 };
    com_array<int> a(v);
    REQUIRE(3 == a.size());
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// Tests com_array's C-style array constructor.
//
TEST_CASE("com_array,C-style array")
{
    int v[3] { 1, 2, 3 };
    com_array<int> a(v);
    REQUIRE(3 == a.size());
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// Tests com_array's initializer list constructor.
//
TEST_CASE("com_array,initializer_list")
{
    com_array<int> a { 1, 2, 3 };
    REQUIRE(3 == a.size());
    REQUIRE(a[0] == 1);
    REQUIRE(a[1] == 2);
    REQUIRE(a[2] == 3);
}

//
// Tests com_array's move constructor and move assignment.
//
TEST_CASE("com_array,move")
{
    com_array<int> a{ 1, 2, 3 };
    com_array<int> b = std::move(a);

    REQUIRE(a.empty());
    REQUIRE(3 == b.size());

    a = std::move(b);

    REQUIRE(3 == a.size());
    REQUIRE(b.empty());
}

//
// Now some tests covering producing and consuming arrays
//

bool operator==(Size left, Size right)
{
    return left.Width == right.Width &&
           left.Height == right.Height;
}

TEST_CASE("array,PropertyValue")
{
    SECTION("consume,array,int32_t")
    {
        auto inspectable = PropertyValue::CreateInt32Array({ 1, 2, 3 });
        auto pv = inspectable.as<IPropertyValue>();

        com_array<int32_t> a;
        pv.GetInt32Array(a);

        REQUIRE(3 == a.size());
        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 2);
        REQUIRE(a[2] == 3);
    }

    SECTION("produce,array,int32_t")
    {
        auto pv = make<produce_IPropertyValue>();

        com_array<int32_t> a;
        pv.GetInt32Array(a);

        REQUIRE(3 == a.size());
        REQUIRE(a[0] == 1);
        REQUIRE(a[1] == 2);
        REQUIRE(a[2] == 3);
    }

    SECTION("consume,array,Size")
    {
        auto inspectable = PropertyValue::CreateSizeArray({ { 1,1 },{ 2,2 },{ 3,3 } });
        auto pv = inspectable.as<IPropertyValue>();

        com_array<Size> a;
        pv.GetSizeArray(a);

        REQUIRE(3 == a.size());
        REQUIRE(a[0].Width == 1); REQUIRE(a[0].Height == 1);
        REQUIRE(a[1].Width == 2); REQUIRE(a[1].Height == 2);
        REQUIRE(a[2].Width == 3); REQUIRE(a[2].Height == 3);
    }

    SECTION("produce,array,Size")
    {
        auto pv = make<produce_IPropertyValue>();

        com_array<Size> a;
        pv.GetSizeArray(a);

        REQUIRE(3 == a.size());
        REQUIRE(a[0].Width == 1); REQUIRE(a[0].Height == 1);
        REQUIRE(a[1].Width == 2); REQUIRE(a[1].Height == 2);
        REQUIRE(a[2].Width == 3); REQUIRE(a[2].Height == 3);
    }

    SECTION("consume,array,Inspectable")
    {
        auto inspectable = PropertyValue::CreateInspectableArray({ Uri(L"http://one/"), Uri(L"http://two/"), Uri(L"http://three/") });
        auto pv = inspectable.as<IPropertyValue>();

        com_array<Windows::Foundation::IInspectable> a;
        pv.GetInspectableArray(a);

        REQUIRE(3 == a.size());
        REQUIRE(a[0].as<Uri>().Host() == L"one");
        REQUIRE(a[1].as<Uri>().Host() == L"two");
        REQUIRE(a[2].as<Uri>().Host() == L"three");
    }

    SECTION("produce,array,Inspectable")
    {
        auto pv = make<produce_IPropertyValue>();

        com_array<Windows::Foundation::IInspectable> a;
        pv.GetInspectableArray(a);

        REQUIRE(3 == a.size());
        REQUIRE(a[0].as<Uri>().Host() == L"one");
        REQUIRE(a[1].as<Uri>().Host() == L"two");
        REQUIRE(a[2].as<Uri>().Host() == L"three");
    }
}

//
// Testing comparisons of array_view is tricky because we need to ensure that the array storage remains alive for the duration
// of the test. Previously this was done with an initializer_list but the list went out of scope before the comparison was performed
// leading to failures in some builds.
//

struct compare_results
{
    bool equal;
    bool not_equal;
    bool greater;
    bool less;
    bool greater_equal;
    bool less_equal;
};

static compare_results compare_com_array(com_array<char> const & left, com_array<char> const & right)
{
    return
    {
        left == right,
        left != right,
        left > right,
        left < right,
        left >= right,
        left <= right
    };
}

static compare_results compare_array_ref(array_view<char const> left, array_view<char const> right)
{
    return
    {
        left == right,
        left != right,
        left > right,
        left < right,
        left >= right,
        left <= right
    };
}

TEST_CASE("com_array,compare,com_array")
{
    compare_results result{};

    result = compare_com_array({ 'a', 'b', 'c' }, { 'a', 'b', 'c' });
    REQUIRE(result.equal);
    REQUIRE(!result.not_equal);
    REQUIRE(!result.greater);
    REQUIRE(!result.less);
    REQUIRE(result.greater_equal);
    REQUIRE(result.less_equal);

    result = compare_com_array({ 'a', 'b', 'c' }, { 'a', 'b', 'c', 'd' });
    REQUIRE(!result.equal);
    REQUIRE(result.not_equal);
    REQUIRE(!result.greater);
    REQUIRE(result.less);
    REQUIRE(!result.greater_equal);
    REQUIRE(result.less_equal);

    result = compare_com_array({ 'a', 'b', 'c', 'd' }, { 'a', 'b', 'c' });
    REQUIRE(!result.equal);
    REQUIRE(result.not_equal);
    REQUIRE(result.greater);
    REQUIRE(!result.less);
    REQUIRE(result.greater_equal);
    REQUIRE(!result.less_equal);
}

TEST_CASE("array_view,compare,array_view")
{
    compare_results result{};

    result = compare_array_ref({ 'a', 'b', 'c' }, { 'a', 'b', 'c' });
    REQUIRE(result.equal);
    REQUIRE(!result.not_equal);
    REQUIRE(!result.greater);
    REQUIRE(!result.less);
    REQUIRE(result.greater_equal);
    REQUIRE(result.less_equal);

    result = compare_array_ref({ 'a', 'b', 'c' }, { 'a', 'b', 'c', 'd' });
    REQUIRE(!result.equal);
    REQUIRE(result.not_equal);
    REQUIRE(!result.greater);
    REQUIRE(result.less);
    REQUIRE(!result.greater_equal);
    REQUIRE(result.less_equal);

    result = compare_array_ref({ 'a', 'b', 'c', 'd' }, { 'a', 'b', 'c' });
    REQUIRE(!result.equal);
    REQUIRE(result.not_equal);
    REQUIRE(result.greater);
    REQUIRE(!result.less);
    REQUIRE(result.greater_equal);
    REQUIRE(!result.less_equal);
}
