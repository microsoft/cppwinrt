
#ifdef WINRT_IMPL_COROUTINES
namespace winrt
{
    template <>
    struct dispatcher_traits<Microsoft::UI::Dispatching::DispatcherQueue>
    {
        using Priority = Microsoft::UI::Dispatching::DispatcherQueuePriority;
        using Handler = Microsoft::UI::Dispatching::DispatcherQueueHandler;
        using Scheduler = decltype([](auto const& d, auto const& p, auto const& h) { d.TryEnqueue(p, h); });
    };
}
#endif
