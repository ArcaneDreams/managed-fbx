#include "Stdafx.h"
#include "FBXAnimStack.h"

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Layers;
using namespace ArcManagedFBX::Types;

FBXAnimStack::FBXAnimStack()
{

}

FBXAnimStack::~FBXAnimStack()
{

}

FBXAnimStack::!FBXAnimStack()
{

}

FBXAnimStack::FBXAnimStack(FbxAnimStack* instance)
{
	this->m_NativeObject = instance;
}