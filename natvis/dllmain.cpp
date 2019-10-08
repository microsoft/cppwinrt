#include "pch.h"
#include "cppwinrt_visualizer.h"

using namespace winrt;

struct cppwinrt_visualizer_factory : implements<cppwinrt_visualizer_factory, IClassFactory>
{
    HRESULT __stdcall CreateInstance(IUnknown* outer, GUID const& id, void** object) noexcept final
    {
        if (outer != nullptr)
        {
            return E_INVALIDARG;
        }

        com_ptr<IUnknown> temp = make<cppwinrt_visualizer>();
        return temp->QueryInterface(id, object);
    }

    HRESULT __stdcall LockServer(BOOL) noexcept final
    {
        return S_OK;
    }
};

extern "C" HRESULT STDAPICALLTYPE DllGetClassObject(REFCLSID rclsid, REFIID riid, void **ppv)
{
    *ppv = nullptr;
    static constexpr GUID winrtVisualizerIID{ 0x2ea3526b, 0x93a1, 0x4854,{ 0xae, 0x18, 0x90, 0x28, 0x28, 0x8f, 0x6f, 0x64 } };

    if (rclsid == winrtVisualizerIID)
    {
        try
        {
            com_ptr<IClassFactory> factory = make<cppwinrt_visualizer_factory>();
            
            return factory->QueryInterface(riid, ppv);
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    return CLASS_E_CLASSNOTAVAILABLE;
}

STDAPI DllCanUnloadNow(void)
{
    if (get_module_lock())
    {
        return S_FALSE;
    }
    return S_OK;
}
