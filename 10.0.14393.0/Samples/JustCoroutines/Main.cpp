#include "pch.h"

namespace winrt::ABI::Windows::Foundation
{
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0111")) __declspec(novtable) AsyncActionProgressHandler<int> : impl_AsyncActionProgressHandler<int> {};
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0112")) __declspec(novtable) AsyncActionWithProgressCompletedHandler<int> : impl_AsyncActionWithProgressCompletedHandler<int> {};
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0113")) __declspec(novtable) AsyncOperationProgressHandler<int, int> : impl_AsyncOperationProgressHandler<int, int> {};
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0114")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<int, int> : impl_AsyncOperationWithProgressCompletedHandler<int, int> {};
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0115")) __declspec(novtable) AsyncOperationCompletedHandler<int> : impl_AsyncOperationCompletedHandler<int> {};
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0116")) __declspec(novtable) IAsyncActionWithProgress<int> : impl_IAsyncActionWithProgress<int> {};
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0117")) __declspec(novtable) IAsyncOperation<int> : impl_IAsyncOperation<int> {};
    template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0118")) __declspec(novtable) IAsyncOperationWithProgress<int, int> : impl_IAsyncOperationWithProgress<int, int> {};
}

using namespace std::chrono;
using namespace winrt;
using namespace Windows::Foundation;

IAsyncOperationWithProgress<int, int> Produce()
{
    co_await resume_background();

    auto progress = co_await get_progress_token;

    int total = 0;

    for (int i = 0; i != 5; ++i)
    {
        progress(i);
        total += i;
        co_await 500ms;
    }

    return total;
}

IAsyncAction Consume()
{
    auto async = Produce();

    async.Progress([](auto const & /*sender*/, int args)
    {
        printf("progress %d\n", args);
    });

    printf("total %d\n", co_await async);
}

int main()
{
    init_apartment();

    Consume().get();
}
