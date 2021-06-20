#if defined(_MSC_VER)
#if defined(_DEBUG) && !defined(WINRT_NO_MAKE_DETECTION)
#pragma detect_mismatch("C++/WinRT WINRT_NO_MAKE_DETECTION", "make detection enabled (DEBUG and !WINRT_NO_MAKE_DETECTION)")
#else
#pragma detect_mismatch("C++/WinRT WINRT_NO_MAKE_DETECTION", "make detection disabled (!DEBUG or WINRT_NO_MAKE_DETECTION)")
#endif
#endif

namespace winrt::impl
{
    struct marker
    {
        marker() = delete;
    };
}

WINRT_EXPORT namespace winrt
{
    struct non_agile : impl::marker {};
    struct no_weak_ref : impl::marker {};
    struct composing : impl::marker {};
    struct composable : impl::marker {};
    struct no_module_lock : impl::marker {};
    struct static_lifetime : impl::marker {};

    template <typename Interface>
    struct cloaked : Interface {};

    template <typename D, typename... I>
    struct implements;
}

namespace winrt::impl
{
    template<typename...T>
    using tuple_cat_t = decltype(std::tuple_cat(std::declval<T>()...));

    template <template <typename> typename Condition, typename>
    struct tuple_if_base;

    template <template <typename> typename Condition, typename...T>
    struct tuple_if_base<Condition, std::tuple<T...>> { using type = tuple_cat_t<typename std::conditional<Condition<T>::value, std::tuple<T>, std::tuple<>>::type...>; };

    template <template <typename> typename Condition, typename T>
    using tuple_if = typename tuple_if_base<Condition, T>::type;

#ifdef WINRT_IMPL_IUNKNOWN_DEFINED

    template <typename T>
    struct is_interface : std::disjunction<std::is_base_of<Windows::Foundation::IInspectable, T>, std::conjunction<std::is_base_of<::IUnknown, T>, std::negation<is_implements<T>>>> {};

#else

    template <typename T>
    struct is_interface : std::is_base_of<Windows::Foundation::IInspectable, T> {};

#endif

    template <typename T>
    struct is_marker : std::disjunction<std::is_base_of<marker, T>, std::is_void<T>> {};

    template <typename T>
    struct uncloak_base
    {
        using type = T;
    };

    template <typename T>
    struct uncloak_base<cloaked<T>>
    {
        using type = T;
    };

    template <typename T>
    using uncloak = typename uncloak_base<T>::type;

    template <typename I>
    struct is_cloaked : std::disjunction<
        std::is_same<Windows::Foundation::IInspectable, I>,
        std::negation<std::is_base_of<Windows::Foundation::IInspectable, I>>
    > {};

    template <typename I>
    struct is_cloaked<cloaked<I>> : std::true_type {};

    template <typename D, typename I, typename Enable = void>
    struct producer;

    template <typename D, typename T>
    struct producers_base;

    template <typename D, typename I, typename Enable = void>
    struct producer_convert;

    template <typename T>
    struct producer_ref : T
    {
        producer_ref(producer_ref const&) = delete;
        producer_ref& operator=(producer_ref const&) = delete;
        producer_ref(producer_ref&&) = delete;
        producer_ref& operator=(producer_ref&&) = delete;

        producer_ref(void* ptr) noexcept : T(ptr, take_ownership_from_abi)
        {
        }

        ~producer_ref() noexcept
        {
            detach_abi(*this);
        }
    };

    template <typename T>
    struct producer_vtable
    {
        void* value;
    };

    template <typename D, typename I, typename Enable>
    struct producer_convert : producer<D, typename default_interface<I>::type>
    {
        operator producer_ref<I> const() const noexcept
        {
            return { (produce<D, typename default_interface<I>::type>*)this };
        }

        operator producer_vtable<I> const() const noexcept
        {
            return { (void*)this };
        }
    };

    template <typename D, typename...T>
    struct producers_base<D, std::tuple<T...>> : producer_convert<D, T>... {};

    template <typename D, typename...T>
    using producers = producers_base<D, tuple_if<is_interface, std::tuple<uncloak<T>...>>>;

    template <typename D, typename... I>
    struct root_implements;

    template <typename T, typename = std::void_t<>>
    struct unwrap_implements
    {
        using type = T;
    };

    template <typename T>
    struct unwrap_implements<T, std::void_t<typename T::implements_type>>
    {
        using type = typename T::implements_type;
    };

    template <typename T>
    using unwrap_implements_t = typename unwrap_implements<T>::type;

    template <typename...>
    struct nested_implements
    {};

    template <typename First, typename... Rest>
    struct nested_implements<First, Rest...>
        : std::conditional_t<is_implements_v<First>,
        impl::identity<First>, nested_implements<Rest...>>
    {
        static_assert(!is_implements_v<First> || !std::disjunction_v<is_implements<Rest>...>,
            "Duplicate nested implements found");
    };

    template <typename D, typename Dummy = std::void_t<>, typename... I>
    struct base_implements_impl
        : impl::identity<root_implements<D, I...>> {};

