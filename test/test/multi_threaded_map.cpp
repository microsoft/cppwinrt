#include "pch.h"

#include <numeric>
#include <thread>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

// Map correctness tests exist elsewhere. These tests are strictly geared toward testing multi threaded functionality

static void test_single_reader_single_writer(IMap<int, int> const& map)
{
    static constexpr int final_size = 10000;
    std::thread t([&]
    {
        for (int i = 0; i < final_size; ++i)
        {
            map.Insert(i, i);
        }
    });

    while (true)
    {
        int i = 0;
        auto beginSize = map.Size();
        for (; i < final_size; ++i)
        {
            if (!map.HasKey(i))
            {
                REQUIRE(static_cast<uint32_t>(i) >= beginSize);
                break;
            }

            REQUIRE(map.Lookup(i) == i);
        }

        if (i == final_size)
        {
            break;
        }
    }

    t.join();
}

static void test_iterator_invalidation(IMap<int, int> const& map)
{
    static constexpr int final_size = 10000;
    std::thread t([&]
    {
        for (int i = 0; i < final_size; ++i)
        {
            map.Insert(i, i);
            std::this_thread::yield();
        }
    });

    int exceptionCount = 0;
    bool forceExit = false;
    while (!forceExit)
    {
        forceExit = map.Size() == final_size;
        try
        {
            int expect = 0;
            for (auto itr = map.First(); itr.HasCurrent(); itr.MoveNext())
            {
                auto pair = itr.Current();
                REQUIRE(pair.Key() == expect);
                REQUIRE(pair.Value() == expect);
                ++expect;
            }

            if (expect == final_size)
            {
                break;
            }
        }
        catch (hresult_changed_state const&)
        {
            ++exceptionCount;
        }

        REQUIRE(!forceExit);
    }

    t.join();

    // Since the insert thread yields after each insertion, this should be closer to ~700+
    REQUIRE(exceptionCount > 50);
}

static void test_concurrent_iteration(IMap<int, int> const& map)
{
    static constexpr int size = 10000;
    for (int i = 0; i < size; ++i)
    {
        map.Insert(i, i);
    }

    auto itr = map.First();
    std::thread threads[2];
    int increments[std::size(threads)] = {};
    for (int i = 0; i < std::size(threads); ++i)
    {
        threads[i] = std::thread([&itr, &increments, i]
        {
            int last = -1;
            while (true)
            {
                try
                {
                    // NOTE: Because there is no atomic "get and increment" function on IIterator, the best we can do is
                    // validate that we're getting valid increasing values, e.g. as opposed to validating that we read
                    // all unique values.
                    auto val = itr.Current().Key();
                    REQUIRE(val > last);
                    REQUIRE(val < size);
                    last = val;
                    if (!itr.MoveNext())
                    {
                        break;
                    }

                    // MoveNext is the only synchronized operation that has a predictable side effect we can validate
                    ++increments[i];
                }
                catch (hresult_error const&)
                {
                    // There's no "get if" function, so concurrent increment past the end is always possible...
                    REQUIRE(!itr.HasCurrent());
                    break;
                }
            }
        });
    }

    for (auto& t : threads)
    {
        t.join();
    }

    REQUIRE(!itr.HasCurrent());

    auto totalIncrements = std::accumulate(std::begin(increments), std::end(increments), 0);
    REQUIRE(totalIncrements == (size - 1));
}

static void test_multi_writer(IMap<int, int> const& map)
{
    // Large enough that several threads should be executing concurrently
    static constexpr uint32_t size = 10000;
    static constexpr size_t threadCount = 8;
    std::thread threads[threadCount];
    for (int i = 0; i < threadCount; ++i)
    {
        threads[i] = std::thread([&map, i]
        {
            auto off = i * size;
            for (int j = 0; j < size; ++j)
            {
                map.Insert(j + off, j);
            }
        });
    }

    for (auto& t : threads)
    {
        t.join();
    }

    REQUIRE(map.Size() == (size * threadCount));

    // sum(i = 1 -> N){i} = N * (N + 1) / 2
    auto sum = std::accumulate(begin(map), end(map), 0, [](int curr, auto&& pair) { return curr + pair.Value(); });
    REQUIRE(sum == ((threadCount * (size - 1) * size) / 2));
}

struct exclusive_map :
    map_base<exclusive_map, int, int>,
    implements<exclusive_map, IMap<int, int>, IMapView<int, int>, IIterable<IKeyValuePair<int, int>>>
{
    std::map<int, int> container;
    mutable slim_mutex mutex;

    auto& get_container() noexcept
    {
        return container;
    }

    auto& get_container() const noexcept
    {
        return container;
    }

    // It is not safe to recursively acquire an SRWLOCK, even in shared mode, however this is unchecked by the SRWLOCK
    // implementation. Using a vector that only performs exclusive operations is the simplest way to validate that
    // the implementation does not attempt to recursively acquire the mutex.
    template <typename Func>
    auto exclusive_op(Func&& fn) const
    {
        slim_lock_guard guard(mutex);
        return fn();
    }
};

static void deadlock_test()
{
    auto map = make<exclusive_map>();

    map.Insert(0, 0);
    map.Insert(1, 1);
    REQUIRE(map.Size() == 2);
    REQUIRE(map.HasKey(0));
    REQUIRE(!map.HasKey(2));
    REQUIRE(map.Lookup(0) == 0);
    map.Remove(0);
    REQUIRE(map.Size() == 1);
    map.Clear();
    REQUIRE(map.Size() == 0);

    map.Insert(0, 0);
    map.Insert(1, 1);
    auto view = map.GetView();
    REQUIRE(view.Size() == 2);
    REQUIRE(view.HasKey(0));
    REQUIRE(view.Lookup(1) == 1);

    auto itr = map.First();
    REQUIRE(itr.HasCurrent());
    REQUIRE(itr.Current().Key() == 0);
    REQUIRE(itr.MoveNext());
    REQUIRE(!itr.MoveNext());
    REQUIRE(!itr.HasCurrent());
}

TEST_CASE("multi_threaded_map")
{
    test_single_reader_single_writer(multi_threaded_map<int, int>());
    test_iterator_invalidation(multi_threaded_map<int, int>());
    test_concurrent_iteration(multi_threaded_map<int, int>());
    test_multi_writer(multi_threaded_map<int, int>());
    deadlock_test();
}

TEST_CASE("multi_threaded_observable_map")
{
    test_single_reader_single_writer(multi_threaded_observable_map<int, int>());
    test_iterator_invalidation(multi_threaded_observable_map<int, int>());
    test_concurrent_iteration(multi_threaded_observable_map<int, int>());
    test_multi_writer(multi_threaded_observable_map<int, int>());
}
