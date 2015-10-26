#pragma once
#include "FBXNodeAttribute.h"

using namespace System;

namespace ArcManagedFBX
{
	public ref class FBXLight : public FBXNodeAttribute, public IDisposable
	{
	public:
		FBXLight();
		virtual ~FBXLight();

	private:
		const FbxLight* GetLight();
	};
}