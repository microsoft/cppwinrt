#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation::Collections;

#if defined(__cpp_explicit_this_parameter) && __cpp_explicit_this_parameter >= 202110L

TEST_CASE("delegate")
{
    // <>
    {
        bool invoked = false;
        delegate<> d = [&](this auto) { invoked = true; };
        d();
        REQUIRE(invoked);
    }

    // <int>
    {
        int result = 0;
        delegate<int> d = [&](this auto, int a) { result = a; };
        d(123);
        REQUIRE(result == 123);
    }

    // <int,int>
    {
        int result = 0;
        delegate<int, int> d = [&](this auto, int a, int b) { result = a + b; };
        d(4,5);
        REQUIRE(result == 9);
    }

    // void()
    {
        bool invoked = false;
        delegate<void()> d = [&](this auto) { invoked = true; };
        d();
        REQUIRE(invoked);
    }

    // void(int)
    {
        int result = 0;
        delegate<void(int)> d = [&](this auto, int a) { result = a; };
        d(123);
        REQUIRE(result == 123);
    }

    // void(int,int)
    {
        int result = 0;
        delegate<void(int,int)> d = [&](this auto, int a, int b) { result = a + b; };
        d(4, 5);
        REQUIRE(result == 9);
    }

    // int()
    {
        delegate<int()> d = [](this auto) { return 123; };
        REQUIRE(d() == 123);
    }

    // int(int)
    {
        delegate<int(int)> d = [](this auto, int a) { return a; };
        REQUIRE(d(123) == 123);
    }

    // int(int,int)
    {
        delegate<int(int, int)> d = [](this auto, int a, int b) { return a + b; };
        REQUIRE(d(4, 5) == 9);
    }
}

TEST_CASE("typedeventhandler")
{
    using Handler = winrt::Windows::Foundation::TypedEventHandler<int, int>;

    int called{};
    int sum{};

    Handler handler = [&called, &sum](this auto, int sender, int args)
    {
        ++called;
        sum = sender + args;
    };

    handler(1, 2);

    REQUIRE(called == 1);
    REQUIRE(sum == 3);
}

TEST_CASE("observablevector_vectorchanged")
{
    IObservableVector<int> vector = single_threaded_observable_vector<int>();

    int called{};
    IObservableVector<int> observed_sender{ nullptr };
    CollectionChange change{};
    uint32_t index{};

    auto token = vector.VectorChanged([&](this auto, IObservableVector<int> sender, IVectorChangedEventArgs args)
        {
            ++called;
            observed_sender = sender;
            change = args.CollectionChange();
            index = args.Index();
        });

    vector.Append(123);

    REQUIRE(called == 1);
    REQUIRE(observed_sender == vector);
    REQUIRE(change == CollectionChange::ItemInserted);
    REQUIRE(index == 0);

    vector.VectorChanged(token);
}

#endif
