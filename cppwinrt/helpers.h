#pragma once

#include "winmd_signature.h"

namespace cppwinrt
{
    using winmd_signature::guid_value;
    using winmd_signature::extract_guid;
    using winmd_signature::format_guid_signature;
    using winmd_signature::compute_guid_from_signature;
    using winmd_signature::type_arg_stack;
    using winmd_signature::signature_builder;

    static auto get_start_time()
    {
        return std::chrono::high_resolution_clock::now();
    }

    static auto get_elapsed_time(decltype(get_start_time()) const& start)
    {
        return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count();
    }

    static bool is_put_overload(MethodDef const& method)
    {
        return method.SpecialName() && starts_with(method.Name(), "put_");
    }

    struct method_signature
    {
        explicit method_signature(MethodDef const& method) :
            m_method(method),
            m_signature(method.Signature())
        {
            auto params = method.ParamList();

            if (m_signature.ReturnType() && params.first != params.second && params.first.Sequence() == 0)
            {
                m_return = params.first;
                ++params.first;
            }

            for (std::uint32_t i{}; i != size(m_signature.Params()); ++i)
            {
                m_params.emplace_back(params.first + i, &m_signature.Params().first[i]);
            }
        }

        std::vector<std::pair<Param, ParamSig const*>>& params()
        {
            return m_params;
        }

        std::vector<std::pair<Param, ParamSig const*>> const& params() const
        {
            return m_params;
        }

        auto const& return_signature() const
        {
            return m_signature.ReturnType();
        }

        auto return_param_name() const
        {
            std::string_view name;

            if (m_return)
            {
                name = m_return.Name();
            }
            else
            {
                name = "winrt_impl_result";
            }

            return name;
        }

        MethodDef const& method() const
        {
            return m_method;
        }

        bool is_async() const
        {
            // WinRT parameter passing conventions include the notion that input parameters of collection types may be read
            // or copied but should not be stored directly since this would lead to instability as the collection is shared
            // by the caller and callee. The exception to this rule is property setters where the callee may simply store a
            // reference to the collection. The collection thus becomes async in the sense that it is expected to remain
            // valid beyond the duration of the call.

            if (is_put_overload(m_method))
            {
                return true;
            }

            if (!m_signature.ReturnType())
            {
                return false;
            }

            bool async{};

            call(m_signature.ReturnType().Type().Type(),
                [&](coded_index<TypeDefOrRef> const& type)
                {
                    auto const& [type_namespace, type_name] = get_type_namespace_and_name(type);
                    async = type_namespace == "Windows.Foundation" && type_name == "IAsyncAction";
                },
                [&](GenericTypeInstSig const& type)
                {
                    auto const& [type_namespace, type_name] = get_type_namespace_and_name(type.GenericType());

                    if (type_namespace == "Windows.Foundation")
                    {
                        async =
                            type_name == "IAsyncOperation`1" ||
                            type_name == "IAsyncActionWithProgress`1" ||
                            type_name == "IAsyncOperationWithProgress`2";
                    }
                },
                    [](auto&&) {});

            return async;
        }

    private:

        MethodDef m_method;
        MethodDefSig m_signature;
        std::vector<std::pair<Param, ParamSig const*>> m_params;
        Param m_return;
    };

    struct separator
    {
        writer& w;
        bool first = true;

        void operator()()
        {
            if (first)
            {
                first = false;
            }
            else
            {
                w.write(", ");
            }
        }
    };

    template <typename T>
    bool has_attribute(T const& row, std::string_view const& type_namespace, std::string_view const& type_name)
    {
        return static_cast<bool>(get_attribute(row, type_namespace, type_name));
    }

    namespace impl
    {
        template <typename T, typename... Types>
        struct variant_index;

        template <typename T, typename First, typename... Types>
        struct variant_index<T, First, Types...>
        {
            static constexpr bool found = std::is_same_v<T, First>;
            static constexpr std::size_t value = std::conditional_t<found,
                std::integral_constant<std::size_t, 0>,
                variant_index<T, Types...>>::value + (found ? 0 : 1);
        };
    }

    template <typename Variant, typename T>
    struct variant_index;

    template <typename... Types, typename T>
    struct variant_index<std::variant<Types...>, T> : impl::variant_index<T, Types...>
    {
    };

    template <typename Variant, typename T>
    constexpr std::size_t variant_index_v = variant_index<Variant, T>::value;

    template <typename T>
    auto get_integer_attribute(FixedArgSig const& signature)
    {
        auto variant = std::get<ElemSig>(signature.value).value;
        switch (variant.index())
        {
        case variant_index_v<decltype(variant), std::make_unsigned_t<T>>: return static_cast<T>(std::get<std::make_unsigned_t<T>>(variant));
        case variant_index_v<decltype(variant), std::make_signed_t<T>>: return static_cast<T>(std::get<std::make_signed_t<T>>(variant));
        default: return std::get<T>(variant); // Likely throws, but that's intentional
        }
    }

    template <typename T>
    auto get_attribute_value(FixedArgSig const& signature)
    {
        return std::get<T>(std::get<ElemSig>(signature.value).value);
    }

