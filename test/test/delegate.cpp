#include "pch.h"

using namespace winrt;

TEST_CASE("delegate")
{
    // <>
    {
        bool invoked = false;
        delegate<> d = [&] {invoked = true; };
        d();
        REQUIRE(invoked);
    }

    // <int>
    {
        int result = 0;
        delegate<int> d = [&](int a) {result = a; };
        d(123);
        REQUIRE(result == 123);
    }

    // <int,int>
    {
        int result = 0;
        delegate<int, int> d = [&](int a, int b) {result = a + b; };
        d(4,5);
        REQUIRE(result == 9);
    }

    // void()
    {
        bool invoked = false;
        delegate<void()> d = [&] {invoked = true; };
        d();
        REQUIRE(invoked);
    }

    // void(int)
    {
        int result = 0;
        delegate<void(int)> d = [&](int a) {result = a; };
        d(123);
        REQUIRE(result == 123);
    }

    // void(int,int)
    {
        int result = 0;
        delegate<void(int,int)> d = [&](int a, int b) {result = a + b; };
        d(4, 5);
        REQUIRE(result == 9);
    }

    // int()
    {
        delegate<int()> d = [] { return 123; };
        REQUIRE(d() == 123);
    }

    // int(int)
    {
        delegate<int(int)> d = [](int a) {return a; };
        REQUIRE(d(123) == 123);
    }

    // int(int,int)
    {
        delegate<int(int, int)> d = [](int a, int b) {return a + b; };
        REQUIRE(d(4, 5) == 9);
    }

    // void(int*) with function pointer
    {
        struct S
        {
            static void Invoke(int* p) { *p = 123; }
        };
        int value = 0;
        delegate<void(int*)> d = &S::Invoke;
        d(&value);
        REQUIRE(value == 123);
    }

    // void(int*) with object and method pointer
    {
        struct S
        {
            void Invoke(int* p) { *p = 123; }
        } s;
        delegate<void(int*)> d{ &s, &S::Invoke };
        int value = 0;
        d(&value);
        REQUIRE(value == 123);
    }

    // int() with function pointer
    {
        struct S
        {
            static int Value() { return 123; }
        };
        delegate<int()> d = &S::Value;
        REQUIRE(d() == 123);
    }

    // int() with object and method pointer
    {
        struct S
        {
            int Value() { return 123; }
        } s;
        delegate<int()> d{ &s, &S::Value };
        REQUIRE(d() == 123);
    }
}
