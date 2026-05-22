
// ODR guard: all translation units must agree on whether flattened runtimeclass
// projections were generated, and on the flat vtable method count.
#define WINRT_IMPL_CACHED_STRING_1(expression) #expression
#define WINRT_IMPL_CACHED_STRING(expression) WINRT_IMPL_CACHED_STRING_1(expression)

#if !defined(WINRT_FLAT_RUNTIMECLASSES)
#define WINRT_FLAT_RUNTIMECLASSES %
#endif

#if !defined(WINRT_FLAT_VTABLE_METHOD_COUNT)
#define WINRT_FLAT_VTABLE_METHOD_COUNT %
#endif

static_assert(WINRT_FLAT_RUNTIMECLASSES == 0 || WINRT_FLAT_RUNTIMECLASSES == 1);
static_assert(WINRT_FLAT_VTABLE_METHOD_COUNT == %);

#if defined(_MSC_VER)
#pragma detect_mismatch("C++/WinRT flat runtimeclasses", WINRT_IMPL_CACHED_STRING(WINRT_FLAT_RUNTIMECLASSES))
#pragma detect_mismatch("C++/WinRT flat vtable method count", WINRT_IMPL_CACHED_STRING(WINRT_FLAT_VTABLE_METHOD_COUNT))
#endif

WINRT_EXPORT namespace winrt::impl
{
    struct flat_cache_descriptor
    {
        guid const* iid{};
#if defined(_M_IX86)
        std::uint16_t const* stack_pop_sizes{};
#endif
    };

    template <typename Interface>
    struct abi_method_pops
    {
#if defined(_M_IX86)
        inline static constexpr std::uint16_t pops[1] = {};
#endif
    };

    // ========================================================================
    // Thunk data structures
    // ========================================================================

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable: 4324) // Intentional 16-byte alignment for tagged thunk payload decoding.
#endif
    struct alignas(16) flat_runtimeclass_header
    {
        mutable std::atomic<void*> default_cache{};
        flat_cache_descriptor const* descriptor_table{};
    };
