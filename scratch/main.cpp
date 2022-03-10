#include "pch.h"

using namespace winrt;
using namespace Windows::UI;
using namespace Windows::UI::Composition;

int main()
{
    Compositor compositor;
    AmbientLight light = compositor.CreateAmbientLight();

    light.Color(Colors::Red()).Intensity(0.5f);

    CompositionBrush brush = compositor.CreateColorBrush();

    SpriteVisual visual = compositor.CreateSpriteVisual();
    visual.Opacity(0.5f).IsVisible(true).Brush(brush);
}