    template <typename D, typename... I>
    struct base_implements_impl<D, std::void_t<typename nested_implements<I...>::type>, I...>
        : nested_implements<I...> {};

    template <typename D, typename... I>
    using base_implements = base_implements_impl<D, void, I...>;

    template <typename T, typename = std::void_t<>>
    struct has_composable : std::false_type {};

    template <typename T>
    struct has_composable<T, std::void_t<typename T::composable>> : std::true_type {};

    template <typename T, typename = std::void_t<>>
    struct has_class_type : std::false_type {};

    template <typename T>
    struct has_class_type<T, std::void_t<typename T::class_type>> : std::true_type {};

    template <typename>
    struct has_static_lifetime : std::false_type {};

    template <typename D, typename...I>
    struct has_static_lifetime<implements<D, I...>> : std::disjunction<std::is_same<static_lifetime, I>...> {};

    template <typename D>
    inline constexpr bool has_static_lifetime_v = has_static_lifetime<typename D::implements_type>::value;

    template <typename T>
    void clear_abi(T*) noexcept
    {}

    template <typename T>
    void clear_abi(T** value) noexcept
    {
        *value = nullptr;
    }

    template <typename T>
    void zero_abi([[maybe_unused]] void* ptr, [[maybe_unused]] uint32_t const capacity) noexcept
    {
        if constexpr (!std::is_trivially_destructible_v<T>)
        {
            memset(ptr, 0, sizeof(T) * capacity);
        }
    }

    template <typename T>
    void zero_abi([[maybe_unused]] void* ptr) noexcept
    {
        if constexpr (!std::is_trivially_destructible_v<T>)
        {
            memset(ptr, 0, sizeof(T));
        }
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename I>
    D* get_self(I const& from) noexcept
    {
        return &static_cast<impl::produce<D, default_interface<I>>*>(get_abi(from))->shim();
    }

    template <typename D, typename I>
    [[deprecated]] D* from_abi(I const& from) noexcept
    {
        return get_self<D>(from);
    }

    template <typename I, typename D>
    impl::abi_t<I>* to_abi(impl::producer<D, I> const* from) noexcept
    {
        return reinterpret_cast<impl::abi_t<I>*>(const_cast<impl::producer<D, I>*>(from));
    }

    template <typename I, typename D>
    impl::abi_t<I>* to_abi(impl::producer_convert<D, I> const* from) noexcept
    {
        return reinterpret_cast<impl::abi_t<I>*>((impl::producer<D, default_interface<I>>*)from);
    }
}

namespace winrt::impl
{
    template <typename...> struct interface_list;

    template <>
    struct interface_list<>
    {
        template <typename T, typename Predicate>
        static constexpr void* find(const T*, const Predicate&) noexcept
        {
            return nullptr;
        }
    };

    template <typename First, typename ... Rest>
    struct interface_list<First, Rest...>
    {
        template <typename T, typename Predicate>
        static constexpr void* find(const T* obj, const Predicate& pred) noexcept
        {
            if (pred.template test<First>())
            {
                return to_abi<First>(obj);
            }
            return interface_list<Rest...>::find(obj, pred);
        }
        using first_interface = First;
    };

    template <typename, typename> struct interface_list_append_impl;

    template <typename... T, typename... U>
    struct interface_list_append_impl<interface_list<T...>, interface_list<U...>>
    {
        using type = interface_list<T..., U...>;
    };

    template <template <typename> class, typename...>
    struct filter_impl;

    template <template <typename> class Predicate, typename... T>
    using filter = typename filter_impl<Predicate, unwrap_implements_t<T>...>::type;

    template <template <typename> class Predicate>
    struct filter_impl<Predicate>
    {
        using type = interface_list<>;
    };

    template <template <typename> class Predicate, typename T, typename... Rest>
    struct filter_impl<Predicate, T, Rest...>
    {
        using type = typename interface_list_append_impl<
            std::conditional_t<
            Predicate<T>::value,
            interface_list<winrt::impl::uncloak<T>>,
            interface_list<>
            >,
            typename filter_impl<Predicate, Rest...>::type
        >::type;
    };

    template <template <typename> class Predicate, typename ... T, typename ... Rest>
    struct filter_impl<Predicate, interface_list<T...>, Rest...>
    {
        using type = typename interface_list_append_impl<
            filter<Predicate, T...>,
            filter<Predicate, Rest...>
        >::type;
    };

    template <template <typename> class Predicate, typename D, typename ... I, typename ... Rest>
    struct filter_impl<Predicate, winrt::implements<D, I...>, Rest...>
    {
        using type = typename interface_list_append_impl<
            filter<Predicate, I...>,
            filter<Predicate, Rest...>
        >::type;
    };

    template <typename T>
    using implemented_interfaces = filter<is_interface, typename T::implements_type>;

    template <typename T>
    struct is_uncloaked_interface : std::conjunction<is_interface<T>, std::negation<winrt::impl::is_cloaked<T>>> {};
    template <typename T>
    using uncloaked_interfaces = filter<is_uncloaked_interface, typename T::implements_type>;

    template <typename T>
    struct uncloaked_iids;