    template <typename T>
    auto get_attribute_value(CustomAttribute const& attribute, std::uint32_t const arg)
    {
        return get_attribute_value<T>(attribute.Value().FixedArgs()[arg]);
    }

    static auto get_abi_name(MethodDef const& method)
    {
        if (auto overload = get_attribute(method, "Windows.Foundation.Metadata", "OverloadAttribute"))
        {
            return get_attribute_value<std::string_view>(overload, 0);
        }
        else
        {
            return method.Name();
        }
    }

    static auto get_name(MethodDef const& method)
    {
        auto name = method.Name();

        if (method.SpecialName())
        {
            return name.substr(name.find('_') + 1);
        }

        return name;
    }

    static bool is_remove_overload(MethodDef const& method)
    {
        return method.SpecialName() && starts_with(method.Name(), "remove_");
    }

    static bool is_add_overload(MethodDef const& method)
    {
        return method.SpecialName() && starts_with(method.Name(), "add_");
    }

    static bool is_get_overload(MethodDef const& method)
    {
        return method.SpecialName() && starts_with(method.Name(), "get_");
    }

    static bool is_noexcept(MethodDef const& method)
    {
        return is_remove_overload(method) || has_attribute(method, "Windows.Foundation.Metadata", "NoExceptionAttribute");
    }

    static bool has_fastabi(TypeDef const& type)
    {
        return settings.fastabi&& has_attribute(type, "Windows.Foundation.Metadata", "FastAbiAttribute");
    }

    static bool is_always_disabled(TypeDef const& type)
    {
        if (settings.component_ignore_velocity)
        {
            return false;
        }

        auto feature = get_attribute(type, "Windows.Foundation.Metadata", "FeatureAttribute");

        if (!feature)
        {
            return false;
        }

        auto stage = get_attribute_value<ElemSig::EnumValue>(feature, 0);
        return stage.equals_enumerator("AlwaysDisabled");
    }

    static bool is_always_enabled(TypeDef const& type)
    {
        auto feature = get_attribute(type, "Windows.Foundation.Metadata", "FeatureAttribute");

        if (!feature)
        {
            return true;
        }

        auto stage = get_attribute_value<ElemSig::EnumValue>(feature, 0);
        return stage.equals_enumerator("AlwaysEnabled");
    }

    static coded_index<TypeDefOrRef> get_default_interface(TypeDef const& type)
    {
        auto impls = type.InterfaceImpl();

        for (auto&& impl : impls)
        {
            if (has_attribute(impl, "Windows.Foundation.Metadata", "DefaultAttribute"))
            {
                return impl.Interface();
            }
        }

        if (!empty(impls))
        {
            throw_invalid("Type '", type.TypeNamespace(), ".", type.TypeName(), "' does not have a default interface");
        }

        return {};
    }

    static TypeDef get_base_class(TypeDef const& derived)
    {
        auto extends = derived.Extends();
        if (!extends)
        {
            return{};
        }

        auto const&[extends_namespace, extends_name] = get_type_namespace_and_name(extends);
        if (extends_name == "Object" && extends_namespace == "System")
        {
            return {};
        }
        return find_required(extends);
    };


    static auto get_bases(TypeDef const& type)
    {
        std::vector<TypeDef> bases;

        for (auto base = get_base_class(type); base; base = get_base_class(base))
        {
            bases.push_back(base);
        }

        return bases;
    }

    struct contract_version
    {
        std::string_view name;
        std::uint32_t version;
    };

    struct previous_contract
    {
        std::string_view contract_from;
        std::string_view contract_to;
        std::uint32_t version_low;
        std::uint32_t version_high;
    };

    struct contract_history
    {
        contract_version current_contract;

        // Sorted such that the first entry is the first contract the type was introduced in
        std::vector<previous_contract> previous_contracts;
    };

    static contract_version decode_contract_version_attribute(CustomAttribute const& attribute)
    {
        // ContractVersionAttribute has three constructors, but only two we care about here:
        //      .ctor(string contract, uint32 version)
        //      .ctor(System.Type contract, uint32 version)
        auto signature = attribute.Value();
        auto& args = signature.FixedArgs();
        assert(args.size() == 2);

        contract_version result{};
        result.version = get_integer_attribute<std::uint32_t>(args[1]);
        call(std::get<ElemSig>(args[0].value).value,
            [&](ElemSig::SystemType t)
            {
                result.name = t.name;
            },
            [&](std::string_view name)
            {
                result.name = name;
            },
            [](auto&&)
            {
                assert(false);
            });

        return result;
    }

    static previous_contract decode_previous_contract_attribute(CustomAttribute const& attribute)
    {
        // PreviousContractVersionAttribute has two constructors:
        //      .ctor(string fromContract, uint32 versionLow, uint32 versionHigh)
        //      .ctor(string fromContract, uint32 versionLow, uint32 versionHigh, string contractTo)
        auto signature = attribute.Value();
        auto& args = signature.FixedArgs();
        assert(args.size() >= 3);

        previous_contract result{};
        result.contract_from = get_attribute_value<std::string_view>(args[0]);
        result.version_low = get_integer_attribute<std::uint32_t>(args[1]);
        result.version_high = get_integer_attribute<std::uint32_t>(args[2]);
        if (args.size() == 4)
        {
            result.contract_to = get_attribute_value<std::string_view>(args[3]);
        }

        return result;
    }

