// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#if defined(_MSC_FULL_VER) && _MSC_FULL_VER < 191125506
#define WINRT_STRINGIZE_(x) #x
#define WINRT_STRINGIZE(x) WINRT_STRINGIZE_(x)
#pragma message(__FILE__ "(" WINRT_STRINGIZE(__LINE__) ") : warning: Visual Studio 2017 version 15.3 or later is recommended.")
#endif

#if defined(__clang__) 
#define WINRT_WARNING_PUSH \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wdeprecated-declarations\"") \
_Pragma("clang diagnostic ignored \"-Wdeprecated-implementations\"")
#define WINRT_WARNING_POP \
_Pragma("clang diagnostic pop")
#else
#define WINRT_WARNING_PUSH \
__pragma(warning(push)) \
__pragma(warning(disable: 4996))
#define WINRT_WARNING_POP \
__pragma(warning(pop))
#endif

WINRT_WARNING_PUSH

#include <inspectable.h>
#include <restrictederrorinfo.h>
#include <winstring.h>
#include <ctxtcall.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <cstddef>
#include <iterator>
#include <map>
#include <memory>
#include <new>
#include <optional>
#include <string>
#include <string_view>
#include <stdexcept>
#include <tuple>
#include <type_traits>
#include <utility>
#include <unordered_map>
#include <vector>
#include <experimental/coroutine>

extern "C"
{
    HRESULT __stdcall WINRT_GetRestrictedErrorInfo(IRestrictedErrorInfo** info);
    HRESULT __stdcall WINRT_RoGetActivationFactory(HSTRING classId, GUID const& iid, void** factory);
    HRESULT __stdcall WINRT_RoInitialize(uint32_t type);
    BOOL    __stdcall WINRT_RoOriginateLanguageException(HRESULT error, HSTRING message, IUnknown* exception);
    void    __stdcall WINRT_RoUninitialize();
    HRESULT __stdcall WINRT_SetRestrictedErrorInfo(IRestrictedErrorInfo* info);
}

#ifdef _M_IX86
#pragma comment(linker, "/alternatename:_WINRT_GetRestrictedErrorInfo@4=_GetRestrictedErrorInfo@4")
#pragma comment(linker, "/alternatename:_WINRT_RoGetActivationFactory@12=_RoGetActivationFactory@12")
#pragma comment(linker, "/alternatename:_WINRT_RoInitialize@4=_RoInitialize@4")
#pragma comment(linker, "/alternatename:_WINRT_RoOriginateLanguageException@12=_RoOriginateLanguageException@12")
#pragma comment(linker, "/alternatename:_WINRT_RoUninitialize@0=_RoUninitialize@0")
#pragma comment(linker, "/alternatename:_WINRT_SetRestrictedErrorInfo@4=_SetRestrictedErrorInfo@4")
#else
#pragma comment(linker, "/alternatename:WINRT_GetRestrictedErrorInfo=GetRestrictedErrorInfo")
#pragma comment(linker, "/alternatename:WINRT_RoGetActivationFactory=RoGetActivationFactory")
#pragma comment(linker, "/alternatename:WINRT_RoInitialize=RoInitialize")
#pragma comment(linker, "/alternatename:WINRT_RoOriginateLanguageException=RoOriginateLanguageException")
#pragma comment(linker, "/alternatename:WINRT_RoUninitialize=RoUninitialize")
#pragma comment(linker, "/alternatename:WINRT_SetRestrictedErrorInfo=SetRestrictedErrorInfo")
#endif

#ifdef _DEBUG

#include <assert.h>

#define WINRT_DEBUG
#define WINRT_ASSERT _ASSERTE
#define WINRT_VERIFY WINRT_ASSERT
#define WINRT_VERIFY_(result, expression) WINRT_ASSERT(result == expression)

template <typename ... Args>
void WINRT_TRACE(char const* const message, Args ... args) noexcept
{
    char buffer[1024];
    (void)snprintf(buffer, sizeof(buffer), message, args ...);
    OutputDebugStringA(buffer);
}

#else

#define WINRT_ASSERT __noop
#define WINRT_VERIFY(expression) (void)(expression)
#define WINRT_VERIFY_(result, expression) (void)(expression)
#define WINRT_TRACE __noop

#endif

#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#endif

#define WINRT_EBO __declspec(empty_bases)

#ifdef _WIN64
#define WINRT_64
#endif

#if defined(_MSC_VER) && _ITERATOR_DEBUG_LEVEL != 0
#define WINRT_CHECKED_ITERATORS
#endif

#ifndef FORMAT_MESSAGE_ALLOCATE_BUFFER
#define FORMAT_MESSAGE_ALLOCATE_BUFFER 0x00000100
#endif

#ifndef __IAgileReference_INTERFACE_DEFINED__
#define WINRT_NO_AGILE_REFERENCE
#endif

#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_

#ifdef __clang__
#define _XM_NO_INTRINSICS_
#endif

#if !__has_include(<WindowsNumerics.impl.h>)
static_assert(false, "Please target platform version 10.0.14393.0 or later.");
#endif
#include <WindowsNumerics.impl.h>

#ifdef __clang__
#undef _XM_NO_INTRINSICS_
#endif

#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_

#define WINRT_SHIM(Type) (*(abi_t<Type>**)&static_cast<Type const&>(static_cast<D const&>(*this)))

#undef GetCurrentTime

#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#endif

namespace winrt::impl
{
    template <typename T>
    struct identity
    {
        using type = T;
    };

    template <typename T>
    struct abi
    {
        using type = T;
    };

    template <typename T>
    using abi_t = typename abi<T>::type;

    template <typename T>
    struct consume;

    template <typename D, typename I = D>
    using consume_t = typename consume<I>::template type<D>;

    template <typename T>
    struct delegate;

    template <typename T, typename H>
    using delegate_t = typename delegate<T>::template type<H>;

    template <typename D, typename I>
    struct produce;

    template <typename T>
    struct default_interface
    {
        using type = T;
    };

    template <typename T>
    using default_interface_t = typename default_interface<T>::type;

    template <typename T>
    struct name;

    template <typename T>
    constexpr auto & name_v = name<T>::value;

    template <typename T>
    struct category;

    template <typename T>
    using category_t = typename category<T>::type;

    struct basic_category;
    struct interface_category;
    struct delegate_category;
    struct enum_category;
    struct class_category;

    template <typename ... Args>
    struct pinterface_category;

    template <typename ... Fields>
    struct struct_category;

    template <typename Category, typename T>
    struct category_signature;

    template <typename T>
    struct signature
    {
        static constexpr auto data{ category_signature<typename category<T>::type, T>::data };
    };

    template <typename T>
    struct guid
    {
        static constexpr GUID value = __uuidof(T);
    };

#ifdef __clang__
    template <typename T>
    constexpr GUID const guid_v = guid<default_interface_t<T>>::value;
#endif

    template <typename T, typename Enable = void>
    struct accessors
    {
        static abi_t<T> get(T const& object) noexcept
        {
            return reinterpret_cast<abi_t<T> const&>(object);
        }

        static abi_t<T>* put(T& object) noexcept
        {
            return reinterpret_cast<abi_t<T>*>(&object);
        }

        static void copy_from(T& object, abi_t<T> const& value) noexcept
        {
            object = reinterpret_cast<T const&>(value);
        }

        static void copy_to(T const& object, abi_t<T>& value) noexcept
        {
            reinterpret_cast<T&>(value) = object;
        }

        static abi_t<T> detach(T& object) noexcept
        {
            abi_t<T> result{};
            reinterpret_cast<T&>(result) = std::move(object);
            return result;
        }
    };

    template <typename T>
    auto put_size_abi(T& object) noexcept
    {
        return accessors<T>::put_size(object);
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    using abi_t = impl::abi_t<T>;

    template <typename T>
    inline constexpr GUID const& guid_of() noexcept
    {
#ifdef __clang__
        return impl::guid_v<T>;
#else
        return impl::guid<impl::default_interface_t<T>>::value;
#endif
    }

    template <typename T>
    auto get_abi(T const& object) noexcept
    {
        return impl::accessors<T>::get(object);
    }

    template <typename T>
    auto put_abi(T& object) noexcept
    {
        return impl::accessors<T>::put(object);
    }

    template <typename T, typename V>
    void attach_abi(T& object, V&& value) noexcept
    {
        impl::accessors<T>::attach(object, value);
    }

    template <typename T, typename V>
    void copy_from_abi(T& object, V&& value)
    {
        impl::accessors<T>::copy_from(object, value);
    }

    template <typename T, typename V>
    void copy_to_abi(T const& object, V& value)
    {
        impl::accessors<T>::copy_to(object, value);
    }

    template <typename T>
    auto detach_abi(T& object)
    {
        return impl::accessors<std::decay_t<T>>::detach(object);
    }

    template <typename T>
    auto detach_abi(T&& object)
    {
        return impl::accessors<T>::detach(object);
    }
}

namespace winrt::impl
{
    template <typename D, typename I>
    struct require_one : consume_t<D, I>
    {
        operator I() const
        {
            D const& d = *static_cast<D const*>(this);

            if (d)
            {
                return d.template as<I>();
            }

            return nullptr;
        }
    };

    template <typename D, typename ... I>
    struct WINRT_EBO require : require_one<D, I> ...
    {};

    template <typename D, typename I>
    struct base_one
    {
        operator I() const
        {
            D const& d = *static_cast<D const*>(this);

            if (d)
            {
                return d.template as<I>();
            }

            return nullptr;
        }
    };

    template <typename D, typename ... I>
    struct WINRT_EBO base : base_one<D, I> ...
    {};

    template <typename T>
    class no_ref : public T
    {
        unsigned long __stdcall AddRef() noexcept;
        unsigned long __stdcall Release() noexcept;
    };
}

namespace winrt::impl 
{
    template <typename T, size_t N, typename D = void>
    struct constexpr_array 
    {
        using value_type = T;
        using size_type = size_t;
        using reference = value_type &;
        using const_reference = value_type const &;

        constexpr size_type size() const noexcept 
        {
            return N;
        }

        constexpr const_reference operator[](size_type i) const noexcept
        {
            return m_elems[i];
        }

        constexpr reference operator[](size_type i) noexcept
        {
            return m_elems[i];
        }

        constexpr const T * data() const noexcept
        {
            return m_elems;
        }

        T m_elems[N];
    };

    template <typename T, typename D>
    struct constexpr_array <T, 0, D>
    {
        using value_type = T;
        using size_type = size_t;
        using reference = value_type &;
        using const_reference = value_type const &;

        constexpr size_type size() const noexcept
        {
            return 0;
        }

        constexpr const T * data() const noexcept
        {
            return nullptr;
        }

        T const * m_elems = nullptr;
    };

    template <typename T, typename D, size_t N1, size_t N2, size_t ... Index, size_t ... Index2>
    constexpr constexpr_array<T, N1 + N2, D> concat(constexpr_array<T, N1, D> const & left, constexpr_array<T, N2, D> const & right, std::index_sequence<Index ...> const, std::index_sequence<Index2 ...> const)
    {
        return { { left[Index] ..., right[Index2] ... } };
    }

    template <typename T, typename D, size_t N, size_t ... Index>
    constexpr constexpr_array<std::remove_cv_t<T>, N, D> to_array(T const (&value)[N], std::index_sequence<Index ...> const)
    {
        return { { value[Index] ... } };    
    }

    template <typename T, typename D, size_t N1, size_t N2>
    constexpr constexpr_array<T, N1 + N2, D> concat(constexpr_array<T, N1, D> const & left, constexpr_array<T, N2, D> const & right) 
    {
        return concat(left, right, std::make_index_sequence<N1>(), std::make_index_sequence<N2>());
    }

    template <typename T, typename D, size_t N1>
    constexpr constexpr_array<T, N1, D> concat(constexpr_array<T, N1, D> const & left, constexpr_array<T, 0, D> const &)
    {
        return left;
    }

    template <typename T, typename D, size_t N1, size_t N2>
    constexpr constexpr_array<T, N1 + N2, D> operator+(constexpr_array<T, N1> const & left, constexpr_array<T, N2, D> const & right)
    {
        return concat(left, right, std::make_index_sequence<N1>(), std::make_index_sequence<N2>());
    }

    template <typename T, size_t N, typename D>
    constexpr constexpr_array<T, N + 1, D> operator+(constexpr_array<T, N> const & left, T const & right) 
    {
        constexpr_array<T, 1, D> temp{ right };
        return concat(left, temp, std::make_index_sequence<N>(), std::make_index_sequence<1>());
    }

    template <typename T, size_t N, typename D>
    constexpr constexpr_array<T, N + 1, D> append(constexpr_array<T, N, D> const & left, T const & right) 
    {
        return concat(left, constexpr_array<T, 1, D>{ {right} }, std::make_index_sequence<N>(), std::make_index_sequence<1>());
    }

    template <typename D, typename T, size_t N>
    constexpr constexpr_array<std::remove_cv_t<T>, N, D> to_array(T const (&value)[N]) 
    {
        return to_array<T, D>(value, std::make_index_sequence<N>());
    }

    template <typename T, size_t N>
    constexpr auto to_array(T const (&value)[N]) 
    {
        return to_array<void>(value);
    }

    struct string_discriminator { };

    template <typename T, size_t N>
    using constexpr_string = constexpr_array<T, N, string_discriminator>;

    template <typename T, size_t N>
    constexpr auto make_constexpr_string(T const (&arr)[N]) 
    {
        return to_array<string_discriminator>(arr);
    }
    
    template <typename T, size_t N>
    constexpr auto make_constexpr_string(constexpr_string<T, N> const & str) 
    {
        return str;
    }

    template <typename T, size_t N, size_t ... Index>
    constexpr constexpr_string<T, sizeof ... (Index)> truncate(constexpr_string<T, N> const & value, std::index_sequence<Index ...>)
    {
        return { { value[Index] ... } };
    }

    template <size_t L, typename T, size_t N>
    constexpr constexpr_string<T, L> truncate(constexpr_string<T, N> const & value)
    {
        return truncate(value, std::make_index_sequence<L>());
    }

    template <typename T, size_t N1, size_t N2>
    constexpr auto string_concat(constexpr_string<T, N1> const & left, constexpr_string<T, N2> const & right)
    {
        return append(concat(truncate<N1 - 1>(left), truncate<N2 - 1>(right)), T());
    }

    template<typename T, size_t N1, size_t N2>
    constexpr auto operator+(constexpr_string<T, N1> const & left, constexpr_string<T, N2> const & right)
    {
        return string_concat(left, right);
    }

    template<typename T, size_t N1, size_t N2>
    constexpr auto operator+(T const (&left)[N1], constexpr_string<T, N2> const & right)
    {
        return string_concat(make_constexpr_string(left), right);
    }

    template<typename T, size_t N1, size_t N2>
    constexpr auto operator+(constexpr_string<T, N1> const & left, T const (&right)[N2])
    {
        return string_concat(left, make_constexpr_string(right));
    }
    
    template <typename T, size_t N1, size_t N2>
    constexpr bool string_compare(T const (&left)[N1], T const (&right)[N2])
    {
        if constexpr(N1 != N2)
        {
            return false;
        }

        for (size_t index = 0; index < N1; index++)
        {
            if (left[index] != right[index])
            {
                return false;
            }
        }

        return true;
    }

    template <typename T, size_t N1, size_t N2>
    constexpr bool operator==(constexpr_string<T, N1> const & left, T const (&right)[N2])
    {
        return string_compare(left.m_elems, right);
    }

    template <typename T, size_t N1, size_t N2>
    constexpr bool operator==(T const (&left)[N1], constexpr_string<T, N2> const & right)
    {
        return string_compare(left, right.m_elems);
    }

    template <typename T, size_t N1, size_t N2>
    constexpr bool operator==(constexpr_string<T, N1> const & left, constexpr_string<T, N2> const & right)
    {
        return string_compare(left.m_elems, right.m_elems);
    }

    template <typename T, size_t Size>
    constexpr auto & string_data(constexpr_string<T, Size> const & value)
    {
        return value.m_elems;
    }

    template <typename T, size_t Size>
    constexpr auto & string_data(T const (&value)[Size])
    {
        return value;
    }
}

namespace winrt::impl
{
    template <typename T>
    struct handle_traits
    {
        using type = T;

        constexpr static type invalid() noexcept
        {
            return nullptr;
        }

        // static void close(type value) noexcept;
    };

    template <typename T>
    struct handle
    {
        using type = typename T::type;

        handle() noexcept = default;

        handle(type value) noexcept :
        m_value(value)
        {}

        handle(handle&& other) noexcept :
            m_value(other.detach())
        {}

        handle& operator=(handle&& other) noexcept
        {
            if (this != &other)
            {
                attach(other.detach());
            }

            return*this;
        }

        ~handle() noexcept
        {
            close();
        }

        void close() noexcept
        {
            if (*this)
            {
                T::close(m_value);
                m_value = T::invalid();
            }
        }

        explicit operator bool() const noexcept
        {
            return T::invalid() != m_value;
        }

        type get() const noexcept
        {
            return m_value;
        }

        type* put() noexcept
        {
            WINRT_ASSERT(m_value == T::invalid());
            return &m_value;
        }

        void attach(type value) noexcept
        {
            close();
            *put() = value;
        }

        type detach() noexcept
        {
            type value = m_value;
            m_value = T::invalid();
            return value;
        }

        friend void swap(handle& left, handle& right) noexcept
        {
            std::swap(left.m_value, right.m_value);
        }

    private:

        type m_value = T::invalid();
    };

    template <typename T>
    bool operator==(handle<T> const& left, handle<T> const& right) noexcept
    {
        return left.get() == right.get();
    }

    template <typename T>
    bool operator!=(handle<T> const& left, handle<T> const& right) noexcept
    {
        return !(left == right);
    }

    template <typename T>
    bool operator<(handle<T> const& left, handle<T> const& right) noexcept
    {
        return left.get() < right.get();
    }

    template <typename T>
    bool operator>(handle<T> const& left, handle<T> const& right) noexcept
    {
        return right < left;
    }

    template <typename T>
    bool operator<=(handle<T> const& left, handle<T> const& right) noexcept
    {
        return !(right < left);
    }

    template <typename T>
    bool operator>=(handle<T> const& left, handle<T> const& right) noexcept
    {
        return !(left < right);
    }
}

WINRT_EXPORT namespace winrt
{
    void check_hresult(HRESULT result);

    template <typename T>
    struct com_ptr;

    namespace Windows::Foundation
    {
        struct IUnknown;
    }
}

namespace winrt::impl
{
    template <typename To, typename From>
    auto as(From* ptr)
    {
        std::conditional_t<std::is_base_of_v<Windows::Foundation::IUnknown, To>, To, com_ptr<To>> temp{ nullptr };
        check_hresult(ptr->QueryInterface(guid_of<To>(), reinterpret_cast<void**>(put_abi(temp))));
        return temp;
    }

    template <typename To, typename From>
    auto try_as(From* ptr)
    {
        std::conditional_t<std::is_base_of_v<Windows::Foundation::IUnknown, To>, To, com_ptr<To>> temp{ nullptr };
        ptr->QueryInterface(guid_of<To>(), reinterpret_cast<void**>(put_abi(temp)));
        return temp;
    }

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
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct com_ptr
    {
        using type = abi_t<T>;

        com_ptr(std::nullptr_t = nullptr) noexcept {}

        com_ptr(com_ptr const& other) noexcept :
        m_ptr(other.m_ptr)
        {
            addref();
        }

        template <typename U>
        com_ptr(com_ptr<U> const& other) noexcept :
        m_ptr(other.m_ptr)
        {
            addref();
        }

        template <typename U>
        com_ptr(com_ptr<U>&& other) noexcept :
        m_ptr(other.m_ptr)
        {
            other.m_ptr = nullptr;
        }

        ~com_ptr() noexcept
        {
            release();
        }

        com_ptr& operator=(com_ptr const& other) noexcept
        {
            copy(other.m_ptr);
            return*this;
        }

        template <typename U>
        com_ptr& operator=(com_ptr<U> const& other) noexcept
        {
            copy(other.m_ptr);
            return*this;
        }

        template <typename U>
        com_ptr& operator=(com_ptr<U>&& other) noexcept
        {
            if (m_ptr != other.m_ptr)
            {
                release();
                m_ptr = other.m_ptr;
                other.m_ptr = nullptr;
            }

            return*this;
        }

        explicit operator bool() const noexcept
        {
            return m_ptr != nullptr;
        }

        auto operator->() const noexcept
        {
            return static_cast<impl::no_ref<type>*>(m_ptr);
        }

        T& operator*() const noexcept
        {
            return*m_ptr;
        }

        type* get() const noexcept
        {
            return m_ptr;
        }

        type** put() noexcept
        {
            WINRT_ASSERT(m_ptr == nullptr);
            return &m_ptr;
        }

        void** put_void() noexcept
        {
            return reinterpret_cast<void**>(put());
        }

        void attach(type* value) noexcept
        {
            release();
            *put() = value;
        }

        type* detach() noexcept
        {
            type* temp = m_ptr;
            m_ptr = nullptr;
            return temp;
        }

        friend void swap(com_ptr& left, com_ptr& right) noexcept
        {
            std::swap(left.m_ptr, right.m_ptr);
        }

        template <typename To>
        auto as() const
        {
            return impl::as<To>(m_ptr);
        }

        template <typename To>
        auto try_as() const noexcept
        {
            return impl::try_as<To>(m_ptr);
        }

        template <typename To>
        void as(To& to)
        {
            to = as<impl::wrapped_type_t<To>>();
        }

        template <typename To>
        bool try_as(To& to)
        {
            to = try_as<impl::wrapped_type_t<To>>();
            return static_cast<bool>(to);
        }

        void copy_from(type* other) noexcept
        {
            copy(other);
        }

        void copy_to(type** other) const noexcept
        {
            addref();
            *other = m_ptr;
        }

    private:

        void copy(type* other) noexcept
        {
            if (m_ptr != other)
            {
                release();
                m_ptr = other;
                addref();
            }
        }

        void addref() const noexcept
        {
            if (m_ptr)
            {
                m_ptr->AddRef();
            }
        }

        void release() noexcept
        {
            type* temp = m_ptr;

            if (temp)
            {
                m_ptr = nullptr;
                temp->Release();
            }
        }

        template <typename U>
        friend struct com_ptr;

        type* m_ptr = nullptr;
    };
}

namespace winrt::impl
{
    template <typename T>
    struct accessors<com_ptr<T>>
    {
        static auto get(com_ptr<T> const& object) noexcept
        {
            return object.get();
        }

        static auto put(com_ptr<T>& object) noexcept
        {
            return object.put();
        }

        static void attach(com_ptr<T>& object, abi_t<T>* value) noexcept
        {
            object.attach(value);
        }

        static auto detach(com_ptr<T>& object) noexcept
        {
            return object.detach();
        }
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    bool operator==(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return get_abi(left) == get_abi(right);
    }

    template <typename T>
    bool operator==(com_ptr<T> const& left, std::nullptr_t) noexcept
    {
        return get_abi(left) == nullptr;
    }

    template <typename T>
    bool operator==(std::nullptr_t, com_ptr<T> const& right) noexcept
    {
        return nullptr == get_abi(right);
    }

    template <typename T>
    bool operator!=(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return !(left == right);
    }

    template <typename T>
    bool operator!=(com_ptr<T> const& left, std::nullptr_t) noexcept
    {
        return !(left == nullptr);
    }

    template <typename T>
    bool operator!=(std::nullptr_t, com_ptr<T> const& right) noexcept
    {
        return !(nullptr == right);
    }

    template <typename T>
    bool operator<(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return get_abi(left) < get_abi(right);
    }

    template <typename T>
    bool operator>(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return right < left;
    }

    template <typename T>
    bool operator<=(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return !(right < left);
    }

    template <typename T>
    bool operator>=(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return !(left < right);
    }
}

namespace winrt::impl
{
    inline HSTRING duplicate_string(HSTRING other)
    {
        HSTRING result = nullptr;
        check_hresult(WindowsDuplicateString(other, &result));
        return result;
    }

    inline HSTRING create_string(wchar_t const* value, uint32_t const length)
    {
        HSTRING result = nullptr;
        check_hresult(WindowsCreateString(value, length, &result));
        return result;
    }

    inline uint32_t string_length(wchar_t const* value) noexcept
    {
        size_t length = 0;
        if (value)
        {
            length = wcslen(value);
        }
        WINRT_ASSERT(length <= 0xffffffff);
        return static_cast<uint32_t>(length);
    }

    inline bool embedded_null(HSTRING value) noexcept
    {
        BOOL result = 0;
        WINRT_VERIFY_(S_OK, WindowsStringHasEmbeddedNull(value, &result));
        return 0 != result;
    }

    struct hstring_traits : handle_traits<HSTRING>
    {
        static void close(type value) noexcept
        {
            WINRT_VERIFY_(S_OK, WindowsDeleteString(value));
        }
    };
}

WINRT_EXPORT namespace winrt
{
    struct hstring
    {
        using value_type = wchar_t;
        using size_type = uint32_t;
        using const_reference = value_type const&;
        using const_pointer = value_type const*;
        using const_iterator = const_pointer;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        hstring(std::nullptr_t = nullptr) noexcept {}
        hstring(hstring const& value);
        hstring& operator=(hstring const& value);
        hstring(hstring&&) noexcept = default;
        hstring& operator=(hstring&&) = default;

        hstring(wchar_t const* value);
        hstring(wchar_t const* value, size_type size);
        hstring(std::wstring const& value);

        explicit hstring(std::wstring_view const& value);

        hstring& operator=(std::wstring_view const& value);

        void clear() noexcept;
        operator std::wstring_view() const noexcept;

        const_reference operator[](size_type pos) const noexcept;
        const_reference front() const noexcept;
        const_reference back() const noexcept;
        const_pointer data() const noexcept;
        const_pointer c_str() const noexcept;
        const_iterator begin() const noexcept;
        const_iterator cbegin() const noexcept;
        const_iterator end() const noexcept;
        const_iterator cend() const noexcept;
        const_reverse_iterator rbegin() const noexcept;
        const_reverse_iterator crbegin() const noexcept;
        const_reverse_iterator rend() const noexcept;
        const_reverse_iterator crend() const noexcept;
        bool empty() const noexcept;
        size_type size() const noexcept;

        friend HSTRING impl_get(hstring const& string) noexcept
        {
            return string.m_handle.get();
        }

        friend HSTRING* impl_put(hstring& string) noexcept
        {
            return string.m_handle.put();
        }

        friend HSTRING impl_detach(hstring& string) noexcept
        {
            return string.m_handle.detach();
        }

        friend void swap(hstring& left, hstring& right) noexcept
        {
            swap(left.m_handle, right.m_handle);
        }

    private:

        impl::handle<impl::hstring_traits> m_handle;
    };
}

namespace winrt::impl
{
    template <> struct abi<hstring>
    {
        using type = HSTRING;
    };

    template <> struct name<hstring>
    {
        static constexpr auto & value{ L"String" };
        static constexpr auto & data{ "string" };
    };

    template <> struct category<hstring>
    {
        using type = basic_category;
    };

    template <> struct accessors<hstring>
    {
        static HSTRING get(hstring const& object) noexcept
        {
            return impl_get(object);
        }

        static HSTRING* put(hstring& object) noexcept
        {
            return impl_put(object);
        }

        static void attach(hstring& object, HSTRING value) noexcept
        {
            object.clear();
            *put(object) = value;
        }

        static void copy_from(hstring& object, HSTRING value)
        {
            attach(object, duplicate_string(value));
        }

        static void copy_to(hstring const& object, HSTRING& value)
        {
            WINRT_ASSERT(value == nullptr);
            value = duplicate_string(get(object));
        }

        static HSTRING detach(hstring& object) noexcept
        {
            return impl_detach(object);
        }
    };

    template <> struct accessors<wchar_t const*>
    {
        static HSTRING detach(wchar_t const* const value)
        {
            return create_string(value, string_length(value));
        }
    };

    template <> struct accessors<std::wstring>
    {
        static HSTRING detach(std::wstring const& value)
        {
            return create_string(value.c_str(), static_cast<uint32_t>(value.size()));
        }
    };

