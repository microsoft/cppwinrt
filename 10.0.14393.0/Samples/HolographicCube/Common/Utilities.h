#pragma once
namespace HolographicCube
{
    static bool inline NotEqual(const winrt::Windows::Foundation::Size lhs, const winrt::Windows::Foundation::Size rhs)
    {
        if (lhs.Height != rhs.Height)
            return false;

        if (lhs.Width != rhs.Width)
            return false;

        return true;
    }

}