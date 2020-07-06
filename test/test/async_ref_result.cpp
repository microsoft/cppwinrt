#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that references returned by awaitables
    // are not accidentally decayed.
    //
    // This test "runs" at compile time via static_assert.

    template <typename T>
    struct awaitable : std::experimental::suspend_never
    {
        std::decay_t<T> value;
        T await_resume() { return static_cast<T>(value); }
    };

    template <typename T>
    struct awaitable_member_awaiter : std::experimental::suspend_never
    {
        decltype(auto) get_awaiter() { return *this; }
        std::decay_t<T> value;
        T await_resume() { return static_cast<T>(value); }
    };

    template <typename T>
    struct awaitable_free_awaiter : std::experimental::suspend_never
    {
        std::decay_t<T> value;
        T await_resume() { return static_cast<T>(value); }
    };
    template<typename T>
    decltype(auto) get_awaiter(awaitable_free_awaiter<T>&& value) { return std::move(value); }

    template<template<typename> typename A, typename T>
    IAsyncAction Check()
    {
        decltype(auto) value = co_await A<T>();
        static_assert(std::is_same_v<decltype(value), T>);
    }

    template<template<typename> typename A>
    IAsyncAction Check()
    {
        co_await Check<A, hstring>();
        co_await Check<A, hstring&>();
        co_await Check<A, hstring&&>();
        co_await Check<A, hstring const&>();
    }

    IAsyncAction Test()
    {
        co_await Check<awaitable>();
        co_await Check<awaitable_member_awaiter>();
        co_await Check<awaitable_free_awaiter>();
    }
}

TEST_CASE("async_ref_result")
{
    Test().get();
}