    template <> struct accessors<std::wstring_view>
    {
        static HSTRING detach(std::wstring_view const& value)
        {
            return create_string(value.data(), static_cast<uint32_t>(value.size()));
        }
    };
}

WINRT_EXPORT namespace winrt
{
    inline bool embedded_null(hstring const& value) noexcept
    {
        return impl::embedded_null(get_abi(value));
    }
}

WINRT_EXPORT namespace winrt
{
    inline hstring::hstring(hstring const& value) :
        m_handle(impl::duplicate_string(value.m_handle.get()))
    {}

    inline hstring& hstring::operator=(hstring const& value)
    {
        m_handle = impl::duplicate_string(value.m_handle.get());
        return*this;
    }

    inline hstring::hstring(std::wstring_view const& value) :
        hstring(value.data(), static_cast<size_type>(value.size()))
    {}

    inline hstring::hstring(std::wstring const& value) :
        hstring(static_cast<std::wstring_view const&>(value))
    {}

    inline hstring::hstring(wchar_t const* const value) :
        hstring(std::wstring_view(value))
    {}

    inline hstring::hstring(wchar_t const* const value, size_type const size) :
        m_handle(impl::create_string(value, size))
    {}

    inline hstring& hstring::operator=(std::wstring_view const& value)
    {
        return (*this = hstring{ value });
    }

    inline void hstring::clear() noexcept
    {
        m_handle.close();
    }

    inline hstring::operator std::wstring_view() const noexcept
    {
        uint32_t size;
        wchar_t const* data = WindowsGetStringRawBuffer(m_handle.get(), &size);
        return std::wstring_view(data, size);
    }

    inline hstring::const_reference hstring::operator[](size_type const pos) const noexcept
    {
        WINRT_ASSERT(pos < size());
        return*(begin() + pos);
    }

    inline hstring::const_reference hstring::front() const noexcept
    {
        WINRT_ASSERT(!empty());
        return*begin();
    }

    inline hstring::const_reference hstring::back() const noexcept
    {
        WINRT_ASSERT(!empty());
        return*(end() - 1);
    }

    inline hstring::const_pointer hstring::data() const noexcept
    {
        return begin();
    }

    inline hstring::const_pointer hstring::c_str() const noexcept
    {
        return begin();
    }

    inline hstring::const_iterator hstring::begin() const noexcept
    {
        return WindowsGetStringRawBuffer(m_handle.get(), nullptr);
    }

    inline hstring::const_iterator hstring::cbegin() const noexcept
    {
        return begin();
    }

    inline hstring::const_iterator hstring::end() const noexcept
    {
        uint32_t length = 0;
        const_pointer buffer = WindowsGetStringRawBuffer(m_handle.get(), &length);
        return buffer + length;
    }

    inline hstring::const_iterator hstring::cend() const noexcept
    {
        return end();
    }

    inline hstring::const_reverse_iterator hstring::rbegin() const noexcept
    {
        return const_reverse_iterator(end());
    }

    inline hstring::const_reverse_iterator hstring::crbegin() const noexcept
    {
        return rbegin();
    }

    inline hstring::const_reverse_iterator hstring::rend() const noexcept
    {
        return const_reverse_iterator(begin());
    }

    inline hstring::const_reverse_iterator hstring::crend() const noexcept
    {
        return rend();
    }

    inline bool hstring::empty() const noexcept
    {
        return 0 == size();
    }

    inline hstring::size_type hstring::size() const noexcept
    {
        return WindowsGetStringLen(m_handle.get());
    }
}

WINRT_EXPORT namespace winrt::param
{
    struct hstring
    {
        hstring(std::nullptr_t = nullptr) noexcept : m_handle(nullptr) {}
        hstring(hstring const& values) = delete;
        hstring& operator=(hstring const& values) = delete;

        hstring(winrt::hstring const& value) : m_handle(get_abi(value))
        {
        }

        hstring(std::wstring_view const& value)
        {
            WINRT_VERIFY_(S_OK, WindowsCreateStringReference(value.data(), static_cast<uint32_t>(value.size()), &m_header, &m_handle));
        }

        hstring(std::wstring const& value) : hstring(std::wstring_view(value))
        {
        }

        hstring(wchar_t const* const value) : hstring(std::wstring_view(value))
        {
        }

    private:

        HSTRING m_handle;
        HSTRING_HEADER m_header;
    };

    inline HSTRING get_abi(hstring const& object) noexcept
    {
        return *(HSTRING*)(&object);
    }
}

WINRT_EXPORT namespace winrt
{
    inline bool operator==(hstring const& left, hstring const& right) noexcept
    {
        return std::wstring_view(left) == std::wstring_view(right);
    }

    inline bool operator==(hstring const& left, std::wstring const& right) noexcept
    {
        return std::wstring_view(left) == right;
    }

    inline bool operator==(std::wstring const& left, hstring const& right) noexcept
    {
        return left == std::wstring_view(right);
    }

    inline bool operator==(hstring const& left, wchar_t const* right) noexcept
    {
        return std::wstring_view(left) == right;
    }

    inline bool operator==(wchar_t const* left, hstring const& right) noexcept
    {
        return left == std::wstring_view(right);
    }

    inline bool operator==(hstring const& left, nullptr_t) noexcept
    {
        return left == hstring();
    }

    inline bool operator==(nullptr_t, hstring const& right) noexcept
    {
        return hstring() == right;
    }

    inline bool operator<(hstring const& left, hstring const& right) noexcept
    {
        return std::wstring_view(left) < std::wstring_view(right);
    }

    inline bool operator<(std::wstring const& left, hstring const& right) noexcept
    {
        return left < std::wstring_view(right);
    }

    inline bool operator<(hstring const& left, std::wstring const& right) noexcept
    {
        return std::wstring_view(left) < right;
    }

    inline bool operator<(hstring const& left, wchar_t const* right) noexcept
    {
        return std::wstring_view(left) < right;
    }

    inline bool operator<(wchar_t const* left, hstring const& right) noexcept
    {
        return left < std::wstring_view(right);
    }

    inline bool operator<(hstring const& left, nullptr_t) noexcept
    {
        return left < hstring();
    }

    inline bool operator<(nullptr_t, hstring const& right) noexcept
    {
        return hstring() < right;
    }

    inline bool operator!=(hstring const& left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, hstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(hstring const& left, std::wstring const& right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, std::wstring const& right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, std::wstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, std::wstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(std::wstring const& left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(std::wstring const& left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(std::wstring const& left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(std::wstring const& left, hstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(hstring const& left, wchar_t const* right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, wchar_t const* right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, wchar_t const* right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, wchar_t const* right) noexcept { return !(left < right); }

    inline bool operator!=(wchar_t const* left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(wchar_t const* left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(wchar_t const* left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(wchar_t const* left, hstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(hstring const& left, nullptr_t right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, nullptr_t right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, nullptr_t right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, nullptr_t right) noexcept { return !(left < right); }

    inline bool operator!=(nullptr_t left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(nullptr_t left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(nullptr_t left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(nullptr_t left, hstring const& right) noexcept { return !(left < right); }
}

namespace winrt::impl
{
    inline hstring concat_hstring(param::hstring const& left, param::hstring const& right)
    {
        hstring result;
        check_hresult(WindowsConcatString(get_abi(left), get_abi(right), put_abi(result)));
        return result;
    }
}

WINRT_EXPORT namespace winrt
{
    inline hstring operator+(hstring const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, std::wstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(std::wstring const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, wchar_t const* right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(wchar_t const* left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, wchar_t right)
    {
        return impl::concat_hstring(left, std::wstring_view(&right, 1));
    }

    inline hstring operator+(wchar_t left, hstring const& right)
    {
        return impl::concat_hstring(std::wstring_view(&left, 1), right);
    }

    inline hstring operator+(hstring const& left, nullptr_t)
    {
        return left;
    }

    inline hstring operator+(nullptr_t, hstring const& right)
    {
        return right;
    }

    inline hstring operator+(hstring const& left, std::wstring_view const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(std::wstring_view const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }
}

namespace winrt::impl
{
    // SHA-1 constexpr implementation. Port of C Reference from https://tools.ietf.org/html/rfc3174 using constexpr.

    constexpr auto message_block_size = 64;
    constexpr auto hash_size = 20;

    constexpr auto sha1_rotl(uint8_t bits, uint32_t word)
    {
        return  (word << bits) | (word >> (32 - bits));
    }

    constexpr auto sha_ch(uint32_t x, uint32_t y, uint32_t z)
    {
        return (x & y) ^ ((~x) & z);
    }

    constexpr auto sha_parity(uint32_t x, uint32_t y, uint32_t z)
    {
        return x ^ y ^ z;
    }

    constexpr auto sha_maj(uint32_t x, uint32_t y, uint32_t z)
    {
        return (x & y) ^ (x & z) ^ (y & z);
    }

    constexpr uint32_t K[4] = { 0x5A827999, 0x6ED9EBA1, 0x8F1BBCDC, 0xCA62C1D6 };

    template <size_t Size>
    constexpr auto process_msg_block(constexpr_array<uint8_t, Size> const & input, uint32_t start_pos, constexpr_array<uint32_t, 5> const & intermediate_hash
#if _MSC_FULL_VER < 191125303
        , constexpr_array<uint32_t, 80> W = {}
#endif
    ){
#if _MSC_FULL_VER >= 191125303
        constexpr_array<uint32_t, 80> W = {};
#endif
        if (start_pos + message_block_size > Size)
        {
            throw std::out_of_range("process_msg_block needs at least 64 bytes to work on");
        }

        int t = 0;
        uint32_t temp = 0;

        for (t = 0; t < 16; t++)
        {
            W[t] = static_cast<uint32_t>(input[start_pos + t * 4]) << 24;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 1]) << 16;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 2]) << 8;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 3]);
        }

        for (t = 16; t < 80; t++)
        {
            W[t] = sha1_rotl(1, W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]);
        }

        uint32_t A = intermediate_hash[0];
        uint32_t B = intermediate_hash[1];
        uint32_t C = intermediate_hash[2];
        uint32_t D = intermediate_hash[3];
        uint32_t E = intermediate_hash[4];

        for (t = 0; t < 20; t++)
        {
            temp = sha1_rotl(5, A) + sha_ch(B, C, D) + E + W[t] + K[0];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 20; t < 40; t++)
        {
            temp = sha1_rotl(5, A) + sha_parity(B, C, D) + E + W[t] + K[1];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 40; t < 60; t++)
        {
            temp = sha1_rotl(5, A) + sha_maj(B, C, D) + E + W[t] + K[2];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 60; t < 80; t++)
        {
            temp = sha1_rotl(5, A) + sha_parity(B, C, D) + E + W[t] + K[3];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        return constexpr_array<uint32_t, 5> { { intermediate_hash[0] + A, intermediate_hash[1] + B, intermediate_hash[2] + C, intermediate_hash[3] + D, intermediate_hash[4] + E } };
    }

    constexpr auto size_to_bytes(size_t size)
    {
        return constexpr_array<uint8_t, 8> { {
                static_cast<uint8_t>((size & 0xff00000000000000) >> 56),
                static_cast<uint8_t>((size & 0x00ff000000000000) >> 48),
                static_cast<uint8_t>((size & 0x0000ff0000000000) >> 40),
                static_cast<uint8_t>((size & 0x000000ff00000000) >> 32),
                static_cast<uint8_t>((size & 0x00000000ff000000) >> 24),
                static_cast<uint8_t>((size & 0x0000000000ff0000) >> 16),
                static_cast<uint8_t>((size & 0x000000000000ff00) >> 8),
                static_cast<uint8_t>((size & 0x00000000000000ff) >> 0) 
            } };
    }

    template <size_t Size, size_t RemainingSize, size_t ... Index>
    constexpr constexpr_array<uint8_t, RemainingSize + 1> make_remaining(constexpr_array<uint8_t, Size> const & input, uint32_t start_pos, std::index_sequence<Index ...>)
    {
        return constexpr_array<uint8_t, RemainingSize + 1>{ {input[Index + start_pos] ..., 0x80}};
    }

    template <size_t Size>
    constexpr auto make_remaining(constexpr_array<uint8_t, Size> const & input, uint32_t start_pos)
    {
        constexpr auto remaining_size = Size % message_block_size;
        return make_remaining<Size, remaining_size>(input, start_pos, std::make_index_sequence<remaining_size>());
    }

    template <size_t InputSize, size_t RemainderSize>
    constexpr auto make_buffer(constexpr_array<uint8_t, RemainderSize> const & remaining_buffer)
    {
#pragma warning(suppress: 6326)
        constexpr auto message_length = (RemainderSize + 8 <= message_block_size) ? message_block_size : message_block_size * 2;
        constexpr auto padding_length = message_length - RemainderSize - 8;

        auto padding_buffer = constexpr_array<uint8_t, padding_length>{};
        auto length_buffer = size_to_bytes(InputSize * 8);

        return concat(concat(remaining_buffer, padding_buffer), length_buffer);
    }

    template <size_t Size>
    constexpr constexpr_array<uint32_t, 5> finalize_remaining_buffer(constexpr_array<uint8_t, Size> const & input, constexpr_array<uint32_t, 5> const & intermediate_hash)
    {
        throw std::invalid_argument("Size");
        return intermediate_hash;
    }

    template <>
    constexpr constexpr_array<uint32_t, 5> finalize_remaining_buffer<message_block_size>(constexpr_array<uint8_t, message_block_size> const & input, constexpr_array<uint32_t, 5> const & intermediate_hash)
    {
        return process_msg_block(input, 0, intermediate_hash);
    }

    template <>
    constexpr constexpr_array<uint32_t, 5> finalize_remaining_buffer<message_block_size * 2>(constexpr_array<uint8_t, message_block_size * 2> const & input, constexpr_array<uint32_t, 5> const & intermediate_hash)
    {
        return process_msg_block(input, message_block_size, process_msg_block(input, 0, intermediate_hash));
    }

    template <size_t Size>
    constexpr auto finalize_msg(constexpr_array<uint8_t, Size> const & input, uint32_t start_pos, constexpr_array<uint32_t, 5> const & intermediate_hash)
    {
        return finalize_remaining_buffer(make_buffer<Size>(make_remaining(input, start_pos)), intermediate_hash);
    }

    template <size_t ... Index>
    constexpr constexpr_array<uint8_t, hash_size> get_result(constexpr_array<uint32_t, 5> const & intermediate_hash, std::index_sequence<Index ...>)
    {
        return constexpr_array<uint8_t, hash_size>{ {static_cast<uint8_t>(intermediate_hash[Index >> 2] >> (8 * (3 - (Index & 0x03)))) ...}};
    }

    constexpr auto get_result(constexpr_array<uint32_t, 5> const & intermediate_hash)
    {
        return get_result(intermediate_hash, std::make_index_sequence<hash_size>{});
    }

    constexpr auto initalize_intermediate_hash()
    {
        return constexpr_array<uint32_t, 5> { { 0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0 }};
    }

    template <size_t Size>
    constexpr constexpr_array<uint8_t, hash_size> calculate_sha1(constexpr_array<uint8_t, Size> const & input)
    {
        auto intermediate_hash = initalize_intermediate_hash();
        uint32_t i = 0;

        while (i + message_block_size <= Size)
        {
            intermediate_hash = process_msg_block<Size>(input, i, intermediate_hash);
            i += message_block_size;
        }

        intermediate_hash = finalize_msg<Size>(input, i, intermediate_hash);
        return get_result(intermediate_hash);
    }
}

namespace winrt::impl 
{
    template<size_t Size>
    using byte_array = constexpr_array<uint8_t, Size>;

    constexpr byte_array<4> to_byte_array(unsigned long value)
    {
        return byte_array<4> { { static_cast<uint8_t>(value & 0x000000ff), static_cast<uint8_t>((value & 0x0000ff00) >> 8), static_cast<uint8_t>((value & 0x00ff0000) >> 16), static_cast<uint8_t>((value & 0xff000000) >> 24) } };
    }

    constexpr uint32_t bytes_to_u4(uint8_t a, uint8_t b, uint8_t c, uint8_t d)
    {
        return (static_cast<uint32_t>(d) << 24) | (static_cast<uint32_t>(c) << 16) | (static_cast<uint32_t>(b) << 8) | static_cast<uint32_t>(a);
    }

    constexpr byte_array<2> to_byte_array(unsigned short value)
    {
        return byte_array<2> { { static_cast<uint8_t>(value & 0x00ff), static_cast<uint8_t>((value & 0xff00) >> 8) } };
    }

    constexpr uint16_t bytes_to_u2(uint8_t a, uint8_t b)
    {
        return (static_cast<uint32_t>(b) << 8) | static_cast<uint32_t>(a);
    }

    constexpr byte_array<16> to_byte_array(GUID value)
    {
        return concat(concat(concat(to_byte_array(value.Data1), to_byte_array(value.Data2)), to_byte_array(value.Data3)), to_array(value.Data4));
    }

    template <size_t Size>
    constexpr GUID bytes_to_guid(constexpr_array<uint8_t, Size> const & arr)
    {
        static_assert (Size >= 16, "buffer passed to define_guid must be at least 16 bytes long");
        return { bytes_to_u4(arr[0], arr[1], arr[2], arr[3]),
            bytes_to_u2(arr[4], arr[5]),
            bytes_to_u2(arr[6], arr[7]),
            { arr[8], arr[9], arr[10], arr[11], arr[12], arr[13], arr[14], arr[15] } };
    }

    constexpr unsigned long endian_swap(unsigned long value)
    {
        return (value & 0xFF000000) >> 24 | (value & 0x00FF0000) >> 8 | (value & 0x0000FF00) << 8 | (value & 0x000000FF) << 24;
    }

    constexpr unsigned short endian_swap(unsigned short value)
    {
        return (value & 0xFF00) >> 8 | (value & 0x00FF) << 8;
    }

    constexpr GUID endian_swap(GUID const & value)
    {
        return { endian_swap(value.Data1),
            endian_swap(value.Data2),
            endian_swap(value.Data3),
            { value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] } };
    }

    template <size_t ... GuidIndex, size_t ... SigIndex, size_t Size>
    constexpr constexpr_array<uint8_t, Size + 15> create_guid_gen_buffer(std::index_sequence<GuidIndex ...>, std::index_sequence<SigIndex ...>, constexpr_array<uint8_t, 16> const & guid, constexpr_string<char, Size> const & sig)
    {
        return constexpr_array<uint8_t, Size + 15>{ {guid[GuidIndex] ..., static_cast<uint8_t>(sig[SigIndex]) ...}};
    }

    template <size_t Size>
    constexpr constexpr_array<uint8_t, Size + 15> create_guid_gen_buffer(GUID const & guid, constexpr_string<char, Size> const & str)
    {
        return create_guid_gen_buffer(std::make_index_sequence<16>{}, std::make_index_sequence<Size - 1>{}, to_byte_array(guid), str);
    }

    constexpr GUID set_named_guid_fields(GUID const & id)
    {
        return { id.Data1, id.Data2, static_cast<uint16_t>((id.Data3 & 0x0fff) | (5 << 12)),
        { static_cast<uint8_t>((id.Data4[0] & 0x3f) | 0x80), id.Data4[1], id.Data4[2], id.Data4[3], id.Data4[4], id.Data4[5], id.Data4[6], id.Data4[7] } };
    }

    template <size_t Size>
    constexpr GUID generate_guid(GUID const & namespace_guid, constexpr_string<char, Size> const & source_string)
    {
        auto big_endian_ns_guid = endian_swap(namespace_guid);
        auto buffer = create_guid_gen_buffer(big_endian_ns_guid, source_string);
        auto hash = calculate_sha1(buffer);
        auto big_endian_guid = bytes_to_guid(hash);
        auto little_endian_guid = endian_swap(big_endian_guid);
        return set_named_guid_fields(little_endian_guid);
    }

    constexpr bool compare_guids(GUID const & rguid1, GUID const & rguid2)
    {
        return rguid1.Data1 == rguid2.Data1 && rguid1.Data2 == rguid2.Data2 && rguid1.Data3 == rguid2.Data3 &&
            rguid1.Data4[0] == rguid2.Data4[0] &&
            rguid1.Data4[1] == rguid2.Data4[1] &&
            rguid1.Data4[2] == rguid2.Data4[2] &&
            rguid1.Data4[3] == rguid2.Data4[3] &&
            rguid1.Data4[4] == rguid2.Data4[4] &&
            rguid1.Data4[5] == rguid2.Data4[5] &&
            rguid1.Data4[6] == rguid2.Data4[6] &&
            rguid1.Data4[7] == rguid2.Data4[7];
    }

    constexpr char to_hex_char(uint8_t nibble)
    {
        auto n = nibble & 0xF;
        return static_cast<char>(n < 10 ? '0' + n : 'a' + (n - 10));
    }

    constexpr constexpr_string<char, 3> u1_to_hex_string(uint8_t _byte)
    {
        return make_constexpr_string({ to_hex_char(_byte >> 4), to_hex_char(_byte & 0xF), '\0' });
    }

    constexpr constexpr_string<char, 5> u2_to_hex_string(uint16_t _short)
    {
        return u1_to_hex_string(static_cast<uint8_t>(_short >> 8)) + u1_to_hex_string(_short & 0xFF);
    }

    constexpr constexpr_string<char, 9> u4_to_hex_string(uint32_t _int)
    {
        return u2_to_hex_string(_int >> 16) + u2_to_hex_string(_int & 0xFFFF);
    }

    // namespace guid needed by RFC 4122 and used by pinterface guid generation algorithm
    constexpr GUID pinterface_namespace_guid = { 0x11f47ad5, 0x7b73, 0x42c0,{ 0xab, 0xae, 0x87, 0x8b, 0x1e, 0x16, 0xad, 0xee } };

    template <typename TArg, typename ... TRest>
    struct arg_collection
    {
        constexpr static auto data{ make_constexpr_string(signature<TArg>::data) + ";" + arg_collection<TRest ...>::data };
    };

    template <typename TArg>
    struct arg_collection<TArg>
    {
        constexpr static auto data{ make_constexpr_string(signature<TArg>::data) };
    };

    constexpr constexpr_string<char, 39> guid_to_string(GUID const & id)
    {
        return "{" + u4_to_hex_string(id.Data1) +
            "-" + u2_to_hex_string(id.Data2) +
            "-" + u2_to_hex_string(id.Data3) +
            "-" + u2_to_hex_string((id.Data4[0] << 8) | id.Data4[1]) +
            "-" + u2_to_hex_string((id.Data4[2] << 8) | id.Data4[3]) +
            u2_to_hex_string((id.Data4[4] << 8) | id.Data4[5]) +
            u2_to_hex_string((id.Data4[6] << 8) | id.Data4[7]) +
            "}";
    }

    template <typename T>
    struct pinterface_guid
    {
#pragma warning(suppress: 4307)
        static constexpr GUID value{ generate_guid(pinterface_namespace_guid, signature<T>::data) };
    };
}


namespace winrt::impl
{
    constexpr size_t bytes_needed(wchar_t const & ch)
    {
        if (ch <= 0x7F)
        {
            return 1;
        }

        if (ch <= 0x7FF)
        {
            return 2;
        }

        return 3;
    }

    template <size_t Size>
    constexpr size_t utf8_name_length(wchar_t const (&str)[Size])
    {
        size_t length = 0;

        for (size_t index = 0; index < Size; index++)
        {
            length += bytes_needed(str[index]);
        }

        return length;
    }

    template <size_t Size>
    constexpr size_t utf8_name_length(constexpr_string<wchar_t, Size> const & str)
    {
        return utf8_name_length(str.elems_);
    }

    constexpr size_t wchar_to_utf8(wchar_t const & ch, char * buf)
    {
        if (ch <= 0x7F)
        {
            *buf = static_cast<char>(ch);
            return 1;
        }

        if (ch <= 0x7FF)
        {
            *buf = static_cast<char>(0xC0 | (ch >> 6));
            *(buf + 1) = 0x80 | (ch & 0x3F);
            return 2;
        }

        *buf = 0xE0 | (ch >> 12);
        *(buf + 1) = 0x80 | ((ch >> 6) & 0x3F);
        *(buf + 2) = 0x80 | (ch & 0x3F);
        return 3;
    }

    template <size_t Utf8Size, size_t Size>
    constexpr auto wchar_string_to_utf8(wchar_t const (&str)[Size])
    {
        char utf8[Utf8Size] = {};
        size_t utf8_index = 0;

        for (size_t index = 0; index < Size; index++)
        {
            utf8_index += wchar_to_utf8(str[index], &utf8[utf8_index]);
        }

        return make_constexpr_string(utf8);
    }

    template <size_t Utf8Size, size_t Size>
    constexpr auto wchar_string_to_utf8(constexpr_string<wchar_t, Size> const & str)
    {
        return wchar_string_to_utf8<Utf8Size>(str.elems_);
    }

    template <typename T>
    struct name_utf8
    {
        constexpr static auto value{ wchar_string_to_utf8<utf8_name_length(name_v<T>)>(name_v<T>) };
    };

    template <typename T>
    constexpr auto & name_utf8_v = name_utf8<T>::value;

    template <>
    struct name<bool>
    {
        static constexpr auto & value { L"Boolean" };
        static constexpr auto & data { "b1" };
    };

    template <>
    struct category<bool>
    {
        using type = basic_category;
    };

    template <>
    struct name<int16_t>
    {
        static constexpr auto & value { L"Int16" };
        static constexpr auto & data { "i2" };
    };

    template <>
    struct category<int16_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<int32_t>
    {
        static constexpr auto & value { L"Int32" };
        static constexpr auto & data { "i4" };
    };

    template <>
    struct category<int32_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<int64_t>
    {
        static constexpr auto & value { L"Int64" };
        static constexpr auto & data { "i8" };
    };

    template <>
    struct category<int64_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint8_t>
    {
        static constexpr auto & value { L"UInt8" };
        static constexpr auto & data { "u1" };
    };

    template <>
    struct category<uint8_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint16_t>
    {
        static constexpr auto & value { L"UInt16" };
        static constexpr auto & data { "u2" };
    };

    template <>
    struct category<uint16_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint32_t>
    {
        static constexpr auto & value { L"UInt32" };
        static constexpr auto & data{ "u4" };
    };

    template <>
    struct category<uint32_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint64_t>
    {
        static constexpr auto & value { L"UInt64" };
        static constexpr auto & data{ "u8" };
    };

    template <>
    struct category<uint64_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<float>
    {
        static constexpr auto & value { L"Single" };
        static constexpr auto & data{ "f4" };
    };

    template <>
    struct category<float>
    {
        using type = basic_category;
    };

    template <>
    struct name<double>
    {
        static constexpr auto & value { L"Double" };
        static constexpr auto & data{ "f8" };
    };

    template <>
    struct category<double>
    {
        using type = basic_category;
    };

    template <>
    struct name<char16_t>
    {
        static constexpr auto & value { L"Char16" };
        static constexpr auto & data{ "c2" };
    };

    template <>
    struct category<char16_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<GUID>
    {
        static constexpr auto & value { L"Guid" };
        static constexpr auto & data{ "g16" };
    };

    template <>
    struct category<GUID>
    {
        using type = basic_category;
    };

    template <typename T>
    struct category_signature<basic_category, T>
    {
        constexpr static auto data { make_constexpr_string(name<T>::data) };
    };

    template <typename T>
    struct category_signature<enum_category, T>
    {
        using enum_type = std::underlying_type_t<T>;
        constexpr static auto data{ "enum(" + name_utf8_v<T> + ";" + signature<enum_type>::data + ")" };
    };

    template <typename ... Fields, typename T>
    struct category_signature<struct_category<Fields ...>, T>
    {
        constexpr static auto data { "struct(" + name_utf8_v<T>+ ";" + arg_collection<Fields ...>::data + ")" };
    };

    template <typename T>
    struct category_signature<class_category, T>
    {
        constexpr static auto data { "rc(" + name_utf8_v<T> + ";" + signature<default_interface_t<T>>::data + ")" };
    };

    template <typename ... Args, typename T>
    struct category_signature<pinterface_category<Args ...>, T>
    {
        constexpr static auto data{ "pinterface(" + guid_to_string(category<T>::value) + ";" + arg_collection<Args ...>::data + ")" };
    };

    template <typename T>
    struct category_signature<interface_category, T>
    {
        constexpr static auto data{ guid_to_string(guid_of<T>()) };
    };

    template <typename T>
    struct category_signature<delegate_category, T>
    {
        constexpr static auto data{ "delegate(" + guid_to_string(guid_of<T>()) + ")" };
    };
}

namespace winrt::impl
{
    struct heap_traits : handle_traits<wchar_t*>
    {
        static void close(type value) noexcept
        {
            WINRT_VERIFY(HeapFree(GetProcessHeap(), 0, value));
        }
    };

    struct bstr_traits : handle_traits<BSTR>
    {
        static void close(type value) noexcept
        {
            SysFreeString(value);
        }
    };

    inline hstring trim_hresult_message(wchar_t const* const message, uint32_t size) noexcept
    {
        wchar_t const* back = message + size - 1;

        while (size&& iswspace(*back))
        {
            --size;
            --back;
        }

        hstring result;
        WindowsCreateString(message, size, put_abi(result));
        return result;
    }

    struct hstring_builder
    {
        hstring_builder(hstring_builder const&) = delete;
        hstring_builder& operator=(hstring_builder const&) = delete;

        explicit hstring_builder(uint32_t const size)
        {
            check_hresult(WindowsPreallocateStringBuffer(size, &m_data, &m_buffer));
        }

        ~hstring_builder() noexcept
        {
            if (m_buffer != nullptr)
            {
                WINRT_VERIFY_(S_OK, WindowsDeleteStringBuffer(m_buffer));
            }
        }

        wchar_t* data() noexcept
        {
            WINRT_ASSERT(m_buffer != nullptr);
            return m_data;
        }

        hstring to_hstring()
        {
            WINRT_ASSERT(m_buffer != nullptr);
            hstring result;
            check_hresult(WindowsPromoteStringBuffer(m_buffer, put_abi(result)));
            m_buffer = nullptr;
            return result;
        }

    private:

        wchar_t* m_data{ nullptr };
        HSTRING_BUFFER m_buffer{ nullptr };
    };

    inline hstring to_hstring(std::string_view source)
    {
        int const size = ::MultiByteToWideChar(
            CP_UTF8,
            0,
            source.data(),
            static_cast<int32_t>(source.size()),
            nullptr,
            0);

        if (size == 0)
        {
            return{};
        }

        hstring_builder result(size);

        ::MultiByteToWideChar(
            CP_UTF8,
            0,
            source.data(),
            static_cast<int32_t>(source.size()),
            result.data(),
            size);

        return result.to_hstring();
    }

    template <> struct guid<::ILanguageExceptionErrorInfo2>
    {
        static constexpr GUID value{ 0x5746E5C4,0x5B97,0x424C,{ 0xB6,0x20,0x28,0x22,0x91,0x57,0x34,0xDD } };
    };
}

WINRT_EXPORT namespace winrt
{
    struct hresult_error
    {
        struct from_abi_t {};
        static constexpr from_abi_t from_abi{};

        hresult_error() noexcept = default;
        hresult_error(hresult_error&&) = default;
        hresult_error& operator=(hresult_error&&) = default;

        hresult_error(hresult_error const& other) noexcept :
        m_code(other.m_code),
            m_info(other.m_info)
        {
        }

        hresult_error& operator=(hresult_error const& other) noexcept
        {
            m_code = other.m_code;
            m_info = other.m_info;
            return *this;
        }

        explicit hresult_error(HRESULT const code) noexcept : m_code(code)
        {
            WINRT_VERIFY(WINRT_RoOriginateLanguageException(code, nullptr, nullptr));
            WINRT_VERIFY_(S_OK, WINRT_GetRestrictedErrorInfo(m_info.put()));
        }

        hresult_error(HRESULT const code, param::hstring const& message, ::IUnknown* object = nullptr) noexcept : m_code(code)
        {
            WINRT_VERIFY(WINRT_RoOriginateLanguageException(code, get_abi(message), object));
            WINRT_VERIFY_(S_OK, WINRT_GetRestrictedErrorInfo(m_info.put()));
        }

        hresult_error(HRESULT const code, from_abi_t) noexcept : m_code(code)
        {
            WINRT_GetRestrictedErrorInfo(m_info.put());

            if (m_info == nullptr)
            {
                WINRT_VERIFY(WINRT_RoOriginateLanguageException(code, nullptr, nullptr));
                WINRT_VERIFY_(S_OK, WINRT_GetRestrictedErrorInfo(m_info.put()));
            }

            if (m_info != nullptr)
            {
                WINRT_VERIFY_(S_OK, m_info->GetReference(m_debug_reference.put()));

                if (com_ptr<ILanguageExceptionErrorInfo2> info2 = m_info.try_as<ILanguageExceptionErrorInfo2>())
                {
                    WINRT_VERIFY_(S_OK, info2->CapturePropagationContext(nullptr));
                }
            }
        }

        HRESULT code() const noexcept
        {
            return m_code;
        }

        hstring message() const noexcept
        {
            if (m_info)
            {
                HRESULT code{};
                impl::handle<impl::bstr_traits> fallback;
                impl::handle<impl::bstr_traits> message;
                impl::handle<impl::bstr_traits> unused;

                if (S_OK == m_info->GetErrorDetails(fallback.put(), &code, message.put(), unused.put()))
                {
                    if (code == m_code)
                    {
                        if (message)
                        {
                            return impl::trim_hresult_message(message.get(), SysStringLen(message.get()));
                        }
                        else
                        {
                            return impl::trim_hresult_message(fallback.get(), SysStringLen(fallback.get()));
                        }
                    }
                }
            }

            impl::handle<impl::heap_traits> message;

            uint32_t const size = FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                nullptr,
                m_code,
                MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                reinterpret_cast<wchar_t*>(put_abi(message)),
                0,
                nullptr);

            return impl::trim_hresult_message(message.get(), size);
        }

        com_ptr<IRestrictedErrorInfo> const& info() const noexcept
        {
            return m_info;
        }

        HRESULT to_abi() const noexcept
        {
            WINRT_TRACE("winrt::hresult_error (0x%8X) %ls\n", code(), message().c_str());

            if (m_info)
            {
                WINRT_SetRestrictedErrorInfo(m_info.get());
            }

            return m_code;
        }

    private:

        impl::handle<impl::bstr_traits> m_debug_reference;
        uint32_t const m_debug_magic{ 0xAABBCCDD };
        HRESULT m_code{ E_FAIL };
        com_ptr<IRestrictedErrorInfo> m_info;
    };

    struct hresult_access_denied : hresult_error
    {
        hresult_access_denied() : hresult_error(E_ACCESSDENIED) {}
        hresult_access_denied(param::hstring const& message) : hresult_error(E_ACCESSDENIED, message) {}
        hresult_access_denied(from_abi_t) : hresult_error(E_ACCESSDENIED, from_abi) {}
    };

    struct hresult_wrong_thread : hresult_error
    {
        hresult_wrong_thread() : hresult_error(RPC_E_WRONG_THREAD) {}
        hresult_wrong_thread(param::hstring const& message) : hresult_error(RPC_E_WRONG_THREAD, message) {}
        hresult_wrong_thread(from_abi_t) : hresult_error(RPC_E_WRONG_THREAD, from_abi) {}
    };

    struct hresult_not_implemented : hresult_error
    {
        hresult_not_implemented() : hresult_error(E_NOTIMPL) {}
        hresult_not_implemented(param::hstring const& message) : hresult_error(E_NOTIMPL, message) {}
        hresult_not_implemented(from_abi_t) : hresult_error(E_NOTIMPL, from_abi) {}
    };

    struct hresult_invalid_argument : hresult_error
    {
        hresult_invalid_argument() : hresult_error(E_INVALIDARG) {}
        hresult_invalid_argument(param::hstring const& message) : hresult_error(E_INVALIDARG, message) {}
        hresult_invalid_argument(from_abi_t) : hresult_error(E_INVALIDARG, from_abi) {}
    };

    struct hresult_out_of_bounds : hresult_error
    {
        hresult_out_of_bounds() : hresult_error(E_BOUNDS) {}
        hresult_out_of_bounds(param::hstring const& message) : hresult_error(E_BOUNDS, message) {}
        hresult_out_of_bounds(from_abi_t) : hresult_error(E_BOUNDS, from_abi) {}
    };

    struct hresult_no_interface : hresult_error
    {
        hresult_no_interface() : hresult_error(E_NOINTERFACE) {}
        hresult_no_interface(param::hstring const& message) : hresult_error(E_NOINTERFACE, message) {}
        hresult_no_interface(from_abi_t) : hresult_error(E_NOINTERFACE, from_abi) {}
    };

    struct hresult_disconnected : hresult_error
    {
        hresult_disconnected() : hresult_error(RPC_E_DISCONNECTED) {}
        hresult_disconnected(param::hstring const& message) : hresult_error(RPC_E_DISCONNECTED, message) {}
        hresult_disconnected(from_abi_t) : hresult_error(RPC_E_DISCONNECTED, from_abi) {}
    };

    struct hresult_class_not_available : hresult_error
    {
        hresult_class_not_available() : hresult_error(CLASS_E_CLASSNOTAVAILABLE) {}
        hresult_class_not_available(param::hstring const& message) : hresult_error(CLASS_E_CLASSNOTAVAILABLE, message) {}
        hresult_class_not_available(from_abi_t) : hresult_error(CLASS_E_CLASSNOTAVAILABLE, from_abi) {}
    };

    struct hresult_changed_state : hresult_error
    {
        hresult_changed_state() : hresult_error(E_CHANGED_STATE) {}
        hresult_changed_state(param::hstring const& message) : hresult_error(E_CHANGED_STATE, message) {}
        hresult_changed_state(from_abi_t) : hresult_error(E_CHANGED_STATE, from_abi) {}
    };

    struct hresult_illegal_method_call : hresult_error
    {
        hresult_illegal_method_call() : hresult_error(E_ILLEGAL_METHOD_CALL) {}
        hresult_illegal_method_call(param::hstring const& message) : hresult_error(E_ILLEGAL_METHOD_CALL, message) {}
        hresult_illegal_method_call(from_abi_t) : hresult_error(E_ILLEGAL_METHOD_CALL, from_abi) {}
    };

    struct hresult_illegal_state_change : hresult_error
    {
        hresult_illegal_state_change() : hresult_error(E_ILLEGAL_STATE_CHANGE) {}
        hresult_illegal_state_change(param::hstring const& message) : hresult_error(E_ILLEGAL_STATE_CHANGE, message) {}
        hresult_illegal_state_change(from_abi_t) : hresult_error(E_ILLEGAL_STATE_CHANGE, from_abi) {}
    };

    struct hresult_illegal_delegate_assignment : hresult_error
    {
        hresult_illegal_delegate_assignment() : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT) {}
        hresult_illegal_delegate_assignment(param::hstring const& message) : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT, message) {}
        hresult_illegal_delegate_assignment(from_abi_t) : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT, from_abi) {}
    };

    struct hresult_canceled : hresult_error
    {
        hresult_canceled() : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED)) {}
        hresult_canceled(param::hstring const& message) : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED), message) {}
        hresult_canceled(from_abi_t) : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED), from_abi) {}
    };
}

namespace winrt::impl
{
    [[noreturn]] inline __declspec(noinline) void throw_hresult(HRESULT const result)
    {
        if (result == E_OUTOFMEMORY)
        {
            throw std::bad_alloc();
        }

        if (result == E_ACCESSDENIED)
        {
            throw hresult_access_denied(hresult_error::from_abi);
        }

        if (result == RPC_E_WRONG_THREAD)
        {
            throw hresult_wrong_thread(hresult_error::from_abi);
        }

        if (result == E_NOTIMPL)
        {
            throw hresult_not_implemented(hresult_error::from_abi);
        }

        if (result == E_INVALIDARG)
        {
            throw hresult_invalid_argument(hresult_error::from_abi);
        }

        if (result == E_BOUNDS)
        {
            throw hresult_out_of_bounds(hresult_error::from_abi);
        }

        if (result == E_NOINTERFACE)
        {
            throw hresult_no_interface(hresult_error::from_abi);
        }

        if (result == RPC_E_DISCONNECTED)
        {
            throw hresult_disconnected(hresult_error::from_abi);
        }

        if (result == CLASS_E_CLASSNOTAVAILABLE)
        {
            throw hresult_class_not_available(hresult_error::from_abi);
        }

        if (result == E_CHANGED_STATE)
        {
            throw hresult_changed_state(hresult_error::from_abi);
        }

        if (result == E_ILLEGAL_METHOD_CALL)
        {
            throw hresult_illegal_method_call(hresult_error::from_abi);
        }

        if (result == E_ILLEGAL_STATE_CHANGE)
        {
            throw hresult_illegal_state_change(hresult_error::from_abi);
        }

        if (result == E_ILLEGAL_DELEGATE_ASSIGNMENT)
        {
            throw hresult_illegal_delegate_assignment(hresult_error::from_abi);
        }

        if (result == HRESULT_FROM_WIN32(ERROR_CANCELLED))
        {
            throw hresult_canceled(hresult_error::from_abi);
        }

        throw hresult_error(result, hresult_error::from_abi);
    }