    static contract_version get_initial_contract_version(TypeDef const& type)
    {
        // Most types don't have previous contracts, so optimize for that scenario to avoid unnecessary allocations
        contract_version current_contract{};

        // The initial contract, assuming the type has moved contracts, is the only contract name that doesn't appear as
        // a "to contract" argument to a PreviousContractVersionAttribute. Note that this assumes that a type does not
        // "return" to a prior contract, however this is a restriction enforced by midlrt
        std::vector<contract_version> previous_contracts;
        std::vector<std::string_view> to_contracts;
        for (auto&& attribute : type.CustomAttribute())
        {
            auto [ns, name] = attribute.TypeNamespaceAndName();
            if (ns != "Windows.Foundation.Metadata")
            {
                continue;
            }

            if (name == "ContractVersionAttribute")
            {
                assert(current_contract.name.empty());
                current_contract = decode_contract_version_attribute(attribute);
            }
            else if (name == "PreviousContractVersionAttribute")
            {
                auto prev = decode_previous_contract_attribute(attribute);

                // If this contract was the target of an earlier contract change, we know this isn't the initial one
                if (std::find(to_contracts.begin(), to_contracts.end(), prev.contract_from) == to_contracts.end())
                {
                    previous_contracts.push_back(contract_version{ prev.contract_from, prev.version_low });
                }

                if (!prev.contract_to.empty())
                {
                    auto itr = std::find_if(previous_contracts.begin(), previous_contracts.end(), [&](auto const& ver)
                    {
                        return ver.name == prev.contract_to;
                    });
                    if (itr != previous_contracts.end())
                    {
                        *itr = previous_contracts.back();
                        previous_contracts.pop_back();
                    }

                    to_contracts.push_back(prev.contract_to);
                }
            }
            else if (name == "VersionAttribute")
            {
                // Prefer contract versioning, if present. Otherwise, use an empty contract name to indicate that this
                // is not a contract version
                if (current_contract.name.empty())
                {
                    current_contract.version = get_attribute_value<std::uint32_t>(attribute, 0);
                }
            }
        }

        if (!previous_contracts.empty())
        {
            assert(previous_contracts.size() == 1);
            return previous_contracts[0];
        }

        return current_contract;
    }

    static contract_history get_contract_history(TypeDef const& type)
    {
        contract_history result{};
        for (auto&& attribute : type.CustomAttribute())
        {
            auto [ns, name] = attribute.TypeNamespaceAndName();
            if (ns != "Windows.Foundation.Metadata")
            {
                continue;
            }

            if (name == "ContractVersionAttribute")
            {
                assert(result.current_contract.name.empty());
                result.current_contract = decode_contract_version_attribute(attribute);
            }
            else if (name == "PreviousContractVersionAttribute")
            {
                result.previous_contracts.push_back(decode_previous_contract_attribute(attribute));
            }
            // We could report the version that the type was introduced if the type is not contract versioned, however
            // that information is not useful to us anywhere, so just skip it
        }

        if (result.previous_contracts.empty())
        {
            return result;
        }
        assert(!result.current_contract.name.empty());

        // There's no guarantee that the contract history will be sorted in metadata (in fact it's unlikely to be)
        for (auto& prev : result.previous_contracts)
        {
            if (prev.contract_to.empty() || (prev.contract_to == result.current_contract.name))
            {
                // No 'to' contract indicates that this was the last contract before the current one
                prev.contract_to = result.current_contract.name;
                std::swap(prev, result.previous_contracts.back());
                break;
            }
        }
        assert(result.previous_contracts.back().contract_to == result.current_contract.name);

        for (std::size_t size = result.previous_contracts.size() - 1; size; --size)
        {
            auto& last = result.previous_contracts[size];
            auto itr = std::find_if(result.previous_contracts.begin(), result.previous_contracts.begin() + size, [&](auto const& prev)
            {
                return prev.contract_to == last.contract_from;
            });
            assert(itr != result.previous_contracts.end());
            std::swap(*itr, result.previous_contracts[size - 1]);
        }

        return result;
    }

    struct interface_info
    {
        TypeDef type;
        bool is_default{};
        bool is_protected{};
        bool defaulted{};
        bool overridable{};
        bool base{};
        bool exclusive{};
        bool fastabi{};
        // A pair of (relativeContract, version) where 'relativeContract' is the contract the interface was introduced
        // in relative to the contract history of the class. E.g. if a class goes from contract 'A' to 'B' to 'C',
        // 'relativeContract' would be '0' for an interface introduced in contract 'A', '1' for an interface introduced
        // in contract 'B', etc. This is only set/valid for 'fastabi' interfaces
        std::pair<std::uint32_t, std::uint32_t> relative_version{};
        std::vector<std::vector<std::string>> generic_param_stack{};
    };

