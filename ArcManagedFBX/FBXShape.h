#pragma once
#ifndef FBXShape_h__
#define FBXShape_h__
#include "FBXGeometry.h"

namespace ArcManagedFBX
{
	// The fbx shape representation that we are to use 
	public ref class FBXShape : public FBXGeometryBase
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXShape)

		array<int>^ GetControlPointIndices();

		int GetControlPointIndicesCount();

		FBXGeometry^ GetBaseGeometry();

		void SetControlPointIndicesCount(int32 count);

		void AddControlPointIndex(int32 index);

		void Reset();
	private:

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXShape,FbxShape)
		ARC_CHILD_CAST(NativeObject,FbxShape,FBXShape)
	};
}
#endif // FBXShape_h__