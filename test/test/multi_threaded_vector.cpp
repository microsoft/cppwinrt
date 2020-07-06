#include "pch.h"

#include <numeric>
#include <thread>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

// Vector correctness tests exist elsewhere. These tests are strictly geared toward testing multi threaded functionality

struct signal
{
    HANDLE m_handle;

    signal() : m_handle(::CreateEventW(nullptr, true, false, nullptr))
    {
        REQUIRE(m_handle != nullptr);
    }

    ~signal()
    {
        if (m_handle)
        {
            ::CloseHandle(m_handle);
        }
    }

    void set()
    {
        WINRT_VERIFY(::SetEvent(m_handle));
    }

    bool wait(DWORD timeoutMs = INFINITE)
    {
        auto result = ::WaitForSingleObject(m_handle, timeoutMs);
        REQUIRE(((result == WAIT_OBJECT_0) || (result == WAIT_TIMEOUT)));
        return result == WAIT_OBJECT_0;
    }
};

static void test_single_reader_single_writer(IVector<int> const& v)
{
    static constexpr uint32_t final_size = 100000;

    std::thread t([&]
    {
        for (int i = 0; i < final_size; ++i)
        {
            v.Append(i);
        }
    });

    bool done = false;
    bool caughtException = false;
    auto iterable = v.as<IIterable<int>>(); // Don't use the 'fast_iterator'
    while (!done)
    {
        try
        {
            bool forceExit = v.Size() == final_size;

            int expected = 0;
            for (auto val : iterable)
            {
                REQUIRE(val == expected++);
            }
            done = expected == final_size;

            if (forceExit)
            {
                break;
            }
        }
        catch (hresult_changed_state const&)
        {
            // Since we're concurrently modifying the vector, this is expected
            caughtException = true;
        }
    }
    REQUIRE(done);
    // The size was chosen such that this should virtually always be true, however this cannot be guaranteed
    // REQUIRE(caughtException);

    t.join();

    static constexpr uint32_t read_size = 100;
    done = false;
    signal s;
    t = std::thread([&]
    {
        s.set();
        while (!done)
        {
            for (int i = 0; i < read_size; ++i)
            {
                v.SetAt(i, v.GetAt(i) - 1);
            }
        }
    });
    s.wait();

    int vals[read_size];
    for (int i = 0; i < 20; ++i)
    {
        auto len = v.GetMany(0, vals);
        REQUIRE(len == read_size);

        int jumpCount = 0;
        for (int j = 1; j < read_size; ++j)
        {
            auto diff = vals[j] - vals[j - 1];
            REQUIRE(((diff > 0) && (diff <= 2)));
            jumpCount += (diff == 2) ? 1 : 0;
        }
        REQUIRE(jumpCount <= 1);
    }

    done = true;
    t.join();
}

static void test_concurrent_iteration(IVector<int> const& v)
{
    // Large enough size that all threads should have enough time to spin up
    static constexpr uint32_t size = 10000;
    for (int i = 0; i < size; ++i)
    {
        v.Append(i);
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
                    auto val = itr.Current();
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

static void test_multi_writer(IVector<int> const& v)
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
                v.Append(i);
            }
        });
    }

    for (auto& t : threads)
    {
        t.join();
    }

    REQUIRE(v.Size() == (size * threadCount));

    // sum(i = 1 -> N){i} = N * (N + 1) / 2
    auto sum = std::accumulate(begin(v), end(v), 0);
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
    test_concurrent_iteration(multi_threaded_vector<int>());
    test_multi_writer(multi_threaded_vector<int>());
    deadlock_test();
}

TEST_CASE("multi_threaded_observable_vector")
{
    test_single_reader_single_writer(multi_threaded_observable_vector<int>());
    test_concurrent_iteration(multi_threaded_observable_vector<int>());
    test_multi_writer(multi_threaded_observable_vector<int>());
}