    using get_interfaces_t = std::vector<std::pair<std::string, interface_info>>;

    static interface_info* find(get_interfaces_t& interfaces, std::string_view const& name)
    {
        auto pair = std::find_if(interfaces.begin(), interfaces.end(), [&](auto&& pair)
        {
            return pair.first == name;
        });

        if (pair == interfaces.end())
        {
            return nullptr;
        }

        return &pair->second;
    }

    static void insert_or_assign(get_interfaces_t& interfaces, std::string_view const& name, interface_info&& info)
    {
        if (auto existing = find(interfaces, name))
        {
            *existing = std::move(info);
        }
        else
        {
            interfaces.emplace_back(name, std::move(info));
        }
    }

    static void get_interfaces_impl(writer& w, get_interfaces_t& result, bool defaulted, bool overridable, bool base, std::vector<std::vector<std::string>> const& generic_param_stack, std::pair<InterfaceImpl, InterfaceImpl>&& children)
    {
        for (auto&& impl : children)
        {
            interface_info info;
            auto type = impl.Interface();
            auto name = w.write_temp("%", type);
            info.is_default = has_attribute(impl, "Windows.Foundation.Metadata", "DefaultAttribute");
            info.is_protected = has_attribute(impl, "Windows.Foundation.Metadata", "ProtectedAttribute");
            info.defaulted = !base && (defaulted || info.is_default);

            {
                // This is for correctness rather than an optimization (but helps performance as well).
                // If the interface was not previously inserted, carry on and recursively insert it.
                // If a previous insertion was defaulted we're done as it is correctly captured.
                // If a newly discovered instance of a previous insertion is not defaulted, we're also done.
                // If it was previously captured as non-defaulted but now found as defaulted, we carry on and
                // rediscover it as we need it to be defaulted recursively.

                if (auto found = find(result, name))
                {
                    if (found->defaulted || !info.defaulted)
                    {
                        continue;
                    }
                }
            }

            info.overridable = overridable || has_attribute(impl, "Windows.Foundation.Metadata", "OverridableAttribute");
            info.base = base;
            info.generic_param_stack = generic_param_stack;
            writer::generic_param_guard guard;

            switch (type.type())
            {
                case TypeDefOrRef::TypeDef:
                {
                    info.type = type.TypeDef();
                    break;
                }
                case TypeDefOrRef::TypeRef:
                {
                    info.type = find_required(type.TypeRef());
                    w.add_depends(info.type);
                    break;
                }
                case TypeDefOrRef::TypeSpec:
                {
                    auto type_signature = type.TypeSpec().Signature();

                    std::vector<std::string> names;

                    for (auto&& arg : type_signature.GenericTypeInst().GenericArgs())
                    {
                        names.push_back(w.write_temp("%", arg));
                    }

                    info.generic_param_stack.push_back(std::move(names));

                    guard = w.push_generic_params(type_signature.GenericTypeInst());
                    auto signature = type_signature.GenericTypeInst();
                    info.type = find_required(signature.GenericType());

                    break;
                }
            }

            info.exclusive = has_attribute(info.type, "Windows.Foundation.Metadata", "ExclusiveToAttribute");
            get_interfaces_impl(w, result, info.defaulted, info.overridable, base, info.generic_param_stack, info.type.InterfaceImpl());
            insert_or_assign(result, name, std::move(info));
        }
    };

    static auto get_interfaces(writer& w, TypeDef const& type)
    {
        w.abi_types = false;
        get_interfaces_t result;
        get_interfaces_impl(w, result, false, false, false, {}, type.InterfaceImpl());

        for (auto&& base : get_bases(type))
        {
            get_interfaces_impl(w, result, false, false, true, {}, base.InterfaceImpl());
        }

        if (!has_fastabi(type))
        {
            return result;
        }

        auto history = get_contract_history(type);
        std::size_t count = 0;
        for (auto& pair : result)
        {
            if (pair.second.exclusive && !pair.second.base && !pair.second.overridable)
            {
                ++count;

                auto introduced = get_initial_contract_version(pair.second.type);
                pair.second.relative_version.second = introduced.version;

                auto itr = std::find_if(history.previous_contracts.begin(), history.previous_contracts.end(), [&](previous_contract const& prev)
                {
                    return prev.contract_from == introduced.name;
                });
                if (itr != history.previous_contracts.end())
                {
                    pair.second.relative_version.first = static_cast<std::uint32_t>(itr - history.previous_contracts.begin());
                }
                else
                {
                    assert(history.current_contract.name == introduced.name);
                    pair.second.relative_version.first = static_cast<std::uint32_t>(history.previous_contracts.size());
                }
            }
        }

        std::partial_sort(result.begin(), result.begin() + count, result.end(), [](auto&& left_pair, auto&& right_pair)
        {
            auto& left = left_pair.second;
            auto& right = right_pair.second;

            // Sort by base before is_default because each base will have a default.
            if (left.base != right.base)
            {
                return !left.base;
            }

            if (left.is_default != right.is_default)
            {
                return left.is_default;
            }

            if (left.overridable != right.overridable)
            {
                return !left.overridable;
            }

            if (left.exclusive != right.exclusive)
            {
                return left.exclusive;
            }

            auto left_enabled = is_always_enabled(left.type);
            auto right_enabled = is_always_enabled(right.type);

            if (left_enabled != right_enabled)
            {
                return left_enabled;
            }

            if (left.relative_version != right.relative_version)
            {
                return left.relative_version < right.relative_version;
            }

            return left_pair.first < right_pair.first;
        });

        std::for_each_n(result.begin(), count, [](auto && pair)
        {
            pair.second.fastabi = true;
        });

        return result;
    }