    template <typename ... T>
    struct uncloaked_iids<interface_list<T...>>
    {
#pragma warning(suppress: 4307)
        static constexpr std::array<guid, sizeof...(T)> value{ winrt::guid_of<T>() ... };
    };

    template <typename T, typename = void>
    struct implements_default_interface
    {
        using type = typename default_interface<typename implemented_interfaces<T>::first_interface>::type;
    };

    template <typename T>
    struct implements_default_interface<T, std::void_t<typename T::class_type>>
    {
        using type = winrt::default_interface<typename T::class_type>;
    };

    template <typename T>
    struct default_interface<T, std::void_t<typename T::implements_type>>
    {
        using type = typename implements_default_interface<T>::type;
    };

    struct iid_finder
    {
        const guid& m_guid;

        template <typename I>
        constexpr bool test() const noexcept
        {
            return is_guid_of<typename default_interface<I>::type>(m_guid);
        }
    };

    template <typename T>
    auto find_iid(const T* obj, const guid& iid) noexcept
    {
        return static_cast<unknown_abi*>(implemented_interfaces<T>::find(obj, iid_finder{ iid }));
    }

    struct inspectable_finder
    {
        template <typename I>
        static constexpr bool test() noexcept
        {
            return std::is_base_of_v<inspectable_abi, abi_t<I>>;
        }
    };

    template <typename T>
    inspectable_abi* find_inspectable(const T* obj) noexcept
    {
        using default_interface = typename implements_default_interface<T>::type;

        if constexpr (std::is_base_of_v<inspectable_abi, abi_t<default_interface>>)
        {
            return to_abi<default_interface>(obj);
        }
        else
        {
            return static_cast<inspectable_abi*>(implemented_interfaces<T>::find(obj, inspectable_finder{}));
        }
    }

    template <typename I, typename = std::void_t<>>
    struct runtime_class_name
    {
        static hstring get()
        {
            throw hresult_not_implemented{};
        }
    };

    template <typename I>
    struct runtime_class_name<I, std::void_t<decltype(name_v<I>)>>
    {
        static hstring get()
        {
            return hstring{ name_of<I>() };
        }
    };

    template <>
    struct runtime_class_name<Windows::Foundation::IInspectable>
    {
        static hstring get()
        {
            return {};
        }
    };

    template <typename D, typename I, typename Enable>
    struct producer
    {
    private:
        produce<D, I> vtable;
    };

    template <typename D, typename I, typename Enable>
    struct produce_base : abi_t<I>
    {
        D& shim() noexcept
        {
            return*static_cast<D*>(reinterpret_cast<producer<D, I>*>(this));
        }

        int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept override
        {
            return shim().QueryInterface(id, object);
        }

        uint32_t __stdcall AddRef() noexcept override
        {
            return shim().AddRef();
        }

        uint32_t __stdcall Release() noexcept override
        {
            return shim().Release();
        }

        int32_t __stdcall GetIids(uint32_t* count, guid** array) noexcept override
        {
            return shim().GetIids(reinterpret_cast<count_type*>(count), reinterpret_cast<guid_type**>(array));
        }

        int32_t __stdcall GetRuntimeClassName(void** name) noexcept override
        {
            return shim().abi_GetRuntimeClassName(name);
        }

        int32_t __stdcall GetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept final
        {
            return shim().abi_GetTrustLevel(trustLevel);
        }
    };

#ifdef WINRT_IMPL_IUNKNOWN_DEFINED

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<std::is_base_of_v< ::IUnknown, I> && !is_implements_v<I>>> : I
    {
    };

    template <typename D, typename I>
    struct producer_convert<D, I, std::enable_if_t<std::is_base_of_v< ::IUnknown, I> && !is_implements_v<I>>> : producer<D, I>
    {
    };

#endif

    struct INonDelegatingInspectable : Windows::Foundation::IUnknown
    {
        INonDelegatingInspectable(std::nullptr_t = nullptr) noexcept {}
    };

    template <> struct abi<INonDelegatingInspectable>
    {
        using type = inspectable_abi;
    };

    template <typename D>
    struct produce<D, INonDelegatingInspectable> : produce_base<D, INonDelegatingInspectable>
    {
        int32_t __stdcall QueryInterface(const guid& id, void** object) noexcept final
        {
            return this->shim().NonDelegatingQueryInterface(id, object);
        }

        uint32_t __stdcall AddRef() noexcept final
        {
            return this->shim().NonDelegatingAddRef();
        }

        uint32_t __stdcall Release() noexcept final
        {
            return this->shim().NonDelegatingRelease();
        }

        int32_t __stdcall GetIids(uint32_t* count, guid** array) noexcept final
        {
            return this->shim().NonDelegatingGetIids(count, array);
        }

        int32_t __stdcall GetRuntimeClassName(void** name) noexcept final
        {
            return this->shim().NonDelegatingGetRuntimeClassName(name);
        }
    };

    template <bool Agile, bool UseModuleLock>
    struct weak_ref;

    template <bool Agile, bool UseModuleLock>
    struct weak_source_producer;

