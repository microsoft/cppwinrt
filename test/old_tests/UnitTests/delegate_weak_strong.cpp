#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

namespace
{
    struct Counters
    {
        bool destroyed{};
        int strong_count{};
        int weak_count{};
        int weak_lambda_count{};

        bool is_count(int value)
        {
            return strong_count == value && weak_count == value && weak_lambda_count == value;
        }
    };

    template <typename Sender, typename Args>
    struct Object : implements<Object<Sender, Args>, IInspectable>
    {
        std::shared_ptr<Counters> m_counters;

        Object(std::shared_ptr<Counters> const& counters) : m_counters(counters) {}

        static auto make(std::shared_ptr<Counters> const& counters)
        {
            return make_self<Object>(counters);
        }

        auto strong() { return this->get_strong(); }
        auto weak() { return this->get_weak(); }

        ~Object()
        {
            m_counters->destroyed = true;
        }

        void StrongHandler(Sender const&, Args const&)
        {
            REQUIRE(!m_counters->destroyed);
            ++m_counters->strong_count;
        }

        void WeakHandler(Sender const&, Args const&)
        {
            REQUIRE(!m_counters->destroyed);
            ++m_counters->weak_count;
        }
    };

    template <typename Sender, typename Args>
    struct ObjectStd : std::enable_shared_from_this<ObjectStd<Sender, Args>>
    {
        std::shared_ptr<Counters> m_counters;

        ObjectStd(std::shared_ptr<Counters> const& counters) : m_counters(counters) {}

        static auto make(std::shared_ptr<Counters> const& counters)
        {
            return std::make_shared<ObjectStd>(counters);
        }

        auto strong() { return this->shared_from_this(); }
        auto weak() { return this->weak_from_this(); }

        ~ObjectStd()
        {
            m_counters->destroyed = true;
        }

        void StrongHandler(Sender const&, Args const&)
        {
            ++m_counters->strong_count;
        }

        void WeakHandler(Sender const&, Args const&)
        {
            ++m_counters->weak_count;
        }
    };

    struct ReturnObject : implements<ReturnObject, IInspectable>
    {
        int Handler(int a, int b)
        {
            return a + b;
        }
    };

    struct ReturnObjectStd : std::enable_shared_from_this<ReturnObjectStd>
    {
        int Handler(int a, int b)
        {
            return a + b;
        }
    };

    template <typename Recipient, typename Delegate>
    void test_delegate_pattern()
    {
        auto counters = std::make_shared<Counters>();
        auto object = Recipient::make(counters);

        Delegate strong{ object->strong(), &Recipient::StrongHandler};
        Delegate weak{ object->weak(), &Recipient::WeakHandler };
        Delegate weak_lambda{ object->weak(),[counters](auto&&, auto&&) {
            REQUIRE(!counters->destroyed);
            ++counters->weak_lambda_count;
        } };

        // All handlers are active at this point
        strong({}, {});
        weak({}, {});
        weak_lambda({}, {});
        REQUIRE(counters->is_count(1));

        // Local 'object' strong reference is released
        object = nullptr;

        // Still invoked since strong handler keeps object alive
        strong({}, {});
        weak({}, {});
        weak_lambda({}, {});
        REQUIRE(counters->is_count(2));

        // ~Recipient is called since the strong delegate is destroyed
        REQUIRE(!counters->destroyed);
        strong = nullptr;
        REQUIRE(counters->destroyed);

        // Weak delegate remains but no longer fires
        // Strong delegate shouldn't fire either
        REQUIRE(counters->is_count(2));
        weak({}, {});
        weak_lambda({}, {});
        REQUIRE(counters->is_count(2));
    }

    template <typename Delegate, typename Sender, typename Args>
    void test_delegate_winrt()
    {
        test_delegate_pattern<Object<Sender, Args>, Delegate>();
    }

    template <typename Delegate, typename Sender, typename Args>
    void test_delegate_std()
    {
        test_delegate_pattern<ObjectStd<Sender, Args>, Delegate>();
    }

    template <typename Delegate, typename Sender, typename Args>
    void test_delegate()
    {
        test_delegate_winrt<Delegate, Sender, Args>();
        test_delegate_std<Delegate, Sender, Args>();
    }
}

TEST_CASE("delegate_weak_strong")
{
    // Delegates in base.h

    test_delegate<EventHandler<int>, IInspectable, int>();
    test_delegate<TypedEventHandler<int, int>, int, int>();

    test_delegate<AsyncActionCompletedHandler, IAsyncAction, AsyncStatus>();

    test_delegate<AsyncActionProgressHandler<int>, IAsyncActionWithProgress<int>, int>();
    test_delegate<AsyncActionWithProgressCompletedHandler<int>, IAsyncActionWithProgress<int>, AsyncStatus>();

    test_delegate<AsyncOperationProgressHandler<int, int>, IAsyncOperationWithProgress<int, int>, int>();
    test_delegate<AsyncOperationWithProgressCompletedHandler<int, int>, IAsyncOperationWithProgress<int, int>, AsyncStatus>();

    test_delegate<AsyncOperationCompletedHandler<int>, IAsyncOperation<int>, AsyncStatus>();

    test_delegate<VectorChangedEventHandler<int>, IObservableVector<int>, IVectorChangedEventArgs>();
    test_delegate<MapChangedEventHandler<int, int>, IObservableMap<int, int>, IMapChangedEventArgs<int>>();

    // Generated delegate

    test_delegate<Component::TwoArgDelegate, int, int>();

    // Delegates that return a value aren't supported with get_weak. This is very rare and only used for non-event
    // scenarios such as callbacks so weak support isn't interesting anyway, but it does work with get_strong.

    auto object = make_self<ReturnObject>();
    Component::TwoArgDelegateReturn strong{ object->get_strong(), &ReturnObject::Handler };
    REQUIRE(5 == strong(2, 3));

    auto objectStd = std::make_shared<ReturnObjectStd>();
    Component::TwoArgDelegateReturn strongStd{ objectStd->shared_from_this(), &ReturnObjectStd::Handler };
    REQUIRE(5 == strongStd(2, 3));
}
