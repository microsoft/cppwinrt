#include "pch.h"

#include <numeric>
#include <thread>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

// Vector correctness tests exist elsewhere. These tests are strictly geared toward testing multi threaded functionality

template <typename T> // int or IInspectable
static T conditional_box(int value)
{
    if constexpr (std::is_same_v<T, int>)
    {
        return value;
    }
    else
    {
        return box_value(value);
    }
}

template <typename T>
static int conditional_unbox(T const& value)
{
    if constexpr (std::is_same_v<T, int>)
    {
        return value;
    }
    else
    {
        return unbox_value<int>(value);
    }
}

template <typename T>
static void test_single_reader_single_writer(IVector<T> const& v)
{
    static constexpr int final_size = 10000;

    // Append / Size / GetAt / IndexOf
    {
        std::thread t([&]
        {
            for (int i = 0; i < final_size; ++i)
            {
                v.Append(conditional_box<T>(i));
                std::this_thread::yield();
            }
        });

        while (true)
        {
            auto beginSize = v.Size();
            int i = 0;
            for (; i < final_size; ++i)
            {
                if (static_cast<uint32_t>(i) >= v.Size())
                {
                    REQUIRE(static_cast<uint32_t>(i) >= beginSize);
                    break;
                }

                REQUIRE(conditional_unbox(v.GetAt(i)) == i);

                if constexpr (std::is_same_v<T, int>)
                {
                    uint32_t index;
                    REQUIRE(v.IndexOf(i, index));
                    REQUIRE(index == static_cast<uint32_t>(i));
                }
            }

            if (i == final_size)
            {
                break;
            }
            REQUIRE(beginSize != final_size);
        }
        t.join();
    }

    // InsertAt / Size / GetMany
    {
        v.Clear();
        std::thread t([&]
        {
            for (int i = 0; i < final_size; ++i)
            {
                v.InsertAt(0, conditional_box<T>(i));
                std::this_thread::yield();
            }
        });

        T vals[100];
        while (v.Size() < final_size)
        {
            auto len = v.GetMany(0, vals);
            for (uint32_t i = 1; i < len; ++i)
            {
                REQUIRE(conditional_unbox(vals[i]) == (conditional_unbox(vals[i - 1]) - 1));
            }
        }
        t.join();
    }

    // RemoveAt / Size / GetMany
    {
        std::thread t([&]
        {
            while (v.Size() != 0)
            {
                v.RemoveAt(0);
                std::this_thread::yield();
            }
        });

        T vals[100];
        while (v.Size() > 0)
        {
            auto len = v.GetMany(0, vals);
            for (uint32_t i = 1; i < len; ++i)
            {
                REQUIRE(conditional_unbox(vals[i]) == (conditional_unbox(vals[i - 1]) - 1));
            }
        }
        t.join();
    }

    // SetAt / GetMany
    {
        T vals[100];
        for (int i = 0; i < std::size(vals); ++i)
        {
            v.Append(conditional_box<T>(i));
        }

        static constexpr int iterations = 1000;
        std::thread t([&]
        {
            for (int i = 1; i <= iterations; ++i)
            {
                for (int j = 0; j < std::size(vals); ++j)
                {
                    v.SetAt(j, conditional_box<T>(j + i));
                }
                std::this_thread::yield();
            }
        });

        while (conditional_unbox(v.GetAt(0)) != iterations)
        {
            v.GetMany(0, vals);
            int jumps = 0;
            for (int i = 1; i < std::size(vals); ++i)
            {
                auto prev = conditional_unbox(vals[i - 1]);
                auto curr = conditional_unbox(vals[i]);
                if (prev == curr)
                {
                    ++jumps;
                }
                else
                {
                    REQUIRE(curr == (prev + 1));
                }
            }
            REQUIRE(jumps <= 1);
        }

        t.join();
    }

    // Append / ReplaceAll / GetMany
    {
        static constexpr int size = 10;
        for (int i = 0; i < size; ++i)
        {
            v.Append(conditional_box<T>(i));
        }

        static constexpr int iterations = 1000;
        std::thread t([&]
        {
            T newVals[size];
            for (int i = 1; i <= iterations; ++i)
            {
                for (int j = 0; j < size; ++j)
                {
                    newVals[j] = conditional_box<T>(i + j);
                }
                v.ReplaceAll(newVals);
            }
        });

        T vals[size];
        do
        {
            auto len = v.GetMany(0, vals);
            REQUIRE(len == size);
            for (int i = 1; i < size; ++i)
            {
                REQUIRE(conditional_unbox(vals[i]) == (conditional_unbox(vals[i - 1]) + 1));
            }
        }
        while (conditional_unbox(vals[0]) != iterations);

        t.join();
    }
}