    inline __declspec(noinline) HRESULT to_hresult() noexcept
    {
        try
        {
            throw;
        }
        catch (hresult_error const& e)
        {
            return e.to_abi();
        }
        catch (std::bad_alloc const&)
        {
            return E_OUTOFMEMORY;
        }
        catch (std::out_of_range const& e)
        {
            return hresult_out_of_bounds(to_hstring(e.what())).to_abi();
        }
        catch (std::invalid_argument const& e)
        {
            return hresult_invalid_argument(to_hstring(e.what())).to_abi();
        }
        catch (std::exception const& e)
        {
            return hresult_error(E_FAIL, to_hstring(e.what())).to_abi();
        }
    }
}

WINRT_EXPORT namespace winrt
{
    [[noreturn]] inline void throw_last_error()
    {
        impl::throw_hresult(HRESULT_FROM_WIN32(GetLastError()));
    }
}

namespace winrt::impl
{
    template<typename T>
    T* check_pointer(T* pointer)
    {
        if (!pointer)
        {
            throw_last_error();
        }

        return pointer;
    }
}

WINRT_EXPORT namespace winrt
{
    __forceinline void check_hresult(HRESULT const result)
    {
#ifdef WINRT_STRICT_HRESULT
        if (result != S_OK)
#else
        if (result < 0)
#endif
        {
            impl::throw_hresult(result);
        }
    }
}

namespace winrt::impl
{
    struct lock
    {
        lock(lock const&) = delete;
        lock& operator=(lock const&) = delete;
        lock() noexcept = default;

        void enter() noexcept
        {
            AcquireSRWLockExclusive(&m_lock);
        }

        bool try_enter() noexcept
        {
            return 0 != TryAcquireSRWLockExclusive(&m_lock);
        }

        void exit() noexcept
        {
            __analysis_assume_lock_acquired(m_lock);
            ReleaseSRWLockExclusive(&m_lock);
        }

        PSRWLOCK get() noexcept
        {
            return&m_lock;
        }

    private:

        SRWLOCK m_lock{};
    };

    struct lock_guard
    {
        explicit lock_guard(lock& lock) noexcept :
        m_lock(lock)
        {
            m_lock.enter();
        }

        ~lock_guard() noexcept
        {
            m_lock.exit();
        }

    private:

        lock& m_lock;
    };

    struct condition_variable
    {
        condition_variable(condition_variable const&) = delete;
        condition_variable const& operator=(condition_variable const&) = delete;
        condition_variable() noexcept = default;

        template <typename T>
        void wait_while(lock& x, T predicate)
        {
            while (predicate())
            {
                WINRT_VERIFY(SleepConditionVariableSRW(&m_cv, x.get(), INFINITE, 0));
            }
        }

        void wake_one() noexcept
        {
            WakeConditionVariable(&m_cv);
        }

        void wake_all() noexcept
        {
            WakeAllConditionVariable(&m_cv);
        }

    private:

        CONDITION_VARIABLE m_cv{};
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IInspectable;
    struct IActivationFactory;
}

namespace winrt::impl
{
    template <> struct abi<Windows::Foundation::IUnknown>
    {
        using type = ::IUnknown;
    };

    template <> struct abi<Windows::Foundation::IInspectable>
    {
        using type = ::IInspectable;
    };

    template <> struct abi<Windows::Foundation::IActivationFactory>
    {
        struct __declspec(uuid("00000035-0000-0000-C000-000000000046")) __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall ActivateInstance(::IUnknown** instance) = 0;
        };
    };

    template <> struct guid<Windows::Foundation::IUnknown>
    {
        static constexpr GUID value{ 0x00000000,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct name<Windows::Foundation::IUnknown>
    {
        static constexpr auto & value{ L"Windows.Foundation.IUnknown" };
    };

    template <> struct category<Windows::Foundation::IUnknown>
    {
        using type = interface_category;
    };

    template <> struct guid<Windows::Foundation::IInspectable>
    {
        static constexpr GUID value{ 0xAF86E2E0,0xB12D,0x4C6A,{ 0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90 } };
    };

    template <> struct name<Windows::Foundation::IInspectable>
    {
        static constexpr auto & value{ L"Windows.Foundation.IInspectable" };
        static constexpr auto & data{ "cinterface(IInspectable)" };
    };

    template <> struct category<Windows::Foundation::IInspectable>
    {
        using type = basic_category;
    };

    template <> struct guid<Windows::Foundation::IActivationFactory>
    {
        static constexpr GUID value{ 0x00000035,0x0000,0x0000,{ 0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid<::IAgileObject>
    {
        static constexpr GUID value{ 0x94EA2B94,0xE9CC,0x49E0,{ 0xC0,0xFF,0xEE,0x64,0xCA,0x8F,0x5B,0x90 } };
    };

    template <> struct name<Windows::Foundation::IActivationFactory>
    {
        static constexpr auto & value{ L"Windows.Foundation.IActivationFactory" };
    };

    template <> struct category<Windows::Foundation::IActivationFactory>
    {
        using type = interface_category;
    };

    template <> struct guid<::IMarshal>
    {
        static constexpr GUID value{ 0x00000003,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <typename D>
    struct consume_IActivationFactory
    {
        Windows::Foundation::IInspectable ActivateInstance() const;
    };

    template <> struct consume<Windows::Foundation::IActivationFactory>
    {
        template <typename D> using type = consume_IActivationFactory<D>;
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IUnknown
    {
        IUnknown() noexcept = default;
        IUnknown(std::nullptr_t) noexcept {}
        void* operator new(size_t) = delete;

        IUnknown(IUnknown const& other) noexcept :
        m_ptr(other.m_ptr)
        {
            impl_addref();
        }

        IUnknown(IUnknown&& other) noexcept :
        m_ptr(other.m_ptr)
        {
            other.m_ptr = nullptr;
        }

        ~IUnknown() noexcept
        {
            impl_release();
        }

        IUnknown& operator=(IUnknown const& other) noexcept
        {
            impl_copy(other);
            return*this;
        }

        IUnknown& operator=(IUnknown&& other) noexcept
        {
            impl_move(std::forward<IUnknown>(other));
            return*this;
        }

        explicit operator bool() const noexcept
        {
            return nullptr != m_ptr;
        }

        IUnknown& operator=(std::nullptr_t) noexcept
        {
            impl_release();
            return*this;
        }

        template <typename To>
        auto as() const
        {
            return impl::as<To>(m_ptr);
        }

        template <typename To>
        auto try_as() const noexcept
        {
            return impl::try_as<To>(m_ptr);
        }

        template <typename To>
        void as(To& to)
        {
            to = as<impl::wrapped_type_t<To>>();
        }

        template <typename To>
        bool try_as(To& to)
        {
            to = try_as<impl::wrapped_type_t<To>>();
            return static_cast<bool>(to);
        }

        friend ::IUnknown* impl_detach(IUnknown& object) noexcept
        {
            auto temp = object.m_ptr;
            object.m_ptr = nullptr;
            return temp;
        }

        friend void swap(IUnknown& left, IUnknown& right) noexcept
        {
            std::swap(left.m_ptr, right.m_ptr);
        }

    protected:

        void impl_copy(IUnknown const& other) noexcept
        {
            if (this != &other)
            {
                impl_release();
                m_ptr = other.m_ptr;
                impl_addref();
            }
        }

        void impl_move(IUnknown&& other) noexcept
        {
            if (this != &other)
            {
                impl_release();
                m_ptr = other.m_ptr;
                other.m_ptr = nullptr;
            }
        }

        ::IUnknown* m_ptr = nullptr;

    private:

        void impl_addref() const noexcept
        {
            if (m_ptr)
            {
                m_ptr->AddRef();
            }
        }

        void impl_release() noexcept
        {
            auto temp = m_ptr;

            if (temp)
            {
                m_ptr = nullptr;
                temp->Release();
            }
        }
    };
}

namespace winrt::impl
{
    template <typename T>
    struct accessors<T, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    {
        static ::IUnknown* get(T const& object) noexcept
        {
            return *(::IUnknown**)(&object);
        }

        static ::IUnknown** put(T& object) noexcept
        {
            return reinterpret_cast<::IUnknown**>(&object);
        }

        static void attach(T& object, ::IUnknown* value) noexcept
        {
            object = nullptr;
            *put(object) = value;
        }

        static void copy_from(T& object, ::IUnknown* value) noexcept
        {
            object = nullptr;

            if (value)
            {
                value->AddRef();
                *put(object) = value;
            }
        }

        template <typename V>
        static void copy_to(T const& object, V& value) noexcept
        {
            if (object)
            {
                value = get(object);
                value->AddRef();
            }
            else
            {
                value = nullptr;
            }
        }

        static ::IUnknown* detach(T& object) noexcept
        {
            return impl_detach(object);
        }
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    inline bool operator==(IUnknown const& left, IUnknown const& right) noexcept
    {
        if (get_abi(left) == get_abi(right))
        {
            return true;
        }
        if (!left || !right)
        {
            return false;
        }
        return get_abi(left.as<IUnknown>()) == get_abi(right.as<IUnknown>());
    }

    inline bool operator!=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(left == right);
    }

    inline bool operator<(IUnknown const& left, IUnknown const& right) noexcept
    {
        if (get_abi(left) == get_abi(right))
        {
            return false;
        }
        if (!left || !right)
        {
            return get_abi(left) < get_abi(right);
        }
        return get_abi(left.as<IUnknown>()) < get_abi(right.as<IUnknown>());
    }

    inline bool operator>(IUnknown const& left, IUnknown const& right) noexcept
    {
        return right < left;
    }

    inline bool operator<=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(right < left);
    }

    inline bool operator>=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(left < right);
    }

    struct IInspectable : IUnknown
    {
        IInspectable(std::nullptr_t = nullptr) noexcept {}
    };

    inline hstring GetRuntimeClassName(IInspectable const& object)
    {
        hstring value;
        check_hresult((*(::IInspectable**)&object)->GetRuntimeClassName(put_abi(value)));
        return value;
    }

    inline TrustLevel GetTrustLevel(IInspectable const& object)
    {
        TrustLevel value{};
        check_hresult((*(::IInspectable**)&object)->GetTrustLevel(&value));
        return value;
    }
}

namespace winrt::impl
{
    template <typename T, std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>>* = nullptr>
    T empty_value()
    {
        return {};
    }

    template <typename T, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>>* = nullptr>
    T empty_value()
    {
        return nullptr;
    }

    template <typename T, typename Enable = void>
    struct arg
    {
        using in = abi_t<T>;
    };

    template <typename T>
    struct arg<T, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    {
        using in = ::IUnknown*;
    };

    template <typename T>
    using arg_in = typename arg<T>::in;

    template <typename T>
    using arg_out = arg_in<T>*;
}

namespace winrt::impl
{
#ifdef WINRT_CHECKED_ITERATORS

    template <typename T>
    using array_iterator = stdext::checked_array_iterator<T*>;

    template <typename T>
    auto make_array_iterator(T* data, uint32_t size, uint32_t index = 0) noexcept
    {
        return array_iterator<T>(data, size, index);
    }

#else

    template <typename T>
    using array_iterator = T*;

    template <typename T>
    auto make_array_iterator(T* data, uint32_t, uint32_t index = 0) noexcept
    {
        return data + index;
    }

#endif
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct array_view
    {
        using value_type = T;
        using size_type = uint32_t;
        using reference = value_type&;
        using const_reference = value_type const&;
        using pointer = value_type*;
        using const_pointer = value_type const*;
        using iterator = impl::array_iterator<value_type>;
        using const_iterator = impl::array_iterator<value_type const>;
        using reverse_iterator = std::reverse_iterator<iterator>;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        array_view() noexcept = default;

        array_view(pointer first, pointer last) noexcept :
        m_data(first),
            m_size(static_cast<size_type>(last - first))
        {}

        array_view(std::initializer_list<value_type> value) noexcept :
            array_view(value.begin(), static_cast<size_type>(value.size()))
        {}

        template <typename C, size_type N>
        array_view(C(&value)[N]) noexcept :
            array_view(value, N)
        {}

        template <typename C>
        array_view(std::vector<C>& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename C>
        array_view(std::vector<C> const& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename C, size_type N>
        array_view(std::array<C, N>& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename C, size_type N>
        array_view(std::array<C, N> const& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        reference operator[](size_type const pos) noexcept
        {
            WINRT_ASSERT(pos < size());
            return m_data[pos];
        }

        const_reference operator[](size_type const pos) const noexcept
        {
            WINRT_ASSERT(pos < size());
            return m_data[pos];
        }

        reference at(size_type const pos)
        {
            if (size() <= pos)
            {
                throw std::out_of_range("Invalid array subscript");
            }

            return m_data[pos];
        }

        const_reference at(size_type const pos) const
        {
            if (size() <= pos)
            {
                throw std::out_of_range("Invalid array subscript");
            }

            return m_data[pos];
        }

        reference front() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*m_data;
        }

        const_reference front() const noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*m_data;
        }

        reference back() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return m_data[m_size - 1];
        }

        const_reference back() const noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return m_data[m_size - 1];
        }

        pointer data() noexcept
        {
            return m_data;
        }

        const_pointer data() const noexcept
        {
            return m_data;
        }

        iterator begin() noexcept
        {
            return impl::make_array_iterator(m_data, m_size);
        }

        const_iterator begin() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size);
        }

        const_iterator cbegin() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size);
        }

        iterator end() noexcept
        {
            return impl::make_array_iterator(m_data, m_size, m_size);
        }

        const_iterator end() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size, m_size);
        }

        const_iterator cend() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size, m_size);
        }

        reverse_iterator rbegin() noexcept
        {
            return reverse_iterator(end());
        }

        const_reverse_iterator rbegin() const noexcept
        {
            return const_reverse_iterator(end());
        }

        const_reverse_iterator crbegin() const noexcept
        {
            return rbegin();
        }

        reverse_iterator rend() noexcept
        {
            return reverse_iterator(begin());
        }

        const_reverse_iterator rend() const noexcept
        {
            return const_reverse_iterator(begin());
        }

        const_reverse_iterator crend() const noexcept
        {
            return rend();
        }

        bool empty() const noexcept
        {
            return m_size == 0;
        }

        size_type size() const noexcept
        {
            return m_size;
        }

    protected:

        array_view(pointer data, uint32_t size) :
            m_data(data),
            m_size(size)
        {}

        pointer m_data = nullptr;
        uint32_t m_size = 0;
    };

    template <typename T>
    struct com_array : array_view<T>
    {
        using typename array_view<T>::value_type;
        using typename array_view<T>::size_type;
        using typename array_view<T>::reference;
        using typename array_view<T>::const_reference;
        using typename array_view<T>::pointer;
        using typename array_view<T>::const_pointer;
        using typename array_view<T>::iterator;
        using typename array_view<T>::const_iterator;
        using typename array_view<T>::reverse_iterator;
        using typename array_view<T>::const_reverse_iterator;

        com_array(com_array const&) = delete;
        com_array& operator=(com_array const&) = delete;

        com_array() noexcept = default;

        explicit com_array(size_type const count) :
            com_array(count, value_type())
        {}

        com_array(size_type const count, value_type const& value)
        {
            alloc(count);
            std::uninitialized_fill_n(this->m_data, count, value);
        }

        template <typename InIt> com_array(InIt first, InIt last)
        {
            alloc(static_cast<size_type>(std::distance(first, last)));
            std::uninitialized_copy(first, last, this->begin());
        }

        explicit com_array(std::vector<value_type> const& value) :
            com_array(value.begin(), value.end())
        {}

        template <size_type N>
        explicit com_array(std::array<value_type, N> const& value) :
            com_array(value.begin(), value.end())
        {}

        template <size_type N>
        explicit com_array(value_type const(&value)[N]) :
            com_array(value, value + N)
        {}

        com_array(std::initializer_list<value_type> value) :
            com_array(value.begin(), value.end())
        {}

        com_array(com_array&& other) noexcept :
            array_view<T>(other.m_data, other.m_size)
        {
            other.m_data = nullptr;
            other.m_size = 0;
        }

        com_array& operator=(com_array&& other) noexcept
        {
            this->m_data = other.m_data;
            this->m_size = other.m_size;
            other.m_data = nullptr;
            other.m_size = 0;
            return*this;
        }

        ~com_array() noexcept
        {
            clear();
        }

        void clear() noexcept
        {
            if (this->m_data)
            {
                if constexpr (!std::is_trivially_destructible_v<value_type>)
                {
                    for (value_type& v : *this)
                    {
                        v.~value_type();
                    }
                }

                CoTaskMemFree(this->m_data);
                this->m_data = nullptr;
                this->m_size = 0;
            }
        }

        friend auto impl_put(com_array& value) noexcept
        {
            WINRT_ASSERT(!value.m_data);
            return reinterpret_cast<impl::arg_out<T>*>(&value.m_data);
        }

        friend auto impl_data(com_array& value) noexcept
        {
            return value.m_data;
        }

        friend void impl_put_size(com_array& value, uint32_t const size) noexcept
        {
            WINRT_ASSERT(value.m_data || (!value.m_data&& size == 0));
            value.m_size = size;
        }

        friend auto impl_detach(com_array& value) noexcept
        {
            std::pair<uint32_t, impl::arg_in<T>*> result(value.size(), *reinterpret_cast<impl::arg_in<T>**>(&value));
            value.m_data = nullptr;
            value.m_size = 0;
            return result;
        }

        friend void swap(com_array& left, com_array& right) noexcept
        {
            std::swap(left.m_data, right.m_data);
            std::swap(left.m_size, right.m_size);
        }

    private:

        void alloc(size_type const size)
        {
            WINRT_ASSERT(this->empty());

            if (0 != size)
            {
                this->m_data = static_cast<value_type*>(CoTaskMemAlloc(size * sizeof(value_type)));

                if (this->m_data == nullptr)
                {
                    throw std::bad_alloc();
                }

                this->m_size = size;
            }
        }
    };

    template <typename T>
    bool operator==(array_view<T> const& left, array_view<T> const& right) noexcept
    {
        return std::equal(left.begin(), left.end(), right.begin(), right.end());
    }

    template <typename T>
    bool operator<(array_view<T> const& left, array_view<T> const& right) noexcept
    {
        return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
    }

    template <typename T> bool operator!=(array_view<T> const& left, array_view<T> const& right) noexcept { return !(left == right); }
    template <typename T> bool operator>(array_view<T> const& left, array_view<T> const& right) noexcept { return right < left; }
    template <typename T> bool operator<=(array_view<T> const& left, array_view<T> const& right) noexcept { return !(right < left); }
    template <typename T> bool operator>=(array_view<T> const& left, array_view<T> const& right) noexcept { return !(left < right); }
}

namespace winrt::impl
{
    template <typename T>
    struct array_size_proxy
    {
        array_size_proxy& operator=(array_size_proxy const&) = delete;

        array_size_proxy(com_array<T>& value) noexcept :
        m_value(value)
        {}

        ~array_size_proxy() noexcept
        {
            impl_put_size(m_value, m_size);
        }

        operator uint32_t* () noexcept
        {
            return&m_size;
        }