    template <bool Agile, bool UseModuleLock>
    struct weak_source final : IWeakReferenceSource, module_lock_updater<UseModuleLock>
    {
        weak_ref<Agile, UseModuleLock>* that() noexcept
        {
            return static_cast<weak_ref<Agile, UseModuleLock>*>(reinterpret_cast<weak_source_producer<Agile, UseModuleLock>*>(this));
        }

        int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept final
        {
            if (is_guid_of<IWeakReferenceSource>(id))
            {
                *object = static_cast<IWeakReferenceSource*>(this);
                that()->increment_strong();
                return 0;
            }

            return that()->m_object->QueryInterface(id, object);
        }

        uint32_t __stdcall AddRef() noexcept final
        {
            return that()->increment_strong();
        }

        uint32_t __stdcall Release() noexcept final
        {
            return that()->m_object->Release();
        }

        int32_t __stdcall GetWeakReference(IWeakReference** weakReference) noexcept final
        {
            *weakReference = that();
            that()->AddRef();
            return 0;
        }
    };

    template <bool Agile, bool UseModuleLock>
    struct weak_source_producer
    {
    protected:
        weak_source<Agile, UseModuleLock> m_source;
    };

    template <bool Agile, bool UseModuleLock>
    struct weak_ref final : IWeakReference, weak_source_producer<Agile, UseModuleLock>
    {
        weak_ref(unknown_abi* object, uint32_t const strong) noexcept :
            m_object(object),
            m_strong(strong)
        {
            WINRT_ASSERT(object);
        }

        int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept final
        {
            if (is_guid_of<IWeakReference>(id) || is_guid_of<Windows::Foundation::IUnknown>(id))
            {
                *object = static_cast<IWeakReference*>(this);
                AddRef();
                return 0;
            }

            if constexpr (Agile)
            {
                if (is_guid_of<IAgileObject>(id))
                {
                    *object = static_cast<unknown_abi*>(this);
                    AddRef();
                    return 0;
                }

                if (is_guid_of<IMarshal>(id))
                {
                    return make_marshaler(this, object);
                }
            }

            *object = nullptr;
            return error_no_interface;
        }

        uint32_t __stdcall AddRef() noexcept final
        {
            return 1 + m_weak.fetch_add(1, std::memory_order_relaxed);
        }

        uint32_t __stdcall Release() noexcept final
        {
            uint32_t const target = m_weak.fetch_sub(1, std::memory_order_relaxed) - 1;

            if (target == 0)
            {
                delete this;
            }

            return target;
        }

        int32_t __stdcall Resolve(guid const& id, void** objectReference) noexcept final
        {
            uint32_t target = m_strong.load(std::memory_order_relaxed);

            while (true)
            {
                if (target == 0)
                {
                    *objectReference = nullptr;
                    return 0;
                }

                if (m_strong.compare_exchange_weak(target, target + 1, std::memory_order_acquire, std::memory_order_relaxed))
                {
                    int32_t hr = m_object->QueryInterface(id, objectReference);
                    m_strong.fetch_sub(1, std::memory_order_relaxed);
                    return hr;
                }
            }
        }

        void set_strong(uint32_t const count) noexcept
        {
            m_strong = count;
        }

        uint32_t increment_strong() noexcept
        {
            return 1 + m_strong.fetch_add(1, std::memory_order_relaxed);
        }

        uint32_t decrement_strong() noexcept
        {
            uint32_t const target = m_strong.fetch_sub(1, std::memory_order_release) - 1;

            if (target == 0)
            {
                Release();
            }

            return target;
        }

        IWeakReferenceSource* get_source() noexcept
        {
            increment_strong();
            return &this->m_source;
        }

    private:
        template <bool T, bool U>
        friend struct weak_source;

        static_assert(sizeof(weak_source_producer<Agile, UseModuleLock>) == sizeof(weak_source<Agile, UseModuleLock>));

        unknown_abi* m_object{};
        std::atomic<uint32_t> m_strong{ 1 };
        std::atomic<uint32_t> m_weak{ 1 };
    };

    template <bool>
    struct __declspec(empty_bases) root_implements_composing_outer
    {
    protected:
        static constexpr bool is_composing = false;
        static constexpr inspectable_abi* m_inner = nullptr;
    };

    template <>
    struct __declspec(empty_bases) root_implements_composing_outer<true>
    {
        template <typename Qi>
        auto try_as() const noexcept
        {
            return m_inner.try_as<Qi>();
        }

        explicit operator bool() const noexcept
        {
            return m_inner.operator bool();
        }
    protected:
        static constexpr bool is_composing = true;
        Windows::Foundation::IInspectable m_inner;
    };

    template <typename D, bool>
    struct __declspec(empty_bases) root_implements_composable_inner
    {
    protected:
        static constexpr inspectable_abi* outer() noexcept { return nullptr; }

        template <typename, typename, typename>
        friend class produce_dispatch_to_overridable_base;
    };

