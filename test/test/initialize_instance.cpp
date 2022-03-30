#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    class some_exception : public std::exception
    {
    public:
        some_exception() noexcept
            : exception("some_exception", 1)
        {
        }
    };

    struct MemberInitialize : implements<MemberInitialize, IStringable>
    {
        bool& m_initialize_called;

        MemberInitialize(bool& initialize_called) : m_initialize_called(initialize_called)
        {
        }

        ~MemberInitialize()
        {
        }

        void initialize_instance()
        {
            m_initialize_called = true;
            throw some_exception();
        }

        hstring ToString()
        {
            return {};
        }
    };

    template<typename D>
    struct FreeInitializeT : implements<D, IStringable>
    {
        bool& m_initialize_called;

        FreeInitializeT(bool& initialize_called) : m_initialize_called(initialize_called)
        {
        }

        ~FreeInitializeT()
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

    struct FreeInitialize : FreeInitializeT<FreeInitialize>
    {
        FreeInitialize(bool& initialize_called) : FreeInitializeT(initialize_called)
        {
        }
    };

    template <typename D>
    auto initialize_instance(FreeInitializeT<D>& instance)
    {
        static_cast<D&>(instance).InitializeComponent();
    }

    struct ThrowingDerived : FreeInitializeT<ThrowingDerived>
    {
        ThrowingDerived(bool& initialize_called) : FreeInitializeT(initialize_called)
        {
            throw some_exception();
        }
    };

    struct OverriddenInitialize : FreeInitializeT<OverriddenInitialize>
    {
        OverriddenInitialize(bool& initialize_called) : FreeInitializeT(initialize_called)
        {
        }

        void InitializeComponent()
        {
            m_initialize_called = true;
        }
    };
}

TEST_CASE("initialize_instance")
{
    // Ensure that failure to initialize is failure to instantiate, with no side effects
    {
        bool initialize_called{};
        bool exception_caught{};
        try
        {
            make<MemberInitialize>(initialize_called);
        }
        catch (some_exception const&)
        {
            exception_caught = true;
        }
        REQUIRE(initialize_called);
        REQUIRE(exception_caught);
    }

    // Same as above, but with free initialization function (Xaml scenario)
    {
        bool initialize_called{};
        bool exception_caught{};
        try
        {
            make<FreeInitialize>(initialize_called);
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