        operator unsigned long* () noexcept
        {
            return reinterpret_cast<unsigned long*>(&m_size);
        }

    private:

        com_array<T>& m_value;
        uint32_t m_size = 0;
    };

    template <typename T>
    struct com_array_proxy
    {
        com_array_proxy(uint32_t* size, winrt::impl::arg_out<T>* value) noexcept :
        m_size(size),
            m_value(value)
        {}

        ~com_array_proxy() noexcept
        {
            std::tie(*m_size, *m_value) = impl_detach(m_temp);
        }

        operator com_array<T>&() noexcept
        {
            return m_temp;
        }

        com_array_proxy(com_array_proxy const&) noexcept
        {
            WINRT_ASSERT(false);
        }

        com_array_proxy& operator=(com_array_proxy const&) noexcept
        {
            WINRT_ASSERT(false);
            return*this;
        }

    private:

        uint32_t* m_size;
        arg_out<T>* m_value;
        com_array<T> m_temp;
    };

    template <typename T>
    struct accessors<com_array<T>>
    {
        static auto put(com_array<T>& object) noexcept
        {
            return impl_put(object);
        }

        static array_size_proxy<T> put_size(com_array<T>& object) noexcept
        {
            return array_size_proxy<T>(object);
        }

        static auto detach(com_array<T>& object) noexcept
        {
            return impl_detach(object);
        }

        static auto data(com_array<T>& object) noexcept
        {
            return impl_data(object);
        }
    };

    template <typename T>
    struct accessors<array_view<T>, std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    {
        static auto get(array_view<T> object) noexcept
        {
            return reinterpret_cast<arg_out<std::remove_const_t<T>>>(const_cast<std::remove_const_t<T>*>(object.data()));
        }
    };

    template <typename T>
    struct accessors<array_view<T>, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    {
        static auto get(array_view<T> object) noexcept
        {
            return (::IUnknown**)object.data();
        }
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    auto detach_abi(uint32_t* __valueSize, impl::arg_out<T>* value) noexcept
    {
        return impl::com_array_proxy<T>(__valueSize, value);
    }

    namespace Windows::Foundation
    {
        inline com_array<GUID> GetIids(IInspectable const& object)
        {
            com_array<GUID> value;
            check_hresult((*(::IInspectable**)&object)->GetIids(impl::put_size_abi(value), put_abi(value)));
            return value;
        }
    }
}

namespace winrt::impl
{
    struct __declspec(uuid("00000037-0000-0000-C000-000000000046")) __declspec(novtable) IWeakReference : ::IUnknown
    {
        virtual HRESULT __stdcall Resolve(GUID const& iid, ::IInspectable** objectReference) = 0;

        template <typename Qi> HRESULT __stdcall Resolve(Qi** objectReference) noexcept
        {
            return Resolve(__uuidof(Qi), reinterpret_cast<::IInspectable**>(objectReference));
        }
    };

    struct __declspec(uuid("00000038-0000-0000-C000-000000000046")) __declspec(novtable) IWeakReferenceSource : ::IUnknown
    {
        virtual HRESULT __stdcall GetWeakReference(IWeakReference** weakReference) = 0;
    };

    template <> struct guid<IWeakReference>
    {
        static constexpr GUID value{ 0x00000037,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid<IWeakReferenceSource>
    {
        static constexpr GUID value{ 0x00000038,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct weak_ref
    {
        weak_ref(std::nullptr_t = nullptr) noexcept {}

        weak_ref(T const& object)
        {
            check_hresult(object.template as<impl::IWeakReferenceSource>()->GetWeakReference(put_abi(m_ref)));
        }

        T get() const noexcept
        {
            T object = nullptr;
            if (m_ref)
            {
                m_ref->Resolve(guid_of<T>(), reinterpret_cast<::IInspectable**>(put_abi(object)));
            }
            return object;
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

    private:

        com_ptr<impl::IWeakReference> m_ref;
    };

    template <typename T>
    weak_ref<T> make_weak(T const& object)
    {
        return object;
    }
}

#ifndef WINRT_NO_AGILE_REFERENCE

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct agile_ref
    {
        agile_ref(std::nullptr_t = nullptr) noexcept {}

        agile_ref(T const& object)
        {
#ifdef WINRT_DEBUG
            if (object.template try_as<IAgileObject>())
            {
                WINRT_TRACE("winrt::agile_ref - wrapping an agile object is unnecessary.\n");
            }
#endif

            check_hresult(RoGetAgileReference(AGILEREFERENCE_DEFAULT,
                guid_of<T>(),
                winrt::get_abi(object),
                put_abi(m_ref)));
        }

        T get() const
        {
            T result = nullptr;
            check_hresult(m_ref->Resolve(put_abi(result)));
            return result;
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

    private:

        com_ptr<IAgileReference> m_ref;
    };

    template <typename T>
    agile_ref<T> make_agile(T const& object)
    {
        return object;
    }
}

#endif

WINRT_EXPORT namespace winrt
{
    struct event_token
    {
        int64_t value{};

        explicit operator bool() const noexcept
        {
            return value != 0;
        }
    };

    inline bool operator==(event_token const& left, event_token const& right) noexcept
    {
        return left.value == right.value;
    }

    struct auto_revoke_t {};
    constexpr auto_revoke_t auto_revoke{};

    template <typename I>
    struct event_revoker
    {
        using method_type = HRESULT(__stdcall abi_t<I>::*)(event_token);

        event_revoker() noexcept = default;
        event_revoker(event_revoker const&) = delete;
        event_revoker& operator=(event_revoker const&) = delete;
        event_revoker(event_revoker&&) = default;
        event_revoker& operator=(event_revoker&&) = default;

        event_revoker(I const& object, method_type method, event_token token) :
            m_object(object),
            m_method(method),
            m_token(token)
        {}

        ~event_revoker() noexcept
        {
            revoke();
        }

        void revoke() noexcept
        {
            if (!m_object)
            {
                return;
            }

            if (I object = m_object.get())
            {
                ((*reinterpret_cast<abi_t<I>**>(&object))->*(m_method))(m_token);
            }

            m_object = nullptr;
        }

        explicit operator bool() const noexcept
        {
            return m_object != nullptr;
        }

    private:

        weak_ref<I> m_object;
        method_type m_method{};
        event_token m_token{};
    };

    template <typename I>
    struct factory_event_revoker
    {
        using method_type = HRESULT(__stdcall abi_t<I>::*)(event_token);

        factory_event_revoker() noexcept = default;
        factory_event_revoker(factory_event_revoker const&) = delete;
        factory_event_revoker& operator=(factory_event_revoker const&) = delete;
        factory_event_revoker(factory_event_revoker&&) = default;
        factory_event_revoker& operator=(factory_event_revoker&&) = default;

        factory_event_revoker(I const& object, method_type method, event_token token) :
            m_object(object),
            m_method(method),
            m_token(token)
        {}

        ~factory_event_revoker() noexcept
        {
            revoke();
        }

        void revoke() noexcept
        {
            if (!m_object)
            {
                return;
            }

            ((*reinterpret_cast<abi_t<I>**>(&m_object))->*(m_method))(m_token);
            m_object = nullptr;
        }

        explicit operator bool() const noexcept
        {
            return m_object != nullptr;
        }

    private:

        I m_object;
        method_type m_method{};
        event_token m_token{};
    };
}

namespace winrt::impl
{
    template <typename D, typename I, typename S, typename M>
    auto make_event_revoker(S source, M method, event_token token)
    {
        return event_revoker<I>(static_cast<I const&>(static_cast<D const&>(*source)), method, token);
    }
}

namespace winrt::impl
{
    template <typename T>
    struct event_array
    {
        using value_type = T;
        using reference = value_type&;
        using pointer = value_type*;
        using iterator = array_iterator<value_type>;

        explicit event_array(uint32_t const count) noexcept : m_size(count)
        {
            std::uninitialized_fill_n(data(), count, value_type());
        }

        unsigned long AddRef() noexcept
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long Release() noexcept
        {
            uint32_t const remaining = m_references.fetch_sub(1, std::memory_order_release) - 1;

            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                this->~event_array();
                ::operator delete(static_cast<void*>(this));
            }

            return remaining;
        }

        reference back() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*(data() + m_size - 1);
        }

        iterator begin() noexcept
        {
            return make_array_iterator(data(), m_size);
        }

        iterator end() noexcept
        {
            return make_array_iterator(data(), m_size, m_size);
        }

        uint32_t size() const noexcept
        {
            return m_size;
        }

        ~event_array() noexcept
        {
            for (reference element : *this)
            {
                element.~T();
            }
        }

    private:

        pointer data() noexcept
        {
            return reinterpret_cast<pointer>(this + 1);
        }

        std::atomic<uint32_t> m_references{ 1 };
        uint32_t m_size{ 0 };
    };

    template <typename T>
    auto make_event_array(uint32_t const capacity)
    {
        com_ptr<event_array<T>> instance;
        void* raw = ::operator new(sizeof(event_array<T>) + (sizeof(T)* capacity));
        #pragma warning(suppress: 6386)
        *put_abi(instance) = new(raw) event_array<T>(capacity);
        return instance;
    }

    template <typename Traits>
    struct event : Traits
    {
        using delegate_type = typename Traits::delegate_type;

        event() = default;
        event(event<Traits> const&) = delete;
        event<Traits>& operator =(event<Traits> const&) = delete;

        explicit operator bool() const noexcept
        {
            return m_targets != nullptr;
        }

        event_token add(delegate_type const& delegate)
        {
            if (delegate == nullptr)
            {
                throw hresult_invalid_argument();
            }

            event_token token{};
            delegate_array temp_targets;

            {
                auto change_guard = this->get_change_guard();
                delegate_array new_targets = make_event_array<storage_type>((!m_targets) ? 1 : m_targets->size() + 1);

                if (m_targets)
                {
                    std::copy_n(m_targets->begin(), m_targets->size(), new_targets->begin());
                }

                token.value = reinterpret_cast<int64_t>(get_abi(delegate));
                new_targets->back() = delegate;

                auto swap_guard = this->get_swap_guard();
                temp_targets = m_targets;
                m_targets = new_targets;
            }

            return token;
        }

        void remove(event_token const token)
        {
            delegate_array temp_targets;

            {
                auto change_guard = this->get_change_guard();

                if (!m_targets)
                {
                    return;
                }

                uint32_t available_slots = m_targets->size() - 1;
                delegate_array new_targets;
                bool removed = false;

                if (available_slots == 0)
                {
                    if (this->get_token(*m_targets->begin()) == token)
                    {
                        removed = true;
                    }
                }
                else
                {
                    new_targets = make_event_array<storage_type>(available_slots);
                    auto new_iterator = new_targets->begin();

                    for (storage_type const& element : *m_targets)
                    {
                        if (!removed&& token == this->get_token(element))
                        {
                            removed = true;
                            continue;
                        }

                        *new_iterator = element;
                        ++new_iterator;
                    }
                }

                if (removed)
                {
                    auto swap_guard = this->get_swap_guard();
                    temp_targets = m_targets;
                    m_targets = new_targets;
                }
            }
        }

        template<typename ...Arg>
        void operator()(Arg const& ... args)
        {
            delegate_array temp_targets;

            {
                auto swap_guard = this->get_swap_guard();
                temp_targets = m_targets;
            }

            if (temp_targets)
            {
                for (storage_type const& element : *temp_targets)
                {
                    bool remove_delegate = false;

                    try
                    {
                        this->invoke(element, args...);
                    }
                    catch (hresult_error const& e)
                    {
                        if (e.code() == JSCRIPT_E_CANTEXECUTE ||
                            e.code() == RPC_S_SERVER_UNAVAILABLE ||
                            e.code() == RPC_E_DISCONNECTED)
                        {
                            remove_delegate = true;
                        }
                    }

                    if (remove_delegate)
                    {
                        remove(this->get_token(element));
                    }
                }
            }
        }

    private:

        using storage_type = typename Traits::storage_type;
        using delegate_array = com_ptr<event_array<storage_type>>;

        delegate_array m_targets;
    };

    struct no_lock_guard {};

    struct locked_event_traits
    {
        lock_guard get_swap_guard() noexcept
        {
            return lock_guard(m_swap);
        }

        lock_guard get_change_guard() noexcept
        {
            return lock_guard(m_change);
        }

    private:

        lock m_swap;
        lock m_change;
    };

    template <typename Delegate>
    struct single_threaded_event_traits
    {
        using delegate_type = Delegate;
        using storage_type = Delegate;

        template <typename ... Args>
        void invoke(storage_type const& delegate, Args const& ... args) const
        {
            delegate(args ...);
        }

        event_token get_token(storage_type const& delegate) const noexcept
        {
            return event_token{ reinterpret_cast<int64_t>(get_abi(delegate)) };
        }

        no_lock_guard get_swap_guard() const noexcept
        {
            return{};
        }

        no_lock_guard get_change_guard() const noexcept
        {
            return{};
        }
    };

#ifndef WINRT_NO_AGILE_REFERENCE

    template <typename Delegate>
    struct agile_event_traits : locked_event_traits
    {
        using delegate_type = Delegate;
        using storage_type = agile_ref<Delegate>;

        template <typename ... Args>
        void invoke(storage_type const& delegate, Args const& ... args) const
        {
            delegate.get()(args ...);
        }

        event_token get_token(storage_type const& delegate) const noexcept
        {
            return event_token{ reinterpret_cast<int64_t>(get_abi(delegate.get())) };
        }
    };

#endif

    template <typename Delegate>
    struct non_agile_event_traits : locked_event_traits
    {
        using delegate_type = Delegate;
        using storage_type = Delegate;

        template <typename ... Args>
        void invoke(storage_type const& delegate, Args const& ... args) const
        {
            delegate(args ...);
        }

        event_token get_token(storage_type const& delegate) const noexcept
        {
            return event_token{ reinterpret_cast<int64_t>(get_abi(delegate)) };
        }
    };
}

WINRT_EXPORT namespace winrt
{
#ifndef WINRT_NO_AGILE_REFERENCE

    template <typename Delegate>
    using agile_event = impl::event<impl::agile_event_traits<Delegate>>;

#endif

    template <typename Delegate>
    using non_agile_event = impl::event<impl::non_agile_event_traits<Delegate>>;

    template <typename Delegate>
    using single_threaded_event = impl::event<impl::single_threaded_event_traits<Delegate>>;
}
namespace winrt::impl
{
    struct free_threaded_marshaler : ::IMarshal
    {
        free_threaded_marshaler(::IUnknown* object)
        {
            m_object.copy_from(object);
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept final
        {
            if (id == guid_of<::IMarshal>())
            {
                *object = static_cast<::IMarshal*>(this);
                AddRef();
                return S_OK;
            }

            return m_object->QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept final
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long __stdcall Release() noexcept final
        {
            uint32_t const remaining = m_references.fetch_sub(1, std::memory_order_relaxed) - 1;

            if (remaining == 0)
            {
                delete this;
            }

            return remaining;
        }

        HRESULT __stdcall GetUnmarshalClass(REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags, CLSID* pCid) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->GetUnmarshalClass(riid, pv, dwDestContext, pvDestContext, mshlflags, pCid);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall GetMarshalSizeMax(REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags, DWORD* pSize) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->GetMarshalSizeMax(riid, pv, dwDestContext, pvDestContext, mshlflags, pSize);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall MarshalInterface(IStream* pStm, REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->MarshalInterface(pStm, riid, pv, dwDestContext, pvDestContext, mshlflags);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall UnmarshalInterface(IStream* pStm, REFIID riid, void** ppv) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->UnmarshalInterface(pStm, riid, ppv);
            }

            *ppv = nullptr;
            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall ReleaseMarshalData(IStream* pStm) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->ReleaseMarshalData(pStm);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall DisconnectObject(DWORD dwReserved) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->DisconnectObject(dwReserved);
            }

            return E_OUTOFMEMORY;
        }

    private:

        static com_ptr<::IMarshal> get_marshaler() noexcept
        {
            com_ptr<::IUnknown> unknown;
            WINRT_VERIFY_(S_OK, CoCreateFreeThreadedMarshaler(nullptr, unknown.put()));
            return unknown ? unknown.try_as<::IMarshal>() : nullptr;
        }

        com_ptr<::IUnknown> m_object;
        com_ptr<::IMarshal> m_marshaler{ get_marshaler() };
        std::atomic<uint32_t> m_references{ 1 };
    };
}

namespace winrt::impl
{
    struct marker {};
}

WINRT_EXPORT namespace winrt
{
    struct non_agile : impl::marker {};
    struct no_weak_ref : impl::marker {};
    struct composing : impl::marker {};
    struct composable : impl::marker {};

    template <typename Interface>
    struct cloaked : Interface {};

    template <typename D, typename ... I>
    struct implements;
}

namespace winrt::impl
{
    template <typename T>
    struct is_marker : std::is_base_of<impl::marker, T> {};

    template <typename T>
    constexpr bool is_marker_v = is_marker<T>::value;

    template <typename T>
    struct uncloak
    {
        using type = T;
    };

    template <typename T>
    struct uncloak<cloaked<T>>
    {
        using type = T;
    };

    template <typename T>
    using uncloak_t = typename uncloak<T>::type;

    template <typename I>
    struct is_cloaked : std::disjunction<
        std::is_same<::IInspectable, abi_t<I>>,
        std::negation<std::is_base_of<::IInspectable, abi_t<I>>>
    > {};

    template <typename I>
    struct is_cloaked<cloaked<I>> : std::true_type {};

    template <typename I>
    constexpr bool is_cloaked_v = is_cloaked<I>::value;


    template <typename D, typename ... I>
    struct root_implements;
    
    template <typename, typename = std::void_t<>>
    struct is_implements : std::false_type {};

    template <typename T>
    struct is_implements<T, std::void_t<typename T::implements_type>> : std::true_type {};

    template <typename T>
    constexpr bool is_implements_v = is_implements<T>::value;

    template <typename ...>
    struct nested_implements
    {};

    template <typename First, typename ... Rest>
    struct nested_implements<First, Rest...>
        : std::conditional_t<is_implements_v<First>,
        impl::identity<First>, nested_implements<Rest...>>
    {
        static_assert(!is_implements_v<First> || !std::disjunction_v<is_implements<Rest> ...>,
            "Duplicate nested implements found");
    };

    template <typename D, typename Dummy = std::void_t<>, typename ... I>
    struct base_implements_impl
        : impl::identity<root_implements<D, I...>> {};

    template <typename D, typename ... I>
    struct base_implements_impl<D, std::void_t<typename nested_implements<I...>::type>, I...>
        : nested_implements<I...> {};

    template <typename D, typename ... I>
    using base_implements = base_implements_impl<D, void, I...>;

    template <typename ...>
    struct uncloaked_interfaces;

    template <typename I, typename = std::void_t<>>
    struct uncloaked_interface_one
        : std::integral_constant<uint32_t, 1> {};

    template <typename I>
    struct uncloaked_interface_one<I, std::enable_if_t<(is_cloaked_v<I> || is_marker_v<I>) && !is_implements_v<I>>>
        : std::integral_constant<uint32_t, 0> {};

    template <typename D, typename ... I>
    struct uncloaked_interface_one<implements<D, I...>>
        : uncloaked_interfaces<I...> {};

    template <typename T>
    struct uncloaked_interface_one<T, std::void_t<typename T::implements_type>>
        : uncloaked_interface_one<typename T::implements_type> {};

    template <typename ...>
    struct uncloaked_interfaces
        : std::integral_constant<uint32_t, 0> {};

    template <typename First, typename ... Rest>
    struct uncloaked_interfaces<First, Rest ...>
        : std::integral_constant<uint32_t, uncloaked_interface_one<First>::value + uncloaked_interfaces<Rest ...>::value> {};

    template <typename T, typename = std::void_t<>>
    struct extract_interface
    {
        using type = T;
    };

    template <typename T>
    struct extract_interface<T, std::enable_if_t<is_implements_v<T>>>
    {
        using type = typename T::first_interface;
    };

    template <typename T>
    struct extract_interface<T, std::enable_if_t<is_marker_v<T>>>
    {};

    template <typename ... >
    struct first_interface
    {};

    template <typename First, typename ... Rest>
    struct first_interface<First, Rest ...>
        : std::conditional_t<!is_marker_v<First>,
            extract_interface<First>, first_interface<Rest...>
        >
    {};

    template <typename D, typename I>
    struct produce;

    template <typename D, typename I, typename Enable = void>
    struct producer;

    template <typename T, typename = std::void_t<>>
    struct has_composable : std::false_type {};

    template <typename T>
    struct has_composable<T, std::void_t<typename T::composable>> : std::true_type {};

    template <typename T, typename = std::void_t<>>
    struct has_class_type : std::false_type {};

    template <typename T>
    struct has_class_type<T, std::void_t<typename T::class_type>> : std::true_type {};

    template <typename I, typename = std::void_t<>>
    struct runtime_class_name
    {
        static hstring get()
        {
            throw hresult_not_implemented{};
        }
    };

    template <typename I>
    struct runtime_class_name<I, std::void_t<decltype(name<I>::value)>>
    {
        static hstring get()
        {
            return hstring{ impl::string_data(impl::name_v<I>) };
        }
    };

    template <typename T>
    void clear_abi(T*) noexcept
    {}

    template <typename T>
    void clear_abi(T** value) noexcept
    {
        *value = nullptr;
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename I>
    D* from_abi(I const& from) noexcept
    {
        return&static_cast<impl::produce<D, I>*>(get_abi(from))->shim();
    }

    template <typename I, typename D, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, I>>* = nullptr>
    abi_t<I>* to_abi(impl::producer<D, I> const* from) noexcept
    {
        return reinterpret_cast<abi_t<I>*>(const_cast<impl::producer<D, I>*>(from));
    }

    template <typename I, typename D, std::enable_if_t<std::is_base_of_v< ::IUnknown, I>>* = nullptr>
    abi_t<I>* to_abi(impl::producer<D, I> const* from) noexcept
    {
        return const_cast<impl::producer<D, I>*>(from);
    }

    template <typename D, typename I = typename D::first_interface, typename ... Args, std::enable_if_t<!impl::has_composable<D>::value && !impl::has_class_type<D>::value>* = nullptr>
    auto make(Args&& ... args)
    {
        std::conditional_t<std::is_base_of_v<Windows::Foundation::IUnknown, I>, I, com_ptr<I>> result{ nullptr };
        *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args) ...));
        return result;
    }

    template <typename D, typename ... Args, std::enable_if_t<!impl::has_composable<D>::value && impl::has_class_type<D>::value>* = nullptr>
    auto make(Args&& ... args)
    {
        typename D::class_type result{ nullptr };
        *put_abi(result) = to_abi<typename D::first_interface>(new D(std::forward<Args>(args) ...));
        return result;
    }

    template <typename D, typename I = typename D::first_interface, typename ... Args, std::enable_if_t<impl::has_composable<D>::value>* = nullptr>
    auto make(Args&& ... args)
    {
        com_ptr<I> result;
        *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args) ...));
        return result.template as<typename D::composable>();
    }

    template <typename D, typename ... Args>
    auto make_self(Args&& ... args)
    {
        com_ptr<D> result;
        *put_abi(result) = new D(std::forward<Args>(args) ...);
        return result;
    }
}

namespace winrt::impl
{
    template <typename D, typename I, typename Enable>
    struct producer
    {
        operator I() const noexcept
        {
            I result = nullptr;
            copy_from_abi(result, const_cast<produce<D, I>*>(&vtable));
            return result;
        }

    private:

        produce<D, I> vtable;
    };

