#pragma once

#include "FBXObject.h"

using namespace ArcManagedFBX::Utility;

namespace ArcManagedFBX
{
	// The FBX collection within the SDK
	public ref class FBXCollection : public FBXObject
	{
	public:
		ARC_FBXSDK_FBXOBJECT_IMPLEMENT(FBXCollection,FBXObject,FbxCollection)
		FBXCollection();
		virtual ~FBXCollection();
		!FBXCollection();

	private:
		ARC_CHILD_CAST(NativeObject,FbxCollection,FBXCollection)
	
	internal:
		FBXCollection(FbxCollection* instance);
	};
}