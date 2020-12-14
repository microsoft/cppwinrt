#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // This implemenetation uses the simplest abi_enter and abi_exit methods
    //
    struct Simple : implements<Simple, IClosable, IStringable>
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

    //
    // This implemenetation uses the abi_enter but omits the abi_exit method
    //
    struct OnlyEnter : implements<OnlyEnter, IClosable, IStringable>
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

    //
    // This implemenetation throws from the abi_enter method
    //
    struct Throwing : implements<Throwing, IClosable, IStringable>
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

    template <typename T>
    struct ThrowGuard
    {
        ThrowGuard(T&)
        {
            throw hresult_wrong_thread();
        }
    };
}

TEST_CASE("abi_guard")
{
    {
        com_ptr<Simple> impl = make_self<Simple>();

        impl->Close();
        impl->ToString();
        REQUIRE(impl->m_enter == 0);
        REQUIRE(impl->m_exit == 0);

        IClosable closable = impl.as<IClosable>();
        closable.Close();
        REQUIRE(impl->m_enter == 1);
        REQUIRE(impl->m_exit == 1);

        IStringable stringable = impl.as<IStringable>();
        stringable.ToString();
        REQUIRE(impl->m_enter == 2);
        REQUIRE(impl->m_exit == 2);
    }
    {
        com_ptr<OnlyEnter> impl = make_self<OnlyEnter>();

        impl->Close();
        impl->ToString();

        REQUIRE(impl->m_enter == 0);

        IClosable closable = impl.as<IClosable>();
        closable.Close();

        REQUIRE(impl->m_enter == 1);

        IStringable stringable = impl.as<IStringable>();
        stringable.ToString();

        REQUIRE(impl->m_enter == 2);
    }
    {
        com_ptr<Throwing> impl = make_self<Throwing>();

        impl->Close();
        impl->ToString();

        IClosable closable = impl.as<IClosable>();
        REQUIRE_THROWS_AS(closable.Close(), hresult_wrong_thread);

        IStringable stringable = impl.as<IStringable>();
        REQUIRE_THROWS_AS(stringable.ToString(), hresult_wrong_thread);

        REQUIRE(impl->m_exit == 0);
    }
}