    static bool implements_interface(TypeDef const& type, std::string_view const& name)
    {
        for (auto&& impl : type.InterfaceImpl())
        {
            const auto iface = impl.Interface();
            if (iface.type() != TypeDefOrRef::TypeSpec && type_name(iface) == name)
            {
                return true;
            }
        }

        if (auto base = get_base_class(type))
        {
            return implements_interface(base, name);
        }
        else
        {
            return false;
        }
    }

    bool has_fastabi_tearoffs(writer& w, TypeDef const& type)
    {
        for (auto&& [name, info] : get_interfaces(w, type))
        {
            if (info.is_default)
            {
                continue;
            }

            return info.fastabi;
        }

        return false;
    }

    std::size_t get_fastabi_size(writer& w, TypeDef const& type)
    {
        if (!has_fastabi(type))
        {
            return 0;
        }

        auto result = 6 + get_bases(type).size();

        for (auto&& [name, info] : get_interfaces(w, type))
        {
            if (!info.fastabi)
            {
                break;
            }

            result += size(info.type.MethodList());
        }

        return result;
    }

    auto get_fastabi_size(writer& w, std::vector<TypeDef> const& classes)
    {
        std::size_t result{};

        for (auto&& type : classes)
        {
            result = (std::max)(result, get_fastabi_size(w, type));
        }

        return result;
    }

    struct factory_info
    {
        TypeDef type;
        bool activatable{};
        bool statics{};
        bool composable{};
        bool visible{};
    };

    static auto get_factories(writer& w, TypeDef const& type)
    {
        auto get_system_type = [&](auto&& signature) -> TypeDef
        {
            for (auto&& arg : signature.FixedArgs())
            {
                if (auto type_param = std::get_if<ElemSig::SystemType>(&std::get<ElemSig>(arg.value).value))
                {
                    return type.get_cache().find_required(type_param->name);
                }
            }

            return {};
        };

        std::map<std::string, factory_info> result;

        for (auto&& attribute : type.CustomAttribute())
        {
            auto attribute_name = attribute.TypeNamespaceAndName();

            if (attribute_name.first != "Windows.Foundation.Metadata")
            {
                continue;
            }

            auto signature = attribute.Value();
            factory_info info;

            if (attribute_name.second == "ActivatableAttribute")
            {
                info.type = get_system_type(signature);
                info.activatable = true;
            }
            else if (attribute_name.second == "StaticAttribute")
            {
                info.type = get_system_type(signature);
                info.statics = true;
            }
            else if (attribute_name.second == "ComposableAttribute")
            {
                info.type = get_system_type(signature);
                info.composable = true;

                for (auto&& arg : signature.FixedArgs())
                {
                    if (auto visibility = std::get_if<ElemSig::EnumValue>(&std::get<ElemSig>(arg.value).value))
                    {
                        info.visible = std::get<std::int32_t>(visibility->value) == 2;
                        break;
                    }
                }
            }
            else
            {
                continue;
            }

            std::string name;

            if (info.type)
            {
                name = w.write_temp("%", info.type);
            }

            result[name] = std::move(info);
        }

        return result;
    }

    enum class param_category
    {
        generic_type,
        object_type,
        string_type,
        enum_type,
        struct_type,
        array_type,
        fundamental_type,
    };

    inline param_category get_category(TypeSig const& signature, TypeDef* signature_type = nullptr)
    {
        if (signature.is_szarray())
        {
            return param_category::array_type;
        }

        param_category result{};

        call(signature.Type(),
            [&](ElementType type)
            {
                if (type == ElementType::String)
                {
                    result = param_category::string_type;
                }
                else if (type == ElementType::Object)
                {
                    result = param_category::object_type;
                }
                else
                {
                    result = param_category::fundamental_type;
                }
            },
            [&](coded_index<TypeDefOrRef> const& type)
            {
                TypeDef type_def;

                if (type.type() == TypeDefOrRef::TypeDef)
                {
                    type_def = type.TypeDef();
                }
                else
                {
                    auto type_ref = type.TypeRef();

                    if (type_name(type_ref) == "System.Guid")
                    {
                        result = param_category::struct_type;
                        return;
                    }

                    type_def = find_required(type_ref);
                }

                if (signature_type)
                {
                    *signature_type = type_def;
                }

                switch (get_category(type_def))
                {
                case category::interface_type:
                case category::class_type:
                case category::delegate_type:
                    result = param_category::object_type;
                    return;
                case category::struct_type:
                    result = param_category::struct_type;
                    return;
                case category::enum_type:
                    result = param_category::enum_type;
                    return;
                }
            },
            [&](GenericTypeInstSig const&)
            {
                result = param_category::object_type;
            },
            [&](auto&&)
            {
                result = param_category::generic_type;
            });

        return result;
    }