    template <typename D>
    struct __declspec(empty_bases) root_implements_composable_inner<D, true> : producer<D, INonDelegatingInspectable>
    {
    protected:
        inspectable_abi* outer() noexcept { return m_outer; }
    private:
        inspectable_abi* m_outer = nullptr;

        template <typename, typename, typename>
        friend class produce_dispatch_to_overridable_base;

        template <typename>
        friend struct composable_factory;
    };

    template <typename D, typename... I>
    struct __declspec(novtable) root_implements
        : root_implements_composing_outer<std::disjunction_v<std::is_same<composing, I>...>>
        , root_implements_composable_inner<D, std::disjunction_v<std::is_same<composable, I>...>>
        , module_lock_updater<!std::disjunction_v<std::is_same<no_module_lock, I>...>>
    {
        using IInspectable = Windows::Foundation::IInspectable;
        using root_implements_type = root_implements;

        int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept
        {
            if (this->outer())
            {
                return this->outer()->QueryInterface(id, object);
            }

            int32_t result = query_interface(id, object);

            if (result == error_no_interface && this->m_inner)
            {
                result = static_cast<unknown_abi*>(get_abi(this->m_inner))->QueryInterface(id, object);
            }

            return result;
        }

        uint32_t __stdcall AddRef() noexcept
        {
            if (this->outer())
            {
                return this->outer()->AddRef();
            }

            return NonDelegatingAddRef();
        }

        uint32_t __stdcall Release() noexcept
        {
            if (this->outer())
            {
                return this->outer()->Release();
            }

            return NonDelegatingRelease();
        }

        struct abi_guard
        {
            abi_guard(D& derived) :
                m_derived(derived)
            {
                m_derived.abi_enter();
            }

            ~abi_guard()
            {
                m_derived.abi_exit();
            }

        private:

            D& m_derived;
        };

        void abi_enter() const noexcept {}
        void abi_exit() const noexcept {}

#if defined(_DEBUG) && !defined(WINRT_NO_MAKE_DETECTION)
        // Please use winrt::make<T>(args...) to avoid allocating a C++/WinRT implementation type on the stack.
        virtual void use_make_function_to_create_this_object() = 0;
#endif

    protected:

        virtual int32_t query_interface_tearoff(guid const&, void**) const noexcept
        {
            return error_no_interface;
        }

        root_implements() noexcept
        {
        }

        virtual ~root_implements() noexcept
        {
            // If a weak reference is created during destruction, this ensures that it is also destroyed.
            subtract_reference();
        }

        int32_t __stdcall GetIids(uint32_t* count, guid** array) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetIids(count, array);
            }

            return NonDelegatingGetIids(count, array);
        }

