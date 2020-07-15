#include "pch.h"

#include <numeric>

#include "multi_threaded_common.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

// Map correctness tests exist elsewhere. These tests are strictly geared toward testing multi threaded functionality

template <typename T>
static void test_single_reader_single_writer(IMap<int, T> const& map)
{
    static constexpr int final_size = 10000;

    // Insert / HasKey / Lookup
    unique_thread t([&]
    {
        for (int i = 0; i < final_size; ++i)
        {
            map.Insert(i, conditional_box<T>(i));
            std::this_thread::yield();
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

            REQUIRE(conditional_unbox(map.Lookup(i)) == i);
        }

        if (i == final_size)
        {
            break;
        }
    }
}

template <typename T>
static void test_iterator_invalidation(IMap<int, T> const& map)
{
    static constexpr int size = 10;

    // Remove / Insert / First / HasCurrent / MoveNext / Current
    for (int i = 0; i < size; ++i)
    {
        map.Insert(i, conditional_box<T>(i));
    }

    volatile bool done = false;
    unique_thread t([&]
    {
        // Since the underlying storage is std::map, it's actually quite hard to hit UB that has an observable side
        // effect, making it hard to have a meaningful test. The idea here is to remove and re-insert the "first"
        // element in a tight loop so that enumeration is likely to hit a concurrent access that's actually meaningful.
        // Even then, failures really only occur with a single threaded collection when building Debug
        while (!done)
        {
            map.Remove(0);
            map.Insert(0, conditional_box<T>(0));
        }
    });

    int exceptionCount = 0;

    for (int i = 0; i < 10000; ++i)
    {
        try
        {
            int count = 0;
            for (auto itr = map.First(); itr.HasCurrent(); itr.MoveNext())
            {
                auto pair = itr.Current();
                REQUIRE(pair.Key() == conditional_unbox(pair.Value()));
                ++count;
            }
            REQUIRE(count >= (size - 1));
            REQUIRE(count <= size);
        }
        catch (hresult_changed_state const&)
        {
            ++exceptionCount;
        }
    }
    done = true;

    // In reality, this number should be quite large; much larger than the 50 validated here
    REQUIRE(exceptionCount >= 50);
}

template <typename T>
static void test_concurrent_iteration(IMap<int, T> const& map)
{
    static constexpr int size = 10000;

    // Current / HasCurrent
    {
        for (int i = 0; i < size; ++i)
        {
            map.Insert(i, conditional_box<T>(i));
        }

        auto itr = map.First();
        unique_thread threads[2];
        int increments[std::size(threads)] = {};
        for (int i = 0; i < std::size(threads); ++i)
        {
            threads[i] = unique_thread([&itr, &increments, i]
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

    // HasCurrent / GetMany
    {
        auto itr = map.First();
        unique_thread threads[2];
        int totals[std::size(threads)] = {};
        for (int i = 0; i < std::size(threads); ++i)
        {
            threads[i] = unique_thread([&itr, &totals, i]
            {
                IKeyValuePair<int, T> vals[10];
                while (itr.HasCurrent())
                {
                    // Unlike 'Current', 'GetMany' _is_ atomic in regards to read+increment
                    auto len = itr.GetMany(vals);
                    totals[i] += std::accumulate(vals, vals + len, 0, [](int curr, auto const& next) { return curr + next.Key(); });
                }
            });
        }

        for (auto& t : threads)
        {
            t.join();
        }

        // sum(i = 1 -> N){i} = N * (N + 1) / 2
        auto total = std::accumulate(std::begin(totals), std::end(totals), 0);
        REQUIRE(total == (size * (size - 1) / 2));
    }
}

template <typename T>
static void test_multi_writer(IMap<int, T> const& map)
{
    // Large enough that several threads should be executing concurrently
    static constexpr uint32_t size = 10000;
    static constexpr size_t threadCount = 8;

    // Insert
    unique_thread threads[threadCount];
    for (int i = 0; i < threadCount; ++i)
    {
        threads[i] = unique_thread([&map, i]
        {
            auto off = i * size;
            for (int j = 0; j < size; ++j)
            {
                map.Insert(j + off, conditional_box<T>(j));
            }
        });
    }

    for (auto& t : threads)
    {
        t.join();
    }

    REQUIRE(map.Size() == (size * threadCount));

    // sum(i = 1 -> N){i} = N * (N + 1) / 2
    auto sum = std::accumulate(begin(map), end(map), 0, [](int curr, auto&& pair) { return curr + conditional_unbox(pair.Value()); });
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
    test_single_reader_single_writer(multi_threaded_map<int, IInspectable>());

    test_iterator_invalidation(multi_threaded_map<int, int>());
    test_iterator_invalidation(multi_threaded_map<int, IInspectable>());

    test_concurrent_iteration(multi_threaded_map<int, int>());
    test_concurrent_iteration(multi_threaded_map<int, IInspectable>());

    test_multi_writer(multi_threaded_map<int, int>());
    test_multi_writer(multi_threaded_map<int, IInspectable>());

    deadlock_test();
}

TEST_CASE("multi_threaded_observable_map")
{
    test_single_reader_single_writer<int>(multi_threaded_observable_map<int, int>());
    test_single_reader_single_writer<IInspectable>(multi_threaded_observable_map<int, IInspectable>());

    test_iterator_invalidation<int>(multi_threaded_observable_map<int, int>());
    test_iterator_invalidation<IInspectable>(multi_threaded_observable_map<int, IInspectable>());

    test_concurrent_iteration<int>(multi_threaded_observable_map<int, int>());
    test_concurrent_iteration<IInspectable>(multi_threaded_observable_map<int, IInspectable>());

    test_multi_writer<int>(multi_threaded_observable_map<int, int>());
    test_multi_writer<IInspectable>(multi_threaded_observable_map<int, IInspectable>());
}
