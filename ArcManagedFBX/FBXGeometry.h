#pragma once

#include "FBXStatus.h"
#include "FBXDeformer.h"
#include "FBXGeometryBase.h"

using namespace System;
using namespace System::Text;
using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	// The geometry that represents the mesh that we are working with
	public ref class FBXGeometry : public FBXGeometryBase
	{
	public:
		ARC_DEFAULT_CONSTRUCTORS(FBXGeometry)

		virtual EAttributeType GetAttributeType() override;

		int32 AddDeformer(FBXDeformer^ deformer);

		FBXDeformer^ RemoveDeformer(int32 index, FBXStatus^ status);

		int32 GetDeformerCount();

		int32 GetDeformerCount(EDeformerType type);

		int32 GetDestinationGeometryWeightedMapCount();

		void ClearShape();

		int32 GetShapeCount();

		int32 GetShapeCount(int32 blendShapeIndex, int32 blendShapeChannelIndex, FBXStatus^ status);

		void ApplyPivot();

	private:
		ARC_CHILD_CAST(NativeObject,FbxGeometry,FBXGeometry)

	internal:
		FBXGeometry(FbxGeometry* instance);
	};
}