        int32_t __stdcall abi_GetRuntimeClassName(void** name) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetRuntimeClassName(name);
            }

            return NonDelegatingGetRuntimeClassName(name);
        }

        int32_t __stdcall abi_GetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetTrustLevel(trustLevel);
            }

            return NonDelegatingGetTrustLevel(trustLevel);
        }

        uint32_t __stdcall NonDelegatingAddRef() noexcept
        {
            if constexpr (is_weak_ref_source::value)
            {
                uintptr_t count_or_pointer = m_references.load(std::memory_order_relaxed);

                while (true)
                {
                    if (is_weak_ref(count_or_pointer))
                    {
                        return decode_weak_ref(count_or_pointer)->increment_strong();
                    }

                    uintptr_t const target = count_or_pointer + 1;

                    if (m_references.compare_exchange_weak(count_or_pointer, target, std::memory_order_relaxed))
                    {
                        return static_cast<uint32_t>(target);
                    }
                }
            }
            else
            {
                return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
            }
        }

        uint32_t __stdcall NonDelegatingRelease() noexcept
        {
            uint32_t const target = subtract_reference();

            if (target == 0)
            {
                // If a weak reference was previously created, the m_references value will not be stable value (won't be zero).
                // This ensures destruction has a stable value during destruction.
                m_references = 1;

                if constexpr (has_final_release::value)
                {
                    D::final_release(std::unique_ptr<D>(static_cast<D*>(this)));
                }
                else
                {
                    delete this;
                }
            }

            return target;
        }

        int32_t __stdcall NonDelegatingQueryInterface(const guid& id, void** object) noexcept
        {
            if (is_guid_of<Windows::Foundation::IInspectable>(id) || is_guid_of<Windows::Foundation::IUnknown>(id))
            {
                auto result = to_abi<INonDelegatingInspectable>(this);
                NonDelegatingAddRef();
                *object = result;
                return 0;
            }

            int32_t result = query_interface(id, object);

            if (result == error_no_interface && this->m_inner)
            {
                result = static_cast<unknown_abi*>(get_abi(this->m_inner))->QueryInterface(id, object);
            }

            return result;
        }

        int32_t __stdcall NonDelegatingGetIids(uint32_t* count, guid** array) noexcept
        {
            const auto& local_iids = static_cast<D*>(this)->get_local_iids();
            const uint32_t& local_count = local_iids.first;
            if constexpr (root_implements_type::is_composing)
            {
                if (local_count > 0)
                {
                    const com_array<guid>& inner_iids = get_interfaces(root_implements_type::m_inner);
                    *count = local_count + inner_iids.size();
                    *array = static_cast<guid*>(WINRT_IMPL_CoTaskMemAlloc(sizeof(guid)*(*count)));
                    if (*array == nullptr)
                    {
                        return error_bad_alloc;
                    }
                    *array = std::copy(local_iids.second, local_iids.second + local_count, *array);
                    std::copy(inner_iids.cbegin(), inner_iids.cend(), *array);
                }
                else
                {
                    return static_cast<inspectable_abi*>(get_abi(root_implements_type::m_inner))->GetIids(count, array);
                }
            }
            else
            {
                if (local_count > 0)
                {
                    *count = local_count;
                    *array = static_cast<guid*>(WINRT_IMPL_CoTaskMemAlloc(sizeof(guid)*(*count)));
                    if (*array == nullptr)
                    {
                        return error_bad_alloc;
                    }
                    std::copy(local_iids.second, local_iids.second + local_count, *array);
                }
                else
                {
                    *count = 0;
                    *array = nullptr;
                }
            }
            return 0;
        }

        int32_t __stdcall NonDelegatingGetRuntimeClassName(void** name) noexcept try
        {
            *name = detach_abi(static_cast<D*>(this)->GetRuntimeClassName());
            return 0;
        }
        catch (...) { return to_hresult(); }

        int32_t __stdcall NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept try
        {
            *trustLevel = static_cast<D*>(this)->GetTrustLevel();
            return 0;
        }
        catch (...) { return to_hresult(); }

        uint32_t subtract_reference() noexcept
        {
            if constexpr (is_weak_ref_source::value)
            {
                uintptr_t count_or_pointer = m_references.load(std::memory_order_relaxed);

                while (true)
                {
                    if (is_weak_ref(count_or_pointer))
                    {
                        return decode_weak_ref(count_or_pointer)->decrement_strong();
                    }

                    uintptr_t const target = count_or_pointer - 1;

                    if (m_references.compare_exchange_weak(count_or_pointer, target, std::memory_order_release, std::memory_order_relaxed))
                    {
                        return static_cast<uint32_t>(target);
                    }
                }
            }
            else
            {
                return m_references.fetch_sub(1, std::memory_order_release) - 1;
            }
        }

        template <typename T>
        winrt::weak_ref<T> get_weak()
        {
            impl::IWeakReferenceSource* weak_ref = make_weak_ref();
            if (!weak_ref)
            {
                throw std::bad_alloc{};
            }
            com_ptr<impl::IWeakReferenceSource> source;
            attach_abi(source, weak_ref);

            winrt::weak_ref<T> result;
            check_hresult(source->GetWeakReference(result.put()));
            return result;
        }

        virtual Windows::Foundation::TrustLevel GetTrustLevel() const noexcept
        {
            return Windows::Foundation::TrustLevel::BaseTrust;
        }

    private:

        class has_final_release
        {
            template <typename U, typename = decltype(std::declval<U>().final_release(0))> static constexpr bool get_value(int) { return true; }
            template <typename> static constexpr bool get_value(...) { return false; }

        public:

            static constexpr bool value = get_value<D>(0);
        };

        using is_agile = std::negation<std::disjunction<std::is_same<non_agile, I>...>>;
        using is_inspectable = std::disjunction<std::is_base_of<Windows::Foundation::IInspectable, I>...>;
        using is_weak_ref_source = std::conjunction<is_inspectable, std::negation<std::disjunction<std::is_same<no_weak_ref, I>...>>>;
        using use_module_lock = std::negation<std::disjunction<std::is_same<no_module_lock, I>...>>;
        using weak_ref_t = impl::weak_ref<is_agile::value, use_module_lock::value>;

        std::atomic<std::conditional_t<is_weak_ref_source::value, uintptr_t, uint32_t>> m_references{ 1 };

        int32_t query_interface(guid const& id, void** object) noexcept
        {
            *object = static_cast<D*>(this)->find_interface(id);

            if (*object != nullptr)
            {
                AddRef();
                return 0;
            }

            if constexpr (is_agile::value)
            {
                if (is_guid_of<IAgileObject>(id))
                {
                    *object = get_unknown();
                    AddRef();
                    return 0;
                }

                if (is_guid_of<IMarshal>(id))
                {
                    return make_marshaler(get_unknown(), object);
                }
            }

            if constexpr (is_inspectable::value)
            {
                if (is_guid_of<Windows::Foundation::IInspectable>(id))
                {
                    *object = find_inspectable();
                    AddRef();
                    return 0;
                }
            }

            if (is_guid_of<Windows::Foundation::IUnknown>(id))
            {
                *object = get_unknown();
                AddRef();
                return 0;
            }

            if constexpr (is_weak_ref_source::value)
            {
                if (is_guid_of<impl::IWeakReferenceSource>(id))
                {
                    *object = make_weak_ref();
                    return *object ? error_ok : error_bad_alloc;
                }
            }

            return query_interface_tearoff(id, object);
        }

        impl::IWeakReferenceSource* make_weak_ref() noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            uintptr_t count_or_pointer = m_references.load(std::memory_order_relaxed);

            if (is_weak_ref(count_or_pointer))
            {
                return decode_weak_ref(count_or_pointer)->get_source();
            }

            com_ptr<weak_ref_t> weak_ref;
            *weak_ref.put() = new (std::nothrow) weak_ref_t(get_unknown(), static_cast<uint32_t>(count_or_pointer));

            if (!weak_ref)
            {
                return nullptr;
            }

            uintptr_t const encoding = encode_weak_ref(weak_ref.get());

            for (;;)
            {
                if (m_references.compare_exchange_weak(count_or_pointer, encoding, std::memory_order_acq_rel, std::memory_order_relaxed))
                {
                    impl::IWeakReferenceSource* result = weak_ref->get_source();
                    detach_abi(weak_ref);
                    return result;
                }

                if (is_weak_ref(count_or_pointer))
                {
                    return decode_weak_ref(count_or_pointer)->get_source();
                }

                weak_ref->set_strong(static_cast<uint32_t>(count_or_pointer));
            }
        }

        static bool is_weak_ref(intptr_t const value) noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            return value < 0;
        }

        static weak_ref_t* decode_weak_ref(uintptr_t const value) noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            return reinterpret_cast<weak_ref_t*>(value << 1);
        }

        static uintptr_t encode_weak_ref(weak_ref_t* value) noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            constexpr uintptr_t pointer_flag = static_cast<uintptr_t>(1) << ((sizeof(uintptr_t) * 8) - 1);
            WINRT_ASSERT((reinterpret_cast<uintptr_t>(value) & 1) == 0);
            return (reinterpret_cast<uintptr_t>(value) >> 1) | pointer_flag;
        }

        virtual unknown_abi* get_unknown() const noexcept = 0;
        virtual std::pair<uint32_t, const guid*> get_local_iids() const noexcept = 0;
        virtual hstring GetRuntimeClassName() const = 0;
        virtual void* find_interface(guid const&) const noexcept = 0;
        virtual inspectable_abi* find_inspectable() const noexcept = 0;

        template <typename, typename, typename>
        friend struct impl::produce_base;

        template <typename, typename>
        friend struct impl::produce;
    };

