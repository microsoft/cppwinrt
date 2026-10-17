#include "pch.h"
#include "winrt/test_component_fast.Composition.h"

using namespace winrt::test_component_fast::Composition;

// All, yes all, of the QIs in the test below are avoided by the fastabi.
// That's 8 calls to QueryInterface and 8 calls to Release.

TEST_CASE("Composition")
{
    winrt::impl::get_diagnostics_info().detach();

    // IActivationFactory::ActivateInstance is called for the default constructor.
    // Under the slowabi, the ActivateInstance method returns IInspectable so each
    // caller must QI for the default interface.
    Compositor compositor;

    SpriteVisual v1 = compositor.CreateSpriteVisual();
    SpriteVisual v2 = compositor.CreateSpriteVisual();

    // Under the slowabi, this needs a QI for ICompositionObject.
    REQUIRE(v1.Compositor() == compositor);

    // Under the slowabi, this needs a QI for ICompositionObject2.
    v1.StartAnimationGroup();

    // Under the slowabi, this needs a QI for IVisual for each call.
    v1.Offset(123);
    REQUIRE(v1.Offset() == 123);

    // Under the slowabi, this needs a QI for IVisual2 to call ParentForTransform
    // *and* the v2 parameter needs a QI for IVisual.
    v1.ParentForTransform(v2);

    // Since Brush is on the default interface of SpriteVisual there's no QI here
    // for both slowabi and fastabi.
    v1.Brush();

    // Under the slowabi, this needs a QI for ISpriteVisual2.
    v1.Shadow();

    // Non exclusive interface requires QI as usual.
    v1.Close();

    auto info = winrt::impl::get_diagnostics_info().get();

    // The 8 QIs that the fastabi avoids (see test_fast), plus the agility check of the cached activation factory and
    // the non exclusive interface.
    REQUIRE(info.queries.size() == 9);
    REQUIRE(info.queries[L"IAgileObject"] == 1);
    REQUIRE(info.queries[winrt::name_of<Compositor>()] == 1);
    REQUIRE(info.queries[winrt::name_of<ICompositionObject>()] == 1);
    REQUIRE(info.queries[winrt::name_of<ICompositionObject2>()] == 1);
    REQUIRE(info.queries[winrt::name_of<IVisual>()] == 2);
    REQUIRE(info.queries[winrt::name_of<IVisual2>()] == 1);
    REQUIRE(info.queries[winrt::name_of<Visual>()] == 1);
    REQUIRE(info.queries[winrt::name_of<ISpriteVisual2>()] == 1);
    REQUIRE(info.queries[winrt::name_of<winrt::Windows::Foundation::IClosable>()] == 1);
}
