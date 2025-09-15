#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // This implementation uses the simplest abi_enter and abi_exit methods
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
    // This implementation uses the abi_enter but omits the abi_exit method
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
    // This implementation throws from the abi_enter method
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

    //
    // This implementation provides a nested abi_guard
    //
    struct NestedGuard : implements<NestedGuard, IClosable, IStringable>
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
            abi_guard(NestedGuard& that) :
                m_that(that)
            {
                ++m_that.m_enter;
            }

            ~abi_guard()
            {
                ++m_that.m_exit;
            }

        private:

            NestedGuard& m_that;
        };
    };

    template <typename T>
    struct CountGuard
    {
        CountGuard(T& that) :
            m_that(that)
        {
            ++m_that.m_enter;
        }

        ~CountGuard()
        {
            ++m_that.m_exit;
        }

    private:

        T& m_that;
    };

    //
    // This implementation use an abi_guard type alias
    //
    struct GuardAlias : implements<GuardAlias, IClosable, IStringable>
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

        using abi_guard = CountGuard<GuardAlias>;
    };

    template <typename T>
    struct ThrowGuard
    {
        ThrowGuard(T&)
        {
            throw hresult_wrong_thread();
        }
    };

    //
    // This implementation use an abi_guard type alias that throws
    //
    struct ThrowAlias : implements<ThrowAlias, IClosable, IStringable>
    {
        void Close()
        {
        }

        hstring ToString()
        {
            return L"";
        }

        using abi_guard = ThrowGuard<ThrowAlias>;
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
    {
        com_ptr<NestedGuard> impl = make_self<NestedGuard>();

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
        com_ptr<GuardAlias> impl = make_self<GuardAlias>();

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
        com_ptr<ThrowAlias> impl = make_self<ThrowAlias>();

        impl->Close();
        impl->ToString();

        IClosable closable = impl.as<IClosable>();
        REQUIRE_THROWS_AS(closable.Close(), hresult_wrong_thread);

        IStringable stringable = impl.as<IStringable>();
        REQUIRE_THROWS_AS(stringable.ToString(), hresult_wrong_thread);
    }
}
