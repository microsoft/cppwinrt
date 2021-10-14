#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    //
    // Checks that awaiting an already-completed async operation
    // does not destroy the operation from within the Completed handler.
    // The Completed handler may run synchronously, and destroying the
    // operation from within the Completed handler pulls the rug out
    // from under the operation!
    //
    struct already_completed : implements<already_completed, IAsyncAction, IAsyncInfo>
    {
        void Completed(AsyncActionCompletedHandler const& complete)
        {
            auto self = get_weak();
            complete(*this, AsyncStatus::Completed);
            REQUIRE(self.get() != nullptr);
        }

        auto Completed() const noexcept
        {
            return nullptr;
        }

        uint32_t Id() const noexcept
        {
            return 1;
        }

        AsyncStatus Status() const noexcept
        {
            return AsyncStatus::Completed;
        }

        hresult ErrorCode() const noexcept
        {
            return 0;
        }

        void GetResults() const noexcept
        {
        }

        void Cancel() const noexcept
        {
        }

        void Close() const noexcept
        {
        }
    };

    IAsyncAction TestCompleted()
    {
        co_await make<already_completed>();
    }
}

TEST_CASE("async_completed")
{
    TestCompleted().get();
}

namespace
{
    //
    // Checks that awaiting an already-completed async operation
    // does not consume additional stack.
    //
    IAsyncAction AlreadyCompleted()
    {
        co_return;
    }

    uintptr_t approximate_stack_pointer()
    {
#ifdef _MSC_VER
        return reinterpret_cast<uintptr_t>(_AddressOfReturnAddress());
#else
        // gcc, clang, and icc all support this.
        return reinterpret_cast<uintptr_t>(__builtin_frame_address(0));
#endif
    }

    // Simple awaiter that (inefficiently) resumes from inside
    // await_suspend, for the purpose of measuring how much stack it consumes.
    // This is the best we can do with MSVC prerelease coroutines prior to 16.11.
    struct resume_sync_from_await_suspend
    {
        bool await_ready() { return false; }
        void await_suspend(winrt::impl::coroutine_handle<> h) { h(); }
        void await_resume() { }
    };

    IAsyncAction SyncCompletion()
    {
        uintptr_t initial = approximate_stack_pointer();
        co_await resume_sync_from_await_suspend();
        uintptr_t sync_usage = initial - approximate_stack_pointer();

        initial = approximate_stack_pointer();
        co_await AlreadyCompleted();
        uintptr_t consumed = initial - approximate_stack_pointer();
#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
        // This branch is taken only for MSVC prerelease coroutines.
        //
        // MSVC prerelease coroutines prior to 16.11 do not implement "bool await_suspend" reliably,
        // so we can't use it impl::await_adapter. We must resume inline inside await_suspend,
        // so there is a small amount of stack usage. (Pre-16.11 and post-16.11 prerelease coroutines
        // are interoperable, so we cannot change behavior based on which compiler we are using,
        // because that would introduce ODR violations. Our first opportunity to change behavior
        // is the ABI breaking change with MSVC standard-conforming coroutines.)
        REQUIRE(consumed <= sync_usage);
#else
        // MSVC standard-conforming coroutines (as well as gcc and clang coroutines)
        // support "bool await_suspend" just fine.
        REQUIRE(consumed == 0);
#endif
    }
}
TEST_CASE("async_completed_await")
{
    SyncCompletion().get();
}