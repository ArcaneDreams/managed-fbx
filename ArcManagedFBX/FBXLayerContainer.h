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
		FBXLayerContainer();
		FBXLayerContainer(FbxLayerContainer* instance);
		virtual ~FBXLayerContainer();
		!FBXLayerContainer();

		int32 GetLayerCount();

		int32 GetLayerCount(LayerType type, bool uvCount);

		FBXLayer^ GetLayer(int32 index);

		int32 CreateLayer();

		void ClearLayers();

		FBXLayer^ GetLayer(int32 index,LayerType type, bool isUV);
	private:
		ARC_CHILD_CAST(NativeObject,FbxLayerContainer,FBXLayerContainer);
	
	};
}