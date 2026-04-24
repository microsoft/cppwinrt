
#ifdef WINRT_IMPL_COROUTINES
namespace winrt
{
    template <>
    struct dispatcher_traits<Windows::System::DispatcherQueue>
    {
        using Priority = Windows::System::DispatcherQueuePriority;
        using Handler = Windows::System::DispatcherQueueHandler;
        using Scheduler = decltype([](auto const& d, auto const& p, auto const& h) { d.TryEnqueue(p, h); });
    };
}
#endif
