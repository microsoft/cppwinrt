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
        {}

        void Cancel() const noexcept
        {}

        void Close() const noexcept
        {}
    };

    IAsyncAction TestCompleted()
    {
        co_await make<already_completed>();
    }
} // namespace

TEST_CASE("async_completed")
{
    TestCompleted().get();
}
