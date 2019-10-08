#include "pch.h"
#include "catch.hpp"

using namespace winrt;

//
// An example of a full traits class with a non-nullptr invalid value.
//

TEST_CASE("handle, file")
{
    wchar_t path[1024] {};
    REQUIRE(0 != GetModuleFileNameW(nullptr, path, _countof(path)));

    file_handle empty;
    REQUIRE(!empty);
    static_assert(sizeof(empty) == sizeof(HANDLE), "fail");

    file_handle good{ CreateFileW(path, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr) };
    REQUIRE(good);

    file_handle bad{ CreateFileW(L"BAD", GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr) };
    REQUIRE(!bad);
}

//
// An example of a full traits class with a nullptr invalid value.
//

TEST_CASE("handle, event")
{
    handle empty;
    REQUIRE(!empty);

    handle good{ CreateEventW(nullptr, true, true, nullptr) };
    REQUIRE(good);

    handle bad{ CreateEventW(nullptr, true, true, L"BAD\\") };
    REQUIRE(!bad);
}

TEST_CASE("handle, move")
{
    handle a{ CreateEventW(nullptr, true, true, nullptr) };
    REQUIRE(a);

    handle b = std::move(a); // move construct
    REQUIRE(!a);
    REQUIRE(b);

    a = std::move(b); // move assign
    REQUIRE(a);
    REQUIRE(!b);
}

TEST_CASE("handle, close")
{
    handle a{ CreateEvent(nullptr, true, true, nullptr) };
    REQUIRE(a);

    a.close();
    REQUIRE(!a);
}

TEST_CASE("handle, get")
{
    HANDLE h{ CreateEvent(nullptr, true, true, nullptr) };

    handle a{ h };

    REQUIRE(h == a.get());
}

static void test_put(HANDLE * value)
{
    REQUIRE(value != nullptr);
    REQUIRE(*value == nullptr);

    *value = CreateEvent(nullptr, true, true, nullptr);;
}

TEST_CASE("handle, put")
{
    handle a;
    REQUIRE(!a);

    test_put(a.put());

    REQUIRE(a);
}

TEST_CASE("handle, detach")
{
    HANDLE h = CreateEvent(nullptr, true, true, nullptr);

    handle a{ h };

    REQUIRE(h == a.get());

    HANDLE detached = a.detach();

    REQUIRE(!a);
    REQUIRE(h == detached);

    a.attach(detached);
    REQUIRE(a);
    REQUIRE(h == a.get());
}

TEST_CASE("handle, swap")
{
    handle a{ CreateEvent(nullptr, true, true, nullptr) };
    handle b{ CreateEvent(nullptr, true, true, nullptr) };

    REQUIRE(a);
    REQUIRE(b);
    REQUIRE(a.get() != b.get());

    HANDLE ga = a.get();
    HANDLE gb = b.get();

    swap(a, b);

    REQUIRE(a);
    REQUIRE(b);
    REQUIRE(a.get() != b.get());

    REQUIRE(gb == a.get());
    REQUIRE(ga == b.get());
}