template <typename T>
static void test_iterator_invalidation(IVector<T> const& v)
{
    static constexpr uint32_t final_size = 100000;

    // Append / Size / First / HasCurrent / Current / MoveNext
    std::thread t([&]
    {
        for (int i = 0; i < final_size; ++i)
        {
            v.Append(conditional_box<T>(i));
            std::this_thread::yield();
        }
    });

    int exceptionCount = 0;
    bool forceExit = false;
    while (!forceExit)
    {
        forceExit = v.Size() == final_size;
        try
        {
            int expect = 0;
            for (auto itr = v.First(); itr.HasCurrent(); itr.MoveNext())
            {
                auto val = conditional_unbox(itr.Current());
                REQUIRE(val == expect++);
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

    // Since the insert thread yields after each insertion, this should really be in the thousands
    REQUIRE(exceptionCount > 50);
}

template <typename T>
static void test_concurrent_iteration(IVector<T> const& v)
{
    // Large enough size that all threads should have enough time to spin up
    static constexpr uint32_t size = 10000;

    // Append / Current / MoveNext / HasCurrent
    {
        for (int i = 0; i < size; ++i)
        {
            v.Append(conditional_box<T>(i));
        }

        auto itr = v.First();
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
                        auto val = conditional_unbox(itr.Current());
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
        auto itr = v.First();
        std::thread threads[2];
        int totals[std::size(threads)] = {};
        for (int i = 0; i < std::size(threads); ++i)
        {
            threads[i] = std::thread([&itr, &totals, i]()
            {
                T vals[10];
                while (itr.HasCurrent())
                {
                    // Unlike 'Current', 'GetMany' _is_ atomic in regards to read+increment
                    auto len = itr.GetMany(vals);
                    totals[i] += std::accumulate(vals, vals + len, 0, [](int curr, T const& next) { return curr + conditional_unbox(next); });
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
static void test_multi_writer(IVector<T> const& v)
{
    // Large enough that several threads should be executing concurrently
    static constexpr uint32_t size = 10000;
    static constexpr size_t threadCount = 8;

    std::thread threads[threadCount];
    for (auto& t : threads)
    {
        t = std::thread([&v]
        {
            for (int i = 0; i < size; ++i)
            {
                v.Append(conditional_box<T>(i));
            }
        });
    }

    for (auto& t : threads)
    {
        t.join();
    }

    REQUIRE(v.Size() == (size * threadCount));

    // sum(i = 1 -> N){i} = N * (N + 1) / 2
    auto sum = std::accumulate(begin(v), end(v), 0, [](int curr, T const& next) { return curr + conditional_unbox(next); });
    REQUIRE(sum == ((threadCount * (size - 1) * size) / 2));
}

struct exclusive_vector :
    vector_base<exclusive_vector, int>,
    implements<exclusive_vector, IVector<int>, IVectorView<int>, IIterable<int>>
{
    std::vector<int> container;
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
    auto v = make<exclusive_vector>();

    v.Append(42);
    v.InsertAt(0, 8);
    REQUIRE(v.Size() == 2);
    REQUIRE(v.GetAt(0) == 8);
    uint32_t index;
    REQUIRE(v.IndexOf(42, index));
    REQUIRE(index == 1);
    v.ReplaceAll({ 1, 2, 3 });
    v.SetAt(1, 4);
    int vals[5];
    REQUIRE(v.GetMany(0, vals) == 3);
    REQUIRE(vals[0] == 1);
    REQUIRE(vals[1] == 4);
    REQUIRE(vals[2] == 3);
    v.RemoveAt(1);
    REQUIRE(v.GetAt(1) == 3);
    v.RemoveAtEnd();
    REQUIRE(v.GetAt(0) == 1);
    v.Clear();
    REQUIRE(v.Size() == 0);

    v.ReplaceAll({ 1, 2, 3 });
    auto view = v.GetView();
    REQUIRE(v.Size() == 3);
    REQUIRE(v.GetAt(0) == 1);
    REQUIRE(v.GetMany(0, vals) == 3);
    REQUIRE(vals[0] == 1);
    REQUIRE(vals[1] == 2);
    REQUIRE(vals[2] == 3);
    REQUIRE(v.IndexOf(2, index));
    REQUIRE(index == 1);

    auto itr = v.First();
    REQUIRE(itr.HasCurrent());
    REQUIRE(itr.Current() == 1);
    REQUIRE(itr.MoveNext());
    REQUIRE(itr.MoveNext());
    REQUIRE(!itr.MoveNext());
    REQUIRE(!itr.HasCurrent());
}

TEST_CASE("multi_threaded_vector")
{
    test_single_reader_single_writer(multi_threaded_vector<int>());
    test_single_reader_single_writer(multi_threaded_vector<IInspectable>());

    test_iterator_invalidation(multi_threaded_vector<int>());
    test_iterator_invalidation(multi_threaded_vector<IInspectable>());

    test_concurrent_iteration(multi_threaded_vector<int>());
    test_concurrent_iteration(multi_threaded_vector<IInspectable>());

    test_multi_writer(multi_threaded_vector<int>());
    test_multi_writer(multi_threaded_vector<IInspectable>());

    deadlock_test();
}

TEST_CASE("multi_threaded_observable_vector")
{
    test_single_reader_single_writer<int>(multi_threaded_observable_vector<int>());
    test_single_reader_single_writer<IInspectable>(multi_threaded_observable_vector<IInspectable>());
    test_single_reader_single_writer(multi_threaded_observable_vector<int>().as<IVector<IInspectable>>());

    test_iterator_invalidation<int>(multi_threaded_observable_vector<int>());
    test_iterator_invalidation<IInspectable>(multi_threaded_observable_vector<IInspectable>());
    test_iterator_invalidation(multi_threaded_observable_vector<int>().as<IVector<IInspectable>>());

    test_concurrent_iteration<int>(multi_threaded_observable_vector<int>());
    test_concurrent_iteration<IInspectable>(multi_threaded_observable_vector<IInspectable>());
    test_concurrent_iteration(multi_threaded_observable_vector<int>().as<IVector<IInspectable>>());

    test_multi_writer<int>(multi_threaded_observable_vector<int>());
    test_multi_writer<IInspectable>(multi_threaded_observable_vector<IInspectable>());
    test_multi_writer(multi_threaded_observable_vector<int>().as<IVector<IInspectable>>());
}
