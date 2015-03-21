#pragma once
#include "FBXAttribute.h"

using namespace System;

namespace ArcManagedFBX
{
	public ref class FBXLight : public FBXAttribute, public IDisposable
	{
	public:
		FBXLight();
		virtual ~FBXLight();

	private:
		const FbxLight* GetLight();
	};
}