#include "Stdafx.h"
#include "FBXLight.h"

using namespace ArcManagedFBX;

ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(FBXLight,FBXNodeAttribute,FbxLight)

ARC_DEFAULT_CONSTRUCTORS_IMPL(FBXLight)

void ArcManagedFBX::FBXLight::SetShadowTexture(FBXTexture^ textureInstance)
{
	this->GetFBXLight()->SetShadowTexture(textureInstance->GetFBXTexture());
}

FBXTexture^ ArcManagedFBX::FBXLight::GetShadowTexture()
{
	return gcnew FBXTexture(this->GetFBXLight()->GetShadowTexture());
}

