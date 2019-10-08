#include "pch.h"
#include "catch.hpp"

using namespace winrt;

namespace
{
    Windows::Foundation::IAsyncAction Object()
    {
        co_return;
    }

    int callback_state{};

    void callback(int state)
    {
        callback_state = state;
    }

    struct callback_object
    {
        int m_state{};

        void member(int state)
        {
            m_state = state;
        }
    };
}

TEST_CASE("Variadic delegate - zero arguments")
{
    int count{};

    delegate<> up = [&] { ++count; };
    delegate<> down = [&] { --count; };

    REQUIRE(count == 0);
    up();
    REQUIRE(count == 1);
    up();
    REQUIRE(count == 2);
    down();
    REQUIRE(count == 1);
    down();
    REQUIRE(count == 0);
}

TEST_CASE("Variadic delegate - mixed arguments")
{
    int count{};

    delegate<int, std::shared_ptr<int>, ::IUnknown*, Windows::Foundation::IInspectable> d =
        [&](int const a, std::shared_ptr<int> const& b, ::IUnknown* c, Windows::Foundation::IInspectable const& d)
        {
            count = a;

            if (b)
            {
                count += *b;
            }

            if (c)
            {
                ++count;
            }

            if (d)
            {
                ++count;
            }
        };

    d(5, nullptr, nullptr, Object());
    REQUIRE(count == 6);

    d(6, std::make_shared<int>(7), get_unknown(Object()), nullptr);
    REQUIRE(count == 6 + 7 + 1);
}

TEST_CASE("Variadic delegate - event")
{
    int a{};
    int b{};
    int c{};

    event<delegate<int>> e;
    REQUIRE(!e);

    e.add([&](int value) { a = value + 1; });
    auto b_token = e.add([&](int value) { b = value + 2; });
    e.add([&](int value) { c = value + 3; });

    REQUIRE(e);
    e.remove(b_token);
    e(10);
    REQUIRE(a == 11);
    REQUIRE(b == 0);
    REQUIRE(c == 13);
}

TEST_CASE("Variadic delegate - exception")
{
    delegate<> d = [] { throw std::exception("what"); };
    REQUIRE_THROWS_AS(d(), std::exception);
}

TEST_CASE("Variadic delegate - function")
{
    delegate<int> d = callback;
    REQUIRE(callback_state == 0);
    d(123);
    REQUIRE(callback_state == 123);
}

TEST_CASE("Variadic delegate - object")
{
    callback_object object;
    delegate<int> d{ &object, &callback_object::member };
    REQUIRE(object.m_state == 0);
    d(123);
    REQUIRE(object.m_state == 123);
}