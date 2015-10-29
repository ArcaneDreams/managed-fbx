#include "Stdafx.h"
#include "FBXAnimStack.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Layers;
using namespace ArcManagedFBX::Types;

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXAnimStack)

FBXAnimStack::FBXAnimStack(FbxAnimStack* instance)
{
	this->m_NativeObject = instance;
}