#if defined(WINRT_NO_MAKE_DETECTION)
    template <typename T>
    using heap_implements = T;
#else
    template <typename T>
    struct heap_implements final : T
    {
        using T::T;

#if defined(_DEBUG)
        void use_make_function_to_create_this_object() final
        {
        }
#endif
    };
#endif

    inline com_ptr<IStaticLifetimeCollection> get_static_lifetime_map()
    {
        auto const lifetime_factory = get_activation_factory<impl::IStaticLifetime>(L"Windows.ApplicationModel.Core.CoreApplication");
        Windows::Foundation::IUnknown collection;
        check_hresult(lifetime_factory->GetCollection(put_abi(collection)));
        return collection.as<IStaticLifetimeCollection>();
    }

    template <typename D>
    auto make_factory() -> typename impl::implements_default_interface<D>::type
    {
        using result_type = typename impl::implements_default_interface<D>::type;

        if constexpr (!has_static_lifetime_v<D>)
        {
            return { to_abi<result_type>(new heap_implements<D>), take_ownership_from_abi };
        }
        else
        {
            auto const map = get_static_lifetime_map();
            param::hstring const name{ name_of<typename D::instance_type>() };
            void* result{};
            map->Lookup(get_abi(name), &result);

            if (result)
            {
                return { result, take_ownership_from_abi };
            }

            result_type object{ to_abi<result_type>(new heap_implements<D>), take_ownership_from_abi };

            static slim_mutex lock;
            slim_lock_guard const guard{ lock };
            map->Lookup(get_abi(name), &result);

            if (result)
            {
                return { result, take_ownership_from_abi };
            }
            else
            {
                bool found;
                check_hresult(map->Insert(get_abi(name), get_abi(object), &found));
                return object;
            }
        }
    }

    template <typename T>
    auto detach_from(T&& object) noexcept
    {
        return detach_abi(std::forward<T>(object));
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename... Args>
    auto make(Args&&... args)
    {
#if !defined(WINRT_NO_MAKE_DETECTION)
        // Note: https://aka.ms/cppwinrt/detect_direct_allocations
        static_assert(std::is_destructible_v<D>, "C++/WinRT implementation types must have a public destructor");
        static_assert(!std::is_final_v<D>, "C++/WinRT implementation types must not be final");
#endif

        using I = typename impl::implements_default_interface<D>::type;

        if constexpr (std::is_same_v<I, Windows::Foundation::IActivationFactory>)
        {
            static_assert(sizeof...(args) == 0);
            return impl::make_factory<D>();
        }
        else if constexpr (impl::has_composable<D>::value)
        {
            impl::com_ref<I> result{ to_abi<I>(new impl::heap_implements<D>(std::forward<Args>(args)...)), take_ownership_from_abi };
            return result.template as<typename D::composable>();
        }
        else if constexpr (impl::has_class_type<D>::value)
        {
            static_assert(std::is_same_v<I, default_interface<typename D::class_type>>);
            return typename D::class_type{ to_abi<I>(new impl::heap_implements<D>(std::forward<Args>(args)...)), take_ownership_from_abi };
        }
        else
        {
            return impl::com_ref<I>{ to_abi<I>(new impl::heap_implements<D>(std::forward<Args>(args)...)), take_ownership_from_abi };
        }
    }

    template <typename D, typename... Args>
    com_ptr<D> make_self(Args&&... args)
    {
#if !defined(WINRT_NO_MAKE_DETECTION)
        // Note: https://aka.ms/cppwinrt/detect_direct_allocations
        static_assert(std::is_destructible_v<D>, "C++/WinRT implementation types must have a public destructor");
        static_assert(!std::is_final_v<D>, "C++/WinRT implementation types must not be final");
#endif
        if constexpr (std::is_same_v<typename impl::implements_default_interface<D>::type, Windows::Foundation::IActivationFactory>)
        {
            static_assert(sizeof...(args) == 0);
            auto temp = impl::make_factory<D>();
            void* result = get_self<D>(temp);
            detach_abi(temp);
            return { result, take_ownership_from_abi };
        }
        else
        {
            return { new impl::heap_implements<D>(std::forward<Args>(args)...), take_ownership_from_abi };
        }
    }

    template <typename... FactoryClasses>
    inline void clear_factory_static_lifetime()
    {
        auto unregister = [map = impl::get_static_lifetime_map()](param::hstring name)
        {
            map->Remove(get_abi(name));
        };
        ((unregister(name_of<typename FactoryClasses::instance_type>())), ...);
    }

    template <typename D, typename... I>
    struct implements : impl::producers<D, I...>, impl::base_implements<D, I...>::type
    {
    protected:

        using base_type = typename impl::base_implements<D, I...>::type;
        using root_implements_type = typename base_type::root_implements_type;

        using base_type::base_type;

    public:

        using implements_type = implements;
        using IInspectable = Windows::Foundation::IInspectable;

        weak_ref<D> get_weak()
        {
            return root_implements_type::template get_weak<D>();
        }

        com_ptr<D> get_strong() noexcept
        {
            com_ptr<D> result;
            result.copy_from(static_cast<D*>(this));
            return result;
        }

        template <typename T>
        auto get_abi(T const& value) const noexcept
        {
            return winrt::get_abi(value);
        }

        template <typename T>
        void* get_abi() const noexcept
        {
            return static_cast<impl::producer_vtable<T>>(*this).value;
        }

        operator IInspectable() const noexcept
        {
            IInspectable result;
            copy_from_abi(result, find_inspectable());
            return result;
        }

        impl::hresult_type __stdcall QueryInterface(impl::guid_type const& id, void** object) noexcept
        {
            return root_implements_type::QueryInterface(reinterpret_cast<guid const&>(id), object);
        }

        impl::count_type __stdcall AddRef() noexcept
        {
            return root_implements_type::AddRef();
        }

        impl::count_type __stdcall Release() noexcept
        {
            return root_implements_type::Release();
        }

        impl::hresult_type __stdcall GetIids(impl::count_type* count, impl::guid_type** iids) noexcept
        {
            return root_implements_type::GetIids(reinterpret_cast<uint32_t*>(count), reinterpret_cast<guid**>(iids));
        }

        impl::hresult_type __stdcall GetRuntimeClassName(impl::hstring_type* value) noexcept
        {
            return root_implements_type::abi_GetRuntimeClassName(reinterpret_cast<void**>(value));
        }

        using root_implements_type::GetTrustLevel;

        impl::hresult_type __stdcall GetTrustLevel(impl::trust_level_type* value) noexcept
        {
            return root_implements_type::abi_GetTrustLevel(reinterpret_cast<Windows::Foundation::TrustLevel*>(value));
        }

        void* find_interface(guid const& id) const noexcept override
        {
            return impl::find_iid(static_cast<const D*>(this), id);
        }

        impl::inspectable_abi* find_inspectable() const noexcept override
        {
            return impl::find_inspectable(static_cast<const D*>(this));
        }

        std::pair<uint32_t, const guid*> get_local_iids() const noexcept override
        {
            using interfaces = impl::uncloaked_interfaces<D>;
            using local_iids = impl::uncloaked_iids<interfaces>;
            return { static_cast<uint32_t>(local_iids::value.size()), local_iids::value.data() };
        }

    private:

        impl::unknown_abi* get_unknown() const noexcept override
        {
            return reinterpret_cast<impl::unknown_abi*>(to_abi<typename impl::implements_default_interface<D>::type>(this));
        }

        hstring GetRuntimeClassName() const override
        {
            static_assert(std::is_base_of_v<implements_type, D>, "Class must derive from implements<> or ClassT<> where the first template parameter is the derived class name, e.g. struct D : implements<D, ...>");
            return impl::runtime_class_name<typename impl::implements_default_interface<D>::type>::get();
        }

        template <typename, typename...>
        friend struct impl::root_implements;

        template <typename T>
        friend struct weak_ref;
    };
}
