#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct AsyncQueue
    {
        thread_pool m_pool;

        AsyncQueue(uint32_t const high, uint32_t const low)
        {
            m_pool.thread_limits(high, low);
        }

        IAsyncAction Async(delegate<> callback)
        {
            co_await m_pool;
            callback();
        }
    };

    uint32_t test(uint32_t const iterations, uint32_t const high, uint32_t const low)
    {
        AsyncQueue queue(high, low);
        std::vector<IAsyncAction> results;
        uint32_t counter{};

        for (uint32_t i = 0; i < iterations; ++i)
        {
            results.push_back(queue.Async([&]
                {
                    auto value = counter + 1;
                    Sleep(10); // Induce thread pool to use more threads if available, also force race condition
                    counter = value;
                }));
        }

        for (auto&& async : results)
        {
            async.get();
        }

        return counter;
    }
}

TEST_CASE("thread_pool")
{
    uint32_t const test_iterations = 100;

    uint32_t const stable_counter = test(test_iterations, 1, 1);
    uint32_t const unstable_counter = test(test_iterations, 10, 10);

    // This is determinstic since the queue is single-threaded.
    REQUIRE(stable_counter == test_iterations);

    // This is unlikely to fail since the pool is multi-threaded.
    REQUIRE(unstable_counter < test_iterations);
}
