#include "pch.h"

using namespace winrt;

int main()
{
    void* classId = nullptr;
    std::wstring_view const name{ *reinterpret_cast<winrt::hstring*>(&classId) };

}
