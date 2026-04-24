
#ifdef WINRT_IMPL_COROUTINES
namespace winrt
{
    template <>
    struct dispatcher_traits<Windows::UI::Core::CoreDispatcher>
    {
        using Priority = Windows::UI::Core::CoreDispatcherPriority;
        using Handler = Windows::UI::Core::DispatchedHandler;
        using Scheduler = decltype([](auto const& d, auto const& p, auto const& h) { d.RunAsync(p, h); });
    };
}
#endif
