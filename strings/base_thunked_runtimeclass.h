
// ODR guard: all translation units must agree on whether flattened runtimeclass
// projections were generated, and on the cached thunk vtable method count.
#define WINRT_IMPL_CACHED_STRING_1(expression) #expression
#define WINRT_IMPL_CACHED_STRING(expression) WINRT_IMPL_CACHED_STRING_1(expression)

#if !defined(WINRT_CACHED_RUNTIMECLASSES)
#define WINRT_CACHED_RUNTIMECLASSES %
#endif

#if !defined(WINRT_CACHED_THUNK_VTABLE_METHOD_COUNT)
#define WINRT_CACHED_THUNK_VTABLE_METHOD_COUNT %
#endif

static_assert(WINRT_CACHED_RUNTIMECLASSES == 0 || WINRT_CACHED_RUNTIMECLASSES == 1);
static_assert(WINRT_CACHED_THUNK_VTABLE_METHOD_COUNT == %);

#if defined(_MSC_VER)
#pragma detect_mismatch("C++/WinRT cached runtimeclasses", WINRT_IMPL_CACHED_STRING(WINRT_CACHED_RUNTIMECLASSES))
#pragma detect_mismatch("C++/WinRT cached thunk vtable method count", WINRT_IMPL_CACHED_STRING(WINRT_CACHED_THUNK_VTABLE_METHOD_COUNT))
#endif

WINRT_EXPORT namespace winrt::impl
{
    inline constexpr size_t cached_thunk_tagged_slot_count = 8;
    inline constexpr std::uint32_t cached_thunk_reserved_slot_count = 6;

#if defined(_M_IX86)
    constexpr std::uint16_t cached_thunk_x86_stack_arg_bytes(std::size_t size) noexcept
    {
        return static_cast<std::uint16_t>((size + sizeof(void*) - 1) & ~(sizeof(void*) - 1));
    }

    template <typename Derived, typename Interface, typename Enable = void>
    struct cached_thunk_x86_stack_pop_sizes
    {
        inline static constexpr std::array<std::uint16_t, 0> value{};
    };
#endif

    struct cached_thunk_descriptor
    {
        guid const* iid{};
#if defined(_M_IX86)
        std::uint16_t const* stack_pop_sizes{};
#endif
    };

    // ========================================================================
    // Thunk data structures
    // ========================================================================

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable: 4324) // Intentional 16-byte alignment for tagged thunk payload decoding.
#endif
    struct alignas(16) thunked_runtimeclass_header
    {
        // default_cache MUST be the first member so that *(void**)&object reads
        // the COM pointer — matching the layout of IUnknown-derived types and
        // ensuring reinterpret_cast<T const*>(&void_ptr) works in produce stubs.
        mutable std::atomic<void*> default_cache{};
        cached_thunk_descriptor const* descriptor_table{};
    };
