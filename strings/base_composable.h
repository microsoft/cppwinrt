
namespace winrt::impl
{
    template <typename D>
    struct composable_factory
    {
        template <typename I, typename... Args>
        static I CreateInstance(const Windows::Foundation::IInspectable& outer, Windows::Foundation::IInspectable& inner, Args&&... args)
        {
            static_assert(std::is_base_of_v<Windows::Foundation::IInspectable, I>, "Requested interface must derive from winrt::Windows::Foundation::IInspectable");
            inner = CreateInstanceImpl(outer, std::forward<Args>(args)...);
            return inner.as<I>();
        }

    private:
        template <typename... Args>
        static Windows::Foundation::IInspectable CreateInstanceImpl(const Windows::Foundation::IInspectable& outer, Args&&... args)
        {
            // Very specific dance here. The return value must have a ref on the outer, while inner must have a ref count of 1.
            // Be sure not to make a delegating QueryInterface call because the controlling outer is not fully constructed yet.
            com_ptr<D> instance = make_self<D>(std::forward<Args>(args)...);
            instance->m_outer = static_cast<inspectable_abi*>(get_abi(outer));
            Windows::Foundation::IInspectable inner;
            attach_abi(inner, to_abi<INonDelegatingInspectable>(detach_abi(instance)));
            return inner;
        }
    };

    template <typename T, typename D, typename I>
    class __declspec(empty_bases) produce_dispatch_to_overridable_base
    {
    protected:
        D& shim() noexcept
        {
            return static_cast<T&>(*this).instance;
        }

        I shim_overridable()
        {
            void* result{};

            if (shim().outer())
            {
                check_hresult(shim().QueryInterface(guid_of<I>(), &result));
            }

            return { result, take_ownership_from_abi };
        }
    };

    template <typename T, typename D, typename I>
    struct produce_dispatch_to_overridable;

    template <typename D, typename... I>
    class dispatch_to_overridable
    {
        class wrapper : public produce_dispatch_to_overridable<wrapper, D, I>...
        {
            D& instance;

            template <typename, typename, typename>
            friend class produce_dispatch_to_overridable_base;

            template <typename, typename...>
            friend class dispatch_to_overridable;

            explicit wrapper(D& d) : instance(d) {}

        public:
            wrapper(const wrapper&) = delete;
            wrapper(wrapper&&) = default;
        };

    public:
        static wrapper overridable(D& instance) noexcept
        {
            return wrapper{ instance };
        }
    };
}
