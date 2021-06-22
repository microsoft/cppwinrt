#include "pch.h"

TEST_CASE("hstring")
{
	winrt::hstring text = L"C++/WinRT rocks!";
	std::wstring_view textView = text;
	REQUIRE(!text.starts_with(L"C++/CX"));
	REQUIRE(!textView.starts_with(L"C++/CX"));
	REQUIRE(text.starts_with(L"C++/WinRT") == textView.starts_with(L"C++/WinRT"));
	REQUIRE(text.ends_with(L"rocks!"));
	REQUIRE(textView.ends_with(L"rocks!"));
	REQUIRE(text.ends_with(L"rocks!") == textView.ends_with(L"rocks!"));
}