    template <typename D, typename I>
    struct produce_base : abi_t<I>
    {
        D& shim() noexcept
        {
            return*static_cast<D*>(reinterpret_cast<producer<D, I>*>(this));
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept override
        {
            return shim().QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept override
        {
            return shim().AddRef();
        }

        unsigned long __stdcall Release() noexcept override
        {
            return shim().Release();
        }

        HRESULT __stdcall GetIids(ULONG* count, GUID** array) noexcept override
        {
            return shim().GetIids(count, array);
        }

        HRESULT __stdcall GetRuntimeClassName(HSTRING* name) noexcept override
        {
            return shim().abi_GetRuntimeClassName(name);
        }

        HRESULT __stdcall GetTrustLevel(TrustLevel* trustLevel) noexcept final
        {
            *trustLevel = BaseTrust;
            return S_OK;
        }
    };

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<std::is_base_of_v< ::IUnknown, I> && !is_implements_v<I>>> : abi_t<I>
    {};

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<is_marker_v<I>>>
    {};

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<is_implements_v<I>>>
    {};

    template <typename D>
    struct produce<D, Windows::Foundation::IInspectable> : produce_base<D, Windows::Foundation::IInspectable>
    {};

    struct INonDelegatingInspectable : Windows::Foundation::IUnknown
    {
        INonDelegatingInspectable(std::nullptr_t = nullptr) noexcept {}
    };

    template <> struct abi<INonDelegatingInspectable>
    {
        using type = ::IInspectable;
    };

    template <typename D>
    struct produce<D, INonDelegatingInspectable> : produce_base<D, INonDelegatingInspectable>
    {
        HRESULT __stdcall QueryInterface(const GUID& id, void** object) noexcept final
        {
            return this->shim().NonDelegatingQueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept final
        {
            return this->shim().NonDelegatingAddRef();
        }

        unsigned long __stdcall Release() noexcept final
        {
            return this->shim().NonDelegatingRelease();
        }

        HRESULT __stdcall GetIids(ULONG* count, GUID** array) noexcept final
        {
            return this->shim().NonDelegatingGetIids(count, array);
        }

        HRESULT __stdcall GetRuntimeClassName(HSTRING* name) noexcept final
        {
            return this->shim().NonDelegatingGetRuntimeClassName(name);
        }
    };

    template <bool Agile>
    struct weak_ref;

    template <bool Agile>
    struct weak_source_producer;

    template <bool Agile>
    struct weak_source : IWeakReferenceSource
    {
        weak_ref<Agile>* that() noexcept
        {
            return static_cast<weak_ref<Agile>*>(reinterpret_cast<weak_source_producer<Agile>*>(this));
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept override
        {
            if (id == guid_of<IWeakReferenceSource>())
            {
                *object = static_cast<IWeakReferenceSource*>(this);
                that()->increment_strong();
                return S_OK;
            }

            return that()->m_object->QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept override
        {
            return that()->increment_strong();
        }

        unsigned long __stdcall Release() noexcept override
        {
            return that()->m_object->Release();
        }

        HRESULT __stdcall GetWeakReference(IWeakReference** weakReference) noexcept override
        {
            *weakReference = that();
            that()->AddRef();
            return S_OK;
        }
    };

    template <bool Agile>
    struct weak_source_producer
    {
    protected:
        weak_source<Agile> m_source;
    };

    template <bool Agile>
    struct weak_ref : IWeakReference, weak_source_producer<Agile>
    {
        weak_ref(::IUnknown* object, uint32_t const strong) :
            m_object(object),
            m_strong(strong)
        {
            WINRT_ASSERT(object);
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept override
        {
            if (id == guid_of<IWeakReference>() || id == guid_of<Windows::Foundation::IUnknown>())
            {
                *object = static_cast<IWeakReference*>(this);
                AddRef();
                return S_OK;
            }

            if constexpr (Agile)
            {
                if (id == guid_of<IAgileObject>())
                {
                    *object = static_cast<::IUnknown*>(this);
                    AddRef();
                    return S_OK;
                }

                if (id == guid_of<IMarshal>())
                {
                    *object = new (std::nothrow) free_threaded_marshaler(this);
                    return *object ? S_OK : E_OUTOFMEMORY;
                }
            }

            *object = nullptr;
            return E_NOINTERFACE;
        }

        unsigned long __stdcall AddRef() noexcept override
        {
            return 1 + m_weak.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long __stdcall Release() noexcept override
        {
            uint32_t const target = m_weak.fetch_sub(1, std::memory_order_relaxed) - 1;

            if (target == 0)
            {
                delete this;
            }

            return target;
        }

        HRESULT __stdcall Resolve(GUID const& id, ::IInspectable** objectReference) noexcept override
        {
            uint32_t target = m_strong.load(std::memory_order_relaxed);

            while (true)
            {
                if (target == 0)
                {
                    *objectReference = nullptr;
                    return S_OK;
                }

                if (m_strong.compare_exchange_weak(target, target + 1, std::memory_order_acquire, std::memory_order_relaxed))
                {
                    HRESULT hr = m_object->QueryInterface(id, reinterpret_cast<void**>(objectReference));
                    m_strong.fetch_sub(1, std::memory_order_relaxed);
                    return hr;
                }
            }
        }

        void set_strong(uint32_t const count)
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

        IWeakReferenceSource* get_source()
        {
            increment_strong();
            return &this->m_source;
        }

    private:
        template <bool Agile>
        friend struct weak_source;

        static_assert(sizeof(weak_source_producer<Agile>) == sizeof(weak_source<Agile>));

        ::IUnknown* m_object{};
        std::atomic<uint32_t> m_strong{ 1 };
        std::atomic<uint32_t> m_weak{ 1 };
    };

    template <typename ... I>
    using is_agile = std::negation<std::disjunction<std::is_same<non_agile, I> ...>>;

    template <bool>
    struct WINRT_EBO root_implements_composing_outer
    {
    protected:
        static constexpr ::IInspectable* m_inner = nullptr;
    };

    template <>
    struct WINRT_EBO root_implements_composing_outer<true>
    {
        template <typename Qi>
        Qi as() const
        {
            return m_inner.as<Qi>();
        }

        explicit operator bool() const noexcept
        {
            return m_inner.operator bool();
        }
    protected:
        Windows::Foundation::IInspectable m_inner;
    };

    template <typename D, bool>
    struct WINRT_EBO root_implements_composable_inner
    {
    protected:
        static constexpr ::IInspectable* outer() noexcept { return nullptr; }

        template <typename T, typename D, typename I>
        friend class produce_dispatch_to_super_base;
    };

    template <typename D>
    struct WINRT_EBO root_implements_composable_inner<D, true> : producer<D, INonDelegatingInspectable>
    {
    protected:
        ::IInspectable* outer() noexcept { return m_outer; }
    private:
        ::IInspectable* m_outer = nullptr;

        template <typename T, typename D, typename I>
        friend class produce_dispatch_to_super_base;

        template <typename D>
        friend struct composable_factory;
    };

    template <typename D, typename ... I>
    struct root_implements
        : root_implements_composing_outer<std::disjunction<std::is_same<composing, I> ...>::value>
        , root_implements_composable_inner<D, std::disjunction<std::is_same<composable, I> ...>::value>
    {
        using IInspectable = Windows::Foundation::IInspectable;
        using root_implements_type = root_implements;

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept
        {
            if (this->outer())
            {
                return this->outer()->QueryInterface(id, object);
            }

            HRESULT result = query_interface(id, object);

            if (result == E_NOINTERFACE && this->m_inner)
            {
                result = get_abi(this->m_inner)->QueryInterface(id, object);
            }

            return result;
        }

        unsigned long __stdcall AddRef() noexcept
        {
            if (this->outer())
            {
                return this->outer()->AddRef();
            }

            return NonDelegatingAddRef();
        }

        unsigned long __stdcall Release() noexcept
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

    protected:

        explicit root_implements(uint32_t references = 1)
            : m_references(references)
        {}

        virtual ~root_implements() {}

        HRESULT __stdcall GetIids(ULONG* count, GUID** array) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetIids(count, array);
            }

            return NonDelegatingGetIids(count, array);
        }

        HRESULT __stdcall abi_GetRuntimeClassName(HSTRING* name) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetRuntimeClassName(name);
            }

            return NonDelegatingGetRuntimeClassName(name);
        }

        HRESULT __stdcall abi_GetTrustLevel(TrustLevel* trustLevel) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetTrustLevel(trustLevel);
            }

            return NonDelegatingGetTrustLevel(trustLevel);
        }

        unsigned long __stdcall NonDelegatingAddRef() noexcept
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

        unsigned long __stdcall NonDelegatingRelease() noexcept
        {
            uint32_t const target = subtract_reference();

            if (target == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                delete static_cast<D*>(this);
            }

            return target;
        }

        HRESULT __stdcall NonDelegatingQueryInterface(const GUID& id, void** object) noexcept
        {
            if (id == guid_of<Windows::Foundation::IInspectable>() || id == guid_of<Windows::Foundation::IInspectable>())
            {
                ::IInspectable* result = to_abi<impl::INonDelegatingInspectable>(this);
                NonDelegatingAddRef();
                *object = result;
                return S_OK;
            }

            HRESULT result = query_interface(id, object);

            if (result == E_NOINTERFACE && this->m_inner)
            {
                result = get_abi(this->m_inner)->QueryInterface(id, object);
            }

            return result;
        }

        HRESULT __stdcall NonDelegatingGetIids(ULONG* count, GUID** array) noexcept
        {
            *count = static_cast<D*>(this)->uncloaked_interfaces_nested();

            if (*count == 0)
            {
                *array = nullptr;
                return S_OK;
            }

            *array = static_cast<GUID*>(CoTaskMemAlloc(sizeof(GUID)**count));

            if (*array == nullptr)
            {
                return E_OUTOFMEMORY;
            }

            copy_guids_nested(*array);
            return S_OK;
        }

        HRESULT __stdcall NonDelegatingGetRuntimeClassName(HSTRING* name) noexcept
        {
            try
            {
                *name = detach_abi(static_cast<D*>(this)->GetRuntimeClassName());
                return S_OK;
            }
            catch (...) { return impl::to_hresult(); }
        }

        HRESULT __stdcall NonDelegatingGetTrustLevel(TrustLevel* trustLevel) noexcept
        {
            try
            {
                *trustLevel = static_cast<D*>(this)->GetTrustLevel();
                return S_OK;
            }
            catch (...) { return impl::to_hresult(); }
        }

        virtual void* find_interface_nested(GUID const&) const noexcept
        {
            return nullptr;
        }

        virtual ::IInspectable* find_inspectable_nested() const noexcept
        {
            return nullptr;
        }

        virtual void copy_guids_nested(GUID*) const noexcept
        {
        }

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

    private:
        void abi_enter() noexcept {}
        void abi_exit() noexcept {}

        using is_agile = impl::is_agile<I ...>;
        using is_factory = std::disjunction<std::is_same<abi_t<Windows::Foundation::IActivationFactory>, abi_t<I>> ...>;
        using is_inspectable = std::disjunction<std::is_base_of<::IInspectable, abi_t<I>> ...>;
        using is_weak_ref_source = std::conjunction<is_inspectable, std::negation<is_factory>, std::negation<std::disjunction<std::is_same<no_weak_ref, I> ...>>>;
        using weak_ref_t = impl::weak_ref<is_agile::value>;

        static_assert(!is_factory::value || (is_factory::value&& is_agile::value), "winrt::implements - activation factories must be agile.");

        std::atomic<std::conditional_t<is_weak_ref_source::value, uintptr_t, uint32_t>> m_references;

        HRESULT query_interface(GUID const& id, void** object) noexcept
        {
            *object = static_cast<D*>(this)->find_interface_nested(id);

            if (*object != nullptr)
            {
                AddRef();
                return S_OK;
            }

            if constexpr (is_agile::value)
            {
                if (id == guid_of<IAgileObject>())
                {
                    *object = get_unknown();
                    AddRef();
                    return S_OK;
                }

                if (id == guid_of<IMarshal>())
                {
                    *object = new (std::nothrow) free_threaded_marshaler(get_unknown());
                    return *object ? S_OK : E_OUTOFMEMORY;
                }
            }

            if constexpr (is_inspectable::value)
            {
                if (id == __uuidof(::IInspectable))
                {
                    *object = find_inspectable_nested();
                    AddRef();
                    return S_OK;
                }
            }

            if (id == __uuidof(::IUnknown))
            {
                *object = get_unknown();
                AddRef();
                return S_OK;
            }

            if constexpr (is_weak_ref_source::value)
            {
                if (id == __uuidof(impl::IWeakReferenceSource))
                {
                    *object = make_weak_ref();
                    return*object ? S_OK : E_OUTOFMEMORY;
                }
            }

            return E_NOINTERFACE;
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

        virtual ::IUnknown* get_unknown() const noexcept = 0;
        virtual uint32_t uncloaked_interfaces_nested() const noexcept = 0;
        virtual hstring GetRuntimeClassName() const = 0;

        virtual TrustLevel GetTrustLevel() const noexcept
        {
            return BaseTrust;
        }

        template <typename D, typename I>
        friend struct impl::produce_base;

        template <typename D, typename I>
        friend struct impl::produce;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename ... I>
    struct implements : impl::producer<D, impl::uncloak_t<I>> ..., impl::base_implements<D, I...>::type
    {
    protected:

        using base_type = typename impl::base_implements<D, I...>::type;
        using root_implements_type = typename base_type::root_implements_type;

        template <typename ... Args>
        explicit implements(Args&&... args)
            : base_type(std::forward<Args>(args)...)
        {}

    public:

        using implements_type = implements;
        using first_interface = typename impl::first_interface<impl::uncloak_t<I> ...>::type;
        using IInspectable = Windows::Foundation::IInspectable;

        operator IInspectable() const noexcept
        {
            IInspectable result;
            copy_from_abi(result, find_inspectable<I ...>());
            return result;
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept
        {
            return root_implements_type::QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept
        {
            return root_implements_type::AddRef();
        }

        unsigned long __stdcall Release() noexcept
        {
            return root_implements_type::Release();
        }
        void* find_interface_nested(GUID const& id) const noexcept override
        {
            return find_interface<impl::uncloak_t<I> ...>(id);
        }

        ::IInspectable* find_inspectable_nested() const noexcept override
        {
            return find_inspectable<I...>();
        }

        uint32_t uncloaked_interfaces_nested() const noexcept override
        {
            return impl::uncloaked_interfaces<I...>();
        }

        virtual void copy_guids_nested(GUID* ids) const noexcept override
        {
            return copy_guids<I ...>(ids);
        }

    private:
        template <int = 0>
        void copy_guids(GUID* ids) const noexcept
        {
            base_type::copy_guids_nested(ids);
        }

        template <typename First, typename ... Rest>
        void copy_guids(GUID* ids, std::enable_if_t<impl::is_cloaked_v<First>>* = nullptr) const noexcept
        {
            copy_guids<Rest ...>(ids);
        }

        template <typename First, typename ... Rest>
        void copy_guids(GUID* ids, std::enable_if_t<!impl::is_cloaked_v<First>>* = nullptr) const noexcept
        {
            *ids++ = guid_of<First>();
            copy_guids<Rest ...>(ids);
        }

        template <int = 0>
        void* find_interface(GUID const& id) const noexcept
        {
            return base_type::find_interface_nested(id);
        }

        template <typename First, typename ... Rest>
        void* find_interface(GUID const& id, std::enable_if_t<impl::is_marker_v<First> || impl::is_implements_v<First>>* = nullptr) const noexcept
        {
            return find_interface<Rest ...>(id);
        }

        template <typename First, typename ... Rest>
        void* find_interface(GUID const& id, std::enable_if_t<!impl::is_marker_v<First> && !impl::is_implements_v<First>>* = nullptr) const noexcept
        {
            if (id == guid_of<First>())
            {
                return to_abi<First>(this);
            }

            return find_interface<Rest ...>(id);
        }

        template <int = 0>
        ::IInspectable* find_inspectable() const noexcept
        {
            return base_type::find_inspectable_nested();
        }

        template <typename First, typename ... Rest>
        ::IInspectable* find_inspectable(std::enable_if_t<std::is_base_of_v<::IInspectable, abi_t<First>>>* = nullptr) const noexcept
        {
            return to_abi<First>(this);
        }

        template <typename First, typename ... Rest>
        ::IInspectable* find_inspectable(std::enable_if_t<!std::is_base_of_v<::IInspectable, abi_t<First>>>* = nullptr) const noexcept
        {
            return find_inspectable<Rest ...>();
        }

        ::IUnknown* get_unknown() const noexcept override
        {
            return to_abi<first_interface>(this);
        }

        hstring GetRuntimeClassName() const override
        {
            return impl::runtime_class_name<first_interface>::get();
        }

        template <typename D, typename ... I>
        friend struct impl::root_implements;
    };
}

namespace winrt::impl
{
    template <typename D>
    struct composable_factory
    {
        template <typename I, typename ... Args>
        static I CreateInstance(const Windows::Foundation::IInspectable& outer, Windows::Foundation::IInspectable& inner, Args&& ... args)
        {
            static_assert(std::is_base_of_v<Windows::Foundation::IInspectable, I>, "Requested interface must derive from winrt::Windows::Foundation::IInspectable");
            inner = CreateInstanceImpl(outer, std::forward<Args>(args) ...);
            return inner.as<I>();
        }

    private:
        template <typename ... Args>
        static Windows::Foundation::IInspectable CreateInstanceImpl(const Windows::Foundation::IInspectable& outer, Args&& ... args)
        {
            // Very specific dance here. The return value must have a ref on the outer, while inner must have a ref count of 1.
            // Be sure not to make a delegating QueryInterface call because the controlling outer is not fully constructed yet.
            com_ptr<D> instance = make_self<D>(std::forward<Args>(args) ...);
            instance->m_outer = static_cast<::IInspectable*>(get_abi(outer));
            Windows::Foundation::IInspectable inner;
            attach_abi(inner, to_abi<INonDelegatingInspectable>(detach_abi(instance)));
            return inner;
        }
    };

    template <typename T, typename D, typename I>
    class WINRT_EBO produce_dispatch_to_super_base
    {
    protected:
        D& shim() noexcept
        {
            return static_cast<T&>(*this).instance;
        }

        I shim_super()
        {
            I result;
            if (shim().outer())
            {
                check_hresult(shim().QueryInterface(guid_of<I>(), reinterpret_cast<void**>(put_abi(result))));
            }
            return result;
        }
    };

    template <typename T, typename D, typename I>
    struct produce_dispatch_to_super;

    template <typename D, typename ... I>
    class dispatch_to_super
    {
        class wrapper : public produce_dispatch_to_super<wrapper, D, I> ...
        {
            D& instance;

            template <typename T, typename D, typename I>
            friend class produce_dispatch_to_super_base;

            template <typename D, typename ... I>
            friend class dispatch_to_super;

            explicit wrapper(D& d) : instance(d) {}
            wrapper(const wrapper&) = delete;
        public:
            wrapper(wrapper&&) = default;
        };

    public:
        static wrapper super(D& instance) noexcept
        {
            return wrapper{ instance };
        }
    };
}

namespace winrt::impl
{
    template <typename D>
    Windows::Foundation::IInspectable consume_IActivationFactory<D>::ActivateInstance() const
    {
        Windows::Foundation::IInspectable instance;
        check_hresult(WINRT_SHIM(Windows::Foundation::IActivationFactory)->ActivateInstance(put_abi(instance)));
        return instance;
    }

    template <typename D>
    struct produce<D, Windows::Foundation::IActivationFactory> : produce_base<D, Windows::Foundation::IActivationFactory>
    {
        HRESULT __stdcall ActivateInstance(::IUnknown** instance) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *instance = detach_abi(this->shim().ActivateInstance());
                return S_OK;
            }
            catch (...)
            {
                *instance = nullptr;
                return to_hresult();
            }
        }
    };

    template <typename Class, typename Interface>
    Interface get_activation_factory()
    {
        param::hstring classId(string_data(impl::name_v<Class>));

        Interface factory;
        check_hresult(WINRT_RoGetActivationFactory(get_abi(classId), guid_of<Interface>(), reinterpret_cast<void**>(put_abi(factory))));
        return factory;
    }

#ifndef WINRT_DISABLE_FACTORY_CACHE
    template <typename Class, typename Interface>
    Interface get_agile_activation_factory()
    {
        Interface factory = get_activation_factory<Class, Interface>();

        if (!factory.template try_as<IAgileObject>())
        {
            return nullptr;
        }

        return factory;
    }
#endif
}

WINRT_EXPORT namespace winrt
{
    namespace Windows::Foundation
    {
        struct IActivationFactory :
            IInspectable,
            impl::consume_t<IActivationFactory>
        {
            IActivationFactory(std::nullptr_t = nullptr) noexcept {}
        };
    }

    enum class apartment_type
    {
        single_threaded,
        multi_threaded
    };

    inline void init_apartment(apartment_type const type = apartment_type::multi_threaded)
    {
        HRESULT const result = WINRT_RoInitialize(static_cast<uint32_t>(type));

        if (result < 0)
        {
            impl::throw_hresult(result);
        }
    }

    inline void uninit_apartment() noexcept
    {
        WINRT_RoUninitialize();
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    Interface get_activation_factory()
    {
#ifdef WINRT_DISABLE_FACTORY_CACHE
        return impl::get_activation_factory<Class, Interface>();
#else
        static Interface factory = impl::get_agile_activation_factory<Class, Interface>();

        if (!factory)
        {
            return impl::get_activation_factory<Class, Interface>();
        }

        return factory;
#endif
    }

    template <typename Class, typename Instance = Class>
    Instance activate_instance()
    {
        return get_activation_factory<Class>().ActivateInstance().template as<Instance>();
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    template <typename TSender, typename TArgs> struct TypedEventHandler;
}

namespace winrt::impl
{
    template <typename T, typename H>
    struct implements_delegate : abi_t<T>, H
    {
        implements_delegate(H&& handler) : H(std::forward<H>(handler)) {}

        HRESULT __stdcall QueryInterface(GUID const& id, void** result) noexcept final
        {
            if (id == guid_of<T>() || id == guid_of<Windows::Foundation::IUnknown>() || id == guid_of<IAgileObject>())
            {
                *result = static_cast<winrt::abi_t<T>*>(this);
                AddRef();
                return S_OK;
            }

            if (id == guid_of<IMarshal>())
            {
                *result = new (std::nothrow) free_threaded_marshaler(this);
                return *result ? S_OK : E_OUTOFMEMORY;
            }

            *result = nullptr;
            return E_NOINTERFACE;
        }

        unsigned long __stdcall AddRef() noexcept final
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long __stdcall Release() noexcept final
        {
            uint32_t const target = m_references.fetch_sub(1, std::memory_order_release) - 1;

            if (target == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                delete this;
            }

            return target;
        }

    private:

        std::atomic<uint32_t> m_references{ 1 };
    };

    template <typename T, typename H>
    auto make_delegate(H&& handler)
    {
        T instance{};
        *put_abi(instance) = (new delegate_t<T, H>(std::forward<H>(handler)));
        return instance;
    }

    template <typename T>
    struct abi<Windows::Foundation::EventHandler<T>>
    {
        struct __declspec(novtable) type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* sender, arg_in<T> args) = 0;
        };
    };

    template <typename T>
    struct delegate<Windows::Foundation::EventHandler<T>>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::EventHandler<T>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::EventHandler<T>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, arg_in<T> args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<T const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };


    template <typename TSender, typename TArgs>
    struct abi<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        struct __declspec(novtable) type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(arg_in<TSender> sender, arg_in<TArgs> args) = 0;
        };
    };

