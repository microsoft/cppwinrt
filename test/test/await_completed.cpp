#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

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

#ifdef _MSC_VER
    __declspec(noinline) uintptr_t approximate_stack_pointer()
    {
        return reinterpret_cast<uintptr_t>(_AddressOfReturnAddress());
    }
#else
    // gcc, clang, and icc all support this.
    __attribute__((noinline)) uintptr_t approximate_stack_pointer()
    {
        return reinterpret_cast<uintptr_t>(__builtin_frame_address(0));
    }
#endif

    IAsyncAction SyncCompletion()
    {
        uintptr_t initial = approximate_stack_pointer();
        co_await AlreadyCompleted();
        uintptr_t consumed = initial - approximate_stack_pointer();
        REQUIRE(consumed == 0);
    }

    // co_await the same apartment context and confirm that stack does not grow.
    // This is in await_completed.cpp because it's basically the same thing as awaiting
    // an already-completed coroutine, so the test uses the same infrastructure.
    IAsyncAction TestApartmentContextNop()
    {
        winrt::apartment_context same_context;

        uintptr_t initial = approximate_stack_pointer();
        co_await same_context;
        uintptr_t consumed = initial - approximate_stack_pointer();
        REQUIRE(consumed == 0);
    }
}
TEST_CASE("await_completed_await")
{
    SyncCompletion().get();
}

TEST_CASE("apartment_context_nop")
{
    TestApartmentContextNop().get();
}
