#include "pch.h"
#include "Composition.SpriteVisual.h"
#include "Composition.SpriteVisual.g.cpp"

namespace winrt::test_component_fast::Composition::implementation
{
    SpriteVisual::SpriteVisual(Composition::Compositor const& compositor) :
        base_type(compositor)
    {

    }
    void SpriteVisual::Brush()
    {
    }
    void SpriteVisual::Shadow()
    {
    }
}