    static bool is_object(TypeSig const& signature)
    {
        bool object{};

        call(signature.Type(),
            [&](ElementType type)
        {
            if (type == ElementType::Object)
            {
                object = true;
            }
        },
            [](auto&&) {});

        return object;
    }

    static auto get_delegate_method(TypeDef const& type)
    {
        auto methods = type.MethodList();

        auto method = std::find_if(begin(methods), end(methods), [](auto&& method)
        {
            return method.Name() == "Invoke";
        });

        if (method == end(methods))
        {
            throw_invalid("Delegate's Invoke method not found");
        }

        return method;
    }

    static std::string get_field_abi(writer& w, Field const& field)
    {
        auto signature = field.Signature();
        auto const& type = signature.Type();
        std::string name = w.write_temp("%", type);

        if (starts_with(name, "struct "))
        {
            auto ref = std::get<coded_index<TypeDefOrRef>>(type.Type());

            name = "struct{";

            for (auto&& nested : find_required(ref).FieldList())
            {
                name += " " + get_field_abi(w, nested) + " ";
                name += nested.Name();
                name += ";";
            }

            name += " }";
        }

        return name;
    }

    static std::string get_component_filename(TypeDef const& type)
    {
        std::string result{ type.TypeNamespace() };
        result += '.';
        result += type.TypeName();

        if (!settings.component_name.empty() && starts_with(result, settings.component_name))
        {
            result = result.substr(settings.component_name.size());

            if (starts_with(result, "."))
            {
                result.erase(result.begin());
            }
        }

        return result;
    }

    static std::string get_generated_component_filename(TypeDef const& type)
    {
        auto result = get_component_filename(type);

        if (!settings.component_prefix)
        {
            std::replace(result.begin(), result.end(), '.', '/');
        }

        return result;
    }

    static bool has_factory_members(writer& w, TypeDef const& type)
    {
        for (auto&&[factory_name, factory] : get_factories(w, type))
        {
            if (!factory.type || !empty(factory.type.MethodList()))
            {
                return true;
            }
        }

        return false;
    }

    static bool is_composable(writer& w, TypeDef const& type)
    {
        for (auto&&[factory_name, factory] : get_factories(w, type))
        {
            if (factory.composable)
            {
                return true;
            }
        }

        return false;
    }

    static bool has_composable_constructors(writer& w, TypeDef const& type)
    {
        for (auto&&[interface_name, factory] : get_factories(w, type))
        {
            if (factory.composable && !empty(factory.type.MethodList()))
            {
                return true;
            }
        }

        return false;
    }

    static bool has_projected_types(cache::namespace_members const& members)
    {
        return
            !members.interfaces.empty() ||
            !members.classes.empty() ||
            !members.enums.empty() ||
            !members.structs.empty() ||
            !members.delegates.empty();
    }

    static bool can_produce(TypeDef const& type, cache const& c)
    {
        auto attribute = get_attribute(type, "Windows.Foundation.Metadata", "ExclusiveToAttribute");

        if (!attribute)
        {
            return true;
        }

        auto interface_name = type_name(type);
        auto class_name = get_attribute_value<ElemSig::SystemType>(attribute, 0).name;
        auto class_type = c.find_required(class_name);

        for (auto&& impl : class_type.InterfaceImpl())
        {
            if (has_attribute(impl, "Windows.Foundation.Metadata", "OverridableAttribute"))
            {
                if (interface_name == type_name(impl.Interface()))
                {
                    return true;
                }
            }
        }

        if (!settings.component)
        {
            return false;
        }

        return settings.component_filter.includes(class_name);
    }

    struct generic_inst_info
    {
        guid_value guid;
    };

    // ---- Recursive collection of concrete generic instantiations ----
    // Walks InterfaceImpl chains and method signatures, carrying concrete TypeSig args to resolve GenericTypeIndex.

    static void collect_generic_inst_recursive(
        writer& w,
        GenericTypeInstSig const& type,
        type_arg_stack const& outer_resolve,
        std::map<std::string, generic_inst_info>& instantiations);

    // Helper: if a TypeSig contains a GenericTypeInstSig (directly or via TypeSpec), collect it.
    static void collect_from_type_sig(
        writer& w,
        TypeSig const& sig,
        type_arg_stack const& resolve,
        std::map<std::string, generic_inst_info>& instantiations)
    {
        call(sig.Type(),
            [](ElementType) {},
            [&](GenericTypeIndex idx)
            {
                // Resolve and recurse if the resolved type is itself a generic instantiation
                if (!resolve.empty() && idx.index < resolve.back().size())
                {
                    type_arg_stack parent_resolve(resolve.begin(), resolve.end() - 1);
                    collect_from_type_sig(w, resolve.back()[idx.index], parent_resolve, instantiations);
                }
            },
            [](GenericMethodTypeIndex) {},
            [&](coded_index<TypeDefOrRef> const& t)
            {
                if (t.type() == TypeDefOrRef::TypeSpec)
                {
                    collect_generic_inst_recursive(w, t.TypeSpec().Signature().GenericTypeInst(), resolve, instantiations);
                }
            },
            [&](GenericTypeInstSig const& t)
            {
                collect_generic_inst_recursive(w, t, resolve, instantiations);
            });
    }

