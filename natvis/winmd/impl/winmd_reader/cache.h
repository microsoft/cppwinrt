
namespace winmd::reader
{
    struct cache
    {
        cache() = default;
        cache(cache const&) = delete;
        cache& operator=(cache const&) = delete;

        template<typename C, typename T = typename C::value_type, typename TypeFilter>
        explicit cache(C const& files, TypeFilter filter)
        {
            for (auto&& file : files)
            {
                auto& db = m_databases.emplace_back(file, this);

                for (auto&& type : db.TypeDef)
                {
                    if (type.Flags().value == 0 || is_nested(type) || !filter(type))
                    {
                        continue;
                    }

                    auto& ns = m_namespaces[type.TypeNamespace()];
                    ns.types.try_emplace(type.TypeName(), type);
                }

                for (auto&& row : db.NestedClass)
                {
                    m_nested_types[row.EnclosingType()].push_back(row.NestedType());
                }
            }

            for (auto&&[namespace_name, members] : m_namespaces)
            {
                for (auto&&[name, type] : members.types)
                {
                    add_type_to_members(type, members);
                }
            }
        }

        template<typename C, typename T = typename C::value_type>
        explicit cache(C const& files) : cache{ files, default_type_filter{} }
        {
        }

        template <typename TypeFilter>
        explicit cache(std::string const& file, TypeFilter filter) : cache{ std::vector<std::string>{ file }, filter }
        {
        }

        explicit cache(std::string const& file) : cache{ std::vector<std::string>{ file }, default_type_filter{} }
        {
        }

        struct default_type_filter
        {
            bool operator()(TypeDef const&) const noexcept
            {
                return true;
            }
        };

        TypeDef find(std::string_view const& type_namespace, std::string_view const& type_name) const noexcept
        {
            auto ns = m_namespaces.find(type_namespace);

            if (ns == m_namespaces.end())
            {
                return {};
            }

            auto type = ns->second.types.find(type_name);

            if (type == ns->second.types.end())
            {
                return {};
            }

            return type->second;
        }

        TypeDef find(std::string_view const& type_string) const
        {
            auto pos = type_string.rfind('.');

            if (pos == std::string_view::npos)
            {
                impl::throw_invalid("Type '", type_string, "' is missing a namespace qualifier");
            }

            return find(type_string.substr(0, pos), type_string.substr(pos + 1, type_string.size()));
        }

        TypeDef find_required(std::string_view const& type_namespace, std::string_view const& type_name) const
        {
            auto definition = find(type_namespace, type_name);
            
            if (!definition)
            {
                impl::throw_invalid("Type '", type_namespace, ".", type_name, "' could not be found");
            }

            return definition;
        }

        TypeDef find_required(std::string_view const& type_string) const
        {
            auto pos = type_string.rfind('.');

            if (pos == std::string_view::npos)
            {
                impl::throw_invalid("Type '", type_string, "' is missing a namespace qualifier");
            }

            return find_required(type_string.substr(0, pos), type_string.substr(pos + 1, type_string.size()));
        }

        auto const& databases() const noexcept
        {
            return m_databases;
        }

        auto const& namespaces() const noexcept
        {
            return m_namespaces;
        }

        void remove_type(std::string_view const& ns, std::string_view const& name)
        {
            auto m = m_namespaces.find(ns);
            if (m == m_namespaces.end())
            {
                return;
            }
            auto& members = m->second;

            auto remove = [&](auto&& collection, auto&& name)
            {
                auto pos = std::find_if(collection.begin(), collection.end(), [&](auto&& type)
                    {
                        return type.TypeName() == name;
                    });

                if (pos != collection.end())
                {
                    collection.erase(pos);
                }
            };

            remove(members.interfaces, name);
            remove(members.classes, name);
            remove(members.enums, name);
            remove(members.structs, name);
            remove(members.delegates, name);
        }

        // This won't invalidate any existing database or row_base (e.g. TypeDef) instances
        // However, it may invalidate iterators and references to namespace_members, because those are stored in std::vector
        template <typename TypeFilter>
        void add_database(std::string_view const& file, TypeFilter filter)
        {
            auto& db = m_databases.emplace_back(file, this);
            for (auto&& type : db.TypeDef)
            {
                if (type.Flags().value == 0 || is_nested(type) || !filter(type))
                {
                    continue;
                }

                auto& ns = m_namespaces[type.TypeNamespace()];
                auto[iter, inserted] = ns.types.try_emplace(type.TypeName(), type);
                if (inserted)
                {
                    add_type_to_members(type, ns);
                }
            }

            for (auto&& row : db.NestedClass)
            {
                m_nested_types[row.EnclosingType()].push_back(row.NestedType());
            }
        }

        void add_database(std::string_view const& file)
        {
            add_database(file, default_type_filter{});
        }

        std::vector<TypeDef> const& nested_types(TypeDef const& enclosing_type) const
        {
            auto it = m_nested_types.find(enclosing_type);
            if (it != m_nested_types.end())
            {
                return it->second;
            }
            else
            {
                static const std::vector<TypeDef> empty;
                return empty;
            }
        }

        struct namespace_members
        {
            std::map<std::string_view, TypeDef> types;
            std::vector<TypeDef> interfaces;
            std::vector<TypeDef> classes;
            std::vector<TypeDef> enums;
            std::vector<TypeDef> structs;
            std::vector<TypeDef> delegates;
            std::vector<TypeDef> attributes;
            std::vector<TypeDef> contracts;
        };

        using namespace_type = std::pair<std::string_view const, namespace_members> const&;

    private:

        void add_type_to_members(TypeDef const& type, namespace_members& members)
        {
            switch (get_category(type))
            {
            case category::interface_type:
                members.interfaces.push_back(type);
                return;
            case category::class_type:
                if (extends_type(type, "System"sv, "Attribute"sv))
                {
                    members.attributes.push_back(type);
                    return;
                }
                members.classes.push_back(type);
                return;
            case category::enum_type:
                members.enums.push_back(type);
                return;
            case category::struct_type:
                if (get_attribute(type, "Windows.Foundation.Metadata"sv, "ApiContractAttribute"sv))
                {
                    members.contracts.push_back(type);
                    return;
                }
                members.structs.push_back(type);
                return;
            case category::delegate_type:
                members.delegates.push_back(type);
                return;
            }
        }

        std::list<database> m_databases;
        std::map<std::string_view, namespace_members> m_namespaces;
        std::map<TypeDef, std::vector<TypeDef>> m_nested_types;
    };
}