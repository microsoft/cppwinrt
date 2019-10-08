#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

namespace
{
    bool destroyed{};
    int strong_count{};
    int weak_count{};

    template <typename Sender, typename Args>
    struct Object : implements<Object<Sender, Args>, IInspectable>
    {
        ~Object()
        {
            destroyed = true;
        }

        void StrongHandler(Sender const&, Args const&)
        {
            ++strong_count;
        }

        void WeakHandler(Sender const&, Args const&)
        {
            ++weak_count;
        }
    };

    struct ReturnObject : implements<ReturnObject, IInspectable>
    {
        ~ReturnObject()
        {
            destroyed = true;
        }

        int Handler(int a, int b)
        {
            return a + b;
        }
    };

    template <typename Delegate, typename Sender, typename Args>
    void test_delegate()
    {
        auto object = make_self<Object<Sender, Args>>();

        Delegate strong{ object->get_strong(), &Object<Sender, Args>::StrongHandler };
        Delegate weak{ object->get_weak(), &Object<Sender, Args>::WeakHandler };

        destroyed = false;
        strong_count = 0;
        weak_count = 0;

        // Both weak and strong handlers
        strong({}, {});
        weak({}, {});
        REQUIRE(strong_count == 1);
        REQUIRE(weak_count == 1);

        // Local 'object' strong reference is released
        object = nullptr;

        // Still both since strong handler keeps object alive
        strong({}, {});
        weak({}, {});
        REQUIRE(strong_count == 2);
        REQUIRE(weak_count == 2);

        // ~Object is called since the strong delegate is destroyed
        REQUIRE(!destroyed);
        strong = nullptr;
        REQUIRE(destroyed);

        // Weak delegate remains but no longer fires
        REQUIRE(weak_count == 2);
        weak({}, {});
        REQUIRE(weak_count == 2);
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
}