#if defined(_MSC_VER)
#pragma warning(pop)
#endif

    inline constexpr size_t flat_pair_offset = sizeof(std::atomic<void*>);  // 8
    inline constexpr size_t flat_pair_stride = flat_pair_offset + 2 * sizeof(void*);  // 24

    struct interface_thunk
    {
        void const* const* vtable;
        uintptr_t payload;

    private:
        flat_cache_descriptor const* descriptor() const noexcept
        {
            auto* hdr = reinterpret_cast<flat_runtimeclass_header*>(payload & ~uintptr_t(0xF));
            auto offset = reinterpret_cast<char const*>(this) - reinterpret_cast<char const*>(hdr);
            auto index = static_cast<size_t>(offset - sizeof(flat_runtimeclass_header) - flat_pair_offset)
                         / flat_pair_stride;
            return hdr->descriptor_table + index;
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

            auto const* desc = descriptor();
            auto* hdr = reinterpret_cast<flat_runtimeclass_header*>(payload & ~uintptr_t(0xF));
            void* default_abi = hdr->default_cache.load(std::memory_order_relaxed);

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

    extern "C" inline void* winrt_flat_resolve_thunk(interface_thunk const* thunk)
    {
        return thunk->resolve();
    }
    // Force the compiler to emit the inline function body so the ASM thunk stubs can find it.
    extern "C" __declspec(selectany) void* (*winrt_flat_resolve_forcelink_)(interface_thunk const*) = winrt_flat_resolve_thunk;
    extern "C" const void* winrt_flat_thunk_vtable[];

    struct cache_and_thunk_tagged
    {
        mutable std::atomic<void*> cache{};
        mutable interface_thunk thunk{};
    };
    static_assert(sizeof(cache_and_thunk_tagged) == (sizeof(std::atomic<void*>) + sizeof(interface_thunk)));
    static_assert(offsetof(cache_and_thunk_tagged, thunk) == sizeof(std::atomic<void*>));
    static_assert(sizeof(cache_and_thunk_tagged) == flat_pair_stride);
    static_assert(offsetof(cache_and_thunk_tagged, thunk) == flat_pair_offset);

    inline void init_pair_tagged(cache_and_thunk_tagged& p, flat_runtimeclass_header* header)
    {
        p.cache.store(&p.thunk, std::memory_order_relaxed);
        p.thunk.vtable = reinterpret_cast<void const* const*>(winrt_flat_thunk_vtable);
        p.thunk.payload = reinterpret_cast<uintptr_t>(header) | 1;
    }

    // ========================================================================
    // Non-template base: all COM lifecycle operations via (pointer, count, stride)
    // ========================================================================

    struct flat_runtimeclass_base : flat_runtimeclass_header
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

        __declspec(noinline) void attach_impl(void* default_abi, void* pairs_begin, size_t count, size_t stride)
        {
            default_cache.store(default_abi, std::memory_order_relaxed);
            auto* base = static_cast<char*>(pairs_begin);
            for (size_t i = 0; i < count; ++i, base += stride)
                init_pair_tagged(*reinterpret_cast<cache_and_thunk_tagged*>(base), this);
        }

        __declspec(noinline) void copy_from(flat_runtimeclass_base const& other, void* pairs_begin, size_t count, size_t stride)
        {
            if (auto p = other.default_cache.load(std::memory_order_relaxed))
            {
                static_cast<unknown_abi*>(p)->AddRef();
                attach_impl(p, pairs_begin, count, stride);
            }
        }

        __declspec(noinline) void move_from(flat_runtimeclass_base& other, void* my_pairs, void* other_pairs, size_t count, size_t stride)
        {
            auto p = other.default_cache.exchange(nullptr, std::memory_order_acquire);
            if (p) attach_impl(p, my_pairs, count, stride);
            other.clear_impl(other_pairs, count, stride);
        }

        __declspec(noinline) void assign_copy_impl(flat_runtimeclass_base const& other, void* pairs_begin, size_t count, size_t stride)
        {
            if (this != &other)
            {
                clear_impl(pairs_begin, count, stride);
                copy_from(other, pairs_begin, count, stride);
            }
        }

        __declspec(noinline) void assign_move_impl(flat_runtimeclass_base& other, void* my_pairs, void* other_pairs, size_t count, size_t stride)
        {
            if (this != &other)
            {
                clear_impl(my_pairs, count, stride);
                move_from(other, my_pairs, other_pairs, count, stride);
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

        friend bool operator==(flat_runtimeclass_base const& left, flat_runtimeclass_base const& right) noexcept
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

        friend bool operator!=(flat_runtimeclass_base const& left, flat_runtimeclass_base const& right) noexcept
        {
            return !(left == right);
        }

        friend bool operator==(flat_runtimeclass_base const& left, std::nullptr_t) noexcept
        {
            return left.default_cache.load(std::memory_order_relaxed) == nullptr;
        }

        friend bool operator!=(flat_runtimeclass_base const& left, std::nullptr_t) noexcept
        {
            return left.default_cache.load(std::memory_order_relaxed) != nullptr;
        }

        friend bool operator==(std::nullptr_t, flat_runtimeclass_base const& right) noexcept
        {
            return right.default_cache.load(std::memory_order_relaxed) == nullptr;
        }

        friend bool operator!=(std::nullptr_t, flat_runtimeclass_base const& right) noexcept
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
    struct flat_runtimeclass : flat_runtimeclass_base
    {
        static constexpr size_t N = sizeof...(I);
        using pair_type = cache_and_thunk_tagged;
        static constexpr size_t pair_stride = sizeof(pair_type);

        using flat_interfaces = std::tuple<IDefault, I...>;

#if defined(_M_IX86)
        inline static const std::array<flat_cache_descriptor, N> descriptors{ flat_cache_descriptor{ &guid_of<I>(), abi_method_pops<I>::pops }... };
#else
        inline static const std::array<flat_cache_descriptor, N> descriptors{ flat_cache_descriptor{ &guid_of<I>() }... };
#endif
        mutable std::array<pair_type, N> pairs{};

    protected:
        flat_runtimeclass(std::nullptr_t) noexcept
        {
            descriptor_table = descriptors.data();
        }

        flat_runtimeclass(void* default_abi, take_ownership_from_abi_t) noexcept
        {
            descriptor_table = descriptors.data();
            attach_impl(default_abi, pairs.data(), N, pair_stride);
        }

        flat_runtimeclass() noexcept
        {
            descriptor_table = descriptors.data();
        }

    public:
        ~flat_runtimeclass()
        {
            clear_impl(pairs.data(), N, pair_stride);
        }

        flat_runtimeclass(flat_runtimeclass const& other)
        {
            descriptor_table = descriptors.data();
            copy_from(other, pairs.data(), N, pair_stride);
        }

        flat_runtimeclass(flat_runtimeclass&& other) noexcept
        {
            descriptor_table = descriptors.data();
            move_from(other, pairs.data(), other.pairs.data(), N, pair_stride);
        }

        flat_runtimeclass& operator=(flat_runtimeclass const& other)
        {
            assign_copy_impl(other, pairs.data(), N, pair_stride);
            return *this;
        }

        flat_runtimeclass& operator=(flat_runtimeclass&& other) noexcept
        {
            assign_move_impl(other, pairs.data(), other.pairs.data(), N, pair_stride);
            return *this;
        }

        flat_runtimeclass& operator=(std::nullptr_t) noexcept
        {
            clear_impl(pairs.data(), N, pair_stride);
            return *this;
        }

        using flat_runtimeclass_base::operator bool;
        using flat_runtimeclass_base::as;
        using flat_runtimeclass_base::try_as;
        using flat_runtimeclass_base::get_default_abi;
        using flat_runtimeclass_base::put_default_abi;
        using flat_runtimeclass_base::detach_default_abi;
        using flat_runtimeclass_base::attach_default_abi;
        using flat_runtimeclass_base::copy_from_default_abi;
        using flat_runtimeclass_base::copy_to_default_abi;

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

        void clear_flat() noexcept
        {
            clear_impl(pairs.data(), N, pair_stride);
        }

        void reset_flat(void* new_default_abi) noexcept
        {
            clear_impl(pairs.data(), N, pair_stride);
            if (new_default_abi)
            {
                attach_impl(new_default_abi, pairs.data(), N, pair_stride);
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

    // Lightweight parameter wrapper for IN runtimeclass parameters in consume_ methods.
    // Avoids constructing a full thunked runtimeclass temporary (with cache slot
    // initialization + teardown) when a derived type is passed to a method expecting
    // a base type. Instead, just QIs for the target's default interface.
    template <typename T>
    struct param_ref
    {
        void* abi{};

        // From same type — borrow the ABI pointer (caller keeps it alive).
        param_ref(T const& value) noexcept : abi(get_abi(value)) {}

        // From produce_borrowed_ref<T> — borrow its ABI pointer.
        param_ref(produce_borrowed_ref<T> const& value) noexcept : abi(get_abi(static_cast<T const&>(value))) {}

        // From a derived thunked type — read T's default interface directly from
        // the source's thunk cache slot. No QI needed; the slot contains either
        // the resolved ABI pointer or a self-resolving thunk, both valid for ABI calls.
        // The source object stays alive for the call duration, keeping the slot valid.
        template <typename U, std::enable_if_t<
            has_flat_cache_v<U> &&
            !std::is_same_v<U, T> &&
            has_flat_interface_v<U, typename default_interface<T>::type>, int> = 0>
        param_ref(U const& value) noexcept
            : abi(value.template thunk_cache_slot<typename default_interface<T>::type>().load(std::memory_order_acquire))
        {
        }

        param_ref(std::nullptr_t) noexcept {}

        // Copyable — copies borrow, only original releases.
        param_ref(param_ref const& other) noexcept : abi(other.abi) {}
        param_ref& operator=(param_ref const&) = delete;
    };
}
