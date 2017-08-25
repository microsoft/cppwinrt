#include "pch.h"

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
