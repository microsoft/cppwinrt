
WINRT_EXPORT namespace winrt
{
    void check_hresult(hresult const result);
    hresult to_hresult() noexcept;

    template <typename D, typename I>
    D* get_self(I const& from) noexcept;

    struct take_ownership_from_abi_t {};
    inline constexpr take_ownership_from_abi_t take_ownership_from_abi{};

    template <typename T>
    struct com_ptr;

    namespace param
    {
        template <typename T>
        struct iterable;

        template <typename T>
        struct async_iterable;

        template <typename K, typename V>
        struct map_view;

        template <typename K, typename V>
        struct async_map_view;

        template <typename K, typename V>
        struct map;

        template <typename T>
        struct vector_view;

        template <typename T>
        struct async_vector_view;

        template <typename T>
        struct vector;
    }
}

namespace winrt::impl
{
    using namespace std::literals;

    template <typename Async>
    void blocking_suspend(Async const& async);

    template <typename T>
    struct reference_traits;

    template <typename T>
    struct identity
    {
        using type = T;
    };

    template <typename T, typename Enable = void>
    struct abi
    {
        using type = T;
    };

    template <typename T>
    struct abi<T, std::enable_if_t<std::is_enum_v<T>>>
    {
        using type = std::underlying_type_t<T>;
    };

    template <typename T>
    using abi_t = typename abi<T>::type;

    template <typename T>
    struct consume;

    template <typename D, typename I = D>
    using consume_t = typename consume<I>::template type<D>;

    template <typename T, typename H>
    struct delegate;

    template <typename T, typename = std::void_t<>>
    struct default_interface
    {
        using type = T;
    };

    struct basic_category;
    struct interface_category;
    struct delegate_category;
    struct enum_category;
    struct class_category;

    template <typename T>
    struct category
    {
        using type = void;
    };

    template <typename T>
    using category_t = typename category<T>::type;

    template <typename T>
    inline constexpr bool has_category_v = !std::is_same_v<category_t<T>, void>;

    template <typename... Args>
    struct generic_category;

    template <typename... Fields>
    struct struct_category;

    template <typename Category, typename T>
    struct category_signature;

    template <typename T>
    struct signature
    {
        static constexpr auto data{ category_signature<category_t<T>, T>::data };
    };

    template <typename T>
#ifdef __IUnknown_INTERFACE_DEFINED__
#ifdef __clang__
    inline const guid guid_v{ __uuidof(T) };
#else
    inline constexpr guid guid_v{ __uuidof(T) };
#endif
#else
    inline constexpr guid guid_v{};
#endif

    template <typename T>
    constexpr auto to_underlying_type(T const value) noexcept
    {
        return static_cast<std::underlying_type_t<T>>(value);
    }

    template <typename, typename = std::void_t<>>
    struct is_implements : std::false_type {};

    template <typename T>
    struct is_implements<T, std::void_t<typename T::implements_type>> : std::true_type {};

    template <typename T>
    inline constexpr bool is_implements_v = is_implements<T>::value;

    template <typename D, typename I>
    struct require_one : consume_t<D, I>
    {
        operator I() const noexcept
        {
            return static_cast<D const*>(this)->template try_as<I>();
        }
    };

    template <typename D, typename... I>
    struct __declspec(empty_bases) require : require_one<D, I>...
    {};

    template <typename D, typename I>
    struct base_one
    {
        operator I() const noexcept
        {
            return static_cast<D const*>(this)->template try_as<I>();
        }
    };

    template <typename D, typename... I>
    struct __declspec(empty_bases) base : base_one<D, I>...
    {};

    template <typename T>
    T empty_value() noexcept
    {
        if constexpr (std::is_base_of_v<Windows::Foundation::IUnknown, T>)
        {
            return nullptr;
        }
        else
        {
            return {};
        }
    }

    template <typename T, typename Enable = void>
    struct arg
    {
        using in = abi_t<T>;
    };

    template <typename T>
    struct arg<T, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    {
        using in = void*;
    };

    template <typename T>
    using arg_in = typename arg<T>::in;

    template <typename T>
    using arg_out = arg_in<T>*;

    template <typename D, typename I, typename Enable = void>
    struct produce_base;

    template <typename D, typename I>
    struct produce;

    template <typename D>
    struct produce<D, Windows::Foundation::IInspectable> : produce_base<D, Windows::Foundation::IInspectable>
    {
    };

    template <typename T>
    struct wrapped_type
    {
        using type = T;
    };

    template <typename T>
    struct wrapped_type<com_ptr<T>>
    {
        using type = T;
    };

    template <typename T>
    using wrapped_type_t = typename wrapped_type<T>::type;

    template <template <typename...> typename Trait, typename Enabler, typename... Args>
    struct is_detected : std::false_type {};

    template <template <typename...> typename Trait, typename... Args>
    struct is_detected<Trait, std::void_t<Trait<Args...>>, Args...> : std::true_type {};

    template <template <typename...> typename Trait, typename... Args>
    inline constexpr bool is_detected_v = std::is_same_v<typename is_detected<Trait, void, Args...>::type, std::true_type>;

    template <typename ... Types>
    struct typelist {};

    template <typename ... Lists>
    struct typelist_concat;

    template <>
    struct typelist_concat<> { using type = winrt::impl::typelist<>; };

    template <typename ... List>
    struct typelist_concat<winrt::impl::typelist<List...>> { using type = winrt::impl::typelist<List...>; };

    template <typename ... List1, typename ... List2, typename ... Rest>
    struct typelist_concat<winrt::impl::typelist<List1...>, winrt::impl::typelist<List2...>, Rest...>
        : typelist_concat<winrt::impl::typelist<List1..., List2...>, Rest...>
    {};

    template <typename T>
    struct for_each;

    template <typename ... Types>
    struct for_each<typelist<Types...>>
    {
        template <typename Func>
        static auto apply([[maybe_unused]] Func&& func)
        {
            return (func(Types{}), ...);
        }
    };

    template <typename T>
    struct find_if;

    template <typename ... Types>
    struct find_if<typelist<Types...>>
    {
        template <typename Func>
        static bool apply([[maybe_unused]] Func&& func)
        {
            return (func(Types{}) || ...);
        }
    };
}
