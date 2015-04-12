#pragma once
#include "FBXLayer.h"
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

		int32 GetLayerCount();

		// Retrieve the layer count
		int32 GetLayerCount(LayerType type, bool uvCount);

		FBXLayer^ GetLayer(int32 index);

		int32 CreateLayer();

		void ClearLayers();

		FBXLayer^ GetLayer(int32 index,LayerType type, bool isUv);

	private:
		ARC_CHILD_CAST(NativeObject,FbxLayerContainer,FBXLayerContainer);
	
	};
}