#pragma once
#include "FBXNodeAttribute.h"
#include "FBXTexture.h"

using namespace System;

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	// Represents the light instance
	public ref class FBXLight : public FBXNodeAttribute, public IDisposable
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXLight)
		ARC_FBXSDK_FBXOBJECT_IMPLEMENT(FBXLight,FBXNodeAttribute,FbxLight)

		void SetShadowTexture(FBXTexture^ textureInstance);
		FBXTexture^ GetShadowTexture();

	private:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXLight,FbxLight)
		ARC_CHILD_CAST(NativeObject,FbxLight,FBXLight)
	};
}