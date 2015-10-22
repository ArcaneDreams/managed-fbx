#pragma once

#include "FBXObject.h"

namespace ArcManagedFBX
{
	public ref class FBXGeometryWeightedMap : public FBXObject
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXGeometryWeightedMap)

	internal:
		ARC_CHILD_CAST(NativeObject,FbxGeometryWeightedMap,FBXGeometryWeightedMap)
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXGeometryWeightedMap,FbxGeometryWeightedMap)
	private:
	};
}