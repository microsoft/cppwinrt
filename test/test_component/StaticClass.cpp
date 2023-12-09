#include "pch.h"
#include "StaticClass.g.h"

namespace winrt::test_component::factory_implementation
{
	struct StaticClass : StaticClassT<StaticClass, StaticClass, static_lifetime>
	{
		void Method()
		{
			throw hresult_not_implemented{};
		}
	};
}

#include "StaticClass.g.cpp"