#if defined(_MSC_VER)
#pragma warning(pop)
#endif

    struct interface_thunk
    {
        void const* const* vtable;
        uintptr_t payload;

    private:
        cached_thunk_descriptor const* descriptor() const noexcept
        {
            if (payload & 1)
            {
                auto* hdr = reinterpret_cast<thunked_runtimeclass_header*>(payload & ~uintptr_t(0xF));
                return hdr->descriptor_table + ((payload >> 1) & (cached_thunk_tagged_slot_count - 1));
            }

            return *reinterpret_cast<cached_thunk_descriptor const* const*>(
                reinterpret_cast<char const*>(this) + sizeof(interface_thunk));
        }

    public:

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
            auto const* desc = descriptor();

            if (payload & 1)
            {
                auto* hdr = reinterpret_cast<thunked_runtimeclass_header*>(payload & ~uintptr_t(0xF));
                default_abi = hdr->default_cache.load(std::memory_order_relaxed);
            }
            else
            {
                default_abi = reinterpret_cast<void*>(payload);
            }

            void* real = nullptr;
            if (static_cast<unknown_abi*>(default_abi)->QueryInterface(*desc->iid, &real) < 0)
                return nullptr;

            void* expected = const_cast<interface_thunk*>(this);
            if (!slot->compare_exchange_strong(expected, real, std::memory_order_release, std::memory_order_acquire))
            {
                static_cast<unknown_abi*>(real)->Release();
                return expected;
            }
            return real;
        }

    };
    static_assert(sizeof(interface_thunk) == (sizeof(void const* const*) + sizeof(uintptr_t)));

    extern "C" inline void* winrt_cached_resolve_thunk(interface_thunk const* thunk)
    {
        return thunk->resolve();
    }
    // Force the compiler to emit the inline function body so the ASM thunk stubs can find it.
    extern "C" __declspec(selectany) void* (*winrt_resolve_thunk_forcelink_)(interface_thunk const*) = winrt_cached_resolve_thunk;
    extern "C" const void* winrt_cached_thunk_vtable[];

    struct cache_and_thunk_tagged
    {
        mutable std::atomic<void*> cache{};
        mutable interface_thunk thunk{};
    };
    static_assert(sizeof(cache_and_thunk_tagged) == (sizeof(std::atomic<void*>) + sizeof(interface_thunk)));
    static_assert(offsetof(cache_and_thunk_tagged, thunk) == sizeof(std::atomic<void*>));

    struct cache_and_thunk_full
    {
        mutable std::atomic<void*> cache{};
        mutable interface_thunk thunk{};
        mutable cached_thunk_descriptor const* descriptor{};
    };
    static_assert(sizeof(cache_and_thunk_full) == (sizeof(std::atomic<void*>) + sizeof(interface_thunk) + sizeof(cached_thunk_descriptor const*)));
    static_assert(offsetof(cache_and_thunk_full, thunk) == sizeof(std::atomic<void*>));
    static_assert(offsetof(cache_and_thunk_full, descriptor) == offsetof(cache_and_thunk_full, thunk) + sizeof(interface_thunk));

    inline void init_pair_tagged(cache_and_thunk_tagged& p, size_t index, thunked_runtimeclass_header* header)
    {
        p.cache.store(&p.thunk, std::memory_order_relaxed);
        p.thunk.vtable = reinterpret_cast<void const* const*>(winrt_cached_thunk_vtable);
        p.thunk.payload = reinterpret_cast<uintptr_t>(header) | (index << 1) | 1;
    }

    inline void init_pair_full(cache_and_thunk_full& p, void* default_abi, cached_thunk_descriptor const* descriptor)
    {
        p.cache.store(&p.thunk, std::memory_order_relaxed);
        p.thunk.vtable = reinterpret_cast<void const* const*>(winrt_cached_thunk_vtable);
        p.thunk.payload = reinterpret_cast<uintptr_t>(default_abi);
        p.descriptor = descriptor;
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
                    init_pair_full(*reinterpret_cast<cache_and_thunk_full*>(base), default_abi, descriptor_table + i);
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

        friend bool operator==(thunked_runtimeclass_base const& left, thunked_runtimeclass_base const& right) noexcept
        {
            if (&left == &right)
            {
                return true;
            }
            auto left_abi = left.default_cache.load(std::memory_order_relaxed);
            auto right_abi = right.default_cache.load(std::memory_order_relaxed);
            if (left_abi == right_abi)
            {
                return true;
            }
            if (!left_abi || !right_abi)
            {
                return false;
            }
            return get_abi(left.try_as<Windows::Foundation::IUnknown>()) == get_abi(right.try_as<Windows::Foundation::IUnknown>());
        }

        friend bool operator!=(thunked_runtimeclass_base const& left, thunked_runtimeclass_base const& right) noexcept
        {
            return !(left == right);
        }

        friend bool operator==(thunked_runtimeclass_base const& left, std::nullptr_t) noexcept
        {
            return left.default_cache.load(std::memory_order_relaxed) == nullptr;
        }

        friend bool operator!=(thunked_runtimeclass_base const& left, std::nullptr_t) noexcept
        {
            return left.default_cache.load(std::memory_order_relaxed) != nullptr;
        }

        friend bool operator==(std::nullptr_t, thunked_runtimeclass_base const& right) noexcept
        {
            return right.default_cache.load(std::memory_order_relaxed) == nullptr;
        }

        friend bool operator!=(std::nullptr_t, thunked_runtimeclass_base const& right) noexcept
        {
            return right.default_cache.load(std::memory_order_relaxed) != nullptr;
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

    template <typename Derived, typename IDefault, typename... I>
    struct thunked_runtimeclass : thunked_runtimeclass_base
    {
        static constexpr size_t N = sizeof...(I);
        static constexpr bool use_tagged = N <= cached_thunk_tagged_slot_count;
        using pair_type = cache_and_thunk_t<use_tagged>;
        static constexpr size_t pair_stride = sizeof(pair_type);

        using thunked_interfaces = std::tuple<IDefault, I...>;

#if defined(_M_IX86)
        inline static const std::array<cached_thunk_descriptor, N> descriptors{ cached_thunk_descriptor{ &guid_of<I>(), cached_thunk_x86_stack_pop_sizes<Derived, I>::value.data() }... };
#else
        inline static const std::array<cached_thunk_descriptor, N> descriptors{ cached_thunk_descriptor{ &guid_of<I>() }... };
#endif
        mutable std::array<pair_type, N> pairs{};

    protected:
        thunked_runtimeclass(std::nullptr_t) noexcept
        {
            descriptor_table = descriptors.data();
        }

        thunked_runtimeclass(void* default_abi, take_ownership_from_abi_t) noexcept
        {
            descriptor_table = descriptors.data();
            attach_impl(default_abi, pairs.data(), N, pair_stride, use_tagged);
        }

        thunked_runtimeclass() noexcept
        {
            descriptor_table = descriptors.data();
        }

    public:
        ~thunked_runtimeclass()
        {
            clear_impl(pairs.data(), N, pair_stride);
        }

        thunked_runtimeclass(thunked_runtimeclass const& other)
        {
            descriptor_table = descriptors.data();
            copy_from(other, pairs.data(), N, pair_stride, use_tagged);
        }

        thunked_runtimeclass(thunked_runtimeclass&& other) noexcept
        {
            descriptor_table = descriptors.data();
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

    // Non-owning wrapper for produce stub IN parameters. Constructs a proper
    // thunked runtimeclass from a void* ABI pointer (borrowed reference) and
    // detaches on destruction to prevent Release. For non-thunked types, just
    // reinterpret-casts (zero overhead, same as before).
    template <typename T>
    struct produce_borrowed_ref
    {
        T value{ nullptr };

        produce_borrowed_ref(void* abi) noexcept
        {
            attach_abi(value, abi);
        }

        ~produce_borrowed_ref()
        {
            detach_abi(value);
        }

        produce_borrowed_ref(produce_borrowed_ref const&) = delete;
        produce_borrowed_ref& operator=(produce_borrowed_ref const&) = delete;

        operator T const&() const noexcept { return value; }
    };
}
