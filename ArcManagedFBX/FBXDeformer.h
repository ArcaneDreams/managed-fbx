#pragma once

#include "FBXObject.h"

using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	// The managed representation of the deformer class.
	public ref class FBXDeformer : public FBXObject
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXDeformer)

		virtual DeformerType GetDeformerType();

		ARC_CHILD_CAST(NativeObject,FbxDeformer,FBXDeformer)
	private:

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXDeformer,FbxDeformer)

	};
}