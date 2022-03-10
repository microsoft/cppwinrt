#include "pch.h"

using namespace winrt;
using namespace Windows::UI;
using namespace Windows::UI::Composition;

int main()
{
    Compositor compositor;
    AmbientLight light = compositor.CreateAmbientLight();

    light.Color(Colors::Red()).Intensity(0.5f);
}
