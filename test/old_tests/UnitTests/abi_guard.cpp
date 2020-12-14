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
}
