
namespace winmd::reader
{
    struct filter
    {
        filter() noexcept = default;

        template <typename T>
        filter(T const& includes, T const& excludes)
        {
            for (auto&& include : includes)
            {
                m_rules.push_back({ include, true });
            }

            for (auto&& exclude : excludes)
            {
                m_rules.push_back({ exclude, false });
            }

            std::sort(m_rules.begin(), m_rules.end(), [](auto const& lhs, auto const& rhs)
            {
                return std::pair{ lhs.first.size(), !lhs.second } > std::pair{ rhs.first.size(), !rhs.second };
            });
        }

        bool includes(TypeDef const& type) const
        {
            return includes(type.TypeNamespace(), type.TypeName());
        }

        bool includes(std::string_view const& type) const
        {
            auto position = type.find_last_of('.');
            return includes(type.substr(0, position), type.substr(position + 1));
        }

        bool includes(std::vector<TypeDef> const& types) const
        {
            if (m_rules.empty())
            {
                return true;
            }

            for (auto&& type : types)
            {
                if (includes(type.TypeNamespace(), type.TypeName()))
                {
                    return true;
                }
            }

            return false;
        }

        bool includes(cache::namespace_members const& members) const
        {
            if (m_rules.empty())
            {
                return true;
            }

            for (auto&& type : members.types)
            {
                if (includes(type.second.TypeNamespace(), type.second.TypeName()))
                {
                    return true;
                }
            }

            return false;
        }

        template <auto F>
        auto bind_each(std::vector<TypeDef> const& types) const
        {
            return [&](auto& writer)
            {
                for (auto&& type : types)
                {
                    if (includes(type))
                    {
                        F(writer, type);
                    }
                }
            };
        }

        bool empty() const noexcept
        {
            return m_rules.empty();
        }

    private:

        bool includes(std::string_view const& type_namespace, std::string_view const& type_name) const noexcept
        {
            if (m_rules.empty())
            {
                return true;
            }

            for (auto&& rule : m_rules)
            {
                if (match(type_namespace, type_name, rule.first))
                {
                    return rule.second;
                }
            }

            return false;
        }

        static bool match(std::string_view const& type_namespace, std::string_view const& type_name, std::string_view const& match) noexcept
        {
            if (match.size() <= type_namespace.size())
            {
                return impl::starts_with(type_namespace, match);
            }

            if (!impl::starts_with(match, type_namespace))
            {
                return false;
            }

            if (match[type_namespace.size()] != '.')
            {
                return false;
            }

            return impl::starts_with(type_name, match.substr(type_namespace.size() + 1));
        }

        std::vector<std::pair<std::string, bool>> m_rules;
    };
}
