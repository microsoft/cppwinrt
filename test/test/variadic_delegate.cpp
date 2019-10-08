#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
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

    struct Object : implements<Object, IStringable>
    {
        int& m_count;

        Object(int& count) : m_count(count)
        {
        }

        void Callback()
        {
            ++m_count;
        }

        hstring ToString()
        {
            return L"Object";
        }
    };
}

TEST_CASE("variadic_delegate")
{
    // Zero arguments
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

    // get_strong
    {
        int count{};
        auto object = make_self<Object>(count);

        delegate<> up{ object->get_strong(), &Object::Callback };

        REQUIRE(count == 0);
        up();
        REQUIRE(count == 1);
        up();
        REQUIRE(count == 2);

        object = nullptr;

        up();
        REQUIRE(count == 3);
    }

    // get_weak
    {
        int count{};
        auto object = make_self<Object>(count);

        delegate<> up{ object->get_weak(), &Object::Callback };

        REQUIRE(count == 0);
        up();
        REQUIRE(count == 1);
        up();
        REQUIRE(count == 2);

        object = nullptr;

        up();
        REQUIRE(count == 2); // Unchanged
    }

    // Mixed arguments
    {
        int count{};

        delegate<int, std::shared_ptr<int>, Windows::Foundation::IInspectable> d =
            [&](int const a, std::shared_ptr<int> const& b, Windows::Foundation::IInspectable const& c)
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
        };

        d(5, nullptr, box_value(0));
        REQUIRE(count == 6);

        d(6, std::make_shared<int>(7), nullptr);
        REQUIRE(count == 6 + 7);
    }

    // Event
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

    // Exception
    {
        delegate<> d = [] { throw std::exception("what"); };
        REQUIRE_THROWS_AS(d(), std::exception);
    }

    // Function
    {
        delegate<int> d = callback;
        REQUIRE(callback_state == 0);
        d(123);
        REQUIRE(callback_state == 123);
    }

    // Function object
    {
        callback_object object;
        delegate<int> d{ &object, &callback_object::member };
        REQUIRE(object.m_state == 0);
        d(123);
        REQUIRE(object.m_state == 123);
    }
}
