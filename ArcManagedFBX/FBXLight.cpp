#include "Stdafx.h"
#include "FBXLight.h"

using namespace ArcManagedFBX;

FBXLight::FBXLight()
{

}

FBXLight::~FBXLight()
{

}

// Return the object instance as the fbx light that we require for operations around the place.
const FbxLight* FBXLight::GetLight()
{
	return dynamic_cast<FbxLight*>(this->m_NativeObject);
}