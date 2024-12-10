#include "pch.h"
#include "CxClass.h"

using namespace TestRuntimeComponentCXLibrary;
using namespace Platform;

CxClass::CxClass(TestStaticLibrary7Class^ c)
{
    c->Test();
}
