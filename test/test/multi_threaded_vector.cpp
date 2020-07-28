#include "pch.h"

#include <numeric>
#include <shared_mutex>

#include "multi_threaded_common.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

// Vector correctness tests exist elsewhere. These tests are strictly geared toward testing multi threaded functionality

template <typename T>
static void test_single_reader_single_writer(IVector<T> const& v)
{
    static constexpr int final_size = 10000;

    // Append / Size / GetAt / IndexOf
    {
        unique_thread t([&]
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
    }

    // InsertAt / Size / GetMany
    {
        v.Clear();
        unique_thread t([&]
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
    }

    // RemoveAt / Size / GetMany
    {
        unique_thread t([&]
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
    }

    // SetAt / GetMany
    {
        T vals[100];
        for (int i = 0; i < std::size(vals); ++i)
        {
            v.Append(conditional_box<T>(i));
        }

        static constexpr int iterations = 1000;
        unique_thread t([&]
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
    }

    // Append / ReplaceAll / GetMany
    {
        static constexpr int size = 10;
        v.Clear();
        for (int i = 0; i < size; ++i)
        {
            v.Append(conditional_box<T>(i));
        }

        static constexpr int iterations = 1000;
        unique_thread t([&]
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
    }
}

template <typename T>
static void test_iterator_invalidation(IVector<T> const& v)
{
    static constexpr uint32_t final_size = 100000;

    // Append / Size / First / HasCurrent / Current / MoveNext
    unique_thread t([&]
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

    // Since the insert thread yields after each insertion, this should really be in the thousands
    REQUIRE(exceptionCount > 50);
}

template <typename T>
static void test_concurrent_iteration(IVector<T> const& v)
{
    // Large enough size that all threads should have enough time to spin up
    static constexpr uint32_t size = 100000;

    // Append / Current / MoveNext / HasCurrent
    {
        for (int i = 0; i < size; ++i)
        {
            v.Append(conditional_box<T>(i));
        }

        auto itr = v.First();
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
        unique_thread threads[2];
        int totals[std::size(threads)] = {};
        for (int i = 0; i < std::size(threads); ++i)
        {
            threads[i] = unique_thread([&itr, &totals, i]()
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

    unique_thread threads[threadCount];
    for (auto& t : threads)
    {
        t = unique_thread([&v]
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

template <typename T>
struct exclusive_vector :
    vector_base<exclusive_vector<T>, T>,
    implements<exclusive_vector<T>, IVector<T>, IVectorView<T>, IIterable<T>>
{
    std::vector<T> container;
    mutable std::shared_mutex mutex;

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
    auto perform_exclusive(Func&& fn) const
    {
        // Exceptions are better than deadlocks...
        REQUIRE(mutex.try_lock());
        std::lock_guard guard(mutex, std::adopt_lock);
        return fn();
    }
};

struct vector_deadlock_object : implements<vector_deadlock_object, IReference<int>>
{
    int m_value;
    exclusive_vector<IReference<int>>* m_vector;

    vector_deadlock_object(int value, exclusive_vector<IReference<int>>* vector) :
        m_value(value),
        m_vector(vector)
    {
    }

    ~vector_deadlock_object()
    {
        // NOTE: This will crash on failure, but that's better than actually deadlocking
        REQUIRE(m_vector->mutex.try_lock());
        m_vector->mutex.unlock();
    }

    int Value() const noexcept
    {
        return m_value;
    }
};

static void deadlock_test()
{
    auto v = make_self<exclusive_vector<IReference<int>>>();

    v->Append(make<vector_deadlock_object>(42, v.get()));
    v->InsertAt(0, make<vector_deadlock_object>(8, v.get()));
    REQUIRE(v->Size() == 2);
    REQUIRE(v->GetAt(0).Value() == 8);
    uint32_t index;
    REQUIRE(v->IndexOf(42, index));
    REQUIRE(index == 1);

    v->ReplaceAll({ make<vector_deadlock_object>(1, v.get()), make<vector_deadlock_object>(2, v.get()), make<vector_deadlock_object>(3, v.get()) });
    v->SetAt(1, make<vector_deadlock_object>(4, v.get()));
    {
        IReference<int> vals[5];
        REQUIRE(v->GetMany(0, vals) == 3);
        REQUIRE(vals[0].Value() == 1);
        REQUIRE(vals[1].Value() == 4);
        REQUIRE(vals[2].Value() == 3);
    }

    v->RemoveAt(1);
    REQUIRE(v->GetAt(1).Value() == 3);
    v->RemoveAtEnd();
    REQUIRE(v->GetAt(0).Value() == 1);
    v->Clear();
    REQUIRE(v->Size() == 0);

    v->ReplaceAll({ make<vector_deadlock_object>(1, v.get()), make<vector_deadlock_object>(2, v.get()), make<vector_deadlock_object>(3, v.get()) });
    auto view = v->GetView();
    REQUIRE(view.Size() == 3);
    REQUIRE(view.GetAt(0).Value() == 1);

    {
        IReference<int> vals[5];
        REQUIRE(view.GetMany(0, vals) == 3);
        REQUIRE(vals[0].Value() == 1);
        REQUIRE(vals[1].Value() == 2);
        REQUIRE(vals[2].Value() == 3);
    }

    REQUIRE(view.IndexOf(2, index));
    REQUIRE(index == 1);

    auto itr = v->First();
    REQUIRE(itr.HasCurrent());
    REQUIRE(itr.Current().Value() == 1);
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
