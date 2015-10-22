#pragma once

#include "FBXObject.h"

namespace ArcManagedFBX
{
	// The FBX collection within the SDK
	public ref class FBXCollection : public FBXObject
	{
	public:
		ARC_FBX_FBXOBJECT_IMPLEMENT(FBXCollection,FBXObject)
		FBXCollection();
		virtual ~FBXCollection();
		!FBXCollection();
	private:
		ARC_CHILD_CAST(NativeObject,FbxCollection,FBXCollection)

	internal:
		FBXCollection(FbxCollection* instance);
	};
}