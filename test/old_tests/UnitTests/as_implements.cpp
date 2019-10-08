#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace winrt::Windows::Foundation;

namespace
{
    struct Foo : implements<Foo, IStringable>
    {
        hstring ToString()
        {
            return L"Foo";
        }

        weak_ref<Foo> get_weak_foo()
        {
            return implements_type::get_weak();
        }

        com_ptr<Foo> get_strong_foo()
        {
            return implements_type::get_strong();
        }
    };

    struct Bar : implements<Bar, IClosable, Foo>
    {
        void Close()
        {

        }

        weak_ref<Bar> get_weak_bar()
        {
            return implements_type::get_weak();
        }

        com_ptr<Bar> get_strong_bar()
        {
            return implements_type::get_strong();
        }
    };
}

TEST_CASE("weak_implements")
{
    com_ptr<Foo> foo = make_self<Foo>();
    weak_ref<Foo> weak = make_weak(foo);
    com_ptr<Foo> foo2 = weak.get();
    REQUIRE(foo.get() == foo2.get());
}

TEST_CASE("get_weak")
{
    com_ptr<Foo> foo = make_self<Foo>();
    weak_ref<Foo> weak = foo->get_weak_foo();
    com_ptr<Foo> foo2 = weak.get();
    REQUIRE(foo.get() == foo2.get());
}

TEST_CASE("get_strong")
{
    com_ptr<Foo> foo = make_self<Foo>();
    com_ptr<Foo> foo2 = foo->get_strong_foo();
    REQUIRE(foo.get() == foo2.get());
}

TEST_CASE("as_implements")
{
    com_ptr<Foo> foo = make_self<Foo>();
    IStringable stringable = foo.as<IStringable>();
    com_ptr<Foo> foo2 = stringable.as<Foo>();
    REQUIRE(foo.get() == foo2.get());
}

TEST_CASE("as_implements_inheritance")
{
    com_ptr<Bar> bar = make_self<Bar>();
    {
        weak_ref<Bar> weak_bar = make_weak(bar);
        com_ptr<Bar> bar2 = weak_bar.get();
        REQUIRE(bar.get() == bar2.get());
    }
    {
        weak_ref<Bar> weak_bar = bar->get_weak_bar();
        com_ptr<Bar> bar2 = weak_bar.get();
        REQUIRE(bar.get() == bar2.get());
    }
    {
        weak_ref<Foo> weak_foo = bar->get_weak_foo();
        com_ptr<Foo> foo = weak_foo.get();
        REQUIRE(bar.get() == foo.get());
    }
    {
        com_ptr<Bar> strong_bar = bar->get_strong_bar();
        REQUIRE(bar.get() == strong_bar.get());
    }
    {
        com_ptr<Foo> strong_foo = bar->get_strong_foo();
        REQUIRE(bar.get() == strong_foo.get());
    }
    {
        IClosable closable = bar.as<IClosable>();
        com_ptr<Bar> bar2 = closable.as<Bar>();
        REQUIRE(bar.get() == bar2.get());
    }
    {
        IStringable stringable = bar.as<IStringable>();
        com_ptr<Bar> bar2 = stringable.as<Bar>();
        REQUIRE(bar.get() == bar2.get());
    }
    
    com_ptr<Foo> foo = bar.as<Foo>();
    REQUIRE(bar.get() == foo.get());
    {
        weak_ref<Foo> weak_foo = make_weak(foo);
        com_ptr<Foo> foo2 = weak_foo.get();
        REQUIRE(bar.get() == foo2.get());
    }
    {
        IClosable closable = foo.as<IClosable>();
        com_ptr<Foo> foo2 = closable.as<Foo>();
        REQUIRE(bar.get() == foo2.get());
    }
    {
        IStringable stringable = foo.as<IStringable>();
        com_ptr<Foo> foo2 = stringable.as<Foo>();
        REQUIRE(bar.get() == foo2.get());
    }
    {
        weak_ref<Foo> weak_foo = foo->get_weak_foo();
        com_ptr<Foo> foo2 = weak_foo.get();
        REQUIRE(bar.get() == foo2.get());
    }
    {
        com_ptr<Foo> foo2 = foo->get_strong_foo();
        REQUIRE(bar.get() == foo2.get());
    }
}
