#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    class some_exception : public std::runtime_error
    {
    public:
        some_exception() noexcept
            : runtime_error("some_exception")
        {
        }
    };

    template<typename D>
    struct InitializeT : implements<D, IStringable>
    {
        bool& m_initialize_called;

        InitializeT(bool& initialize_called) : m_initialize_called(initialize_called)
        {
        }

        ~InitializeT()
        {
        }

        void InitializeComponent()
        {
            m_initialize_called = true;
            throw some_exception();
        }

        hstring ToString()
        {
            return {};
        }
    };

    struct Initialize : InitializeT<Initialize>
    {
        Initialize(bool& initialize_called) : InitializeT(initialize_called)
        {
        }
    };

    struct ThrowingDerived : InitializeT<ThrowingDerived>
    {
        ThrowingDerived(bool& initialize_called) : InitializeT(initialize_called)
        {
            throw some_exception();
        }
    };

    struct OverriddenInitialize : InitializeT<OverriddenInitialize>
    {
        OverriddenInitialize(bool& initialize_called) : InitializeT(initialize_called)
        {
        }

        void InitializeComponent()
        {
            m_initialize_called = true;
        }
    };
}

TEST_CASE("initialize")
{
    // Ensure that failure to initialize is failure to instantiate, with no side effects
    {
        bool initialize_called{};
        bool exception_caught{};
        try
        {
            make<Initialize>(initialize_called);
        }
        catch (some_exception const&)
        {
            exception_caught = true;
        }
        REQUIRE(initialize_called);
        REQUIRE(exception_caught);
    }

    // Ensure that base is never initialized if exception thrown from derived/base constructor
    {
        bool initialize_called{};
        bool exception_caught{};
        try
        {
            make<ThrowingDerived>(initialize_called);
        }
        catch (some_exception const&)
        {
            exception_caught = true;
        }
        REQUIRE(!initialize_called);
        REQUIRE(exception_caught);
    }

    // Support for overriding initialization for post-processing (e.g., accessing Xaml properties)
    {
        bool initialize_called{};
        bool exception_caught{};
        try
        {
            make<OverriddenInitialize>(initialize_called);
        }
        catch (some_exception const&)
        {
            exception_caught = true;
        }
        REQUIRE(initialize_called);
        REQUIRE(!exception_caught);
    }
}
