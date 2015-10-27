#pragma once
#include "FBXNodeAttribute.h"
#include "FBXTexture.h"


using namespace System;

using namespace ArcManagedFBX;
using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	// Rerepsents the light instance
	public ref class FBXLight : public FBXNodeAttribute, public IDisposable
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXLight)

		void SetShadowTexture(FBXTexture^ textureInstance);

	private:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXLight,FbxLight)
	};
}