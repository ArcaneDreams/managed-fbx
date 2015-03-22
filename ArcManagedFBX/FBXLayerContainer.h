#pragma once

#include "FBXAttribute.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public ref class FBXLayerContainer : public FBXAttribute
	{
	public:
		FBXLayerContainer();
		FBXLayerContainer(FbxLayerContainer* instance);
		virtual ~FBXLayerContainer();
		!FBXLayerContainer();

	private:
		ARC_CHILD_CAST(NativeObject,FbxLayerContainer,FBXLayerContainer);
	
	};
}