    static void collect_generic_inst_recursive(
        writer& w,
        GenericTypeInstSig const& type,
        type_arg_stack const& outer_resolve,
        std::map<std::string, generic_inst_info>& instantiations)
    {
        // Build the resolution context for this instantiation:
        // The args of 'type' may themselves contain GenericTypeIndex references
        // that need resolving through outer_resolve.
        // Collect the concrete TypeSig args after resolution.
        std::vector<TypeSig> concrete_args;
        for (auto&& arg : type.GenericArgs())
        {
            if (auto* idx = std::get_if<GenericTypeIndex>(&arg.Type()))
            {
                // Resolve through the outer stack
                if (outer_resolve.empty() || idx->index >= outer_resolve.back().size())
                {
                    return; // Can't resolve — open generic, skip
                }
                concrete_args.push_back(outer_resolve.back()[idx->index]);
            }
            else
            {
                concrete_args.push_back(arg);
            }
        }

        // Use cpp_name as the dedup key. Only do expensive work if this is a new entry.
        auto cpp_name = w.write_temp("%", type);
        auto [it, inserted] = instantiations.try_emplace(std::move(cpp_name));
        if (!inserted)
        {
            return;
        }

        it->second.guid = compute_guid_from_signature(signature_builder::get_signature(type, outer_resolve));

        // Recurse into generic args that are themselves generic instantiations
        for (auto&& arg : concrete_args)
        {
            if (auto* spec = std::get_if<coded_index<TypeDefOrRef>>(&arg.Type()))
            {
                if (spec->type() == TypeDefOrRef::TypeSpec)
                {
                    collect_generic_inst_recursive(w, spec->TypeSpec().Signature().GenericTypeInst(), outer_resolve, instantiations);
                }
            }
            else if (auto* inst = std::get_if<GenericTypeInstSig>(&arg.Type()))
            {
                collect_generic_inst_recursive(w, *inst, outer_resolve, instantiations);
            }
        }

        // Build a resolution stack with our concrete args appended
        type_arg_stack resolve = outer_resolve;
        resolve.push_back(concrete_args);

        // Push the writer's generic_param_stack so write_temp resolves GenericTypeIndex in nested calls
        auto writer_guard = w.push_generic_params(type);

        // Recurse into the generic type's required interfaces (e.g., IMap : IIterable, etc.)
        auto base_type = find_required(type.GenericType());

        for (auto&& impl : base_type.InterfaceImpl())
        {
            auto iface = impl.Interface();
            if (iface.type() == TypeDefOrRef::TypeSpec)
            {
                // This TypeSpec may have GenericTypeIndex references to base_type's params.
                // 'resolve' has our concrete args at the back, so signature_builder can resolve them.
                collect_generic_inst_recursive(w, iface.TypeSpec().Signature().GenericTypeInst(), resolve, instantiations);
            }
        }

        // Walk method signatures to find generic types in return types and parameters.
        // E.g., IIterable<T>.First() returns IIterator<T>, so IIterable<IKeyValuePair<K,V>>
        // produces IIterator<IKeyValuePair<K,V>> which needs name_v/guid_v.
        for (auto&& method : base_type.MethodList())
        {
            auto sig = method.Signature();
            if (sig.ReturnType())
            {
                collect_from_type_sig(w, sig.ReturnType().Type(), resolve, instantiations);
            }
            for (auto&& param : sig.Params())
            {
                collect_from_type_sig(w, param.Type(), resolve, instantiations);
            }
        }
    }

    // Entry point: collect all concrete generic instantiations from a namespace's members.
    static void collect_generic_instantiations(
        writer& w,
        cache::namespace_members const& members,
        std::map<std::string, generic_inst_info>& instantiations)
    {
        auto collect_from_type = [&](TypeDef const& type)
        {
            for (auto&& impl : type.InterfaceImpl())
            {
                auto iface = impl.Interface();
                if (iface.type() == TypeDefOrRef::TypeSpec)
                {
                    collect_generic_inst_recursive(w, iface.TypeSpec().Signature().GenericTypeInst(), {}, instantiations);
                }
            }

            // Also walk the type's own methods for concrete generic return/param types.
            for (auto&& method : type.MethodList())
            {
                auto sig = method.Signature();
                if (sig.ReturnType())
                {
                    collect_from_type_sig(w, sig.ReturnType().Type(), {}, instantiations);
                }
                for (auto&& param : sig.Params())
                {
                    collect_from_type_sig(w, param.Type(), {}, instantiations);
                }
            }
        };

        for (auto&& type : members.classes)
        {
            collect_from_type(type);
            for (auto&& base : get_bases(type))
            {
                collect_from_type(base);
            }
        }

        for (auto&& type : members.interfaces)
        {
            if (empty(type.GenericParam()))
            {
                collect_from_type(type);
            }
        }
    }

