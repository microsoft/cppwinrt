#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows;
using namespace Windows::Foundation;

//
// These implementations test the various ways that you can write an ABI guard.
//

namespace
{
    //
    // This implemenetation uses the simplest abi_enter and abi_exit methods.
    //
    struct A : implements<A, IClosable, IStringable>
    {
        void Close()
        {
        }

        hstring ToString()
        {
            return L"";
        }

        void abi_enter()
        {
            ++m_enter;
        }

        void abi_exit()
        {
            ++m_exit;
        }

        int m_enter{};
        int m_exit{};
    };

    TEST_CASE("abi_guard, A")
    {
        com_ptr<A> impl = make_self<A>();

        impl->Close();
        impl->ToString();
        REQUIRE(impl->m_enter == 0);
        REQUIRE(impl->m_exit == 0);

        IClosable factory = impl.as<IClosable>();
        factory.Close();
        REQUIRE(impl->m_enter == 1);
        REQUIRE(impl->m_exit == 1);

        IStringable stringable = impl.as<IStringable>();
        stringable.ToString();
        REQUIRE(impl->m_enter == 2);
        REQUIRE(impl->m_exit == 2);
    }

    //
    // This implemenetation uses the abi_enter but omits the abi_exit method.
    //
    struct B : implements<B, IClosable, IStringable>
    {
        void Close()
        {
        }

        hstring ToString()
        {
            return L"";
        }

        void abi_enter()
        {
            ++m_enter;
        }

        int m_enter{};
    };

    TEST_CASE("abi_guard, B")
    {
        com_ptr<B> impl = make_self<B>();

        impl->Close();
        impl->ToString();

        REQUIRE(impl->m_enter == 0);

        IClosable factory = impl.as<IClosable>();
        factory.Close();

        REQUIRE(impl->m_enter == 1);

        IStringable stringable = impl.as<IStringable>();
        stringable.ToString();

        REQUIRE(impl->m_enter == 2);
    }

    //
    // This implemenetation throws from the abi_enter method.
    //
    struct C : implements<C, IClosable, IStringable>
    {
        void Close()
        {
        }

        hstring ToString()
        {
            return L"";
        }

        void abi_enter()
        {
            throw hresult_wrong_thread();
        }

        void abi_exit()
        {
            ++m_exit;
        }

        int m_exit{};
    };

    TEST_CASE("abi_guard, C")
    {
        com_ptr<C> impl = make_self<C>();

        impl->Close();
        impl->ToString();

        IClosable factory = impl.as<IClosable>();
        REQUIRE_THROWS_AS(factory.Close(), hresult_wrong_thread);

        IStringable stringable = impl.as<IStringable>();
        REQUIRE_THROWS_AS(stringable.ToString(), hresult_wrong_thread);

        REQUIRE(impl->m_exit == 0);
    }

    //
    // This implemenetation provides a nested abi_guard
    //
    struct D : implements<D, IClosable, IStringable>
    {
        void Close()
        {
        }

        hstring ToString()
        {
            return L"";
        }

        int m_enter{};
        int m_exit{};

        struct abi_guard
        {
            abi_guard(D & that) :
                m_that(that)
            {
                ++m_that.m_enter;
            }

            ~abi_guard()
            {
                ++m_that.m_exit;
            }

        private:

            D & m_that;
        };
    };

    TEST_CASE("abi_guard, D")
    {
        com_ptr<D> impl = make_self<D>();

        impl->Close();
        impl->ToString();

        REQUIRE(impl->m_enter == 0);
        REQUIRE(impl->m_exit == 0);

        IClosable factory = impl.as<IClosable>();
        factory.Close();

        REQUIRE(impl->m_enter == 1);
        REQUIRE(impl->m_exit == 1);

        IStringable stringable = impl.as<IStringable>();
        stringable.ToString();

        REQUIRE(impl->m_enter == 2);
        REQUIRE(impl->m_exit == 2);
    }

    template <typename T>
    struct count_guard
    {
        count_guard(T & that) :
            m_that(that)
        {
            ++m_that.m_enter;
        }

        ~count_guard()
        {
            ++m_that.m_exit;
        }

    private:

        T & m_that;
    };

    //
    // This implemenetation use an abi_guard type alias
    //
    struct E : implements<E, IClosable, IStringable>
    {
        void Close()
        {
        }

        hstring ToString()
        {
            return L"";
        }

        int m_enter{};
        int m_exit{};

        using abi_guard = count_guard<E>;
    };

    TEST_CASE("abi_guard, E")
    {
        com_ptr<E> impl = make_self<E>();

        impl->Close();
        impl->ToString();

        REQUIRE(impl->m_enter == 0);
        REQUIRE(impl->m_exit == 0);

        IClosable factory = impl.as<IClosable>();
        factory.Close();

        REQUIRE(impl->m_enter == 1);
        REQUIRE(impl->m_exit == 1);

        IStringable stringable = impl.as<IStringable>();
        stringable.ToString();

        REQUIRE(impl->m_enter == 2);
        REQUIRE(impl->m_exit == 2);
    }

    template <typename T>
    struct throw_guard
    {
        throw_guard(T &)
        {
            throw hresult_wrong_thread();
        }
    };

    //
    // This implemenetation use an abi_guard type alias that thows
    //
    struct F : implements<F, IClosable, IStringable>
    {
        void Close()
        {
        }

        hstring ToString()
        {
            return L"";
        }

        using abi_guard = throw_guard<F>;
    };

    TEST_CASE("abi_guard, F")
    {
        com_ptr<F> impl = make_self<F>();

        impl->Close();
        impl->ToString();

        IClosable factory = impl.as<IClosable>();
        REQUIRE_THROWS_AS(factory.Close(), hresult_wrong_thread);

        IStringable stringable = impl.as<IStringable>();
        REQUIRE_THROWS_AS(stringable.ToString(), hresult_wrong_thread);
    }
}
