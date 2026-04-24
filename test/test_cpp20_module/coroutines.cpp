#include "pch.h"

import std;
import winrt_base;
import winrt.Windows.Foundation;

using namespace winrt;
using namespace Windows::Foundation;

IAsyncAction do_nothing_async()
{
    co_return;
}

IAsyncOperation<int> return_42_async()
{
    co_return 42;
}

IAsyncOperation<hstring> return_string_async()
{
    co_return L"module coroutine";
}

IAsyncAction chain_async()
{
    auto result = co_await return_string_async();
    REQUIRE(!result.empty());
}

IAsyncOperation<int> slow_operation()
{
    co_await resume_after(std::chrono::hours(1));
    co_return 0;
}

TEST_CASE("module_async_action")
{
    auto action = do_nothing_async();
    action.get();
    REQUIRE(action.Status() == AsyncStatus::Completed);
}

TEST_CASE("module_async_operation")
{
    REQUIRE(return_42_async().get() == 42);
}

TEST_CASE("module_async_chain")
{
    chain_async().get();
}

TEST_CASE("module_async_cancel")
{
    auto op = slow_operation();
    op.Cancel();
    REQUIRE(op.Status() == AsyncStatus::Canceled);
}