    // Add well-known IReference<T> and IReferenceArray<T> instantiations for standard primitive
    // and Windows.Foundation struct types. These are emitted into Windows.Foundation.0.h so that
    // consumers who only include Windows.Foundation.h (e.g. for boxing) still get precomputed GUIDs
    // without requiring a header from a namespace that happens to use IReference<int32_t> etc.
    //
    // Uses the same code path as metadata-discovered instantiations by constructing
    // GenericTypeInstSig objects and feeding them through collect_generic_inst_recursive.
    // This ensures cpp_name, guard names, and signatures are always consistent.
    static void add_well_known_ireference_instantiations(
        writer& w,
        cache::namespace_members const& members,
        std::map<std::string, generic_inst_info>& instantiations)
    {
        auto find_type = [&](std::string_view name) -> TypeDef
        {
            auto it = members.types.find(name);
            return it != members.types.end() ? it->second : TypeDef{};
        };

        auto iref = find_type("IReference`1");
        auto iref_arr = find_type("IReferenceArray`1");
        if (!iref || !iref_arr) return;

        // Find the System.Guid TypeRef via IPropertyValue.GetGuid's return type.
        // There is no TypeDef for System.Guid, only scattered TypeRefs.
        // IPropertyValue is in Windows.Foundation, so it's available in members.
        // The GetGuid method is at a stable ABI vtable position (index 14, 0-based
        // within MethodList), but we fall back to a name search if that doesn't match.
        coded_index<TypeDefOrRef> guid_type_ref{};
        auto ipv = find_type("IPropertyValue");
        if (ipv)
        {
            // Find the GetGuid method — try index 14 first (stable ABI vtable position),
            // then fall back to linear search.
            auto methods = ipv.MethodList();
            MethodDef get_guid_method{};

            if (size(methods) > 14 && methods.first[14].Name() == "GetGuid")
            {
                get_guid_method = methods.first[14];
            }
            else
            {
                for (auto&& m : methods)
                {
                    if (m.Name() == "GetGuid")
                    {
                        get_guid_method = m;
                        break;
                    }
                }
            }

            if (get_guid_method)
            {
                auto method_sig = get_guid_method.Signature();
                auto const& ret_type = method_sig.ReturnType().Type().Type();
                if (std::holds_alternative<coded_index<TypeDefOrRef>>(ret_type))
                {
                    guid_type_ref = std::get<coded_index<TypeDefOrRef>>(ret_type);
                }
            }
        }

        // Collect TypeSig args for all well-known type arguments.
        // Primitives use ElementType directly; WinRT structs use their TypeDef;
        // Guid uses the TypeRef found above; Object uses ElementType::Object.
        std::vector<TypeSig> type_args;
        type_args.reserve(20);

        // Fundamental types
        type_args.emplace_back(ElementType::U1);
        type_args.emplace_back(ElementType::I2);
        type_args.emplace_back(ElementType::U2);
        type_args.emplace_back(ElementType::I4);
        type_args.emplace_back(ElementType::U4);
        type_args.emplace_back(ElementType::I8);
        type_args.emplace_back(ElementType::U8);
        type_args.emplace_back(ElementType::R4);
        type_args.emplace_back(ElementType::R8);
        type_args.emplace_back(ElementType::Char);
        type_args.emplace_back(ElementType::Boolean);
        type_args.emplace_back(ElementType::String);

        // Guid (only if we found the TypeRef)
        if (guid_type_ref)
        {
            type_args.emplace_back(guid_type_ref);
        }

        // Windows.Foundation struct types
        static constexpr std::string_view struct_names[] = { "DateTime", "TimeSpan", "Point", "Size", "Rect" };
        for (auto name : struct_names)
        {
            auto td = find_type(name);
            if (td)
            {
                type_args.emplace_back(td.coded_index<TypeDefOrRef>());
            }
        }

        auto iref_coded = iref.coded_index<TypeDefOrRef>();
        auto iref_arr_coded = iref_arr.coded_index<TypeDefOrRef>();

        for (auto const& type_arg : type_args)
        {
            // IReference<T>
            auto ireference_inst = GenericTypeInstSig{ iref_coded, std::vector<TypeSig>{ type_arg } };
            collect_generic_inst_recursive(w, ireference_inst, {}, instantiations);

            // IReferenceArray<T>
            auto ireference_array_inst = GenericTypeInstSig{ iref_arr_coded, std::vector<TypeSig>{ type_arg } };
            collect_generic_inst_recursive(w, ireference_array_inst, {}, instantiations);
        }

        // IReferenceArray<Object> is valid (for passing arrays of inspectable objects),
        // but IReference<Object> is not (IReference boxes value types; Object is a
        // reference type). So Object is not in the shared type_args list above.
        auto object_arg = TypeSig{ ElementType::Object };
        auto ireference_array_object_inst = GenericTypeInstSig{ iref_arr_coded, std::vector<TypeSig>{ object_arg } };
        collect_generic_inst_recursive(w, ireference_array_object_inst, {}, instantiations);
    }
}
