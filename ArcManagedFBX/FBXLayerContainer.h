#pragma once
#include "FBXLayer.h"
#include "FBXNodeAttribute.h"

using namespace System;
using namespace System::Text;

namespace ArcManagedFBX
{
	public ref class FBXLayerContainer : public FBXNodeAttribute
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXLayerContainer)
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXLayerContainer,FbxLayerContainer)

		int32 GetLayerCount();

		int32 GetLayerCount(ELayerType type, bool uvCount);

		FBXLayer^ GetLayer(int32 index);

		int32 CreateLayer();

		void ClearLayers();

		FBXLayer^ GetLayer(int32 index,ELayerType type, bool isUV);
	private:
		ARC_CHILD_CAST(NativeObject,FbxLayerContainer,FBXLayerContainer);
	
	};
}