#include "Stdafx.h"
#include "FBXCollection.h"

using namespace ArcManagedFBX;

FBXCollection::FBXCollection()
{

}

FBXCollection::~FBXCollection()
{

}

FBXCollection::!FBXCollection()
{

}

FBXCollection::FBXCollection(FbxCollection* instance)
{
	this->m_NativeObject = instance;
}