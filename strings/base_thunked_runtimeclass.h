
WINRT_EXPORT namespace winrt::impl
{
    // ========================================================================
    // Thunk data structures
    // ========================================================================

    struct alignas(16) thunked_runtimeclass_header
    {
        guid const* const* iid_table{};
        mutable std::atomic<void*> default_cache{};
    };

    struct interface_thunk
    {
        void const* const* vtable;
        uintptr_t payload;

        std::atomic<void*>* cache_slot() const
        {
            return reinterpret_cast<std::atomic<void*>*>(
                const_cast<char*>(reinterpret_cast<char const*>(this)) - sizeof(std::atomic<void*>));
        }

        __declspec(noinline) void* resolve() const
        {
            auto* slot = cache_slot();
            void* current = slot->load(std::memory_order_acquire);
            if (current != static_cast<void const*>(this))
                return current;

            void* default_abi;
            guid const* iid;

            if (payload & 1)
            {
                auto* hdr = reinterpret_cast<thunked_runtimeclass_header*>(payload & ~uintptr_t(0xF));
                default_abi = hdr->default_cache.load(std::memory_order_relaxed);
                iid = hdr->iid_table[(payload >> 1) & 7];
            }
            else
            {
                default_abi = reinterpret_cast<void*>(payload);
                iid = *reinterpret_cast<guid const* const*>(
                    reinterpret_cast<char const*>(this) + sizeof(interface_thunk));
            }

            void* real = nullptr;
            check_hresult(static_cast<unknown_abi*>(default_abi)->QueryInterface(
                *iid, &real));

            void* expected = const_cast<interface_thunk*>(this);
            if (!slot->compare_exchange_strong(expected, real, std::memory_order_release, std::memory_order_acquire))
            {
                static_cast<unknown_abi*>(real)->Release();
                return expected;
            }
            return real;
        }
    };
    static_assert(sizeof(interface_thunk) == 16);

    extern "C" void* winrt_fast_resolve_thunk(interface_thunk const* thunk);
    extern "C" const void* winrt_fast_thunk_vtable[];

    struct cache_and_thunk_tagged
    {
        mutable std::atomic<void*> cache{};
        mutable interface_thunk thunk{};
    };
    static_assert(sizeof(cache_and_thunk_tagged) == 24);
    static_assert(offsetof(cache_and_thunk_tagged, thunk) == sizeof(std::atomic<void*>));

    struct cache_and_thunk_full
    {
        mutable std::atomic<void*> cache{};
        mutable interface_thunk thunk{};
        mutable guid const* iid{};
    };
    static_assert(sizeof(cache_and_thunk_full) == 32);
    static_assert(offsetof(cache_and_thunk_full, thunk) == sizeof(std::atomic<void*>));
    static_assert(offsetof(cache_and_thunk_full, iid) == offsetof(cache_and_thunk_full, thunk) + sizeof(interface_thunk));

    inline void init_pair_tagged(cache_and_thunk_tagged& p, size_t index, thunked_runtimeclass_header* header)
    {
        p.cache.store(&p.thunk, std::memory_order_relaxed);
        p.thunk.vtable = reinterpret_cast<void const* const*>(winrt_fast_thunk_vtable);
        p.thunk.payload = reinterpret_cast<uintptr_t>(header) | (index << 1) | 1;
    }

    inline void init_pair_full(cache_and_thunk_full& p, void* default_abi, guid const* iid)
    {
        p.cache.store(&p.thunk, std::memory_order_relaxed);
        p.thunk.vtable = reinterpret_cast<void const* const*>(winrt_fast_thunk_vtable);
        p.thunk.payload = reinterpret_cast<uintptr_t>(default_abi);
        p.iid = iid;
    }

    template <bool Tagged>
    using cache_and_thunk_t = std::conditional_t<Tagged, cache_and_thunk_tagged, cache_and_thunk_full>;

    // ========================================================================
    // Non-template base: all COM lifecycle operations via (pointer, count, stride)
    // ========================================================================

    struct thunked_runtimeclass_base : thunked_runtimeclass_header
    {
    protected:
        __declspec(noinline) void clear_impl(void* pairs_begin, size_t count, size_t stride)
        {
            if (auto p = default_cache.exchange(nullptr, std::memory_order_acquire))
                static_cast<unknown_abi*>(p)->Release();

            auto* base = static_cast<char*>(pairs_begin);
            for (size_t i = 0; i < count; ++i, base += stride)
            {
                auto& cache = *reinterpret_cast<std::atomic<void*>*>(base);
                auto* thunk = reinterpret_cast<interface_thunk*>(base + sizeof(std::atomic<void*>));
                auto p = cache.exchange(nullptr, std::memory_order_acquire);
                if (p && p != thunk)
                    static_cast<unknown_abi*>(p)->Release();
            }
        }

        __declspec(noinline) void attach_impl(void* default_abi, void* pairs_begin, size_t count, size_t stride, bool tagged)
        {
            default_cache.store(default_abi, std::memory_order_relaxed);
            auto* base = static_cast<char*>(pairs_begin);
            if (tagged)
            {
                for (size_t i = 0; i < count; ++i, base += stride)
                    init_pair_tagged(*reinterpret_cast<cache_and_thunk_tagged*>(base), i, this);
            }
            else
            {
                for (size_t i = 0; i < count; ++i, base += stride)
                    init_pair_full(*reinterpret_cast<cache_and_thunk_full*>(base), default_abi, iid_table[i]);
            }
        }

        __declspec(noinline) void copy_from(thunked_runtimeclass_base const& other, void* pairs_begin, size_t count, size_t stride, bool tagged)
        {
            if (auto p = other.default_cache.load(std::memory_order_relaxed))
            {
                static_cast<unknown_abi*>(p)->AddRef();
                attach_impl(p, pairs_begin, count, stride, tagged);
            }
        }

        __declspec(noinline) void move_from(thunked_runtimeclass_base& other, void* my_pairs, void* other_pairs, size_t count, size_t stride, bool tagged)
        {
            auto p = other.default_cache.exchange(nullptr, std::memory_order_acquire);
            if (p) attach_impl(p, my_pairs, count, stride, tagged);
            other.clear_impl(other_pairs, count, stride);
        }

        __declspec(noinline) void assign_copy_impl(thunked_runtimeclass_base const& other, void* pairs_begin, size_t count, size_t stride, bool tagged)
        {
            if (this != &other)
            {
                clear_impl(pairs_begin, count, stride);
                copy_from(other, pairs_begin, count, stride, tagged);
            }
        }

        __declspec(noinline) void assign_move_impl(thunked_runtimeclass_base& other, void* my_pairs, void* other_pairs, size_t count, size_t stride, bool tagged)
        {
            if (this != &other)
            {
                clear_impl(my_pairs, count, stride);
                move_from(other, my_pairs, other_pairs, count, stride, tagged);
            }
        }

    public:
        template <typename Q> auto as() const
        {
            return reinterpret_cast<Windows::Foundation::IInspectable const*>(&default_cache)->as<Q>();
        }

        template <typename Q> auto try_as() const noexcept
        {
            return reinterpret_cast<Windows::Foundation::IInspectable const*>(&default_cache)->try_as<Q>();
        }

        template <typename Q> auto try_as(hresult& code) const noexcept
        {
            return try_as_with_reason<Q>(reinterpret_cast<Windows::Foundation::IInspectable const*>(&default_cache), code);
        }

        explicit operator bool() const noexcept
        {
            return default_cache.load(std::memory_order_relaxed) != nullptr;
        }

        operator Windows::Foundation::IUnknown() const noexcept
        {
            Windows::Foundation::IUnknown result{ nullptr };
            copy_from_abi(result, default_cache.load(std::memory_order_relaxed));
            return result;
        }

        operator Windows::Foundation::IInspectable() const noexcept
        {
            Windows::Foundation::IInspectable result{ nullptr };
            copy_from_abi(result, default_cache.load(std::memory_order_relaxed));
            return result;
        }

        void* get_default_abi() const noexcept
        {
            return default_cache.load(std::memory_order_relaxed);
        }

        void** put_default_abi() noexcept
        {
            return reinterpret_cast<void**>(&default_cache);
        }

        void* detach_default_abi() noexcept
        {
            return default_cache.exchange(nullptr, std::memory_order_relaxed);
        }

        void attach_default_abi(void* value) noexcept
        {
            default_cache.store(value, std::memory_order_relaxed);
        }

        void copy_from_default_abi(void* value) noexcept
        {
            if (value)
            {
                static_cast<unknown_abi*>(value)->AddRef();
            }
            default_cache.store(value, std::memory_order_relaxed);
        }

        void copy_to_default_abi(void*& value) const noexcept
        {
            WINRT_ASSERT(value == nullptr);
            value = default_cache.load(std::memory_order_relaxed);
            if (value)
            {
                static_cast<unknown_abi*>(value)->AddRef();
            }
        }
    };

    // ========================================================================
    // Typed template: adds interface accessors, wires up lifecycle
    // ========================================================================

    template <typename IDefault, typename... I>
    struct thunked_runtimeclass : thunked_runtimeclass_base
    {
        static constexpr size_t N = sizeof...(I);
        static constexpr bool use_tagged = N <= 8;
        using pair_type = cache_and_thunk_t<use_tagged>;
        static constexpr size_t pair_stride = sizeof(pair_type);

        using thunked_interfaces = std::tuple<IDefault, I...>;

        inline static const std::array<guid const*, N> iids{ &guid_of<I>()... };
        mutable std::array<pair_type, N> pairs{};

    protected:
        thunked_runtimeclass(std::nullptr_t) noexcept
        {
            iid_table = iids.data();
        }

        thunked_runtimeclass(void* default_abi, take_ownership_from_abi_t) noexcept
        {
            iid_table = iids.data();
            attach_impl(default_abi, pairs.data(), N, pair_stride, use_tagged);
        }

        thunked_runtimeclass() noexcept
        {
            iid_table = iids.data();
        }

    public:
        ~thunked_runtimeclass()
        {
            clear_impl(pairs.data(), N, pair_stride);
        }

        thunked_runtimeclass(thunked_runtimeclass const& other)
        {
            iid_table = iids.data();
            copy_from(other, pairs.data(), N, pair_stride, use_tagged);
        }

        thunked_runtimeclass(thunked_runtimeclass&& other) noexcept
        {
            iid_table = iids.data();
            move_from(other, pairs.data(), other.pairs.data(), N, pair_stride, use_tagged);
        }

        thunked_runtimeclass& operator=(thunked_runtimeclass const& other)
        {
            assign_copy_impl(other, pairs.data(), N, pair_stride, use_tagged);
            return *this;
        }

        thunked_runtimeclass& operator=(thunked_runtimeclass&& other) noexcept
        {
            assign_move_impl(other, pairs.data(), other.pairs.data(), N, pair_stride, use_tagged);
            return *this;
        }

        thunked_runtimeclass& operator=(std::nullptr_t) noexcept
        {
            clear_impl(pairs.data(), N, pair_stride);
            return *this;
        }

        using thunked_runtimeclass_base::operator bool;
        using thunked_runtimeclass_base::as;
        using thunked_runtimeclass_base::try_as;
        using thunked_runtimeclass_base::get_default_abi;
        using thunked_runtimeclass_base::put_default_abi;
        using thunked_runtimeclass_base::detach_default_abi;
        using thunked_runtimeclass_base::attach_default_abi;
        using thunked_runtimeclass_base::copy_from_default_abi;
        using thunked_runtimeclass_base::copy_to_default_abi;

        template <typename Q>
        std::atomic<void*> const& thunk_cache_slot() const noexcept
        {
            if constexpr (std::is_same_v<Q, IDefault>)
            {
                return default_cache;
            }
            else
            {
                constexpr size_t idx = type_index<Q, I...>::value;
                static_assert(idx < sizeof...(I), "Interface not in thunked list");
                return pairs[idx].cache;
            }
        }

        void clear_thunked() noexcept
        {
            clear_impl(pairs.data(), N, pair_stride);
        }

        void reset_thunked(void* new_default_abi) noexcept
        {
            clear_impl(pairs.data(), N, pair_stride);
            if (new_default_abi)
            {
                attach_impl(new_default_abi, pairs.data(), N, pair_stride, use_tagged);
            }
        }
    };
}