    template <typename TSender, typename TArgs>
    struct delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(arg_in<TSender> sender, arg_in<TArgs> args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<TSender const*>(&sender), *reinterpret_cast<TArgs const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename T>
    struct guid<Windows::Foundation::EventHandler<T>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::EventHandler<T>>::value };
    };
    
    template <typename T>
    struct name<Windows::Foundation::EventHandler<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.EventHandler`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<Windows::Foundation::EventHandler<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x9de1c535, 0x6ae1, 0x11e0,{ 0x84, 0xe1, 0x18, 0xa9, 0x05, 0xbc, 0xc5, 0x3f } };
    };

    template <typename TSender, typename TArgs>
    struct guid<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::TypedEventHandler<TSender, TArgs>>::value };
    };
    
    template <typename TSender, typename TArgs> 
    struct name<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        static constexpr auto value{ L"Windows.Foundation.TypedEventHandler`2<" + make_constexpr_string(name_v<TSender>) + L"," + make_constexpr_string(name_v<TArgs>) + L">" };
    };

    template <typename TSender, typename TArgs>
    struct category<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        using type = pinterface_category<TSender, TArgs>;
        static constexpr GUID value{ 0x9de1c534, 0x6ae1, 0x11e0,{ 0x84, 0xe1, 0x18, 0xa9, 0x05, 0xbc, 0xc5, 0x3f } };
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T>
    struct WINRT_EBO EventHandler : IUnknown
    {
        EventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        EventHandler(L handler) :
            EventHandler(impl::make_delegate<EventHandler<T>>(std::forward<L>(handler)))
        {}

        template <typename F> EventHandler(F* handler) :
            EventHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> EventHandler(O* object, M method) :
            EventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IInspectable const& sender, T const& args) const
        {
            check_hresult((*(abi_t<EventHandler<T>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename TSender, typename TArgs>
    struct WINRT_EBO TypedEventHandler : IUnknown
    {
        TypedEventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        TypedEventHandler(L handler) :
            TypedEventHandler(impl::make_delegate<TypedEventHandler<TSender, TArgs>>(std::forward<L>(handler)))
        {}

        template <typename F> TypedEventHandler(F* handler) :
            TypedEventHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> TypedEventHandler(O* object, M method) :
            TypedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(TSender const& sender, TArgs const& args) const
        {
            check_hresult((*(abi_t<TypedEventHandler<TSender, TArgs>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    enum class CollectionChange
    {
        Reset,
        ItemInserted,
        ItemRemoved,
        ItemChanged,
    };

    struct IVectorChangedEventArgs;
    template <typename K> struct IMapChangedEventArgs;

    template <typename T> struct VectorChangedEventHandler;
    template <typename K, typename V> struct MapChangedEventHandler;

    template <typename T> struct IIterator;
    template <typename T> struct IIterable;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
    template <typename T> struct IObservableVector;

    template <typename K, typename V> struct IKeyValuePair;
    template <typename K, typename V> struct IMapView;
    template <typename K, typename V> struct IMap;
    template <typename K, typename V> struct IObservableMap;
}

namespace winrt::impl
{
    namespace wfc = Windows::Foundation::Collections;

    template <>
    struct abi<wfc::IVectorChangedEventArgs>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) = 0;
            virtual HRESULT __stdcall get_Index(uint32_t* value) = 0;
        };
    };

    template <typename D>
    struct consume_IVectorChangedEventArgs
    {
        wfc::CollectionChange CollectionChange() const
        {
            wfc::CollectionChange value{};
            check_hresult((*(abi_t<wfc::IVectorChangedEventArgs>**)&static_cast<wfc::IVectorChangedEventArgs const&>(static_cast<D const&>(*this)))->get_CollectionChange(&value));
            return value;
        }

        uint32_t Index() const
        {
            uint32_t index{};
            check_hresult((*(abi_t<wfc::IVectorChangedEventArgs>**)&static_cast<wfc::IVectorChangedEventArgs const&>(static_cast<D const&>(*this)))->get_Index(&index));
            return index;
        }
    };

    template <typename D, typename K>
    struct consume_IMapChangedEventArgs
    {
        wfc::CollectionChange CollectionChange() const
        {
            wfc::CollectionChange value{};
            check_hresult((*(abi_t<wfc::IMapChangedEventArgs<K>>**)&static_cast<wfc::IMapChangedEventArgs<K> const&>(static_cast<D const&>(*this)))->get_CollectionChange(&value));
            return value;
        }

        K Key() const
        {
            K result{ empty_value<K>() };
            check_hresult((*(abi_t<wfc::IMapChangedEventArgs<K>>**)&static_cast<wfc::IMapChangedEventArgs<K> const&>(static_cast<D const&>(*this)))->get_Key(put_abi(result)));
            return result;
        }
    };

    template <typename D, typename T>
    struct consume_IIterator
    {
        T Current() const
        {
            T result{ empty_value<T>() };
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->get_Current(put_abi(result)));
            return result;
        }

        bool HasCurrent() const
        {
            bool temp{};
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->get_HasCurrent(put_abi(temp)));
            return temp;
        }

        bool MoveNext() const
        {
            bool temp{};
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->MoveNext(put_abi(temp)));
            return temp;
        }

        uint32_t GetMany(array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->GetMany(values.size(), get_abi(values), &actual));
            return actual;
        }

        auto& operator++()
        {
            if (!MoveNext())
            {
                static_cast<D&>(*this) = nullptr;
            }

            return*this;
        }

        T operator*() const
        {
            return Current();
        }
    };

    template <typename D, typename T>
    struct consume_IIterable
    {
        wfc::IIterator<T> First() const
        {
            wfc::IIterator<T> iterator;
            check_hresult((*(abi_t<wfc::IIterable<T>>**)&static_cast<wfc::IIterable<T> const&>(static_cast<D const&>(*this)))->First(put_abi(iterator)));
            return iterator;
        }
    };

    template <typename D, typename T>
    struct consume_IVectorView
    {
        T GetAt(uint32_t const index) const
        {
            T result{ empty_value<T>() };
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool IndexOf(T const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        uint32_t GetMany(uint32_t startIndex, array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }
    };

    template <typename D, typename T>
    struct consume_IVector
    {
        T GetAt(uint32_t const index) const
        {
            T result{ empty_value<T>() };
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size = 0;
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        wfc::IVectorView<T> GetView() const
        {
            wfc::IVectorView<T> view;
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->GetView(put_abi(view)));
            return view;
        }

        bool IndexOf(T const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        void SetAt(uint32_t const index, T const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->SetAt(index, get_abi(value)));
        }

        void InsertAt(uint32_t const index, T const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->InsertAt(index, get_abi(value)));
        }

        void RemoveAt(uint32_t const index) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->RemoveAt(index));
        }

        void Append(T const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->Append(get_abi(value)));
        }

        void RemoveAtEnd() const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->RemoveAtEnd());
        }

        void Clear() const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->Clear());
        }

        uint32_t GetMany(uint32_t startIndex, array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }

        void ReplaceAll(array_view<T const> value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->ReplaceAll(value.size(), get_abi(value)));
        }
    };

    template <typename D, typename T>
    struct consume_IObservableVector
    {
        event_token VectorChanged(wfc::VectorChangedEventHandler<T> const& handler) const
        {
            event_token cookie{};
            check_hresult((*(abi_t<wfc::IObservableVector<T>>**)&static_cast<wfc::IObservableVector<T> const&>(static_cast<D const&>(*this)))->add_VectorChanged(get_abi(handler), &cookie));
            return cookie;
        }

        void VectorChanged(event_token const cookie) const
        {
            check_hresult((*(abi_t<wfc::IObservableVector<T>>**)&static_cast<wfc::IObservableVector<T> const&>(static_cast<D const&>(*this)))->remove_VectorChanged(cookie));
        }

        using VectorChanged_revoker = event_revoker<wfc::IObservableVector<T>>;

        VectorChanged_revoker VectorChanged(auto_revoke_t, wfc::VectorChangedEventHandler<T> const& handler) const
        {
            return make_event_revoker<D, wfc::IObservableVector<T>>(this, &abi<wfc::IObservableVector<T>>::remove_VectorChanged, VectorChanged(handler));
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IKeyValuePair
    {
        K Key() const
        {
            K result{ empty_value<K>() };
            check_hresult((*(abi_t<wfc::IKeyValuePair<K, V>>**)&static_cast<wfc::IKeyValuePair<K, V> const&>(static_cast<D const&>(*this)))->get_Key(put_abi(result)));
            return result;
        }

        V Value() const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IKeyValuePair<K, V>>**)&static_cast<wfc::IKeyValuePair<K, V> const&>(static_cast<D const&>(*this)))->get_Value(put_abi(result)));
            return result;
        }

        bool operator==(wfc::IKeyValuePair<K, V> const& other) const
        {
            return Key() == other.Key() && Value() == other.Value();
        }

        bool operator!=(wfc::IKeyValuePair<K, V> const& other) const
        {
            return !(*this == other);
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IMapView
    {
        V Lookup(K const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool HasKey(K const& key) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->HasKey(get_abi(key), &found));
            return found;
        }
        void Split(wfc::IMapView<K, V>& firstPartition, wfc::IMapView<K, V>& secondPartition)
        {
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->Split(put_abi(firstPartition), put_abi(secondPartition)));
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IMap
    {
        V Lookup(K const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool HasKey(K const& key) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->HasKey(get_abi(key), &found));
            return found;
        }

        wfc::IMapView<K, V> GetView() const
        {
            wfc::IMapView<K, V> view;
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->GetView(put_abi(view)));
            return view;
        }

        bool Insert(K const& key, V const& value) const
        {
            bool replaced{};
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Insert(get_abi(key), get_abi(value), &replaced));
            return replaced;
        }

        void Remove(K const& key) const
        {
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Remove(get_abi(key)));
        }

        void Clear() const
        {
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Clear());
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IObservableMap
    {
        event_token MapChanged(wfc::MapChangedEventHandler<K, V> const& handler) const
        {
            event_token cookie{};
            check_hresult((*(abi_t<wfc::IObservableMap<K, V>>**)&static_cast<wfc::IObservableMap<K, V> const&>(static_cast<D const&>(*this)))->add_MapChanged(get_abi(handler), &cookie));
            return cookie;
        }

        void MapChanged(event_token const cookie) const
        {
            check_hresult((*(abi_t<wfc::IObservableMap<K, V>>**)&static_cast<wfc::IObservableMap<K, V> const&>(static_cast<D const&>(*this)))->remove_MapChanged(cookie));
        }

        using MapChanged_revoker = event_revoker<wfc::IObservableMap<K, V>>;

        MapChanged_revoker MapChanged(auto_revoke_t, wfc::MapChangedEventHandler<K, V> const& handler) const
        {
            return make_event_revoker<D, wfc::IObservableMap<K, V>>(this, &abi_t<wfc::IObservableMap<K, V>>::remove_MapChanged, MapChanged(handler));
        }
    };

    template <>
    struct consume<wfc::IVectorChangedEventArgs>
    {
        template <typename D> using type = consume_IVectorChangedEventArgs<D>;
    };

    template <typename K>
    struct abi<wfc::IMapChangedEventArgs<K>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) = 0;
            virtual HRESULT __stdcall get_Key(arg_out<K> value) = 0;
        };
    };

    template <typename K>
    struct consume<wfc::IMapChangedEventArgs<K>>
    {
        template <typename D> using type = consume_IMapChangedEventArgs<D, K>;
    };

    template <typename T>
    struct abi<wfc::VectorChangedEventHandler<T>>
    {
        struct __declspec(novtable) type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* args) = 0;
        };
    };

    template <typename T>
    struct delegate<wfc::VectorChangedEventHandler<T>>
    {
        template <typename H>
        struct type : implements_delegate<wfc::VectorChangedEventHandler<T>, H>
        {
            type(H&& handler) : implements_delegate<wfc::VectorChangedEventHandler<T>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<wfc::IObservableVector<T> const*>(&sender), *reinterpret_cast<wfc::IVectorChangedEventArgs const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename K, typename V>
    struct abi<wfc::MapChangedEventHandler<K, V>>
    {
        struct __declspec(novtable) type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* args) = 0;
        };
    };

    template <typename K, typename V>
    struct delegate<wfc::MapChangedEventHandler<K, V>>
    {
        template <typename H>
        struct type : implements_delegate<wfc::MapChangedEventHandler<K, V>, H>
        {
            type(H&& handler) : implements_delegate<wfc::MapChangedEventHandler<K, V>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<wfc::IObservableMap<K, V> const*>(&sender), *reinterpret_cast<wfc::IMapChangedEventArgs<K> const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename T>
    struct abi<wfc::IIterator<T>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall get_Current(arg_out<T> current) = 0;
            virtual HRESULT __stdcall get_HasCurrent(bool* hasCurrent) = 0;
            virtual HRESULT __stdcall MoveNext(bool* hasCurrent) = 0;
            virtual HRESULT __stdcall GetMany(uint32_t capacity, arg_out<T> value, uint32_t* actual) = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IIterator<T>>
    {
        template <typename D> using type = consume_IIterator<D, T>;
    };

    template <typename T>
    struct abi<wfc::IIterable<T>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall First(::IUnknown** first) = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IIterable<T>>
    {
        template <typename D> using type = consume_IIterable<D, T>;
    };

    template <typename T>
    struct abi<wfc::IVectorView<T>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) = 0;
            virtual HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) = 0;
            virtual HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IVectorView<T>>
    {
        template <typename D> using type = consume_IVectorView<D, T>;
    };

    template <typename T>
    struct abi<wfc::IVector<T>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) = 0;
            virtual HRESULT __stdcall GetView(::IUnknown** view) = 0;
            virtual HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) = 0;
            virtual HRESULT __stdcall SetAt(uint32_t index, arg_in<T> item) = 0;
            virtual HRESULT __stdcall InsertAt(uint32_t index, arg_in<T> item) = 0;
            virtual HRESULT __stdcall RemoveAt(uint32_t index) = 0;
            virtual HRESULT __stdcall Append(arg_in<T> item) = 0;
            virtual HRESULT __stdcall RemoveAtEnd() = 0;
            virtual HRESULT __stdcall Clear() = 0;
            virtual HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) = 0;
            virtual HRESULT __stdcall ReplaceAll(uint32_t count, arg_out<T> value) = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IVector<T>>
    {
        template <typename D> using type = consume_IVector<D, T>;
    };

    template <typename T>
    struct abi<wfc::IObservableVector<T>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall add_VectorChanged(::IUnknown* handler, event_token*  token) = 0;
            virtual HRESULT __stdcall remove_VectorChanged(event_token token) = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IObservableVector<T>>
    {
        template <typename D> using type = consume_IObservableVector<D, T>;
    };

    template <typename K, typename V>
    struct abi<wfc::IKeyValuePair<K, V>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall get_Key(arg_out<K> key) = 0;
            virtual HRESULT __stdcall get_Value(arg_out<V> value) = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IKeyValuePair<K, V>>
    {
        template <typename D> using type = consume_IKeyValuePair<D, K, V>;
    };

    template <typename K, typename V>
    struct abi<wfc::IMapView<K, V>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) = 0;
            virtual HRESULT __stdcall HasKey(arg_in<K> key, bool* found) = 0;
            virtual HRESULT __stdcall Split(::IUnknown** firstPartition, ::IUnknown** secondPartition) = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IMapView<K, V>>
    {
        template <typename D> using type = consume_IMapView<D, K, V>;
    };

    template <typename K, typename V>
    struct abi<wfc::IMap<K, V>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) = 0;
            virtual HRESULT __stdcall HasKey(arg_in<K> key, bool* found) = 0;
            virtual HRESULT __stdcall GetView(::IUnknown** view) = 0;
            virtual HRESULT __stdcall Insert(arg_in<K> key, arg_in<V> value, bool* replaced) = 0;
            virtual HRESULT __stdcall Remove(arg_in<K> key) = 0;
            virtual HRESULT __stdcall Clear() = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IMap<K, V>>
    {
        template <typename D> using type = consume_IMap<D, K, V>;
    };

    template <typename K, typename V>
    struct abi<wfc::IObservableMap<K, V>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall add_MapChanged(::IUnknown* handler, event_token* token) = 0;
            virtual HRESULT __stdcall remove_MapChanged(event_token token) = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IObservableMap<K, V>>
    {
        template <typename D> using type = consume_IObservableMap<D, K, V>;
    };

    template <>
    struct guid<wfc::IVectorChangedEventArgs>
    {
        static constexpr GUID value{ 0x575933DF,0x34FE,0x4480,{ 0xAF,0x15,0x07,0x69,0x1F,0x3D,0x5D,0x9B } };
    };

    template <>
    struct name<wfc::IVectorChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Foundation.Collections.IVectorChangedEventArgs" };
    };

    template <>
    struct category<wfc::IVectorChangedEventArgs>
    {
        using type = interface_category;
    };

    template <typename K>
    struct guid<wfc::IMapChangedEventArgs<K>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IMapChangedEventArgs<K>>::value };
    };

    template <typename K>
    struct name<wfc::IMapChangedEventArgs<K>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IMapChangedEventArgs`1<" + make_constexpr_string(name_v<K>) + L">" };
    };

    template <typename K>
    struct category<wfc::IMapChangedEventArgs<K>>
    {
        using type = pinterface_category<K>;
        static constexpr GUID value{ 0x9939f4df, 0x050a, 0x4c0f,{ 0xaa, 0x60, 0x77, 0x07, 0x5f, 0x9c, 0x47, 0x77 } };
    };

    template <typename T>
    struct guid<wfc::VectorChangedEventHandler<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::VectorChangedEventHandler<T>>::value };
    };

    template <typename T>
    struct name<wfc::VectorChangedEventHandler<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.VectorChangedEventHandler`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::VectorChangedEventHandler<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x0c051752, 0x9fbf, 0x4c70,{ 0xaa, 0x0c, 0x0e, 0x4c, 0x82, 0xd9, 0xa7, 0x61 } };
    };

    template <typename K, typename V>
    struct guid<wfc::MapChangedEventHandler<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::MapChangedEventHandler<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::MapChangedEventHandler<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.MapChangedEventHandler`2<" + make_constexpr_string(name_v<K>) + L"," + make_constexpr_string(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::MapChangedEventHandler<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x179517f3, 0x94ee, 0x41f8,{ 0xbd, 0xdc, 0x76, 0x8a, 0x89, 0x55, 0x44, 0xf3 } };
    };

    template <typename T>
    struct guid<wfc::IIterator<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IIterator<T>>::value };
    };

    template <typename T>
    struct name<wfc::IIterator<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IIterator`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IIterator<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x6a79e863, 0x4300, 0x459a,{ 0x99, 0x66, 0xcb, 0xb6, 0x60, 0x96, 0x3e, 0xe1 } };
    };

    template <typename T>
    struct guid<wfc::IIterable<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IIterable<T>>::value };
    };

    template <typename T>
    struct name<wfc::IIterable<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IIterable`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IIterable<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0xfaa585ea, 0x6214, 0x4217,{ 0xaf, 0xda, 0x7f, 0x46, 0xde, 0x58, 0x69, 0xb3 } };
    };

    template <typename T>
    struct guid<wfc::IVectorView<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IVectorView<T>>::value };
    };

    template <typename T>
    struct name<wfc::IVectorView<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IVectorView`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IVectorView<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0xbbe1fa4c, 0xb0e3, 0x4583,{ 0xba, 0xef, 0x1f, 0x1b, 0x2e, 0x48, 0x3e, 0x56 } };
    };

    template <typename T>
    struct guid<wfc::IVector<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IVector<T>>::value };
    };

    template <typename T>
    struct name<wfc::IVector<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IVector`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IVector<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x913337e9, 0x11a1, 0x4345,{ 0xa3, 0xa2, 0x4e, 0x7f, 0x95, 0x6e, 0x22, 0x2d } };
    };

    template <typename T>
    struct guid<wfc::IObservableVector<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IObservableVector<T>>::value };
    };

    template <typename T>
    struct name<wfc::IObservableVector<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IObservableVector`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IObservableVector<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x5917eb53, 0x50b4, 0x4a0d,{ 0xb3, 0x09, 0x65, 0x86, 0x2b, 0x3f, 0x1d, 0xbc } };
    };

    template <typename K, typename V>
    struct guid<wfc::IKeyValuePair<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IKeyValuePair<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IKeyValuePair<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IKeyValuePair`2<" + make_constexpr_string(name_v<K>) + L"," + make_constexpr_string(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IKeyValuePair<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x02b51929, 0xc1c4, 0x4a7e,{ 0x89, 0x40, 0x03, 0x12, 0xb5, 0xc1, 0x85, 0x00 } };
    };

    template <typename K, typename V>
    struct guid<wfc::IMapView<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IMapView<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IMapView<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IMapView`2<" + make_constexpr_string(name_v<K>) + L"," + make_constexpr_string(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IMapView<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0xe480ce40, 0xa338, 0x4ada,{ 0xad, 0xcf, 0x27, 0x22, 0x72, 0xe4, 0x8c, 0xb9 } };
    };

    template <typename K, typename V>
    struct guid<wfc::IMap<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IMap<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IMap<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IMap`2<" + make_constexpr_string(name_v<K>) + L"," + make_constexpr_string(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IMap<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x3c2925fe, 0x8519, 0x45c1,{ 0xaa, 0x79, 0x19, 0x7b, 0x67, 0x18, 0xc1, 0xc1 } };
    };

    template <typename K, typename V>
    struct guid<wfc::IObservableMap<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IObservableMap<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IObservableMap<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IObservableMap`2<" + make_constexpr_string(name_v<K>) + L"," + make_constexpr_string(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IObservableMap<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x65df2bf5, 0xbf39, 0x41b5,{ 0xae, 0xbc, 0x5a, 0x9d, 0x86, 0x5e, 0x47, 0x2b } };
    };

    template <typename T>
    struct fast_iterator
    {
        using iterator_category = std::input_iterator_tag;
        using value_type = T;
        using difference_type = ptrdiff_t;
        using pointer = T*;
        using reference = T&;

        fast_iterator(T const& collection, uint32_t const index) noexcept :
        m_collection(&collection),
            m_index(index)
        {}

        fast_iterator& operator++() noexcept
        {
            ++m_index;
            return*this;
        }

        auto operator*() const
        {
            return m_collection->GetAt(m_index);
        }

        bool operator==(fast_iterator const& other) const noexcept
        {
            WINRT_ASSERT(m_collection == other.m_collection);
            return m_index == other.m_index;
        }

        bool operator!=(fast_iterator const& other) const noexcept
        {
            return !(*this == other);
        }

    private:

        T const* m_collection = nullptr;
        uint32_t m_index = 0;
    };

    template <typename T>
    class has_GetAt
    {
        template <typename U, typename = decltype(std::declval<U>().GetAt(0))> static constexpr bool get_value(int) { return true; }
        template <typename> static constexpr bool get_value(...) { return false; }

    public:

        static constexpr bool value = get_value<T>(0);
    };

    template <typename T, std::enable_if_t<!has_GetAt<T>::value>* = nullptr>
    auto begin(T const& collection) -> decltype(collection.First())
    {
        auto result = collection.First();

        if (!result.HasCurrent())
        {
            return {};
        }

        return result;
    }

    template <typename T, std::enable_if_t<!has_GetAt<T>::value>* = nullptr>
    auto end(T const& collection) -> decltype(collection.First())
    {
        collection;
        return {};
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value>* = nullptr>
    fast_iterator<T> begin(T const& collection) noexcept
    {
        return fast_iterator<T>(collection, 0);
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value>* = nullptr>
    fast_iterator<T> end(T const& collection)
    {
        return fast_iterator<T>(collection, collection.Size());
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IVectorChangedEventArgs :
        IInspectable,
        impl::consume_t<IVectorChangedEventArgs>
    {
        IVectorChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K>
    struct WINRT_EBO IMapChangedEventArgs :
        IInspectable,
        impl::consume_t<IMapChangedEventArgs<K>>
    {
        IMapChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO VectorChangedEventHandler : IUnknown
    {
        VectorChangedEventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        VectorChangedEventHandler(L handler) :
            VectorChangedEventHandler(impl::make_delegate<VectorChangedEventHandler<T>>(std::forward<L>(handler)))
        {}

        template <typename F> VectorChangedEventHandler(F* handler) :
            VectorChangedEventHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> VectorChangedEventHandler(O* object, M method) :
            VectorChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IObservableVector<T> const& sender, IVectorChangedEventArgs const& args) const
        {
            check_hresult((*(abi_t<VectorChangedEventHandler<T>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename K, typename V>
    struct WINRT_EBO MapChangedEventHandler : IUnknown
    {
        MapChangedEventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        MapChangedEventHandler(L handler) :
            MapChangedEventHandler(impl::make_delegate<MapChangedEventHandler<K, V>>(std::forward<L>(handler)))
        {}

        template <typename F> MapChangedEventHandler(F* handler) :
            MapChangedEventHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> MapChangedEventHandler(O* object, M method) :
            MapChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IObservableMap<K, V> const& sender, IMapChangedEventArgs<K> const& args) const
        {
            check_hresult((*(abi_t<MapChangedEventHandler<K, V>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename T>
    struct WINRT_EBO IIterator :
        IInspectable,
        impl::consume_t<IIterator<T>>
    {
        using iterator_category = std::input_iterator_tag;
        using value_type = T;
        using difference_type = ptrdiff_t;
        using pointer = T*;
        using reference = T&;

        IIterator(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO IIterable :
        IInspectable,
        impl::consume_t<IIterable<T>>
    {
        IIterable(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO IVectorView :
        IInspectable,
        impl::consume_t<IVectorView<T>>,
        impl::require<IVectorView<T>, IIterable<T>>
    {
        IVectorView(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO IVector :
        IInspectable,
        impl::consume_t<IVector<T>>,
        impl::require<IVector<T>, IIterable<T>>
    {
        IVector(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO IObservableVector :
        IInspectable,
        impl::consume_t<IObservableVector<T>>,
        impl::require<IObservableVector<T>, IVector<T>, IIterable<T>>
    {
        IObservableVector(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IKeyValuePair :
        IInspectable,
        impl::consume_t<IKeyValuePair<K, V>>
    {
        IKeyValuePair(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IMapView :
        IInspectable,
        impl::consume_t<IMapView<K, V>>,
        impl::require<IMapView<K, V>, IIterable<IKeyValuePair<K, V>>>
    {
        IMapView(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IMap :
        IInspectable,
        impl::consume_t<IMap<K, V>>,
        impl::require<IMap<K, V>, IIterable<IKeyValuePair<K, V>>>
    {
        IMap(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IObservableMap :
        IInspectable,
        impl::consume_t<IObservableMap<K, V>>,
        impl::require<IObservableMap<K, V>, IMap<K, V>, IIterable<IKeyValuePair<K, V>>>
    {
        IObservableMap(std::nullptr_t = nullptr) noexcept {}
    };
}

namespace winrt::impl
{
    template <typename D>
    struct produce<D, wfc::IVectorChangedEventArgs> : produce_base<D, wfc::IVectorChangedEventArgs>
    {
        HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().CollectionChange();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Index(uint32_t* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().Index();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IIterator<T>> : produce_base<D, wfc::IIterator<T>>
    {
        HRESULT __stdcall get_Current(arg_out<T> current) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *current = detach_abi(this->shim().Current());
                return S_OK;
            }
            catch (...)
            {
                clear_abi(current);
                return to_hresult();
            }
        }

        HRESULT __stdcall get_HasCurrent(bool* hasCurrent) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *hasCurrent = this->shim().HasCurrent();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall MoveNext(bool* hasCurrent) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *hasCurrent = this->shim().MoveNext();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetMany(uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany({ reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity });
                return S_OK;
            }
            catch (...)
            {
                clear_abi(value);
                *actual = 0;
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IIterable<T>> : produce_base<D, wfc::IIterable<T>>
    {
        HRESULT __stdcall First(arg_out<wfc::IIterator<T>> first) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *first = detach_abi(this->shim().First());
                return S_OK;
            }
            catch (...)
            {
                *first = nullptr;
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IKeyValuePair<K, V>> : produce_base<D, wfc::IKeyValuePair<K, V>>
    {
        HRESULT __stdcall get_Key(arg_out<K> key) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *key = detach_abi(this->shim().Key());
                return S_OK;
            }
            catch (...)
            {
                clear_abi(key);
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Value(arg_out<V> value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = detach_abi(this->shim().Value());
                return S_OK;
            }
            catch (...)
            {
                clear_abi(value);
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IVectorView<T>> : produce_base<D, wfc::IVectorView<T>>
    {
        HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *item = detach_abi(this->shim().GetAt(index));
                return S_OK;
            }
            catch (...)
            {
                clear_abi(item);
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(startIndex, { reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity });
                return S_OK;
            }
            catch (...)
            {
                clear_abi(value);
                *actual = 0;
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IVector<T>> : produce_base<D, wfc::IVector<T>>
    {
        HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *item = detach_abi(this->shim().GetAt(index));
                return S_OK;
            }
            catch (...)
            {
                clear_abi(item);
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetView(::IUnknown** view) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *view = detach_abi(this->shim().GetView());
                return S_OK;
            }
            catch (...)
            {
                *view = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall SetAt(uint32_t index, arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().SetAt(index, *reinterpret_cast<T const*>(&item));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall InsertAt(uint32_t index, arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().InsertAt(index, *reinterpret_cast<T const*>(&item));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall RemoveAt(uint32_t index) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().RemoveAt(index);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Append(arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Append(*reinterpret_cast<T const*>(&item));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall RemoveAtEnd() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().RemoveAtEnd();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Clear() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Clear();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(startIndex, { reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity });
                return S_OK;
            }
            catch (...)
            {
                clear_abi(value);
                *actual = 0;
                return to_hresult();
            }
        }

        HRESULT __stdcall ReplaceAll(uint32_t count, arg_out<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().ReplaceAll({ reinterpret_cast<T const*>(item), reinterpret_cast<T const*>(item) + count });
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IMapView<K, V>> : produce_base<D, wfc::IMapView<K, V>>
    {
        HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = detach_abi(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
                return S_OK;
            }
            catch (...)
            {
                clear_abi(value);
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall HasKey(arg_in<K> key, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().HasKey(*reinterpret_cast<K const*>(&key));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Split(arg_out<wfc::IMapView<K, V>> firstPartition, arg_out<wfc::IMapView<K, V>> secondPartition) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Split(*reinterpret_cast<wfc::IMapView<K, V>*>(firstPartition), *reinterpret_cast<wfc::IMapView<K, V>*>(secondPartition));
                return S_OK;
            }
            catch (...)
            {
                *firstPartition = nullptr;
                *secondPartition = nullptr;
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IMap<K, V>> : produce_base<D, wfc::IMap<K, V>>
    {
        HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = detach_abi(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
                return S_OK;
            }
            catch (...)
            {
                clear_abi(value);
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall HasKey(arg_in<K> key, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().HasKey(*reinterpret_cast<K const*>(&key));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetView(arg_out<wfc::IMapView<K, V>> view) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *view = detach_abi(this->shim().GetView());
                return S_OK;
            }
            catch (...)
            {
                *view = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall Insert(arg_in<K> key, arg_in<V> value, bool* replaced) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *replaced = this->shim().Insert(*reinterpret_cast<K const*>(&key), *reinterpret_cast<V const*>(&value));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Remove(arg_in<K> key) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Remove(*reinterpret_cast<K const*>(&key));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Clear() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Clear();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename K>
    struct produce<D, wfc::IMapChangedEventArgs<K>> : produce_base<D, wfc::IMapChangedEventArgs<K>>
    {
        HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().CollectionChange();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Key(arg_out<K> value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = detach_abi(this->shim().Key());
                return S_OK;
            }
            catch (...)
            {
                clear_abi(value);
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IObservableMap<K, V>> : produce_base<D, wfc::IObservableMap<K, V>>
    {
        HRESULT __stdcall add_MapChanged(arg_in<wfc::MapChangedEventHandler<K, V>> handler, event_token* token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *token = this->shim().MapChanged(*reinterpret_cast<wfc::MapChangedEventHandler<K, V> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall remove_MapChanged(event_token token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().MapChanged(token);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IObservableVector<T>> : produce_base<D, wfc::IObservableVector<T>>
    {
        HRESULT __stdcall add_VectorChanged(arg_in<wfc::VectorChangedEventHandler<T>> handler, event_token* token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *token = this->shim().VectorChanged(*reinterpret_cast<wfc::VectorChangedEventHandler<T> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall remove_VectorChanged(event_token token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().VectorChanged(token);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
}

namespace winrt::impl
{
    template <typename K, typename V>
    struct key_value_pair : implements<key_value_pair<K, V>, wfc::IKeyValuePair<K, V>>
    {
        explicit key_value_pair(std::pair<K const, V> const& value) : m_value(value)
        {}

        K Key() const
        {
            return m_value.first;
        }

        V Value() const
        {
            return m_value.second;
        }

    private:

        std::pair<K const, V> const m_value;
    };

    template <typename T>
    struct collection_traits
    {
        static T copy(T const& value)
        {
            return value;
        }

        template<typename InputIt, typename Size, typename OutputIt>
        static auto copy_n(InputIt first, Size count, OutputIt result)
        {
            return std::copy_n(first, count, result);
        }
    };

    template <typename K, typename V>
    struct collection_traits<wfc::IKeyValuePair<K, V>>
    {
        static auto copy(std::pair<K const, V> const& value)
        {
            return make<key_value_pair<K, V>>(value);
        }

        template<typename InputIt, typename Size, typename OutputIt>
        static auto copy_n(InputIt first, Size count, OutputIt result)
        {
            return std::transform(first, std::next(first, count), result, [](std::pair<K const, V> const& value)
            {
                return make<key_value_pair<K, V>>(value);
            });
        }
    };

    struct input_scope
    {
        void invalidate_scope() noexcept
        {
            m_invalid = true;
        }

        void check_scope() const
        {
            if (m_invalid)
            {
                throw hresult_illegal_method_call();
            }
        }

    private:

        bool m_invalid{};
    };
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_iterable : implements<input_iterable<T, Container>, non_agile, no_weak_ref, wfc::IIterable<T>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_iterable(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const m_values;

        struct iterator : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            explicit iterator(input_iterable<T, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<T>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<T>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_iterable<T, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename T, typename InputIt>
    struct scoped_input_iterable : input_scope, implements<scoped_input_iterable<T, InputIt>, non_agile, no_weak_ref, wfc::IIterable<T>>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_iterable(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        InputIt const m_begin;
        InputIt const m_end;

        struct iterator : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            void abi_enter() const
            {
                m_owner->check_scope();
            }

            explicit iterator(scoped_input_iterable<T, InputIt>* owner) noexcept :
            m_current(owner->m_begin),
                m_end(owner->m_end)
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<T>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<T>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<scoped_input_iterable<T, InputIt>> m_owner;
            InputIt m_current;
            InputIt const m_end;
        };
    };

    template <typename T, typename Container>
    auto make_input_iterable(Container&& values)
    {
        return make<input_iterable<T, Container>>(std::forward<Container>(values));
    }

    template <typename T, typename InputIt>
    auto make_scoped_input_iterable(InputIt first, InputIt last)
    {
        using interface_type = wfc::IIterable<T>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_iterable<T, InputIt>(first, last);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct iterable
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        iterable(std::nullptr_t) noexcept
        {
        }

        iterable(iterable const& values) = delete;
        iterable& operator=(iterable const& values) = delete;

        iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        iterable(Collection const& values) noexcept : m_owned(true)
        {
            m_pair.first = values;
        }

        template <typename Allocator>
        iterable(std::vector<value_type, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Allocator>
        iterable(std::vector<value_type, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        iterable(std::initializer_list<value_type> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        iterable(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_iterable<value_type>(first, last))
        {
        }

        ~iterable() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    struct iterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        iterable(std::nullptr_t) noexcept
        {
        }

        iterable(iterable const& values) = delete;
        iterable& operator=(iterable const& values) = delete;

        iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        iterable(Collection const& values) noexcept : m_owned(true)
        {
            m_pair.first = values;
        }

        template <typename Compare, typename Allocator>
        iterable(std::map<K, V, Compare, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Compare, typename Allocator>
        iterable(std::map<K, V, Compare, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        iterable(std::initializer_list<std::pair<K const, V>> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        iterable(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_iterable<value_type>(first, last))
        {
        }

        ~iterable() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(iterable<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }

    template <typename T>
    struct async_iterable
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        async_iterable(std::nullptr_t) noexcept
        {
        }

        async_iterable(async_iterable const& values) = delete;
        async_iterable& operator=(async_iterable const& values) = delete;

        async_iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_iterable(Collection const& values) noexcept : m_owned(true)
        {
            m_interface = values;
        }

        template <typename Allocator>
        async_iterable(std::vector<value_type, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        async_iterable(std::initializer_list<value_type> values) :
            m_interface(impl::make_input_iterable<value_type>(std::vector<value_type>(values)))
        {
        }

        ~async_iterable() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    struct async_iterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        async_iterable(std::nullptr_t) noexcept
        {
        }

        async_iterable(async_iterable const& values) = delete;
        async_iterable& operator=(async_iterable const& values) = delete;

        async_iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_iterable(Collection const& values) noexcept : m_owned(true)
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        async_iterable(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        async_iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        async_iterable(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_iterable<value_type>(std::map<K, V>(values)))
        {
        }

        ~async_iterable() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(async_iterable<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_vector_view : implements<input_vector_view<T, Container>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_vector_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        T GetAt(uint32_t const index) const
        {
            if (index >= Size())
            {
                throw hresult_out_of_bounds();
            }

            return m_values[index];
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            index = static_cast<uint32_t>(std::find(m_values.begin(), m_values.end(), value) - m_values.begin());
            return index < m_values.size();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            if (startIndex >= Size())
            {
                return 0;
            }

            uint32_t actual = Size() - startIndex;

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_values.begin() + startIndex, actual, values.begin());
            return actual;
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const m_values;

        struct iterator : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            explicit iterator(input_vector_view<T, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return*m_current;
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                std::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_vector_view<T, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename T, typename InputIt>
    struct scoped_input_vector_view : input_scope, implements<scoped_input_vector_view<T, InputIt>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_vector_view(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        T GetAt(uint32_t const index) const
        {
            if (index >= Size())
            {
                throw hresult_out_of_bounds();
            }

            return*std::next(m_begin, index);
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(std::distance(m_begin, m_end));
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            index = static_cast<uint32_t>(std::find(m_begin, m_end, value) - m_begin);
            return index < Size();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            if (startIndex >= Size())
            {
                return 0;
            }

            uint32_t actual = Size() - startIndex;

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_begin + startIndex, actual, values.begin());
            return actual;
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        InputIt const m_begin;
        InputIt const m_end;

        struct iterator : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            void abi_enter() const
            {
                m_owner->check_scope();
            }

            explicit iterator(scoped_input_vector_view<T, InputIt>* owner) noexcept :
            m_current(owner->m_begin),
                m_end(owner->m_end)
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return*m_current;
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                std::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<scoped_input_vector_view<T, InputIt>> m_owner;
            InputIt m_current;
            InputIt const m_end;
        };
    };

    template <typename T, typename InputIt>
    auto make_scoped_input_vector_view(InputIt first, InputIt last)
    {
        using interface_type = wfc::IVectorView<T>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_vector_view<T, InputIt>(first, last);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct vector_view
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVectorView<value_type>;

        vector_view(std::nullptr_t) noexcept
        {
        }

        vector_view(vector_view const& values) = delete;
        vector_view& operator=(vector_view const& values) = delete;

        vector_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        vector_view(Collection const& values) noexcept : m_owned(true)
        {
            m_pair.first = values;
        }

        template <typename Allocator>
        vector_view(std::vector<value_type, Allocator>&& values) : m_pair(make<impl::input_vector_view<value_type, std::vector<value_type, Allocator>>>(std::move(values)), nullptr)
        {
        }

        template <typename Allocator>
        vector_view(std::vector<value_type, Allocator> const& values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
        {
        }

        vector_view(std::initializer_list<value_type> values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        vector_view(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_vector_view<value_type>(first, last))
        {
        }

        ~vector_view() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(vector_view<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }

    template <typename T>
    struct async_vector_view
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVectorView<value_type>;

        async_vector_view(std::nullptr_t) noexcept
        {
        }

        async_vector_view(async_vector_view const& values) = delete;
        async_vector_view& operator=(async_vector_view const& values) = delete;

        async_vector_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_vector_view(Collection const& values) noexcept : m_owned(true)
        {
            m_interface = values;
        }

        template <typename Allocator>
        async_vector_view(std::vector<value_type, Allocator>&& values) :
            m_interface(make<impl::input_vector_view<value_type, std::vector<value_type, Allocator>>>(std::move(values)))
        {
        }

        async_vector_view(std::initializer_list<value_type> values) :
            m_interface(make<impl::input_vector_view<value_type, std::vector<value_type>>>(values))
        {
        }

        ~async_vector_view() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(async_vector_view<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct input_map_view : implements<input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        using value_type = wfc::IKeyValuePair<K, V>;
        using interface_type = wfc::IMapView<K, V>;

        explicit input_map_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        V Lookup(K const& key) const
        {
            auto pair = m_values.find(key);

            if (pair == m_values.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool HasKey(K const& key) const noexcept
        {
            return m_values.find(key) != m_values.end();
        }

        void Split(interface_type& first, interface_type& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }

        wfc::IIterator<value_type> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const m_values;

        struct iterator : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<value_type>>
        {
            explicit iterator(input_map_view<K, V, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            value_type Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<value_type>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<value_type> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<value_type>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_map_view<K, V, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename K, typename V, typename Container>
    struct scoped_input_map_view : input_scope, implements<scoped_input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>
    {
        using value_type = wfc::IKeyValuePair<K, V>;
        using interface_type = wfc::IMapView<K, V>;

        void abi_enter() const
        {
            check_scope();
        }

        explicit scoped_input_map_view(Container const& values) : m_values(values)
        {
        }

        V Lookup(K const& key) const
        {
            auto pair = m_values.find(key);

            if (pair == m_values.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool HasKey(K const& key) const noexcept
        {
            return m_values.find(key) != m_values.end();
        }

        void Split(interface_type& first, interface_type& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }

        wfc::IIterator<value_type> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const& m_values;

        struct iterator : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<value_type>>
        {
            void abi_enter() const
            {
                m_owner->check_scope();
            }

            explicit iterator(scoped_input_map_view<K, V, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            value_type Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<value_type>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<value_type> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<value_type>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<scoped_input_map_view<K, V, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename K, typename V, typename Container>
    auto make_input_map_view(Container&& values)
    {
        return make<input_map_view<K, V, Container>>(std::forward<Container>(values));
    }

    template <typename K, typename V, typename Container>
    auto make_scoped_input_map_view(Container const& values)
    {
        using interface_type = wfc::IMapView<K, V>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_map_view<K, V, Container>(values);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename K, typename V>
    struct map_view
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMapView<K, V>;

        map_view(std::nullptr_t) noexcept
        {
        }

        map_view(map_view const& values) = delete;
        map_view& operator=(map_view const& values) = delete;

        map_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        map_view(Collection const& values) noexcept : m_owned(true)
        {
            m_pair.first = values;
        }

        template <typename Compare, typename Allocator>
        map_view(std::map<K, V, Compare, Allocator>&& values) : m_pair(impl::make_input_map_view<K, V>(std::move(values)), nullptr)
        {
        }

        template <typename Compare, typename Allocator>
        map_view(std::map<K, V, Compare, Allocator> const& values) : m_pair(impl::make_scoped_input_map_view<K, V>(values))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) : m_pair(impl::make_input_map_view<K, V>(std::move(values)), nullptr)
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator> const& values) : m_pair(impl::make_scoped_input_map_view<K, V>(values))
        {
        }

        map_view(std::initializer_list<std::pair<K const, V>> values) : m_pair(impl::make_input_map_view<K, V>(std::map<K, V>(values)), nullptr)
        {
        }

        ~map_view() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(map_view<K, V> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }

    template <typename K, typename V>
    struct async_map_view
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMapView<K, V>;

        async_map_view(std::nullptr_t) noexcept
        {
        }

        async_map_view(async_map_view const& values) = delete;
        async_map_view& operator=(async_map_view const& values) = delete;

        async_map_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_map_view(Collection const& values) noexcept : m_owned(true)
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        async_map_view(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_map_view<K, V>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        async_map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_map_view<K, V>(std::move(values)))
        {
        }

        async_map_view(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_map_view<K, V>(std::map<K, V>(values)))
        {
        }

        ~async_map_view() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(async_map_view<K, V> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_vector : implements<input_vector<T, Container>, wfc::IVector<T>, wfc::IVectorView<T>, wfc::IIterable<T>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        T GetAt(uint32_t const index) const
        {
            if (index >= m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            return m_values[index];
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        wfc::IVectorView<T> GetView()
        {
            return*this;
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            index = static_cast<uint32_t>(std::find(m_values.begin(), m_values.end(), value) - m_values.begin());
            return index < m_values.size();
        }

        void SetAt(uint32_t const index, T const& value)
        {
            if (index >= m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values[index] = value;
        }

        void InsertAt(uint32_t const index, T const& value)
        {
            if (index > m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values.insert(m_values.begin() + index, value);
        }

        void RemoveAt(uint32_t const index)
        {
            if (index >= m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values.erase(m_values.begin() + index);
        }

        void Append(T const& value)
        {
            ++m_version;
            m_values.push_back(value);
        }

        void RemoveAtEnd()
        {
            if (m_values.empty())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values.pop_back();
        }

        void Clear() noexcept
        {
            ++m_version;
            m_values.clear();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            if (startIndex >= m_values.size())
            {
                return 0;
            }

            uint32_t actual = static_cast<uint32_t>(m_values.size() - startIndex);

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_values.begin() + startIndex, actual, values.begin());
            return actual;
        }

        void ReplaceAll(array_view<T const> value)
        {
            ++m_version;
            m_values.assign(value.begin(), value.end());
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        Container m_values;
        uint32_t m_version{};

        struct iterator : implements<iterator, wfc::IIterator<T>>
        {
            explicit iterator(input_vector<T, Container>* owner) noexcept :
            m_version(owner->m_version),
                m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            void abi_enter() const
            {
                if (m_version != m_owner->m_version)
                {
                    throw hresult_changed_state();
                }
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return*m_current;
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                std::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_vector<T, Container>> m_owner;
            uint32_t const m_version;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct vector
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVector<value_type>;

        vector(std::nullptr_t) noexcept
        {
        }

        vector(vector const& values) = delete;
        vector& operator=(vector const& values) = delete;

        vector(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        vector(Collection const& values) noexcept : m_owned(true)
        {
            m_interface = values;
        }

        template <typename Allocator>
        vector(std::vector<value_type, Allocator>&& values) :
            m_interface(make<impl::input_vector<value_type, std::vector<value_type, Allocator>>>(std::move(values)))
        {
        }

        vector(std::initializer_list<value_type> values) :
            m_interface(make<impl::input_vector<value_type, std::vector<value_type>>>(values))
        {
        }

        ~vector() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(vector<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct input_map : implements<input_map<K, V, Container>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        using value_type = wfc::IKeyValuePair<K, V>;

        explicit input_map(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        V Lookup(K const& key) const
        {
            auto pair = m_values.find(key);

            if (pair == m_values.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool HasKey(K const& key) const noexcept
        {
            return m_values.find(key) != m_values.end();
        }

        wfc::IMapView<K, V> GetView() const
        {
            return*this;
        }

        bool Insert(K const& key, V const& value)
        {
            ++m_version;
            auto pair = m_values.insert_or_assign(key, value);
            return !pair.second;

        }

        void Remove(K const& key)
        {
            ++m_version;
            m_values.erase(key);
        }

        void Clear() noexcept
        {
            ++m_version;
            m_values.clear();
        }

        void Split(wfc::IMapView<K, V>& first, wfc::IMapView<K, V>& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }

        wfc::IIterator<value_type> First()
        {
            return make<iterator>(this);
        }

    private:

        Container m_values;
        uint32_t m_version{};

        struct iterator : implements<iterator, wfc::IIterator<value_type>>
        {
            explicit iterator(input_map<K, V, Container>* owner) noexcept :
            m_version(owner->m_version),
                m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            void abi_enter() const
            {
                if (m_version != m_owner->m_version)
                {
                    throw hresult_changed_state();
                }
            }

            value_type Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<value_type>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<value_type> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<value_type>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_map<K, V, Container>> m_owner;
            uint32_t const m_version;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename K, typename V, typename Container>
    auto make_input_map(Container&& values)
    {
        return make<input_map<K, V, Container>>(std::forward<Container>(values));
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename K, typename V>
    struct map
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMap<K, V>;

        map(std::nullptr_t) noexcept
        {
        }

        map(map const& values) = delete;
        map& operator=(map const& values) = delete;

        map(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        map(Collection const& values) noexcept : m_owned(true)
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        map(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_map<K, V>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_map<K, V>(std::move(values)))
        {
        }

        map(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_map<K, V>(std::map<K, V>(values)))
        {
        }

        ~map() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(map<K, V> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IVector<T> single_threaded_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::input_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map()
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct IReference;
}

namespace winrt::impl
{
    template <typename T>
    struct abi<Windows::Foundation::IReference<T>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall get_Value(arg_out<T> value) = 0;
        };
    };

    template <typename D, typename T>
    struct consume_IReference
    {
        T Value() const
        {
            T result{};
            check_hresult((*(abi_t<Windows::Foundation::IReference<T>>**)&static_cast<const Windows::Foundation::IReference<T>&>(static_cast<const D&>(*this)))->get_Value(put_abi(result)));
            return result;
        }
    };

    template <typename T>
    struct consume<Windows::Foundation::IReference<T>>
    {
        template <typename D> using type = consume_IReference<D, T>;
    };

    template <typename T>
    struct guid<Windows::Foundation::IReference<T>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IReference<T>>::value };
    };

    template <typename T> 
    struct name<Windows::Foundation::IReference<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.IReference`1<" + make_constexpr_string(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<Windows::Foundation::IReference<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x61c17706, 0x2d65, 0x11e0,{ 0x9a, 0xe8, 0xd4, 0x85, 0x64, 0x01, 0x54, 0x72 } };
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    using optional = Windows::Foundation::IReference<T>;
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Point
    {
        float X;
        float Y;

        Point() noexcept = default;

        Point(float X, float Y) noexcept
            : X(X), Y(Y)
        {}

        Point(Numerics::float2 const& value) noexcept
            : X(value.x), Y(value.y)
        {}

        operator Numerics::float2() const noexcept
        {
            return { X, Y };
        }
    };

    struct Size
    {
        float Width;
        float Height;

        Size() noexcept = default;

        Size(float Width, float Height) noexcept
            : Width(Width), Height(Height)
        {}

        Size(Numerics::float2 const& value) noexcept
            : Width(value.x), Height(value.y)
        {}

        operator Numerics::float2() const noexcept
        {
            return { Width, Height };
        }
    };

    struct Rect
    {
        float X;
        float Y;
        float Width;
        float Height;
    };
}

namespace winrt::impl
{
    template <> struct name<Windows::Foundation::Point>
    {
        static constexpr auto & value{ L"Windows.Foundation.Point" };
    };

    template <> struct category<Windows::Foundation::Point>
    {
        using type = struct_category<float, float>;
    };

    template <> struct name<Windows::Foundation::Size>
    {
        static constexpr auto & value{ L"Windows.Foundation.Size" };
    };

    template <> struct category<Windows::Foundation::Size>
    {
        using type = struct_category<float, float>;
    };
    
    template <> struct name<Windows::Foundation::Rect>
    {
        static constexpr auto & value{ L"Windows.Foundation.Rect" };
    };

    template <> struct category<Windows::Foundation::Rect>
    {
        using type = struct_category<float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float2>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Vector2" };
    };

    template <> struct category<Windows::Foundation::Numerics::float2>
    {
        using type = struct_category<float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float3>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Vector3" };
    };

    template <> struct category<Windows::Foundation::Numerics::float3>
    {
        using type = struct_category<float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float4>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Vector4" };
    };

    template <> struct category<Windows::Foundation::Numerics::float4>
    {
        using type = struct_category<float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float3x2>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Matrix3x2" };
    };

    template <> struct category<Windows::Foundation::Numerics::float3x2>
    {
        using type = struct_category<float, float, float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float4x4>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Matrix4x4" };
    };

    template <> struct category<Windows::Foundation::Numerics::float4x4>
    {
        using type = struct_category<
            float, float, float, float,
            float, float, float, float,
            float, float, float, float,
            float, float, float, float
        >;
    };

    template <> struct name<Windows::Foundation::Numerics::quaternion>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Quaternion" };
    };

    template <> struct category<Windows::Foundation::Numerics::quaternion>
    {
        using type = struct_category<float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::plane>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Plane" };
    };

    template <> struct category<Windows::Foundation::Numerics::plane>
    {
        using type = struct_category<Windows::Foundation::Numerics::float3, float>;
    };
}

namespace winrt::impl
{
    using filetime_period = std::ratio_multiply<std::ratio<100>, std::nano>;
}

WINRT_EXPORT namespace winrt
{
    struct clock;

    namespace Windows::Foundation
    {
        using TimeSpan = std::chrono::duration<int64_t, impl::filetime_period>;
        using DateTime = std::chrono::time_point<clock, TimeSpan>;
    }
}

namespace winrt::impl
{
    template <> struct name<Windows::Foundation::TimeSpan>
    {
        static constexpr auto & value{ L"Windows.Foundation.TimeSpan" };
    };

    template <> struct category<Windows::Foundation::TimeSpan>
    {
        using type = struct_category<int64_t>;
    };

    template <> struct name<Windows::Foundation::DateTime>
    {
        static constexpr auto & value{ L"Windows.Foundation.DateTime" };
    };

    template <> struct category<Windows::Foundation::DateTime>
    {
        using type = struct_category<int64_t>;
    };
}

WINRT_EXPORT namespace winrt
{
    struct clock
    {
        using rep = int64_t;
        using period = impl::filetime_period;
        using duration = Windows::Foundation::TimeSpan;
        using time_point = Windows::Foundation::DateTime;

        static constexpr bool is_steady = false;

        static time_point now() noexcept
        {
            FILETIME ft;
            ::GetSystemTimePreciseAsFileTime(&ft);
            return from_FILETIME(ft);
        }

        static time_t to_time_t(time_point const& time) noexcept
        {
            return std::chrono::duration_cast<time_t_duration>(time - time_t_epoch).count();
        }

        static time_point from_time_t(time_t time) noexcept
        {
            return time_t_epoch + time_t_duration{ time };
        }

        // FILETIME is identical to WinRT's DateTime, save for the fact that it's unsigned.
        // Detect mismatch, but this only matters for dates before 27000 BC or after 29000 AD.
        static FILETIME to_FILETIME(time_point const& time) noexcept
        {
            ULARGE_INTEGER ul;
            ul.QuadPart = time.time_since_epoch().count();
            WINRT_ASSERT(static_cast<int32_t>(ul.HighPart) >= 0);
            return FILETIME{ ul.LowPart, ul.HighPart };
        }

        static time_point from_FILETIME(FILETIME const& time) noexcept
        {
            ULARGE_INTEGER ul{ { time.dwLowDateTime, time.dwHighDateTime } };
            WINRT_ASSERT(static_cast<int32_t>(ul.HighPart) >= 0);
            return time_point{ duration{ ul.QuadPart } };
        }

    private:

        // Define 00:00:00, Jan 1 1970 UTC in FILETIME units.
        static constexpr time_point time_t_epoch{ duration{ 0x019DB1DED53E8000 } };
        using time_t_duration = std::chrono::duration<time_t>;
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class AsyncStatus
    {
        Started,
        Completed,
        Canceled,
        Error,
    };

    struct AsyncActionCompletedHandler;
    template <typename TResult> struct AsyncOperationCompletedHandler;
    template <typename TProgress> struct AsyncActionProgressHandler;
    template <typename TProgress> struct AsyncActionWithProgressCompletedHandler;
    template <typename TResult, typename TProgress> struct AsyncOperationProgressHandler;
    template <typename TResult, typename TProgress> struct AsyncOperationWithProgressCompletedHandler;

    struct IAsyncInfo;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    template <typename TProgress> struct IAsyncActionWithProgress;
    template <typename TResult, typename TProgress> struct IAsyncOperationWithProgress;
}

namespace winrt::impl
{
    inline bool is_sta() noexcept
    {
        APTTYPE aptType;
        APTTYPEQUALIFIER aptTypeQualifier;
        return (S_OK == CoGetApartmentType(&aptType, &aptTypeQualifier)) && ((aptType == APTTYPE_STA) || (aptType == APTTYPE_MAINSTA));
    }

    template <typename Async>
    void blocking_suspend(Async const& async)
    {
        WINRT_ASSERT(!is_sta());

        if (async.Status() == Windows::Foundation::AsyncStatus::Completed)
        {
            return;
        }

        lock x;
        condition_variable cv;
        bool completed = false;

        async.Completed([&](Async const&, Windows::Foundation::AsyncStatus)
        {
            lock_guard const guard(x);
            completed = true;
            cv.wake_one();
        });

        lock_guard const guard(x);
        cv.wait_while(x, [&] { return !completed; });
    }

    template <typename D>
    struct consume_IAsyncInfo
    {
        uint32_t Id() const;
        Windows::Foundation::AsyncStatus Status() const;
        HRESULT ErrorCode() const;
        void Cancel() const;
        void Close() const;
    };


    template <typename D>
    struct consume_IAsyncAction
    {
        void Completed(Windows::Foundation::AsyncActionCompletedHandler const& handler) const;
        Windows::Foundation::AsyncActionCompletedHandler Completed() const;
        void GetResults() const;
        void get() const;
    };

    template <typename D, typename TResult>
    struct consume_IAsyncOperation
    {
        void Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const;
        Windows::Foundation::AsyncOperationCompletedHandler<TResult> Completed() const;
        TResult GetResults() const;
        TResult get() const;
    };

    template <typename D, typename TProgress>
    struct consume_IAsyncActionWithProgress
    {
        void Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const;
        Windows::Foundation::AsyncActionProgressHandler<TProgress> Progress() const;
        void Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const;
        Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> Completed() const;
        void GetResults() const;
        void get() const;
    };

    template <typename D, typename TResult, typename TProgress>
    struct consume_IAsyncOperationWithProgress
    {
        void Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const;
        Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> Progress() const;
        void Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const;
        Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> Completed() const;
        TResult GetResults() const;
        TResult get() const;
    };

    template <>
    struct abi<Windows::Foundation::AsyncActionCompletedHandler>
    {
        struct type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* asyncInfo, Windows::Foundation::AsyncStatus asyncStatus) = 0;
        };
    };

    template <typename TResult>
    struct abi<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        struct type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* asyncInfo, Windows::Foundation::AsyncStatus status) = 0;
        };
    };

    template <typename TProgress>
    struct abi<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        struct type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* asyncInfo, arg_in<TProgress> progressInfo) = 0;
        };
    };

    template <typename TProgress>
    struct abi<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        struct type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* asyncInfo, Windows::Foundation::AsyncStatus status) = 0;
        };
    };

    template <typename TResult, typename TProgress>
    struct abi<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        struct type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* asyncInfo, arg_in<TProgress> progressInfo) = 0;
        };
    };

    template <typename TResult, typename TProgress>
    struct abi<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        struct type : ::IUnknown
        {
            virtual HRESULT __stdcall Invoke(::IUnknown* asyncInfo, Windows::Foundation::AsyncStatus status) = 0;
        };
    };

    template <>
    struct abi<Windows::Foundation::IAsyncInfo>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall get_Id(uint32_t* id) = 0;
            virtual HRESULT __stdcall get_Status(Windows::Foundation::AsyncStatus* status) = 0;
            virtual HRESULT __stdcall get_ErrorCode(HRESULT* errorCode) = 0;
            virtual HRESULT __stdcall Cancel() = 0;
            virtual HRESULT __stdcall Close() = 0;
        };
    };

    template <>
    struct consume<Windows::Foundation::IAsyncInfo>
    {
        template <typename D> using type = consume_IAsyncInfo<D>;
    };

    template <>
    struct abi<Windows::Foundation::IAsyncAction>
    {
        struct type : ::IInspectable
        {
            virtual HRESULT __stdcall put_Completed(::IUnknown* handler) = 0;
            virtual HRESULT __stdcall get_Completed(::IUnknown** handler) = 0;
            virtual HRESULT __stdcall GetResults() = 0;
        };
    };

    template <>
    struct consume<Windows::Foundation::IAsyncAction>
    {
        template <typename D> using type = consume_IAsyncAction<D>;
    };

    template <>
    struct delegate<Windows::Foundation::AsyncActionCompletedHandler>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::AsyncActionCompletedHandler, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionCompletedHandler, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* asyncInfo, Windows::Foundation::AsyncStatus asyncStatus) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncAction const*>(&asyncInfo), asyncStatus);
                    return S_OK;
                }
                catch (...)
                {
                    return to_hresult();
                }
            }
        };
    };

    template <typename TResult>
    struct delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, Windows::Foundation::AsyncStatus args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperation<TResult> const*>(&sender), args);
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TProgress>
    struct delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, arg_in<TProgress> args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const*>(&sender), *reinterpret_cast<TProgress const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TProgress>
    struct delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, Windows::Foundation::AsyncStatus args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const*>(&sender), args);
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult, typename TProgress>
    struct delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, arg_in<TProgress> args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const*>(&sender), *reinterpret_cast<TProgress const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult, typename TProgress>
    struct delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        template <typename H>
        struct type : implements_delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(::IUnknown* sender, Windows::Foundation::AsyncStatus args) noexcept override
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const*>(&sender), args);
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult>
    struct abi<Windows::Foundation::IAsyncOperation<TResult>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall put_Completed(::IUnknown* handler) = 0;
            virtual HRESULT __stdcall get_Completed(::IUnknown** handler) = 0;
            virtual HRESULT __stdcall GetResults(arg_out<TResult> results) = 0;
        };
    };

    template <typename TResult>
    struct consume<Windows::Foundation::IAsyncOperation<TResult>>
    {
        template <typename D> using type = consume_IAsyncOperation<D, TResult>;
    };

    template <typename TProgress>
    struct abi<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall put_Progress(::IUnknown* handler) = 0;
            virtual HRESULT __stdcall get_Progress(::IUnknown** handler) = 0;
            virtual HRESULT __stdcall put_Completed(::IUnknown* handler) = 0;
            virtual HRESULT __stdcall get_Completed(::IUnknown** handler) = 0;
            virtual HRESULT __stdcall GetResults() = 0;
        };
    };

    template <typename TProgress>
    struct consume<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        template <typename D> using type = consume_IAsyncActionWithProgress<D, TProgress>;
    };

    template <typename TResult, typename TProgress>
    struct abi<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        struct __declspec(novtable) type : ::IInspectable
        {
            virtual HRESULT __stdcall put_Progress(::IUnknown* handler) = 0;
            virtual HRESULT __stdcall get_Progress(::IUnknown** handler) = 0;
            virtual HRESULT __stdcall put_Completed(::IUnknown* handler) = 0;
            virtual HRESULT __stdcall get_Completed(::IUnknown** handler) = 0;
            virtual HRESULT __stdcall GetResults(arg_out<TResult> results) = 0;
        };
    };

    template <typename TResult, typename TProgress>
    struct consume<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        template <typename D> using type = consume_IAsyncOperationWithProgress<D, TResult, TProgress>;
    };

    template <>
    struct guid<Windows::Foundation::AsyncActionCompletedHandler>
    {
        static constexpr GUID value{ 0xA4ED5C81,0x76C9,0x40BD,{ 0x8B,0xE6,0xB1,0xD9,0x0F,0xB2,0x0A,0xE7 } };
    };
    
    template <> 
    struct name<Windows::Foundation::AsyncActionCompletedHandler>
    {
        static constexpr auto & value{ L"Windows.Foundation.AsyncActionCompletedHandler" };
    };

    template <>
    struct category<Windows::Foundation::AsyncActionCompletedHandler>
    {
        using type = delegate_category;
    };

    template <typename TResult>
    struct guid<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>::value };
    };

    template <typename TResult>
    struct name<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncOperationCompletedHandler`1<" + make_constexpr_string(name_v<TResult>) + L">" };
    };

    template <typename TResult>
    struct category<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        using type = pinterface_category<TResult>;
        static constexpr GUID value{ 0xfcdcf02c, 0xe5d8, 0x4478,{ 0x91, 0x5a, 0x4d, 0x90, 0xb7, 0x4b, 0x83, 0xa5 } };
    };

    template <typename TProgress>
    struct guid<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>::value };
    };

    template <typename TProgress>
    struct name<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<" + make_constexpr_string(name_v<TProgress>) + L">" };
    };

    template <typename TProgress>
    struct category<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr GUID value{ 0x9c029f91, 0xcc84, 0x44fd,{ 0xac, 0x26, 0x0a, 0x6c, 0x4e, 0x55, 0x52, 0x81 } };
    };

    template <typename TProgress>
    struct guid<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncActionProgressHandler<TProgress>>::value };
    };

    template <typename TProgress>
    struct name<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncActionProgressHandler`1<" + make_constexpr_string(name_v<TProgress>) + L">" };
    };

    template <typename TProgress>
    struct category<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr GUID value{ 0x6d844858, 0x0cff, 0x4590,{ 0xae, 0x89, 0x95, 0xa5, 0xa5, 0xc8, 0xb4, 0xb8 } };
    };

    template <typename TResult, typename TProgress>
    struct guid<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>::value };
    };

    template <typename TResult, typename TProgress>
    struct name<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncOperationProgressHandler`2<" + make_constexpr_string(name_v<TResult>) + L"," + make_constexpr_string(name_v<TProgress>) + L">" };
    };

    template <typename TResult, typename TProgress>
    struct category<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr GUID value{ 0x55690902, 0x0aab, 0x421a,{ 0x87, 0x78, 0xf8, 0xce, 0x50, 0x26, 0xd7, 0x58 } };
    };

    template <typename TResult, typename TProgress>
    struct guid<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>::value };
    };

    template <typename TResult, typename TProgress>
    struct name<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<" + make_constexpr_string(name_v<TResult>) + L"," + make_constexpr_string(name_v<TProgress>) + L">" };
    };

    template <typename TResult, typename TProgress>
    struct category<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr GUID value{ 0xe85df41d, 0x6aa7, 0x46e3,{ 0xa8, 0xe2, 0xf0, 0x09, 0xd8, 0x40, 0xc6, 0x27 } };
    };

    template <>
    struct guid<Windows::Foundation::IAsyncInfo>
    {
        static constexpr GUID value{ 0x00000036,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <>
    struct name<Windows::Foundation::IAsyncInfo>
    {
        static constexpr auto & value{ L"Windows.Foundation.IAsyncInfo" };
    };

    template <>
    struct category<Windows::Foundation::IAsyncInfo>
    {
        using type = interface_category;
    };

    template <>
    struct guid<Windows::Foundation::IAsyncAction>
    {
        static constexpr GUID value{ 0x5A648006,0x843A,0x4DA9,{ 0x86,0x5B,0x9D,0x26,0xE5,0xDF,0xAD,0x7B } };
    };

    template <>
    struct name<Windows::Foundation::IAsyncAction>
    {
        static constexpr auto & value{ L"Windows.Foundation.IAsyncAction" };
    };

    template <>
    struct category<Windows::Foundation::IAsyncAction>
    {
        using type = interface_category;
    };

    template <typename TResult>
    struct guid<Windows::Foundation::IAsyncOperation<TResult>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IAsyncOperation<TResult>>::value };
    };

    template <typename TResult>
    struct name<Windows::Foundation::IAsyncOperation<TResult>>
    {
        static constexpr auto value{ L"Windows.Foundation.IAsyncOperation`1<" + make_constexpr_string(name_v<TResult>) + L">" };
    };

    template <typename TResult>
    struct category<Windows::Foundation::IAsyncOperation<TResult>>
    {
        using type = pinterface_category<TResult>;
        static constexpr GUID value{ 0x9fc2b0bb, 0xe446, 0x44e2,{ 0xaa, 0x61, 0x9c, 0xab, 0x8f, 0x63, 0x6a, 0xf2 } };
    };

    template <typename TProgress>
    struct guid<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IAsyncActionWithProgress<TProgress>>::value };
    };

    template <typename TProgress>
    struct name<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.IAsyncActionWithProgress`1<" + make_constexpr_string(name_v<TProgress>) + L">" };
    };

    template <typename TProgress>
    struct category<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr GUID value{ 0x1f6db258, 0xe803, 0x48a1,{ 0x95, 0x46, 0xeb, 0x73, 0x53, 0x39, 0x88, 0x84 } };
    };

    template <typename TResult, typename TProgress>
    struct guid<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>::value };
    };

    template <typename TResult, typename TProgress>
    struct name<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.IAsyncOperationWithProgress`2<" + make_constexpr_string(name_v<TResult>) + L"," + make_constexpr_string(name_v<TProgress>) + L">" };
    };

    template <typename TResult, typename TProgress>
    struct category<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr GUID value{ 0xb5d036d7, 0xe297, 0x498f,{ 0xba, 0x60, 0x02, 0x89, 0xe7, 0x6e, 0x23, 0xdd } };
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncInfo :
        IInspectable,
        impl::consume_t<IAsyncInfo>
    {
        IAsyncInfo(std::nullptr_t = nullptr) noexcept {}
    };

    struct IAsyncAction :
        IInspectable,
        impl::consume_t<IAsyncAction>,
        impl::require<IAsyncAction, IAsyncInfo>
    {
        IAsyncAction(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename TProgress>
    struct WINRT_EBO IAsyncActionWithProgress :
        IInspectable,
        impl::consume_t<IAsyncActionWithProgress<TProgress>>,
        impl::require<IAsyncActionWithProgress<TProgress>, IAsyncInfo>
    {
        IAsyncActionWithProgress(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename TResult>
    struct WINRT_EBO IAsyncOperation :
        IInspectable,
        impl::consume_t<IAsyncOperation<TResult>>,
        impl::require<IAsyncOperation<TResult>, IAsyncInfo>
    {
        IAsyncOperation(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename TResult, typename TProgress>
    struct WINRT_EBO IAsyncOperationWithProgress :
        IInspectable,
        impl::consume_t<IAsyncOperationWithProgress<TResult, TProgress>>,
        impl::require<IAsyncOperationWithProgress<TResult, TProgress>, IAsyncInfo>
    {
        IAsyncOperationWithProgress(std::nullptr_t = nullptr) noexcept {}
    };

    struct AsyncActionCompletedHandler : IUnknown
    {
        AsyncActionCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncActionCompletedHandler(L handler) :
            AsyncActionCompletedHandler(impl::make_delegate<AsyncActionCompletedHandler>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncActionCompletedHandler(F* handler) :
            AsyncActionCompletedHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> AsyncActionCompletedHandler(O* object, M method) :
            AsyncActionCompletedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IAsyncAction const& sender, AsyncStatus args) const
        {
            check_hresult((*(abi_t<AsyncActionCompletedHandler>**)this)->Invoke(get_abi(sender), args));
        }
    };

    template <typename TProgress>
    struct WINRT_EBO AsyncActionProgressHandler : IUnknown
    {
        AsyncActionProgressHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncActionProgressHandler(L handler) :
            AsyncActionProgressHandler(impl::make_delegate<AsyncActionProgressHandler<TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncActionProgressHandler(F* handler) :
            AsyncActionProgressHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> AsyncActionProgressHandler(O* object, M method) :
            AsyncActionProgressHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IAsyncActionWithProgress<TProgress> const& sender, TProgress const& args) const
        {
            check_hresult((*(abi_t<AsyncActionProgressHandler<TProgress>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename TProgress>
    struct WINRT_EBO AsyncActionWithProgressCompletedHandler : IUnknown
    {
        AsyncActionWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncActionWithProgressCompletedHandler(L handler) :
            AsyncActionWithProgressCompletedHandler(impl::make_delegate<AsyncActionWithProgressCompletedHandler<TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncActionWithProgressCompletedHandler(F* handler) :
            AsyncActionWithProgressCompletedHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> AsyncActionWithProgressCompletedHandler(O* object, M method) :
            AsyncActionWithProgressCompletedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IAsyncActionWithProgress<TProgress> const& sender, AsyncStatus const args) const
        {
            check_hresult((*(abi_t<AsyncActionWithProgressCompletedHandler<TProgress>>**)this)->Invoke(get_abi(sender), args));
        }
    };

    template <typename TResult, typename TProgress>
    struct WINRT_EBO AsyncOperationProgressHandler : IUnknown
    {
        AsyncOperationProgressHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncOperationProgressHandler(L handler) :
            AsyncOperationProgressHandler(impl::make_delegate<AsyncOperationProgressHandler<TResult, TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncOperationProgressHandler(F* handler) :
            AsyncOperationProgressHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> AsyncOperationProgressHandler(O* object, M method) :
            AsyncOperationProgressHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IAsyncOperationWithProgress<TResult, TProgress> const& sender, TProgress const& args) const
        {
            check_hresult((*(abi_t<AsyncOperationProgressHandler<TResult, TProgress>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename TResult, typename TProgress>
    struct WINRT_EBO AsyncOperationWithProgressCompletedHandler : IUnknown
    {
        AsyncOperationWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncOperationWithProgressCompletedHandler(L handler) :
            AsyncOperationWithProgressCompletedHandler(impl::make_delegate<AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncOperationWithProgressCompletedHandler(F* handler) :
            AsyncOperationWithProgressCompletedHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(O* object, M method) :
            AsyncOperationWithProgressCompletedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IAsyncOperationWithProgress<TResult, TProgress> const& sender, AsyncStatus const args) const
        {
            check_hresult((*(abi_t<AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>**)this)->Invoke(get_abi(sender), args));
        }
    };

    template <typename TResult>
    struct WINRT_EBO AsyncOperationCompletedHandler : IUnknown
    {
        AsyncOperationCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncOperationCompletedHandler(L handler) :
            AsyncOperationCompletedHandler(impl::make_delegate<AsyncOperationCompletedHandler<TResult>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncOperationCompletedHandler(F* handler) :
            AsyncOperationCompletedHandler([=](auto&& ... args) { handler(args ...); })
        {}

        template <typename O, typename M> AsyncOperationCompletedHandler(O* object, M method) :
            AsyncOperationCompletedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
        {}

        void operator()(IAsyncOperation<TResult> const& sender, AsyncStatus args) const
        {
            check_hresult((*(abi_t<AsyncOperationCompletedHandler<TResult>>**)this)->Invoke(get_abi(sender), args));
        }
    };
}

namespace winrt::impl
{
    template <typename D>
    uint32_t consume_IAsyncInfo<D>::Id() const
    {
        uint32_t id{};
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->get_Id(&id));
        return id;
    }

    template <typename D>
    Windows::Foundation::AsyncStatus consume_IAsyncInfo<D>::Status() const
    {
        Windows::Foundation::AsyncStatus status{};
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->get_Status(&status));
        return status;
    }

    template <typename D>
    HRESULT consume_IAsyncInfo<D>::ErrorCode() const
    {
        HRESULT code = S_OK;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->get_ErrorCode(&code));
        return code;
    }

    template <typename D>
    void consume_IAsyncInfo<D>::Cancel() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->Cancel());
    }

    template <typename D>
    void consume_IAsyncInfo<D>::Close() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->Close());
    }


    template <typename D>
    void consume_IAsyncAction<D>::Completed(const Windows::Foundation::AsyncActionCompletedHandler& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncAction>**)&static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D>
    Windows::Foundation::AsyncActionCompletedHandler consume_IAsyncAction<D>::Completed() const
    {
        Windows::Foundation::AsyncActionCompletedHandler handler{};
        check_hresult((*(abi_t<Windows::Foundation::IAsyncAction>**)&static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D>
    void consume_IAsyncAction<D>::GetResults() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncAction>**)&static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)))->GetResults());
    }

    template <typename D>
    void consume_IAsyncAction<D>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)));
        GetResults();
    }

    template <typename D, typename TResult>
    void consume_IAsyncOperation<D, TResult>::Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperation<TResult>>**)&static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult>
    Windows::Foundation::AsyncOperationCompletedHandler<TResult> consume_IAsyncOperation<D, TResult>::Completed() const
    {
        Windows::Foundation::AsyncOperationCompletedHandler<TResult> temp;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperation<TResult>>**)&static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(temp)));
        return temp;
    }

    template <typename D, typename TResult>
    TResult consume_IAsyncOperation<D, TResult>::GetResults() const
    {
        TResult result = empty_value<TResult>();
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperation<TResult>>**)&static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)))->GetResults(put_abi(result)));
        return result;
    }

    template <typename D, typename TResult>
    TResult consume_IAsyncOperation<D, TResult>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)));
        return GetResults();
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionProgressHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncActionProgressHandler<TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::GetResults() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->GetResults());
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)));
        GetResults();
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    TResult consume_IAsyncOperationWithProgress<D, TResult, TProgress>::GetResults() const
    {
        TResult result = empty_value<TResult>();
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->GetResults(put_abi(result)));
        return result;
    }

    template <typename D, typename TResult, typename TProgress>
    TResult consume_IAsyncOperationWithProgress<D, TResult, TProgress>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)));
        return GetResults();
    }
}

namespace winrt::impl
{
    template <typename D>
    struct produce<D, Windows::Foundation::IAsyncAction> : produce_base<D, Windows::Foundation::IAsyncAction>
    {
        HRESULT __stdcall put_Completed(::IUnknown* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncActionCompletedHandler const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(::IUnknown** handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *handler = detach_abi(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                *handler = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().GetResults();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D>
    struct produce<D, Windows::Foundation::IAsyncInfo> : produce_base<D, Windows::Foundation::IAsyncInfo>
    {
        HRESULT __stdcall get_Id(uint32_t* id) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *id = this->shim().Id();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Status(winrt::Windows::Foundation::AsyncStatus* status) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *status = this->shim().Status();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_ErrorCode(HRESULT* errorCode) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *errorCode = this->shim().ErrorCode();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Cancel() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Cancel();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Close() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Close();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename TProgress>
    struct produce<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>> : produce_base<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        HRESULT __stdcall put_Progress(::IUnknown* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Progress(*reinterpret_cast<Windows::Foundation::AsyncActionProgressHandler<TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Progress(::IUnknown** handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *handler = detach_abi(this->shim().Progress());
                return S_OK;
            }
            catch (...)
            {
                *handler = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall put_Completed(::IUnknown* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(::IUnknown** handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *handler = detach_abi(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                *handler = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().GetResults();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename TResult>
    struct produce<D, Windows::Foundation::IAsyncOperation<TResult>> : produce_base<D, Windows::Foundation::IAsyncOperation<TResult>>
    {
        HRESULT __stdcall put_Completed(::IUnknown* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncOperationCompletedHandler<TResult> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(::IUnknown** handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *handler = detach_abi(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                *handler = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults(arg_out<TResult> results) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *results = detach_abi(this->shim().GetResults());
                return S_OK;
            }
            catch (...)
            {
                clear_abi(results);
                return to_hresult();
            }
        }
    };

    template <typename D, typename TResult, typename TProgress>
    struct produce<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> : produce_base<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        HRESULT __stdcall put_Progress(::IUnknown* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Progress(*reinterpret_cast<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Progress(::IUnknown** handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *handler = detach_abi(this->shim().Progress());
                return S_OK;
            }
            catch (...)
            {
                *handler = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall put_Completed(::IUnknown* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(::IUnknown** handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *handler = detach_abi(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                *handler = nullptr;
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults(arg_out<TResult> results) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *results = detach_abi(this->shim().GetResults());
                return S_OK;
            }
            catch (...)
            {
                clear_abi(results);
                return to_hresult();
            }
        }
    };
}

namespace winrt::impl
{
    template <typename Async>
    struct await_adapter
    {
        Async const& async;

        bool await_ready() const
        {
            return async.Status() == Windows::Foundation::AsyncStatus::Completed;
        }

        void await_suspend(std::experimental::coroutine_handle<> handle) const
        {
            com_ptr<IContextCallback> context;
            check_hresult(CoGetObjectContext(__uuidof(context), context.put_void()));

            async.Completed([handle, context = std::move(context)](auto const&, Windows::Foundation::AsyncStatus)
            {
                ComCallData data = {};
                data.pUserDefined = handle.address();

                auto callback = [](ComCallData* data)
                {
                    std::experimental::coroutine_handle<>::from_address(data->pUserDefined)();
                    return S_OK;
                };

                check_hresult(context->ContextCallback(callback, &data, IID_ICallbackWithNoReentrancyToApplicationSTA, 5, nullptr));
            });
        }

        auto await_resume() const
        {
            return async.GetResults();
        }
    };
}

#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    inline impl::await_adapter<IAsyncAction> operator co_await(IAsyncAction const& async)
    {
        return{ async };
    }

    template <typename TProgress>
    impl::await_adapter<IAsyncActionWithProgress<TProgress>> operator co_await(IAsyncActionWithProgress<TProgress> const& async)
    {
        return{ async };
    }

    template <typename TResult>
    impl::await_adapter<IAsyncOperation<TResult>> operator co_await(IAsyncOperation<TResult> const& async)
    {
        return{ async };
    }

    template <typename TResult, typename TProgress>
    impl::await_adapter<IAsyncOperationWithProgress<TResult, TProgress>> operator co_await(IAsyncOperationWithProgress<TResult, TProgress> const& async)
    {
        return{ async };
    }
}
#endif

WINRT_EXPORT namespace winrt
{
    struct resume_background
    {
        bool await_ready() const noexcept
        {
            return false;
        }

        void await_resume() const noexcept
        {
        }

        void await_suspend(std::experimental::coroutine_handle<> handle) const
        {
            if (!TrySubmitThreadpoolCallback(callback, handle.address(), nullptr))
            {
                throw_last_error();
            }
        }

    private:

        static void __stdcall callback(PTP_CALLBACK_INSTANCE, void* context) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(context)();
        }
    };

    struct apartment_context
    {
        apartment_context()
        {
            check_hresult(CoGetObjectContext(__uuidof(m_context), m_context.put_void()));
        }

        bool await_ready() const noexcept
        {
            return false;
        }

        void await_resume() const noexcept
        {
        }

        void await_suspend(std::experimental::coroutine_handle<> handle) const
        {
            ComCallData data = {};
            data.pUserDefined = handle.address();
            check_hresult(m_context->ContextCallback(callback, &data, IID_ICallbackWithNoReentrancyToApplicationSTA, 5, nullptr));
        }

    private:

        static HRESULT __stdcall callback(ComCallData* data) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(data->pUserDefined)();
            return S_OK;
        }

        com_ptr<IContextCallback> m_context;
    };

    struct resume_after
    {
        explicit resume_after(Windows::Foundation::TimeSpan duration) noexcept :
        m_duration(duration)
        {
        }

        bool await_ready() const noexcept
        {
            return m_duration.count() <= 0;
        }

        void await_suspend(std::experimental::coroutine_handle<> handle)
        {
            m_timer = impl::check_pointer(CreateThreadpoolTimer(callback, handle.address(), nullptr));
            int64_t relative_count = -m_duration.count();
            SetThreadpoolTimer(m_timer.get(), reinterpret_cast<PFILETIME>(&relative_count), 0, 0);
        }

        void await_resume() const noexcept
        {
        }

    private:

        static void __stdcall callback(PTP_CALLBACK_INSTANCE, void* context, PTP_TIMER) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(context)();
        }

        struct timer_traits : impl::handle_traits<PTP_TIMER>
        {
            static void close(type value) noexcept
            {
                CloseThreadpoolTimer(value);
            }
        };

        impl::handle<timer_traits> m_timer;
        Windows::Foundation::TimeSpan m_duration;
    };

    struct resume_on_signal
    {
        explicit resume_on_signal(HANDLE handle) noexcept :
            m_handle(handle)
        {}

        resume_on_signal(HANDLE handle, Windows::Foundation::TimeSpan timeout) noexcept :
            m_timeout(timeout),
            m_handle(handle)
        {}

        bool await_ready() const noexcept
        {
            return WaitForSingleObject(m_handle, 0) == WAIT_OBJECT_0;
        }

        void await_suspend(std::experimental::coroutine_handle<> resume)
        {
            m_resume = resume;
            m_wait = impl::check_pointer(CreateThreadpoolWait(callback, this, nullptr));
            int64_t relative_count = -m_timeout.count();
            PFILETIME file_time = relative_count != 0 ? reinterpret_cast<PFILETIME>(&relative_count) : nullptr;
            SetThreadpoolWait(m_wait.get(), m_handle, file_time);
        }

        bool await_resume() const noexcept
        {
            return m_result == WAIT_OBJECT_0;
        }

    private:

        static void __stdcall callback(PTP_CALLBACK_INSTANCE, void* context, PTP_WAIT, TP_WAIT_RESULT result) noexcept
        {
            auto that = static_cast<resume_on_signal*>(context);
            that->m_result = result;
            that->m_resume();
        }

        struct wait_traits : impl::handle_traits<PTP_WAIT>
        {
            static void close(type value) noexcept
            {
                CloseThreadpoolWait(value);
            }
        };

        impl::handle<wait_traits> m_wait;
        Windows::Foundation::TimeSpan m_timeout{ 0 };
        HANDLE m_handle{};
        uint32_t m_result{};
        std::experimental::coroutine_handle<> m_resume{ nullptr };
    };

    struct awaitable_base
    {
        static void __stdcall callback(PTP_CALLBACK_INSTANCE, void*, void* overlapped, ULONG result, ULONG_PTR, PTP_IO) noexcept
        {
            auto context = static_cast<awaitable_base*>(overlapped);
            context->m_result = result;
            context->m_resume();
        }

    protected:

        OVERLAPPED m_overlapped{};
        uint32_t m_result{};
        std::experimental::coroutine_handle<> m_resume{ nullptr };
    };

    struct resumable_io
    {
        resumable_io(HANDLE object) :
            m_io(impl::check_pointer(CreateThreadpoolIo(object, awaitable_base::callback, nullptr, nullptr)))
        {
        }

        template <typename F>
        auto start(F callback)
        {
            struct awaitable : awaitable_base, F
            {
                awaitable(PTP_IO io, F callback) noexcept :
                m_io(io),
                    F(callback)
                {}

                bool await_ready() const noexcept
                {
                    return false;
                }

                void await_suspend(std::experimental::coroutine_handle<> resume_handle)
                {
                    m_resume = resume_handle;
                    StartThreadpoolIo(m_io);

                    try
                    {
                        (*this)(m_overlapped);
                    }
                    catch (...)
                    {
                        CancelThreadpoolIo(m_io);
                        throw;
                    }
                }

                uint32_t await_resume() const
                {
                    if (m_result != NO_ERROR&& m_result != ERROR_HANDLE_EOF)
                    {
                        throw hresult_error(HRESULT_FROM_WIN32(m_result));
                    }

                    return static_cast<uint32_t>(m_overlapped.InternalHigh);
                }

                PTP_IO m_io = nullptr;
            };

            return awaitable(get(), callback);
        }

        template <typename F>
        auto start_pending(F callback)
        {
            struct awaitable : awaitable_base, F
            {
                awaitable(PTP_IO io, F callback) noexcept :
                m_io(io),
                    F(callback)
                {}

                bool await_ready() const noexcept
                {
                    return false;
                }

                bool await_suspend(std::experimental::coroutine_handle<> resume_handle)
                {
                    m_resume = resume_handle;
                    StartThreadpoolIo(m_io);

                    try
                    {
                        bool const pending = (*this)(m_overlapped);

                        if (!pending)
                        {
                            CancelThreadpoolIo(m_io);
                        }

                        return pending;
                    }
                    catch (...)
                    {
                        CancelThreadpoolIo(m_io);
                        throw;
                    }
                }

                uint32_t await_resume() const
                {
                    if (m_result != NO_ERROR&& m_result != ERROR_HANDLE_EOF)
                    {
                        throw hresult_error(HRESULT_FROM_WIN32(m_result));
                    }

                    return static_cast<uint32_t>(m_overlapped.InternalHigh);
                }

                PTP_IO m_io = nullptr;
            };

            return awaitable(get(), callback);
        }

        PTP_IO get() const noexcept
        {
            return m_io.get();
        }

    private:

        struct io_traits : impl::handle_traits<PTP_IO>
        {
            static void close(type value) noexcept
            {
                CloseThreadpoolIo(value);
            }
        };

        impl::handle<io_traits> m_io;
    };

#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
    inline auto operator co_await(Windows::Foundation::TimeSpan duration)
    {
        return resume_after(duration);
    }
#endif

    struct get_progress_token_t {};
    constexpr get_progress_token_t get_progress_token{};

    struct get_cancellation_token_t {};
    constexpr get_cancellation_token_t get_cancellation_token{};

    struct fire_and_forget {};
}

namespace winrt::impl
{
    template <typename Derived, typename AsyncInterface, typename CompletedHandler>
    struct promise_base : implements<Derived, AsyncInterface, Windows::Foundation::IAsyncInfo>
    {
        using AsyncStatus = Windows::Foundation::AsyncStatus;

        unsigned long __stdcall Release() noexcept
        {
            uint32_t const remaining = this->subtract_reference();

            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                std::experimental::coroutine_handle<Derived>::from_promise(*static_cast<Derived*>(this)).destroy();
            }

            return remaining;
        }

        void Completed(CompletedHandler const& handler)
        {
            AsyncStatus status;

            {
                lock_guard const guard(m_lock);

                if (m_completed_assigned)
                {
                    throw winrt::hresult_illegal_delegate_assignment();
                }

                m_completed_assigned = true;

                if (m_status == AsyncStatus::Started)
                {
                    m_completed = handler;
                    return;
                }

                status = m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

        CompletedHandler Completed() noexcept
        {
            lock_guard const guard(m_lock);
            return m_completed;
        }

        uint32_t Id() const noexcept
        {
            return 1;
        }

        AsyncStatus Status() noexcept
        {
            lock_guard const guard(m_lock);
            return m_status;
        }

        HRESULT ErrorCode() noexcept
        {
            try
            {
                lock_guard const guard(m_lock);
                rethrow_if_failed();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        void Cancel() noexcept
        {
            lock_guard const guard(m_lock);

            if (m_status == AsyncStatus::Started)
            {
                m_status = AsyncStatus::Canceled;
            }
        }

        void Close()
        {
            lock_guard const guard(m_lock);

            if (m_status == AsyncStatus::Started)
            {
                throw winrt::hresult_illegal_state_change();
            }
        }

        AsyncInterface get_return_object() const noexcept
        {
            return*this;
        }

        std::experimental::suspend_never initial_suspend() const noexcept
        {
            return{};
        }

        struct final_suspend_type
        {
            promise_base* promise;

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            bool await_suspend(std::experimental::coroutine_handle<>) const noexcept
            {
                uint32_t const remaining = promise->subtract_reference();

                if (remaining == 0)
                {
                    std::atomic_thread_fence(std::memory_order_acquire);
                }

                return remaining > 0;
            }
        };

        final_suspend_type final_suspend() noexcept
        {
            return{ this };
        }

        void unhandled_exception() noexcept
        {
            CompletedHandler handler;
            AsyncStatus status;

            {
                lock_guard const guard(m_lock);
                WINRT_ASSERT(m_status == AsyncStatus::Started || m_status == AsyncStatus::Canceled);
                m_exception = std::current_exception();

                try
                {
                    std::rethrow_exception(m_exception.value());
                }
                catch (winrt::hresult_canceled const&)
                {
                    m_status = AsyncStatus::Canceled;
                }
                catch (...)
                {
                    m_status = AsyncStatus::Error;
                }

                handler = std::move(m_completed);
                status = m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

    protected:

        void rethrow_if_failed() const
        {
            if (this->m_status == AsyncStatus::Error || this->m_status == AsyncStatus::Canceled)
            {
                std::rethrow_exception(m_exception.value());
            }
        }

        std::optional<std::exception_ptr> m_exception;
        lock m_lock;
        CompletedHandler m_completed;
        AsyncStatus m_status{ AsyncStatus::Started };
        bool m_completed_assigned{ false };
    };

    template <typename Promise>
    struct cancellation_token
    {
        cancellation_token(Promise* promise) noexcept :
        m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>) const noexcept
        {
        }

        cancellation_token<Promise> await_resume() const noexcept
        {
            return*this;
        }

        bool operator()() const noexcept
        {
            return m_promise->Status() == Windows::Foundation::AsyncStatus::Canceled;
        }

    private:

        Promise* m_promise;
    };

    template <typename Promise, typename Progress>
    struct progress_token
    {
        progress_token(Promise* promise) noexcept :
        m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>) const noexcept
        {
        }

        progress_token<Promise, Progress> await_resume() const noexcept
        {
            return*this;
        }

        void operator()(Progress const& result)
        {
            m_promise->set_progress(result);
        }

    private:

        Promise* m_promise;
    };
}

namespace winrt::impl
{
    inline size_t hash_data(const void* ptr, size_t numBytes) noexcept
    {
#ifdef WINRT_64
        constexpr size_t fnv_offset_basis = 14695981039346656037ULL;
        constexpr size_t fnv_prime = 1099511628211ULL;
#else
        constexpr size_t fnv_offset_basis = 2166136261U;
        constexpr size_t fnv_prime = 16777619U;
#endif
        size_t result = fnv_offset_basis;
        const uint8_t* const buffer = static_cast<const uint8_t*>(ptr);
        for (size_t next = 0; next < numBytes; ++next)
        {
            result ^= buffer[next];
            result *= fnv_prime;
        }
        return result;
    }

    inline size_t hash_unknown(const Windows::Foundation::IUnknown& value) noexcept
    {
        ::IUnknown* abi_value = nullptr;
        if (value)
        {
            abi_value = get_abi(value.as<Windows::Foundation::IUnknown>());
        }
        return std::hash<::IUnknown*>{}(abi_value);
    }

    template<typename T>
    struct impl_hash_unknown
    {
        size_t operator()(const T& value) const noexcept
        {
            return winrt::impl::hash_unknown(value);
        }
    };
}

WINRT_EXPORT namespace std
{
    template<> struct hash<winrt::hstring>
    {
        size_t operator()(const winrt::hstring& value) const noexcept
        {
            uint32_t length = 0;
            const wchar_t* const buffer = WindowsGetStringRawBuffer(get_abi(value), &length);
            return winrt::impl::hash_data(buffer, length * sizeof(wchar_t));
        }
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename ... Args>
    struct coroutine_traits<winrt::fire_and_forget, Args ...>
    {
        struct promise_type
        {
            winrt::fire_and_forget get_return_object() const noexcept
            {
                return{};
            }

            void return_void() const noexcept
            {
            }

            suspend_never initial_suspend() const noexcept
            {
                return{};
            }

            suspend_never final_suspend() const noexcept
            {
                return{};
            }

            void unhandled_exception() noexcept
            {
            }
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename ... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncAction, Args ...>
    {
        struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncAction,
            winrt::Windows::Foundation::AsyncActionCompletedHandler>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;

            void GetResults()
            {
                winrt::impl::lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_void()
            {
                winrt::Windows::Foundation::AsyncActionCompletedHandler handler;
                AsyncStatus status;

                {
                    winrt::impl::lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename TProgress, typename ... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>, Args ...>
    {
        struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>,
            winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;
            using ProgressHandler = winrt::Windows::Foundation::AsyncActionProgressHandler<TProgress>;

            void Progress(ProgressHandler const& handler)
            {
                winrt::impl::lock_guard const guard(this->m_lock);
                m_progress = handler;
            }

            ProgressHandler Progress()
            {
                winrt::impl::lock_guard const guard(this->m_lock);
                return m_progress;
            }

            void GetResults()
            {
                winrt::impl::lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_void()
            {
                winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> handler;
                AsyncStatus status;

                {
                    winrt::impl::lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            void set_progress(TProgress const& result)
            {
                if (auto handler = Progress())
                {
                    handler(*this, result);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }

            winrt::impl::progress_token<promise_type, TProgress> await_transform(winrt::get_progress_token_t) noexcept
            {
                return{ this };
            }

            ProgressHandler m_progress;
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename TResult, typename ... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<TResult>, Args ...>
    {
        struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncOperation<TResult>,
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;

            TResult GetResults()
            {
                winrt::impl::lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return m_result;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_value(TResult const& result)
            {
                winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult> handler;
                AsyncStatus status;

                {
                    winrt::impl::lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                        m_result = result;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }

            TResult m_result{ winrt::impl::empty_value<TResult>() };
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename TResult, typename TProgress, typename ... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>, Args ...>
    {
        struct promise_type : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>,
            winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;
            using ProgressHandler = winrt::Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>;

            void Progress(ProgressHandler const& handler)
            {
                winrt::impl::lock_guard const guard(this->m_lock);
                m_progress = handler;
            }

            ProgressHandler Progress()
            {
                winrt::impl::lock_guard const guard(this->m_lock);
                return m_progress;
            }

            TResult GetResults()
            {
                winrt::impl::lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return m_result;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_value(TResult const& result)
            {
                winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
                AsyncStatus status;

                {
                    winrt::impl::lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                        m_result = result;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            void set_progress(TProgress const& result)
            {
                if (auto handler = Progress())
                {
                    handler(*this, result);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }

            winrt::impl::progress_token<promise_type, TProgress> await_transform(winrt::get_progress_token_t) noexcept
            {
                return{ this };
            }

            TResult m_result{ winrt::impl::empty_value<TResult>() };
            ProgressHandler m_progress;
        };
    };
}

#ifdef _DEBUG
#define WINRT_NATVIS
#endif

#ifdef WINRT_NATVIS

namespace winrt::impl
{
    struct natvis
    {
        static auto __stdcall get_val(winrt::Windows::Foundation::IInspectable* object, wchar_t const * iid_str, size_t method)
        {
            union variant
            {
                bool b;
                wchar_t c;
                int8_t i1;
                int16_t i2;
                int32_t i4;
                int64_t i8;
                uint8_t u1;
                uint16_t u2;
                uint32_t u4;
                uint64_t u8;
                float r4;
                double r8;
                GUID g;
                HSTRING s;
                BYTE v[1024];
            }
            value{};
            IID iid{};
            if (SUCCEEDED(IIDFromString(iid_str, &iid)))
            {
                ::IInspectable* pinsp;
                typedef HRESULT(__stdcall ::IInspectable::*PropertyAccessor)(void*);
                if (SUCCEEDED(winrt::get_abi(*object)->QueryInterface(iid, (void**)&pinsp)))
                {
                    auto vtbl = *(PropertyAccessor**)pinsp;
                    static const int IInspectable_vtbl_size = 6;
                    auto get_Property = vtbl[method + IInspectable_vtbl_size];
                    (pinsp->*get_Property)(&value);
                }
            }
            return value;
        }
    };
}

extern "C"
__declspec(selectany)
decltype(winrt::impl::natvis::get_val) & WINRT_get_val = winrt::impl::natvis::get_val;

#ifdef _M_IX86
#pragma comment(linker, "/include:_WINRT_get_val")
#else
#pragma comment(linker, "/include:WINRT_get_val")
#endif

#endif

#define CPPWINRT_VERSION "1.0.170825.9"

// WINRT_version is used by Microsoft to analyze C++/WinRT library adoption and inform future product decisions.
extern "C"
__declspec(selectany)
char const * const WINRT_version = "C++/WinRT version:" CPPWINRT_VERSION;

#ifdef _M_IX86
#pragma comment(linker, "/include:_WINRT_version")
#else
#pragma comment(linker, "/include:WINRT_version")
#endif

WINRT_WARNING_POP
